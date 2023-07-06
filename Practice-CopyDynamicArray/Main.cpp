#include<iostream>
using namespace std;


class MyClass
{
private:

	int* arr;
	int size;

public:

	MyClass(int size = 10)
	{
		this->size = size;

		arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 11;
		}
	}


	~MyClass()
	{
		delete[] arr;
		size = 0;
	}


	void print_arr()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	friend void copy_arr(MyClass& a, MyClass& b);
};


void copy_arr(MyClass& a, MyClass& b)
{
	a.size = b.size;
	delete[] a.arr;

	a.arr = new int[a.size];

	for (int i = 0; i < a.size; i++)
	{
		a.arr[i] = b.arr[i];
	}
}


int main()
{
	srand(time(0));

	MyClass a(5);
	MyClass b(10);

	a.print_arr();
	b.print_arr();

	cout << "==============" << endl;
	copy_arr(a, b);

	a.print_arr();
	b.print_arr();
}