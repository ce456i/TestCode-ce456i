#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int>initial(6);
    for(int i=0;i<6;++i){
        cin>>initial[i];
    }
    int n;
    cin>>n;
    vector<int>result;
    for(int num:initial){
        unordered_set<int>used;
        int current=num;
        used.insert(current);
        for(int k=0;k<n;++k){
            int next=-1;
            for(int a=6;a>=1;--a){
                if(used.find(a)==used.end()){
                    next=a;
                    break;
                }
            }
            if(next!= -1){
                current=next;
                used.insert(current);
            }
        }
        result.push_back(current);
    }
    for(int i=0;i<6;++i){
        if(i>0)cout<<" ";
        cout<<result[i];
    }
    cout<<endl;
    return 0;
}
