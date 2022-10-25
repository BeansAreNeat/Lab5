#include "5_2.h"
#include <iostream>
using namespace std;

void linkedList::insert(Node* curr, int newData)
{
	// Dynamically created node for each time function runs
	Node* newNode = new Node();
	// The new pointer, node, pointer to the data
	newNode->data = newData;
	//
	newNode->next = head;
	// Move head to new node
	head = newNode;
}

void linkedList::traverse()
{
	Node* curr = head;
	while (curr != NULL)
	{
		cout << "curr->data = " << curr->data << endl; // Print current element
		curr = curr->next;							   // Follow next pointer
	}
}

void linkedList::findAndReplace(Node* node, int pos, int newData)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == pos)
		{
			temp->data = newData;
			return;
		}
		temp = temp->next;
	}
}

void linkedList::findAndInsert(Node* node, int data, int newData)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == NULL)
		{
			temp->data = newData;
		}
		else
		{
			cout << "Error, cannot insert here" << endl;
		}
		temp = temp->next;
	}
}

void linkedList::findAndRemove(Node* prev, Node* curr)
{
	Node* tmp = curr;
	prev->next = curr->next;
	delete tmp;
}

Node* linkedList::find(int target)
{
	Node* curr = head;
	while (curr != NULL)
	{
		if (curr->data == target)
		{
			return curr;
		}
		else
		{
			curr = curr->next; // Follow next pointer
		}
	}
	return NULL;
}