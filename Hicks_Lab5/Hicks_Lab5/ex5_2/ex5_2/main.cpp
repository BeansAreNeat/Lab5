#include "5_2.h"
#include <iostream>
using namespace std;

int main()
{
	Node* node = NULL;
	linkedList linkedList;
	int num, SIZE, nodePos, replace;

	// Prompt
	cout << "Size of linked list: "; cin >> SIZE;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Add to list " << i + 1 << endl; cin >> num;
		linkedList.insert(node, num);
	}
	linkedList.traverse();
	cout << endl << endl;

	cout << "What node do you want to replace? "; cin >> nodePos;
	cout << "What to replace it with? "; cin >> replace;
	linkedList.findAndReplace(node, nodePos, replace);
	linkedList.traverse();
	return 0;
}