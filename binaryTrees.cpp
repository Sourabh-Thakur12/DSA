#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;
    node(int d);
    ~node();
};

node::node(int d)
{
    this->data=d;
    this->left=NULL;
    this->right=NULL;
}

node::~node()
{
}

node* buildTRee(node* root){
    cout<<"Enter the Data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if(data==-1)
        return NULL;
    
    cout<<"Left Data of "<<data<<endl;
    root->left = buildTRee(root->left);
    cout<<"Right Data of "<<data<<endl;
    root->right = buildTRee(root->right);

    return root; 
}

void BFT(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<temp->data;
            if(temp->left)
                q.push(temp->left);
            if(temp->right);
                q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;
    root = buildTRee(root);

    // 50 15 5 3 -1 -1 8 -1 -1 20 -1 37 24 -1 -1 -1 62 58 -1 60 -1 -1 62 91 -1 -1 
    BFT(root);
    return 0;
}