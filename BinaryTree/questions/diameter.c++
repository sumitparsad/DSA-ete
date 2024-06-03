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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    return 1+ max(height(root->left),height(root->right));
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    int currheight=1+height(root->left)+ height(root->right);
    return max(max(ld,rd),currheight);
}
int main(){
    node* root=buildTree(root);
cout<<diameter(root);
    return 0;
}