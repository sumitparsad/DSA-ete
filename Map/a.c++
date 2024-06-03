#include <iostream>
#include <map>
using namespace std;
int main(){
    map <int,int> m;
    m.insert({1,2});
    m[21]=1;
    m[211]=11;
    m[2111]=11;
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<m[21]<<endl;
    cout<<m[2]<<endl;
    return 0;
}