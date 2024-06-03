#include <iostream>
#include <vector>
using namespace std;
int trapWater(vector<int> v,int n){
    int left[n],right[n];
    left[0]=v[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],v[i]);
    }
    right[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],v[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min(left[i],right[i])-v[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<trapWater(v,n);
    return 0;
}