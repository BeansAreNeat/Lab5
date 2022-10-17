#include "5_1.h"
#include <iostream>
using namespace std;

int main()
{
	Node* node = NULL;
	linkedList linkedList;
	int num, SIZE, search;
	
	// Prompt
	cout << "Size of linked list: "; cin >> SIZE;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Add to list " << i + 1 << endl; cin >> num;
		linkedList.insert(node, num);
		linkedList.traverse();
	}
	cout << endl << endl;

	cout << "What num do you want to search? "; cin >> search;
	cout << linkedList.find(search);
	return 0;
}