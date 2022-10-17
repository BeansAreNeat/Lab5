#pragma once
#include <iostream>

// Indiviual Nodes
class Node
{
public:
	int data;
	Node* next; // next is an address
};

// List of Nodes
class linkedList
{
private:
	// head is an address
	Node* head;
public:
	linkedList()
	{
		head = NULL;
	}
	// Adds nodes to list
	void insert(Node *curr, int newData);
	// Prints element and follows pointer
	void traverse();
	//
	Node* find(int target);
};