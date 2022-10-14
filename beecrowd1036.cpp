//https://www.beecrowd.com.br/repository/UOJ_1036_en.html
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,p,x1,x2,q;
    cin>>a>>b>>c;
    p= pow(b,2)-(4*a*c);
    q= sqrt(p);
    if(a==0 || p<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        x1=(-b+q)/(2*a);
        x2=(-b-q)/(2*a);
        std::cout<<"R1 = "<< std::fixed  <<std::setprecision(5)<<x1<<endl;
        std::cout<<"R2 = "<<std::fixed << std::setprecision(5)<<x2<<endl;

    }



    return 0;
}
