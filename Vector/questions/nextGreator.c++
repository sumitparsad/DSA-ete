#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int n=3;
    vector<int> v(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                v[i]=arr[j];
                break;
            }
        }
    }
    for(int i:v){
        cout<<i;
    }
    return 0;
}