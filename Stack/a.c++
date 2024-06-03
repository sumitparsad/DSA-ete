#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack <int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.push(a);
    }
    while(s.empty()==0){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}