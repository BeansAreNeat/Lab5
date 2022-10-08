#pragma once
#include <iostream>

class listNode
{
public:
	int data;
	// next is an address
	listNode* next;
};

class linkedList
{
private:
	// head is an address
	listNode* head;
public:
	linkedList()
	{
		head = NULL;
	}
	// Adds nodes to list
	void insertFront(int data);
	void traverse() { }
	listNode* find(int target) { }
};