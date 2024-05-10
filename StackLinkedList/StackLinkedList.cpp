#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node() {
		next = NULL;
	}
};

class stack {
private:
	node* top;

public:
	stack() {
		top = NULL;
	}

	int push(int value) {
		node* newNode = new node();
		newNode->data = value;
		newNode->next = top;
		top = newNode;
		cout << "Push value : " << value << endl;
		return value;
	}

	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "Popped value : " << top->data << endl;
		top = top->next;
	}

	void peek() {
		if (top == NULL) {
			cout << "List is empty." << endl;
		}
		else {
			node* current = top;
			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}
	}

	bool isEmpty() {
		return top == NULL;
	}
};

int main() {
	stack stack;
	int choice = 0;
	int value;

	while (choice != 5) {
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3.Peek\n";
		cout << "Exit\n";
		cout << "Enter your choice : ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter the value to push : ";
			cin >> value;
			stack.push(value);
			break;
		case 2:
			if (!stack.isEmpty()) {
				stack.pop();
			}
			else {
				cout << "Stack is empty. Cannot pop." << endl;
			}
			break;
	}
}