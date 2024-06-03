#include <iostream>
#include <queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(int arr[],int start,int end){
    if(start>end)return NULL;
    int mid=start+(end-start)/2;
    node* root=new node(arr[mid]);
    root->left=buildTree(arr,start,mid-1);
    root->right=buildTree(arr,mid+1,end);
    return root;
}
void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        } 
        if(temp->right){
            q.push(temp->right);
        } 
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    node* root=NULL;
    root=buildTree(arr,0,4);
    levelorder(root);
    return 0;
}