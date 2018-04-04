#include <iostream>

using namespace std;

const int MAX_LIST_ITEMS = 10;

class List {
private:
	int data[MAX_LIST_ITEMS];
	int numItems;
public:
	List();
	bool addItem(int a);
	void printList();
};

template <class dataType>
class BetterList {
private:
	dataType data[MAX_LIST_ITEMS];
	int numItems;
public:
	BetterList();
	bool addItem(dataType a);
	void printList();
};

int main(void) {
	List list;
	list.addItem(1);
	list.addItem(2);
	list.addItem(3);
	list.printList();

	BetterList<int> betterIntList;
	betterIntList.addItem(1);
	betterIntList.addItem(2);
	betterIntList.addItem(3);
	betterIntList.printList();

	BetterList<float> betterFloatList;
	betterFloatList.addItem(1.5);
	betterFloatList.addItem(2.4);
	betterFloatList.addItem(3.3);
	betterFloatList.printList();

	BetterList<char> betterCharList;
	betterCharList.addItem('a');
	betterCharList.addItem('b');
	betterCharList.addItem('c');
	betterCharList.printList();

	return 0;
}

template <class dataType>
BetterList<dataType>::BetterList() {
	numItems = 0;
	for (int i = 0; i < MAX_LIST_ITEMS; i++) {
		data[i] = 0;
	}
}

template <class dataType>
bool BetterList<dataType>::addItem(dataType a) {
	if (numItems < MAX_LIST_ITEMS) {
		data[numItems++] = a;
		return true;
	}
	else {
		return false;
	}
}

template <class dataType>
void BetterList<dataType>::printList() {
	for (int i = 0; i < numItems; i++) {
		cout << data[i] << ' ';
		cout << endl;
	}
}

List::List() {
	numItems = 0;
	for (int i = 0; i < MAX_LIST_ITEMS; i++) {
		data[i] = 0;
	}
}

bool List::addItem(int a) {
	if (numItems < MAX_LIST_ITEMS) {
		data[numItems++] = a;
		return true;
	} else {
		return false;
	}
}

void List::printList() {
	for (int i = 0; i < numItems; i++) {
		cout << data[i] << ' ';
	}
	cout << endl;
}


