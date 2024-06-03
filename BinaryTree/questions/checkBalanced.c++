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
int height(node*root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

bool isBalanced(node* root){
    if(root==NULL){
        return 1;
    }
    if(abs(height(root->left)-height(root->right))<=1 && isBalanced(root->right) && isBalanced(root->left)){
        return 1;
    }
    return 0;
}

int main(){
    node* root=NULL;
    root=buildTree(root);
    cout<<isBalanced(root);
    return 0;
}