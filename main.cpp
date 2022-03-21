#include <bits/stdc++.h>
using namespace std;
int n,nb=1,i=1;
int main()
{
    cin>>n;
    string a,p;
    cin>>a;
    while(i<n){
        cin>>p;
        if(a!=p){
            nb++;
            a=p;
        }
        i++;
    }
    cout << nb<< endl;
    return 0;
}
