#include <iostream>
using namespace std;
bool isUgly(int n){
    while(n%2==0)n/=2;
    while(n%3==0)n/=3;
    while(n%5==0)n/=5;
    return n==1;
}
int nthUgly(int n){
    int count=0;
    int i=1;
    while (count<n){
        if(isUgly(i)==1){
            count++;
        }
        i++;
    }
    return i-1;
}
int main(){
    int n;
    cin>>n;
    // cout<<isUgly(n);
    cout<<nthUgly(n);
    return 0;
}