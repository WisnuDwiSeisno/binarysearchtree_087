#include <iostream>
#include <string>
using namespace std;

class node
{
public:
	string info;
	node* leftchild;
	node* rightchild;

	//Constructor for the node class
	node(string i, node* l, node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class binarytree
{
public:
	node* ROOT;

	binarytree()
	{
		ROOT = NULL; //Initializing ROOT to null
	}

	void insert(string element) // insert a node in the binary search tree
	{
		node* newnode = new node(element, NULL, NULL); //Allocate memory fot the new node
	}
};