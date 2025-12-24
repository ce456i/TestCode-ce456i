#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    int h,m,s,n;
    char colon;
    cin>>h>>colon>>m>>colon>>s;
    cin>>n;
    int total_s=h*3600+m*60+s;
    total_s=(total_s+n)%86400;
    int new_h=total_s/3600;
    total_s%=3600;
    int new_m=total_s/60;
    int new_s=total_s%60;
    cout<<setw(2)<<setfill('0')<<new_h<<":";
    cout<<setw(2)<<setfill('0')<<new_m<<":";
    cout<<setw(2)<<setfill('0')<<new_s<<endl;
    return 0;
}
