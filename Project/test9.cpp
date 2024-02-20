#include <iostream>
using namespace std;

int main() {
	int size;
	int* array = NULL;

	do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	array = new int[size];

	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 100;
	}

	for (int i = 0; i < size; i++)
	{
		cout << (array + i) << " - " << *(array + i) << endl;
	}

	delete[] array;

	return 0;
}