//https://www.codechef.com/viewplaintext/76398254
//https://www.codechef.com/problems/PRACTICEPERF
#include<iostream>
using namespace std;
int main(){
    int week[5];
    int n=0;
    for(int i=0;i<4;i++){
        cin>>week[i];
    }
    for(int i=0;i<4;i++){
        if(week[i]>=10){
            n++;
        }
    }
    cout<<n<<endl;

return 0;
}

