#include <iostream>
#include <vector>
using namespace std;

vector<int> add(vector<int> v1,int n1,vector<int> v2,int n2){
    vector<int> ans;
    int carry=0;
    int sum;
    int i=0,j=0;
    while (i < n1 || j < n2) {
        int curr = carry;
        if (i < n1) {
            curr += v1[i];
        }
        if (j < n2) {
            curr += v2[j];
        }
        sum = curr%10;
        carry = curr/10;
        ans.push_back(sum);
        i++;
        j++;
    }

    return ans;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> v1(n1,0),v2(n2,0);
    for(int i=0;i<n1;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>v2[i];
    }
    vector<int> ans(add(v1,n1,v2,n2));
    for(int i:ans){
        cout<<i<<" ";
    }
    
    return 0;
}