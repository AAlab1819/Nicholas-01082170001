#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    map<string,int>checker;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>str;
        if (checker[str] == 0){
            checker[str] = 1;
            cout << "OK" << endl;
        }else{
            cout << str << checker[str] << endl;
            checker[str] += 1;
        }
    }
    return 0;
}
