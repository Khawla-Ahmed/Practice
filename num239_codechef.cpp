//https://www.codechef.com/viewplaintext/76589557
//https://www.codechef.com/problems/NUM239
#include<iostream>
using namespace std;
int main()
{
    int l,r,t,c;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>l;
        cin>>r;
        c=0;
        for(int j=l; j<=r; j++)
        {
            if(j%10==2||j%10==3||j%10==9)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
