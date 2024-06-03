#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;
    while(true){
        int a;
        cin>>a;
        if(a==-1){
            break;
        }
        v1.push_back(a);
    }
    int k;
    cin>>k;
    cout<<v1[v1.size()-k];
    return 0;
}