#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        unordered_set<int> arr1,arr2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=k){
                arr1.insert(x);
            }
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x<=k){
                arr2.insert(x);
            }
        }
        unordered_set<int> common;
        for(auto num:arr1){
            if(arr2.find(num)!=arr2.end()){
                common.insert(num);
            }
        }
        for(auto num:common){
            arr1.erase(num);
            arr2.erase(num);
        }
        if(arr1.size()<=k/2 && arr2.size()<=k/2 && (k-arr1.size()-arr2.size())==common.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}