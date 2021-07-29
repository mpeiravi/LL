#include <iostream>
#include "NumberList.h"
using namespace std;
// make newNode the first node.
// This program demonstrates a simple append
// operation on a linked list.
int main()
{
	// Define a NumberList object.
	NumberList list;
	// Append some values to the list.
	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);
	cout << "This is my list " << endl;
	list.displayList();
	list.insertNode(100);
	list.insertNode(200);
	cout << "This is my list " << endl;
	list.displayList();
	list.deleteNode(12.6);
	cout << "This is my list " << endl;
	list.displayList();
	return 0;
}
 