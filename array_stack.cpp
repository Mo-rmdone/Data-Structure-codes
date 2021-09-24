/*#include<iostream>
#include<string>
#include<assert.h>

using namespace std;

template <class all>


#define max 100


class arr_stack 
{

 private :


	all arr[max];

	int top; //out pointer to loop and access the stack 

 public:


 arr_stack()
	  {
		  top = 0;
		  

	  }




 void push(all num)
 {
	 if (is_full())
		 cout << "you can't push anymore \n";

	 else
		 top++;
		 arr[top] = num;

 }


 void pop()
  {
	 if (is_empty())
		 cout << "you can't pop anymore \n";

	 else
		 arr[--top];
  }


void get_top()

 {
	 if (is_empty())

		 cout << "there is no top, i am the top \n";
	 else
		  
	           cout << "the top item is " << arr[top] << endl;


 }

bool is_empty()
{
	return top == 0;
}


bool is_full()
{
	return top >= max - 1;

}



void printer()
{

	if (is_empty())
		cout << "there is nothing to print out /n";

	else
	{
		cout << "[";

		for (int i = top; i > 0; i--)

		{
			
			cout << arr[i]<<" ";

		}


		cout << "] \n";


	}
}

};



int main()
{
arr_stack <int> s1;

s1.push(15);
s1.push(30);
s1.push(40);
s1.push(91);
s1.printer();





system("pause");
return 0;
}*/
