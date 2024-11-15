
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* link;

	Node(int n)
	{
		this->data = n;
		this->link = NULL;
	}
};

class Stack {
	Node* top;

public:
	Stack() { top = NULL; }

	void push(int data)
	{
		Node* temp = new Node(data);

		if (!temp) {
			cout << "\nStack Overflow";
			
		}

		temp->link = top;

		top = temp;
	}

	bool isEmpty()
	{
		return top == NULL;
	}

	int peek()
	{
		if (!isEmpty())
			return top->data;
		else
			cout<<"empty";
	}
	void pop()
	{
		Node* temp;

		if (top == NULL) {
			cout << "\nStack Underflow" << endl;
			
		}
		else {

			temp = top;

			top = top->link;
			free(temp);
		}
	}
	void display()
	{
		Node* temp;

		if (top == NULL) {
			cout << "\nStack Underflow";
			
		}
		else {
			temp = top;
			while (temp != NULL) {

				cout << temp->data;

				temp = temp->link;
				if (temp != NULL)
					cout << " -> ";
			}
		}
	}
};

int main()
{
	cout<<"sourabh"<<endl;
	Stack s;

	s.push(11);
	s.push(22);
	s.push(33);
	s.push(44);

	s.display();

	cout << "\nTop element is " << s.peek() << endl;

	s.pop();
	s.pop();

	s.display();

    cout << "\nTop element is " << s.peek() << endl;

	return 0;
}
