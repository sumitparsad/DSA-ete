#include <iostream>
#include <vector>
using namespace std;
void subsets(vector<int> arr,int target,vector<int> temp,vector<vector<int>> &main, int i,int &count ){
    if(i==arr.size()){
        if(target==0){
            main.push_back(temp);
            count++;
        }
        return;
    }
    temp.push_back(arr[i]);
    subsets(arr,target-arr[i],temp,main,i+1,count);
    temp.pop_back();
    subsets(arr,target,temp,main,i+1,count);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    

    vector<vector<int>> main;
    vector<int> temp;
    int count =0;

    subsets(arr,target,temp,main,0,count);
    for(auto i:main){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Count: "<<count;
    return 0;
}