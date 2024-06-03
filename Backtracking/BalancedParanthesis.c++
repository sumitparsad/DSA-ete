#include <iostream>
#include <vector>
using namespace std;
void balancer(string cur,int o,int c,int n,vector<string> &v){
    if(n==o && n==c){
        v.push_back(cur);
        return;
    }
    // add open
    if(o<n){
        balancer(cur+'(',o+1,c,n,v);
    }
    // add close
    if(o>c){
        balancer(cur+')',o,c+1,n,v);
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> v;
    balancer("",0,0,n,v);
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<endl;
    }
    return 0;
}