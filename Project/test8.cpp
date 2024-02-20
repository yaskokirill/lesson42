//#include <iostream>
//using namespace std;
//
//int main() {
//	int size = 5;
//	int* array = NULL;
//	//...
//	array = new int[size];
//
//	*(array + 0) = 10;
//	*(array + 1) = 20;
//	*(array + 2) = 30;
//	*(array + 3) = 40;
//	*(array + 4) = 50;
//	
//	cout << "Address: " << array << endl;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << (array + i) << " - " << *(array + i) << endl;
//	}
//
//	delete[] array;
//	
//	return 0;
//}
//