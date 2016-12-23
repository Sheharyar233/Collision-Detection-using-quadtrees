#pragma once
#ifndef _QUAD_TREES_H_
#define _QUAD_TREES_H_

struct node
{
	int data;

	node * top;
	node * bottom;
	node * left;
	node * right;
};

class quadtree
{
private:
	node * root;

public:
	quadtree();
	void print();
	node * insert(int);
};

#endif