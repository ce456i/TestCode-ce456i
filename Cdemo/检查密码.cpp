#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;++i){
        string password;
        getline(cin,password);
        int len=password.size();
        if(len<6){
            cout<<"Your password is tai duan le."<<endl;
            continue;
        }
        bool has_invalid=false;
        bool has_letter=false;
        bool has_digit=false;
        for(char c:password){
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
                has_letter=true;
            }else if(c>='0'&&c<='9'){
                has_digit=true;
            }else if(c=='.'){
                continue;
            }else{
                has_invalid=true;
                break;
            }
        }
        if(has_invalid){
            cout<<"Your password is tai luan le."<<endl;
        }else{
            if(!has_digit){
                cout<<"Your password needs shu zi."<<endl;
            }else if(!has_letter){
                cout<<"Your password needs zi mu."<<endl;
            }else{
                cout<<"Your password is wan mei."<<endl;
            }
        }
    }
    return 0;
}

