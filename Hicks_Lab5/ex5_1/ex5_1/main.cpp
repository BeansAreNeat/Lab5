#include "5_1.h"
#include <iostream>
using namespace std;

int main()
{
	linkedList linkedList;
	listNode listNode;

	int num;
	// Prompt
	cout << "Add to list" << endl;
	cin >> num;

	linkedList.insertFront(num);
	return 0;
}