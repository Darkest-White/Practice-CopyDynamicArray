#include<iostream>
using namespace std;


void FillArr(int* const arr, const int size)
{
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 11;
	}
}

void PrintArr(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	int size1 = 5, size2 = 10;

	int* p1 = new int[size1] {};
	int* p2 = new int[size2];
	FillArr(p2, size2);

	cout << "p1 = ";
	PrintArr(p1, size1);
	cout << "p2 = ";
	PrintArr(p2, size2);

	cout << "===============" << endl;

	delete[] p1;
	p1 = new int[size2];

	for (int i = 0; i < size2; i++)
	{
		p1[i] = p2[i];
	}

	cout << "p1 = ";
	PrintArr(p1, size2);
	cout << "p2 = ";
	PrintArr(p2, size2);

	delete[] p1;
	delete[] p2;
}