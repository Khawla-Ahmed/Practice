//https://codeforces.com/problemset/problem/617/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0;
    cin>>a;
    if(a<=5)
    {
        if(a==5)
        {
            c++;
        }
        else if(a==4)
        {
            c++;
        }
        else if(a==3)
        {
            c++;
        }
        else if(a==2)
        {
            c++;
        }
        else if(a==1)
        {
            c++;
        }
        cout<<c<<endl;


    }
    else if(a>5)
    {
        if(a%5==0)
        {
            c=1*(a/5);
            cout<<c<<endl;

        }
        else if(a%5!=0)
        {
            //5*(a/5)+(a%5)=a
            c=1*(a/5)+1;
            cout<<c<<endl;

        }



    }





    return 0;
}
