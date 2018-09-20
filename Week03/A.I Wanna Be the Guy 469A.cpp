#include <iostream>

using namespace std;

int main()
{
    int level;
    cin>>level;
    int arr[level];

    for(int i=0;i<level;i++) {
        arr[i] = 1;
    }

    int xLevel;
    cin>>xLevel;
    int xLevelPass;
    for(int i=0;i<xLevel;i++) {
        cin>>xLevelPass;
        arr[xLevelPass-1]=0;
    }

    int yLevel;
    cin>>yLevel;
    int yLevelPass;
    for(int i=0;i<yLevel;i++) {
        cin>>yLevelPass;
        arr[yLevelPass-1]=0;
    }

    bool solved=true;
    for(int i=0;i<level;i++){
        if(arr[i]==1){
            solved=false;
            break;
        }
    }
    if(solved == true){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
