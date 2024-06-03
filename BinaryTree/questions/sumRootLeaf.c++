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
    queue<node*>q;
    int data; cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        int left;
        cin>>left;
        if(left!=-1){
            temp->left=new node(left);
            q.push(temp->left);
        }
        int right;
        cin>>right;
        if(right!=-1){
            temp->right=new node(right);
            q.push(temp->right);
        }
    }
    return root;
}
int sumRoot(node* root,int currNum,int &sum){
    if(root==NULL){
        return 0;
    }
    currNum=currNum*10+root->data;
    if(root->left==NULL && root->right==NULL){
        sum+=currNum;
    }
    sumRoot(root->left,currNum,sum);
    sumRoot(root->right,currNum,sum);
    return sum;
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    int sum=0;
    cout<<sumRoot(root,0,sum);
    return 0;
}