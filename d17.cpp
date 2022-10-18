//https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>

using namespace std;
int main()
{

    string n;

    getline(cin,n);


    int i,j,temp,l;
    l=n.length();
    for(i=0; i<l; i++)
    {

        for(j=0; j<l-i-1; j+=2)
        {
            if(n[j]>n[j+2])
            {
                temp=n[j];
                n[j]=n[j+2];
                n[j+2]=temp;

            }

        }
    }

    cout<<n<<endl;











    return 0;
}
