#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;
    double d=0;

    cin>>n>>l;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=1;i<n;i++){
        if((arr[i]-arr[i-1]) > d){
            d = arr[i] - arr[i-1];
        }
    }

    d = d/2;
    if(arr[0]>d){
        d=arr[0];
    }

    if(l-arr[n-1] > d){
        d = l-arr[n-1];
    }

    cout<<fixed<<setprecision(10)<<d;

    return 0;
}
