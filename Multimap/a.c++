#include <iostream>
#include <map>
using namespace std;
int main(){
    multimap<int,int> m;
    m.insert({1,11});
    m.insert({2,21});
    m.insert({3,31});
    for(auto it:m){
        cout<<it.first<<' '<<it.second<<endl;
    }
    return 0;
}