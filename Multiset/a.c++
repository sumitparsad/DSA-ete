// Only sorted not unique
#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int> m;
    m.insert(11);
    m.insert(3);
    m.insert(3);
    m.insert(3);
    // cout<<m.count(1111)<<endl; // return no. of occurences ,if not found return 0
    // m.erase(111);// erases all occurrenses
    // m.erase(m.find(3));// deletes only first occurence
    for(auto i:m){
        cout<<i<<" ";
    }
    return 0;
}