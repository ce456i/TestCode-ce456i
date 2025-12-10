#include<iostream>
#include<string>
using namespace std;
int main(){
    int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day;
    string date;
    cin>>date;
    year=stoi(date.substr(0,4));
    month=stoi(date.substr(5,2));
    day=stoi(date.substr(8,2));
    if((year%4==0&&year%100!=0)||(year%400==0)){
        monthdays[1]=29;
    }
    int sum=0;
    for(int i=0;i<month-1;++i){
        sum+=monthdays[i];
    }
    sum+=day;
    cout<<sum<<endl;
    return 0;
}
