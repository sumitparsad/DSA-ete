// Enqueue: Add an element to the end of the queue
// Dequeue: Remove an element from the front of the queue
// IsEmpty: Check if the queue is empty
// IsFull: Check if the queue is full
// Peek: Get the value of the front of the queue without removing it

#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(21);
    q.push(11);
    while(q.empty()==0){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}