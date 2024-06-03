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
node* buildTree(node* root){
    queue<node*> q;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        int left;cin>>left;
        if(left!=-1){
            temp->left=new node(left);
            q.push(temp->left);
        }
        int right;cin>>right;
        if(right!=-1){
            temp->right=new node(right);
            q.push(temp->right);
        }
    }
    return root;
}
node* lca(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2)return root;
    node* left=lca(root->left,n1,n2);
    node* right=lca(root->right,n1,n2);
    if(left==NULL)return right;
    if(right==NULL)return left;
    return root;
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    cout<<lca(root,4,5)->data;
    // 1 2 3 -1 -1 4 5 -1 -1 -1 -1
    return 0;
}