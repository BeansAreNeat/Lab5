#pragma once
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
	void insert(Node* curr, int newData);
	// Prints element and follows pointer
	void traverse();

	void findAndInsert(Node* node, int data, int newData);
	void findAndRemove(Node* prev, Node* curr);
	void findAndReplace(Node* node, int value, int newValue);
	// Replace item to target
	Node* find(int target);
};