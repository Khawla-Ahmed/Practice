//https://www.codechef.com/viewplaintext/76787882
//https://www.codechef.com/problems/MATCHES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,c,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        c=a+b;
        n=0;
        while(c>0)
        {
            j=c%10;
            if(j==0||j==6||j==9)
            {
                n=n+6;
            }
            else if(j==1)
            {
                n=n+2;
            }
            else if(j==2||j==3||j==5)
            {
                n=n+5;
            }
            else if(j==4)
            {
                n=n+4;
            }
            else if(j==7)
            {
                n=n+3;
            }
            else if(j==8)
            {
                n=n+7;
            }

            c=c/10;
        }
        cout<<n<<endl;
    }
    return 0;
}
