/*#include<iostream>
#include<string>

using namespace std;
template <class all>

class linked_list_stack
{
	struct node
	{

		int val;
		node *next;


	};
public:

	node *top;
	int count;


	linked_list_stack()
	{
		top = NULL;
		count = 0;
	}

	bool is_empty()
	{
		return top == NULL;

	}

	void push (all num)

	{
		node *numptr = new node;
		if (numptr == NULL)
			cout << "stact  can't allocate memory \n";
		else
		{
			numptr->val = num;
			numptr->next = top;
			top = numptr;
			count++;
		}

	}



	void pop()
	{
		if (is_empty())
			cout << "stack is empty \n";
		else
		{
			node *temp = top;
			top = top->next;
			temp = temp->next = NULL;
			delete temp;
			count--;


		}

	}



	void printer()
	{
		node *cur = top;
		cout << "[ ";
		while (cur != NULL)
		{
			cout <<cur->val <<" ";
			cur = cur->next;

	    }
		cout << "] \n";

		
	}


	void counter()
	{
		cout << "the number of stack items is "<<count << endl;
	}


};

int main()
{
	linked_list_stack<int> s1;

	s1.push(15);
	s1.push(30);
	s1.push(40);
	s1.push(91);
	s1.pop();
	s1.printer();
	s1.counter();
	system("pause");
	return 0;
*/
