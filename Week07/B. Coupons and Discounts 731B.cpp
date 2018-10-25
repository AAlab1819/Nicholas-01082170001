#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int teams[n];
    for(int i=0; i<n; i++){
        cin>>teams[i];
    }
    bool flag=true;
    for(int i=0; i<n; i++){
        if(teams[i]%2==1){
            if(teams[i+1]==0 || i== n-1){
                flag=false;
            }
            teams[i+1]--;
        }

    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
