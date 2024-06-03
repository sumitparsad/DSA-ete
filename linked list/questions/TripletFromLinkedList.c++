#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int> v1(n1,0);
    vector<int> v2(n2,0);
    vector<int> v3(n3,0);
    for(int i=0;i<n1;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>v2[i];
    }
    for(int i=0;i<n3;i++){
        cin>>v3[i];
    }
    int sum;
    cin>>sum;
    vector<int> ans;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n3;k++){
                if(v1[i]+v2[j]+v3[k]==sum){
                    ans.push_back(v1[i]);
                    ans.push_back(v2[j]);
                    ans.push_back(v3[k]);
                }
            }
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}