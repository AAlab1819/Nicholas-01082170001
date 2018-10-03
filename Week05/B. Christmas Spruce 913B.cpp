#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> >tree;
    int n, parent, leaf;
    cin>>n;
    tree.resize(n);
    for(int i=1; i<n; i++){
        cin>>parent;
        tree[parent-1].push_back(i);
    }
    for(int i=0; i<n; i++){
        if(tree[i].empty()){
            continue;
        }else{
            leaf=0;
            for(int j=0; j<tree[i].size(); j++){
                if(tree[tree[i][j]].empty())
                    leaf++;
            }
            if(leaf<3){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
