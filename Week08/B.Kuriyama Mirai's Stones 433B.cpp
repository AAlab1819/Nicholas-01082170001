#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, input, type, l , r, answer;
    cin>>n;
    long long int arr1[n], arr2[n];
    for(int i=0; i<n; i++){
        cin>>input;
        arr1[i] = input;
        arr2[i] = input;
    }
    for(int i=1; i<n; i++){
        arr1[i] += arr1[i-1];
    }
    sort(arr2, arr2+n);
    for(int i=1; i<n; i++){
        arr2[i] += arr2[i-1];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>type>>l>>r;
        if(type == 1){
            if(l == 1){
                answer = arr1[r-1];
            }
            else{
                answer = arr1[r-1]-arr1[l-2];
            }
        }else{
            if(l == 1){
                answer = arr2[r-1];
            }
            else{
                answer = arr2[r-1]-arr2[l-2];
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}
