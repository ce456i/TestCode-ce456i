#include<iostream>
#include<string>
using namespace std;
int main(){
    char target;
    cin>>target;
    cin.ignore();
    string str;
    getline(cin,str);
    int maxindex=-1;
    for(int i=0;i<str.size();++i){
        if(str[i]==target){
            maxindex=i;
        }
    }
    if(maxindex!=-1){
        cout<<"index = "<<maxindex<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}
