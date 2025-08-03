#include<iostream>
#include<string>
using namespace std;
int main(){
    long N;
    cin>>N;

    long year=N/365;
    N=N%365;

    long month=N/30;
    long day=N%30;

    cout<< year <<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;
    return 0;

}