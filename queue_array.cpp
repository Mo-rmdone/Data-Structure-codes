#include <iostream>
#include<string>

using namespace std;
int f;
int r;
#define max 100
template <class all>

class queue_array

{	
private:
	int rear;
	int front;
	int count;
	all arr[max];

public:

	queue_array()
	{
		front = 0;
		rear = max - 1;
		count = 0;
	}

	bool Is_Empty()
	{
			return count == 0;
	}

	bool Is_Full()
	{

		return count == max;

	}


	void enqueue(all item)
	{
		if (Is_Full())
			cout << "Queue is full, you can't add new items \n ";
		else
		{
			rear = (++rear) % max;
			arr[rear] = item;
			count++;


		}


	}

	void dequeue()
	{
		if (Is_Empty())
			cout << "Queue is empty, you can't remove any items \n ";
		else
		{
			front = (++front) % max;
			--count;



		}




	}

	void get_pointers()
	{
		if (Is_Empty());

		cout << "Queue is empty \n "; 

	
	
	    cout << "The front is " << arr[front] << " and rear is  " << arr[rear] << endl;
		
	}

	void printer()
	{
		if (Is_Empty())
			cout << "Queue is empty, you can't print any items \n ";
		else
		{
			cout << "[";
			for (int i = front; i != rear + 1; i = (++i) % max)
			{
				cout << "  " << arr[i] << "  ";
			}

			cout << "] \n";
		}

	}
};





int main()
{

	queue_array<int> q1;

	q1.enqueue(10);
	q1.enqueue(5);
	q1.enqueue(5);
	q1.enqueue(5);
	q1.printer();
    q1.get_pointers();







	system("pause");
	return 0;


}
