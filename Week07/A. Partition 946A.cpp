#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arrA[n];
    int arrB[n];
    int arrC[n];
    int totB=0,totC=0;
    for(int i=0;i<n;i++){
        cin>>arrA[i];
        if (arrA[i]>=0){
            arrB[i]= arrA[i];
            totB += arrB[i];
        }
        else{
            arrC[i]= arrA[i];
            totC +=arrC[i];
        }
    }
    cout<<totB-totC;
    return 0;
}
