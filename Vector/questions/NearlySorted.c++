#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // int arr[5]={1,2,1,2,4};
    // sort(arr,arr+5);
    // for(int i:arr){
    //     cout<<i<<" ";
    // }

int n; cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }

    
    return 0;
}