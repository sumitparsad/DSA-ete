// random order but unique
#include <unordered_set>
#include <iostream>
using namespace std;
int main(){
    unordered_set <int> u;
    u.insert(1);
    u.insert(1);
    u.insert(122);
    u.insert(13);
    u.insert(1311);
    u.insert(123);
    for(int i:u){
        cout<<i<<' ';
    }

    return 0;
}