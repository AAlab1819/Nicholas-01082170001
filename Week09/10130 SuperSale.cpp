#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    int itemPrice[1001] = {0}, itemWeight[1001] = {0};
    int person;
    int mw;
    int arr[30] = {0};
    int total=0;

    cin>>t;
    for(int i=0;i<t;i++){

        cin>>n;
        for(int j=0;j<n;j++){
            cin>>itemPrice[j]>>itemWeight[j];
        }

        for(int j=0;j<n;j++){
          for(int k=30; k>=0;k--){
                if(itemWeight[j] <= k){
                    arr[k] = max(arr[k],arr[k - itemWeight[j]] + itemPrice[j]);
                }
            }
        }

        cin>>person;
        for(int k=0;k<person;k++){
            cin>>mw;
            total +=arr[mw];
        }

        cout<<total<<endl;
    }
    return 0;
}
