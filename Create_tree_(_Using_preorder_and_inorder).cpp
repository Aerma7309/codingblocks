/*
* @Date    : 2020-04-07 12:17:52
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
* @Link    : fb.com/aerma7309
*/
#include <iostream>
using namespace std;


bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

class Node
{
public:
    int data;
    Node *left;
    Node *right;

public:
    Node(int n);
    ~Node();
};

Node::Node(int n)
{
    data = n;
    left = nullptr;
    right = nullptr;
}

Node::~Node()
{
}

Node *createBT(int *prestart, int * preend ,int *instart,int* inend)
{
    if(inend <= instart or preend <= prestart) return nullptr;
    int *j=nullptr,*iter=instart;
    while (iter < inend)
    {
        if(*prestart == *iter)
            break;
        iter++;
    }
    
    Node *root = new Node(*prestart);
    root->left = createBT(prestart+1,preend,instart,iter);
    root->right = createBT(prestart+(iter-instart+1),preend,iter+1,inend);
    return root;
}

void printBT(const Node *root)
{
    if (!root)
        return;
    if(!root->left)
        cout << "END ";
    else cout<<root->left->data<<" ";
    cout<< "=> "<<root->data<<" <= ";
    if (!root->right)
        cout << "END\n";
    else
        cout << root->right->data << "\n";

    printBT(root->left);
    printBT(root->right);
}

int main()
{
    int num, len, inorder[10000], preorder[10000];
    cin>>len;
    for (int i = 0; i < len; i++)
        cin >> preorder[i];

    cin >> len;
    for (int i = 0; i < len; i++)
        cin >> inorder[i];
    Node* root =  createBT(preorder,preorder+len,inorder,inorder+len);
    printBT(root);
    return 0;
}
