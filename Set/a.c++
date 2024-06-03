// Sorted and Unique
// time complexity log(n)
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    s.insert(11);
    s.insert(11);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insert(9);
    
    // auto it=s.find(1); // returns s.end() if not present
    // cout<<*it<<endl;
    // s.clear();
    // cout<<s.count(121); // returns 1 if found and 0 if not found 
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}