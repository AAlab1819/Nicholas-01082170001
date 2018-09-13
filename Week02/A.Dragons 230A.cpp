#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sorting(int numDragon,int dragonStr[],int bonus[]){
    bool swapped=true;
    do{
        swapped=false;
        for(int i=0;i<numDragon-1;i++){
            if(dragonStr[i]>dragonStr[i+1]) {
                swap(dragonStr[i],dragonStr[i+1]);
                swap(bonus[i],bonus[i+1]);
                /*
                temp=dragonStr[i];
                dragonStr[i] = dragonStr[i+1];
                dragonStr[i+1]=temp;

                temp2=bonus[i];
                bonus[i]=bonus[i+1];
                bonus[i+1]=temp2;*/

                swapped=true;
            }
        }

    }while(swapped);
}
int main()
{
    int kiritoStr;
    int numDragon;

    cin>>kiritoStr;
    cin>>numDragon;

    int dragonStr[10000];
    int bonus[10000];
    for(int i=0;i<numDragon;i++){
        cin>>dragonStr[i];
        cin>>bonus[i];
    }

    /*for(int i=0;i<numDragon;i++){
        cout<<"dragonStr"<<i+1<<":"<<dragonStr[i]<<endl;
        cout<<"bonus"<<i+1<<":"<<bonus[i]<<endl;
    }*/

    sorting(numDragon,dragonStr,bonus);
    bool finals=true;
    for(int i=0;i<numDragon;i++){
        if(kiritoStr>dragonStr[i]){
            kiritoStr+=bonus[i];
            //cout<<kiritoStr<<endl;
            finals=true;

        }
        else {
                finals=false;
        }
    }

    if(finals){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
