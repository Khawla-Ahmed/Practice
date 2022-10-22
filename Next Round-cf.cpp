//https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    k=k-1;//k-th position, for array k-1 because index start from 0
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int j=0; j<n; j++)
    {

        if(a[j]>0&&a[j]>=a[k])
        {
            c++;
        }



    }
    cout<<c<<endl;


    return 0;
}
