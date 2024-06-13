#include <iostream>
#include <string>
using namespace std;
//BinarySeacrhTree_0215
//Minimal 15 commit

class node
{
public:
    string info;
    node* leftchild;
    node* rightchild;

    //Connstructor for the node class
    node(string i, node* l, node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    node* ROOT;
    
    BinaryTree()
    {
        ROOT = nullptr;  //Initializing ROOT to null
    }

    void insert(string element) //insert a node in the binary seacrh tree
    {
        node* newNode = new node(element, nullptr,nullptr); //allocate memory for the new node
        newNode->info = element; //assign value to the data field of the new node
        newNode->leftchild = nullptr; //make the left child of the new node point to NULL
        newNode->rightchild = nullptr; //make the right child of the new node point to NULL

        node* parent = nullptr;
        node* currentNode = nullptr;
        search(element, parent, currentNode); //Locate the node which will be the parent of the node to be insert

        if (parent == nullptr) // if the parent is null (tree is empty)
        {
            ROOT = newNode; //mark the new node as ROOT
            return; //exit
        }

        if (element < parent->info) // if the value in the data field of the new node is less than that of the
        {
            parent->leftchild = newNode; // make the left child of the parent point to the new node
        }
        else if (element > parent->info) // if the value in the data field of the new node is greater than that
        {
            parent->rightchild = newNode; // make the right child of the parent point to the new node
        }
    }


    void search(string element, node*& parent, node*& currentNode)
    {
        // this function searches the nurrentnode of the specified node as well as the current node of its parent
        currentNode = ROOT;
        parent = NULL;
        while ((currentNode != NULL) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;           
        }
    }

    void inorder(node* ptr)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr !=NULL)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

        void preorder(node* ptr)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr !=NULL)
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }

        void postorder(node* ptr)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr !=NULL)
        {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    }

};

int main()
{
    BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert traversal" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit " << endl;
        cout <<  "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;
    }
}
