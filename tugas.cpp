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

}