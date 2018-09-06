#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stud, team;
    map <int, int>check;

    cin>>stud>>team;
    int arr[stud];

    int counter=0;
    do{
        cin>>arr[counter];
        check[arr[counter]]=counter+1;
        counter++;
    }while(--stud);

     if(check.size()< team){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<endl;
            for(map<int,int>::iterator it=check.begin();it!=check.end(),team>0; ++it,team--){
                cout<<it->second<<" ";
            }
        }

    return 0;
}
