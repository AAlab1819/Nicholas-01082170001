#include <iostream>

using namespace std;

int main()
{
    int n, totX=0, delX=0;
    cin>>n;
    string str;

    cin>>str;
    for (int i=0;i<n;i++){
        if(str[i]=='x'){
            totX++;
        }
        else{
            totX=0;
        }
        if(totX>=3){
            delX++;
        }
    }
    cout<<delX;



    return 0;
}

