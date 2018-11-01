#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, needBottle;
    long long int answer = 4e18, sum = 0;
    cin>>n>>l;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        if(arr[i]>2*arr[i-1]){
            arr[i] = 2*arr[i-1];
        }
    }

    for(int i= n-1; i>=0; i--){
        needBottle = l / (1<<i);
        sum += (long long) needBottle * arr[i];
        l -= needBottle << i;
        answer = min(answer, sum + (l>0) * arr[i]);
    }
    cout<<answer;
    return 0;
}
