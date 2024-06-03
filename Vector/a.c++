#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(123);
    v.push_back(11);
    vector<int> s(3,100);
    // cout<<v.size();
    // for(int i=0;i<s.size();i++){
    //     cout<<i<<" ";
    // }
    v.insert(v.begin(),2,50);
    // v.clear(); 
    // v.swap(s);
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}