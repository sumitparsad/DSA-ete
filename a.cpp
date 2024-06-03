#include <iostream>
#include <queue>
using namespace std;
int main(){
    int arr[]={2,4,1,7,10,9,5,3};
    make_heap(arr,arr+8, greater<int>());
    for(int i:arr){
        cout<<i<<" ";
    }
}