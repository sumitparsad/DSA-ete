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
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"left: ";
    root->left=buildTree(root->left);
    cout<<"right: ";
    root->right=buildTree(root->right);

    return root;
}

void buildTreeFromLevelOrder(node* &root){
    queue<node*> q;
    
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp =q.front();
        q.pop();
        cout<<"left: "<<endl;
        int left;
        cin>>left;

        if(left!=-1){
            temp->left=new node(left);
            q.push(temp->left);
        }
        cout<<"right: "<<endl;
        int right;
        cin>>right;
        if(right!=-1){
            temp->right=new node(right);
            q.push(temp->right);
        }
    }
}

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp =q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            
        }
    }
}


void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<' ';
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<' ';
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<' ';
}

int main(){
    node* root=NULL;
    // root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    buildTreeFromLevelOrder(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    levelOrder(root);
    // inorder(root);
    // preorder(root);
    // postorder(root);
    return 0;
}