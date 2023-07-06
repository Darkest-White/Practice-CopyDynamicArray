#include<iostream>
using namespace std;


void fill_arr(int* const arr, const int SIZE)
{
	srand(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 11;
	}
}

void print_arr(const int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void copy_arr(int*& arr1, const int* arr2, const int size2)
{
	delete[] arr1;
	arr1 = new int[size2];

	for (int i = 0; i < size2; i++)
	{
		arr1[i] = arr2[i];
	}
}


int main()
{
	int size1 = 5, size2 = 10;

	int* p1 = new int[size1];
	fill_arr(p1, size1);
	int* p2 = new int[size2];
	fill_arr(p2, size2);

	cout << "p1 = ";
	print_arr(p1, size1);
	cout << "p2 = ";
	print_arr(p2, size2);

	copy_arr(p1, p2, size2);
	cout << "==============" << endl;

	cout << "p1 = ";
	print_arr(p1, size2);
	cout << "p2 = ";
	print_arr(p2, size2);
}