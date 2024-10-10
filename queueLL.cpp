#include <iostream>
using namespace std;

class QNode {
	public:
	int data;
	QNode* next;
	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

class Queue {
	public:

	QNode *front, *rear;
	Queue() { front = rear = NULL; }

	void enQueue(int x)
	{

		QNode* temp = new QNode(x);

		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		rear->next = temp;
		rear = temp;
	}

	void deQueue()
	{

		if (front == NULL)
			return;

		QNode* temp = front;
		front = front->next;
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
	void display(){
		QNode* pointer = front;
		while (pointer!=rear)
		{
			cout<<pointer->data<<"<--";
		
			pointer=pointer->next;
		}
			cout<<pointer->data;
		
	}
};

int main()
{
cout<<"Sourabh"<<endl;
	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.enQueue(60);
	q.enQueue(70);
	q.enQueue(80);
	q.deQueue();
	q.display();
	cout << "\nQueue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}
