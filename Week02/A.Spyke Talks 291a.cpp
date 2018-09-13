#include <iostream>

using namespace std;

int main()
{
    int input;
    cin>>input;
    long long int arr[input];
    int counter=0;
    for(int i=0;i<input;i++) {
        cin>>arr[i];
    }

    int temp;

    for (int i=0; i<input; i++)
    {
        for (int j=i+1; j<input; j++)
        {
            if (arr[i]>=arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<input;i++){
        if (arr[i]==0) {
            continue;
        }
        if(arr[i]==arr[i+1]){
            counter++;
            if(arr[i+1]==arr[i+2]) {
                cout<<"-1";
                return 0;

            }
        }

    }
    cout<<counter;
    return 0;
}
