// All other function are same as Vector
#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(1);
    l.push_front(2);
    l.push_front(2);
    l.pop_back();
    l.pop_front();
    for(int i:l){
        cout<<i<<" ";
    }
    return 0;
}

// You only get additonal front operation as compare to vector
// list - doubly linked list
// vector - singly linked list