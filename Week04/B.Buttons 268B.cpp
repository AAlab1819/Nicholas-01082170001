#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 1;
    int calc = 0;
    for(int i=1;i<n;i++){
        calc += temp = temp+i;
    }

    cout<<calc+1;




    return 0;
}
