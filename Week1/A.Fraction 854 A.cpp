#include <iostream>

using namespace std;

int main()
{
    int input;
    int up,down;

    cin>>input;

    if(input%2==0) {
        up=(input/2)-1;
        down=(input/2)+1;
        if(up%2==0) {
            up-=1;
            down+=1;
        }
    }
    else {
        up=input/2;
        down=up+1;
    }
    cout<<up<<" "<<down;
    return 0;
}
