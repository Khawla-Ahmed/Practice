//https://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int length,small=0,capital=0;

    string word;
    getline(cin,word);


    int i=0;

    while(word[i]!='\0')
    {
        if(word[i]>='a'&&word[i]<='z')
        {
            small++;
        }
        else if(word[i]>='A'&&word[i]<='Z')
        {

            capital++;
        }
        i++;

    }
    if(small>=capital)
    {
        int j=0;
        while(word[j]!='\0')
        {
            word[j]=tolower(word[j]);
            j++;
        }
        cout<<word<<endl;

    }


    else if(small<capital)
    {
        int k=0;
        while(word[k]!='\0')
        {

            word[k]= toupper(word[k]);
            k++;

        }
        cout<<word<<endl;


    }



    return 0;
}
