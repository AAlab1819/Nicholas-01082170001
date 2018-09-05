#include <iostream>

using namespace std;

int main()
{
    long long int yelBall,greBall,blueBall;
    long long int yelCrys,blueCrys;
    long long int yelMake,blueMake;
    long long int total=0;

    cin>>yelCrys>>blueCrys;
    cin>>yelBall>>greBall>>blueBall;


    yelMake = (yelBall*2)+greBall;
    blueMake = (blueBall*3)+greBall;
    if(yelCrys<yelMake) {
        total += yelMake-yelCrys;
    }
    if(blueCrys<blueMake) {
        total+= blueMake-blueCrys;
    }

    cout<<total;

    return 0;
}
