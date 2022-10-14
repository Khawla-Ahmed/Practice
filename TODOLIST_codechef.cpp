//https://www.codechef.com/viewplaintext/76594855
//https://www.codechef.com/problems/TODOLIST
#include<iostream>
using namespace std;
int main()
{
    int j,n,p,c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p;
        c=0;
        int r[p+1];
        for( j=0; j<p; j++)
        {
            cin>>r[j];

        }
        for( int e=0; e<p; e++)
        {
            if(r[e]>=1000)
            {
                c++;
            }

        }
        cout<<c<<endl;
    }

    return 0;
}

