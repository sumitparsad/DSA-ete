#include <iostream>
using namespace std;
int lastIndex(int arr[],int n,int m){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==m)return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    cout<<lastIndex(arr,n,m);
    return 0;
}