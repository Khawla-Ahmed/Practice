//https://www.codechef.com/viewplaintext/76627874
//https://www.codechef.com/problems/DOLL

#include<iostream>
using namespace std;
int main()
{
    int c,t,y,h2[100];
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int m,h1,c=0;
        cin>>m; //p
        cin>>h1; //hight

        for(int j=0; j<m ; j++)
        {
            cin>>y;
            h2[j]=y;
            if(h2[j]>h1)
            {
                c++;
            }

        }
        cout<<c<<endl;
    }

    return 0;



}




