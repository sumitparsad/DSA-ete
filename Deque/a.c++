#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(1);
    d.push_front(12);
    d.push_front(12);
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}