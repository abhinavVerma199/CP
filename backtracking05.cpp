
//      Recursion on trees and doubt clearing session   

#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;

    }
};

node* buildTree(node* root){

    cout << "Enter the dara: " << endl;
    int data;
    cin >> data;
    root = new node(data);

   if(data == -1){
    return NULL;
}

cout << "Enter data for inserting in left of " << data << endl;
root->left = buildTree(root->left);
cout << "Enter data for inserting in right of " << data << endl;
root->right = buildTree(root->left);
return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

     if(temp == NULL){
        // purana level complete traversal ho chuka hai
        cout << endl;
        if(!q.empty()) {
            // queue still has same child ndoes
            q.push(NULL);
        }
        }
        else{
            cout << temp ->data << " ";
            if(temp ->left){
                q.push(temp ->left);

            }
            if(temp ->right){
                q.push(temp ->right);

            }
        }
     }
    }



void buildFromLevelOrder(node* &root){
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

if ((leftData != -1)){
    temp -> left = new node(leftData);
    q.push(temp->left);

}

cout << "Enter right node for: " << temp->data << endl;
int rightData;
cin >> rightData;

if(rightData != -1){
    temp -> right = new node(rightData);
    q.push(temp->right); 
}
    }
}

//Traversal -> 1. Inorder traversal
void inorder(node* root){
    //base case
    if(root == NULL)
    return;

    //inorder - LNR
    inorder(root->left);
    cout << root->data <<" ";
    inorder(root->right);

}
void preorder(node* root){
    //base case
    if(root == NULL)
    return;

    //preorder -> NLR
    cout << root->data << " ";
    preorder(root -> left);
    preorder(root -> right);
}


void postorder(node* root){
    //base case
    if(root == NULL)
    return;

    //post order -> LRN
    postorder(root -> left);
    postorder(root -> right);
    cout << root->data << " ";


}
int main(){

    node* root = NULL;

    //buildFromLevelOrder(root);
    // levelOrderTraversal(root);
    // 1 3 5 7 12 27 -1 -2 -1 -1 -1 -1 -1 -1 -1

    //creating a Tree

    root = buildTree(root);
    //1 3 7 -3 -1 11 -1 -2 5 17 -1 -1 -1
    //level order
    cout << "Printing the level order traversal output " << endl;
    levelOrderTraversal(root);
    // 3 4 6 -1 -1 -1 5 7 -1 -1 8 -1 -1

// function call
cout << "printing inorder traversal " << endl;
inorder(root);
cout <<endl;

//function call
cout << "printing preorder traversal " << endl;
preorder(root);
cout <<endl;

//function call
cout << "printing postorder traversal " << endl;
postorder(root);
cout <<endl;




return 0;
}
/**  symetric tree leetcode prblm

class Solution {
    public:
    bool checkMirror(TreeNode* root1, TreeNode* root2){
        //base case
        if(root1 == NULL && root2 == NULL)
        return true;
        if(root1 == NULL && root2 != NULL)
        return false;
        if(root1 != NULL && root2 == NULL)
        return false;
        if(root->val != root2->val)
        return false;

     bool op1 = checkMirror(root1->left, root1->right);
     bool op2 = checkMirror(root1->right, root2->left);
    bool finalAns = op1 && op2;
    return finalAns;  

    }
    bool isSymetric(TreeNode* root){
        if(root == NULL)
        return;

        return checkMirror(root->left, root->right);

    }
}


maximum depth of binary Tree

class Solution {
    public:
    int maxDepth(TreeNode* root){
        // base case
        if(root == NULL)
        return 0;

        int leftAns = maxDepth(root->left);
        int rightAns = maxDepth(root->right);

        int finalDepth = 1 + max(leftAns, rightAns);
        return finalDepth;
    }
};



class Solution{
    public:
    //Function to find the hight of a binary tree.
    int height(struct Node* node)
    //base case
    if(node == NULL){
        return 0;

    }
    int left = height(node ->left);
    int right = height(node->right);

    int ans = max(left, right) + 1;
    return ans;
}
};

int op1 = left.first;
int op2 = right.first;
int op3 = left.second + right.second + 1;

pair<int,int> ans;
ans.first = max(op1, max(op2, op3));;
ans.second = max(left.second , right.second) + 1;

return ans;


************************
checked for balanced tree

private:
int height(struct Node* node){
    //base case
    if(node == NULL){
        return 0;
    }
    

    int left = height(node ->left);
    int right = height(node ->right);

    int ans = max(left, right) + 1;
    return ans;

}
public:
bool isBalanced(Node *root)
{
//base case
if(root == NULL)
{
    return true;
}

bool left = isBalanced(root->left);
bool right = isBalanced(root->right);

bool diff = abs (height(root->left) - height(root->right)) <=1;

if(left && right && diff){
    return 1;
    }
    else
{
    return false;

}




//base case
if(r1 == NULL && r2 == NULL){
    return true;
    }

    if(r1 == NULL && r2 != NULL ){
        return false;
    }
    if(r1 != NULL && r2 == NULL){
        return false;
    }

    bool left = isIdentical(r1->left, r2->left);
    bool right = isIdentical(r1->right, r2->right);

    bool value = r1->data == r2->data;

    if(left && right && value){
        return true;

    }
    else
    {
      return false;  
    }

}


public:
pair<bool,int> isSumTreeFast(Node* root){
    //Base case
    if(root == NULL){
        pair<bool,int> p = make_pair(true, 0);
        return p;

    }
    
    if(root->left == NULL && root->right == NULL){
        pair<bool,int> p = make_pair(true, root-data);
        return p;
    }
    
    pair<bool,int> leftAns = isSumTreeFast(root->left);
    pair<bool,int> rightAns = isSumTreeFast(root->right);

    bool left = leftAns.first;
    bool right = rightAns.first;

    bool condn = root->data == leftAns.second + rightAns.second;

    pair<bool, int> ans;
    if(left && right && condn){
        ans.first = true;
        ans.second = 2*root->data;
    }
    else
    {
      ans.first = false;

    }
    return ans;
}
bool isSumTree(Node* root)
{}
}



