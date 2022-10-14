//https://www.beecrowd.com.br/repository/UOJ_1013_en.html
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,num3,num12,num12_3;
    cin>>num1>>num2>>num3;
    num12=(num1+num2+abs(num1-num2))/2;
    num12_3=(num12+num3+abs(num12-num3))/2;
            cout<<num12_3<<" eh o maior"<<endl;
    return 0;
}
