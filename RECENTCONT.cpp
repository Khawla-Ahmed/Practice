//https://www.codechef.com/viewplaintext/76751135
//https://www.codechef.com/problems/RECENTCONT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        int c1=0,c2=0;

        int c;
        cin>>c;
        string s;
        for(int j=0; j<c; j++)
        {
            cin>>s;
            if(s == "START38")
            {
                c1++;
            }
            else if(s == "LTIME108")
            {
                c2++;
            }

        }
        cout<<c1<<" "<<c2<<endl;



    }




    return 0;
}
