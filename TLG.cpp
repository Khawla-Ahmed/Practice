//https://www.codechef.com/viewplaintext/77172182
//https://www.codechef.com/problems/TLG
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,m=0,lead_p=0,p1=0,p2=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int pp1,pp2,lead=0;
        cin>>pp1>>pp2;
        p1=p1+pp1;
        p2=p2+pp2;
        if(p1>p2)
        {
            lead=p1-p2;
            if(lead>m)
            {
                m=lead;
                lead_p=1;
            }
        }
        else if(p2>p1)
        {
            lead=p2-p1;
            if(lead>m)
            {
                m=lead;
                lead_p=2;
            }
        }
    }
    cout<<lead_p<<" "<<m<<endl;


    return 0;
}
