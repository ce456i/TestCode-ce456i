#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count[10]={0};
    for(int i=0;i<n;++i){
        int num;
        cin>>num;
        if(num==0){
            count[0]++;
        }
        else{
            while(num>0){
                int digit=num%10;
                count[digit]++;
                num/=10;
            }
        }
    }
    int max=0;
    for(int i=0;i<10;++i){
        if(count[i]>max){
            max=count[i];
        }
    }
    vector<int>result;
    for(int i=0;i<10;++i){
        if(count[i]==max){
            result.push_back(i);
        }
    }
    cout<<max<<":";
    for(size_t i=0;i<result.size();++i){
        cout<<" "<<result[i];
    }
    cout<<endl;
    return 0;
}
