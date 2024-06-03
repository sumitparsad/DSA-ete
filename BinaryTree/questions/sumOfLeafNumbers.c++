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
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    int data;cin>>data;
    root=new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
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
}
void inorder(node* root,int &sum){
    if(root==NULL){
        return;
    }
    inorder(root->left,sum);
    // cout<<root->data<<" ";
    if(root->left==NULL && root->right==NULL){
        sum+=root->data;
    }
    inorder(root->right,sum);
}

int main(){
    node* root=NULL;
    buildFromLevelOrder(root);
    int sum=0;
    inorder(root,sum);
    cout<<sum;
    return 0;
}