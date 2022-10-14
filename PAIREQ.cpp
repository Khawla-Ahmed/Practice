//https://www.codechef.com/viewplaintext/76789746
//https://www.codechef.com/problems/PAIREQ
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        int s;
        cin>>s;
        int a[s];
        int min_num=s;
        for(int j=0; j<s; j++)
        {
            cin>>a[j];
        }

        for(int k=0; k<s; k++)
        {
            c=0;
            for(int kk=0; kk<s; kk++)
            {

                if (a[k]!= a[kk])
                {
                    c ++;
                }
            }
            if(c<min_num)
            {
                min_num=c;
            }

        }
        cout<< min_num<<endl;

    }


    return 0;
}
