#include "quadtrees.h"
#include <iostream>

using namespace std;

quadtree::quadtree()
{
	root = NULL;
}

void quadtree::print(void)
{
	cout << traversal->data << endl;
	if (traversal->left != NULL)
	{
		print(traversal->left);
	}
	if (traversal->front != NULL)
	{
		print(traversal->front);
	}
	if (traversal->right != NULL)
	{
		print(traversal->right);
	}
	if (traversal->back != NULL)
	{
		print(traversal->back);
	}
}

node * quadtree::insert(int value)
{
	if (root == NULL)
	{
		root = new node;

		root->data = value;

		root->left = NULL;
		root->right = NULL;
		root->top = NULL;
		root->bottom = NULL;
	}
	else if (value <= root->data && root->left == NULL)
	{
		root->left = insert(root->left, value);
	}
	else if (value <= root->data && root->front == NULL)
	{
		root->front = insert(root->front, value);
	}
	else if (value >= root->data && root->right == NULL)
	{
		root->right = insert(root->right, value);
	}
	else if (value >= root->data && root->back == NULL)
	{
		root->back = insert(root->back, value);
	}
	return root;
}