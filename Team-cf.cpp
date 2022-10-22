//https://codeforces.com/problemset/problem/231/A//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p1,p2,p3,np,c,n;
    cin>>np;
    n=0;
    for(int i=0; i<np; i++)
    {
        c=0;
        cin>>p1;
        cin>>p2;
        cin>>p3;
        if(p1==1)
        {
            c++;
        }
        if(p2==1)
        {
            c++;
        }
        if(p3==1)
        {
            c++;
        }
        if(c>=2)
        {
            n++;
        }


    }
    cout<<n<<endl;

    return 0;
}
