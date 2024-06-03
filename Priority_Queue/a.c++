#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> maxHeap;
    // priority_queue<int,vector<int>,greater<int>> minHeap;
    maxHeap.push(1);
    maxHeap.push(12);
    maxHeap.push(123);
    maxHeap.push(1234);
    while(maxHeap.empty()==0){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }
    return 0;
}