//https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c;
    string a;
    int t;
    cin>>t;
    string ignoreString;
    for(int i=0; i<=t; i++)
    {
        getline(cin,a);
        b=a.size();
        if(b<=10)
        {
            cout<<a<<endl;
        }
        else
        {
            c=b-2;
            cout<<a[0]<<c<<a[b-1]<<endl;
        }

    }

    return 0;
}
