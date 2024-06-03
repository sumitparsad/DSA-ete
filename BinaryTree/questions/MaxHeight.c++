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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
    
}
node* BuildTree(node* root){
    queue<node*>q;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp =q.front();
        q.pop();
        cout<<"left:"<<endl;
        int left;
        cin>>left;
        if(left!=-1){
            temp->left=new node(left);
            q.push(temp->left);
        }
        cout<<"right:"<<endl;
        int right;
        cin>>right;
        if(right!=-1){
            temp->right=new node(right);
            q.push(temp->right);
        }
    }
    return root;
}
int main(){
    node* root=NULL;
    root=BuildTree(root);
    cout<<height(root);
    // 1 2 3 4 6 -1 5 -1 -1 7 -1 -1 -1 -1 -1
    return 0;
}

