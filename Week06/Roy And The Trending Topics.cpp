#include <bits/stdc++.h>
using namespace std;

struct trending{
    int id;
    int zNew;
};

void heapify(vector<trending> &myVector,int n,int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && myVector[l].id < myVector[largest].id)
        largest = l;

    if (r < n && myVector[r].id < myVector[largest].id)
        largest = r;

    if (largest != i) {
        swap(myVector[i], myVector[largest]);
        heapify(myVector, n, largest);
    }
}

void heapSort(vector<trending> &myVector,int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(myVector, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(myVector[0], myVector[i]);
        heapify(myVector, i, 0);
    }
}
int main()
{
    int testCase,topicId,oldZScore,posts,like,comment,share,newZScore;
    map<int, vector<trending> >myMap;

    cin>>testCase;

    for(int i=1;i<=testCase;i++){
        cin>> topicId >> oldZScore >> posts >> like >> comment >> share;
        posts = posts * 50;
        like = like * 5;
        comment = comment * 10;
        share = share * 20;
        newZScore = posts + like + comment + share;

        trending Trending;
        Trending.id = topicId;
        Trending.zNew = newZScore;
        myMap[newZScore - oldZScore].push_back(Trending);
    }

    map<int, vector<trending> >::iterator it;
    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        heapSort(it->second, it->second.size());
    }

    cout<<endl;
    int counter = 1;
    for (it = myMap.end(); it!= myMap.begin(); it--)
    {
        for (int i=0; i<it->second.size(); i++)
        {
            cout<<it->second[i].id<<" "<<it->second[i].zNew<<endl;
            counter++;
            if (counter > 5)
            {
                break;
            }
        }
        if (counter > 5)
        {
            break;
        }
    }

}
