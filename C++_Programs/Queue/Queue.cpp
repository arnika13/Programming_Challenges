#include<iostream>
using namespace std;
#define MAXSIZE 10

class queue
{
private:
	int front;
	int rear;
	int item[MAXSIZE];
public:
	queue();
	void enqueue(int);
	void dequeue();

	void print();
};

queue::queue()
{
	rear = -1;
	front = 0;
}
void queue:: enqueue(int data)
{
	if (rear == MAXSIZE - 1)
	{ 
		cout << " Queue is full, cannot insert an element" << endl;
	}
	else
	{
		cout << " Data enqueued is : " << data;
		rear = rear + 1;
		item[rear] = data;
	}
	
}
void queue::dequeue()
{
	if (front > rear)
	{
		cout << "Queue is empty, cannot remove anymore item";
	}
	else
	{
		int datadeleted = item[front];
		cout << "Data dequeued is :" << datadeleted;
		

		front++;
		
	}


}


void queue::print()

{
	
	for (int i = front; i <= rear; i++)
	{
		cout << item[i] << endl;
	}
	
}

int main()
{
	queue q;
	int choice, data;
	cout << "Maxsize of queue is = " << MAXSIZE;
	while (true)
	{
		cout << "\n 1. Enqueue \n 2. Dequeue \n 3. Display all elements in the queue \n 4. Exit" << endl;
		cout << "***************************************************************" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			
			   cout << "Enter the element : ";
			   cin >> data;
			   q.enqueue(data);
			
			   break;
		case 2:
			
			 q.dequeue();

			 break;
		case 3:
			q.print();
			break;
		case 4:
			exit(0);
			break;
		}
	
	}
	return 0;


}