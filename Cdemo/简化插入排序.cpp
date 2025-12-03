#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;++i){
        int m;
        cin>>m;
        a.push_back(m);
    }
    int x;
    cin>>x;
    int pos=0;
    while(pos<a.size()&&a[pos]<x){
        pos++;
    }
    a.insert(a.begin()+pos,x);
    for(int num:a){
        cout<<num<<" ";
    }
    return 0;
}
