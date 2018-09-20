#include <iostream>

using namespace std;

int main()
{
    int punchDrag, tailDrag, pawsDrag, momDrag, totDrag, damageDrag=0;
    cin>>punchDrag>>tailDrag>>pawsDrag>>momDrag>>totDrag;

    if (punchDrag==1 || tailDrag==1 || pawsDrag==1 || momDrag==1){
        damageDrag=totDrag;
    }else{
        for(int i=1;i<=totDrag;i++){
            if(i%punchDrag==0 || i%tailDrag==0 || i%pawsDrag==0 || i%momDrag==0) {
                damageDrag++;
            }
        }
    }
    cout<<damageDrag;
    return 0;
}
