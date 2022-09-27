#include <iostream>

using namespace std;

void printArr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;
}
void randArr(int* arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {		
		
		arr[i] = rand()%100;
	}
}
void bubbleSort(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}		
	}
}
void initialArr(int* arr, int m) {
	for (int i = 0; i < m; i++)
	{
		cout << "Enter " << i + 1 << " numbers: "; cin >> arr[i];
	}
}

void inverArr(int* arr, int m) {
	for (int i = 0; i < m/2; i++)
	{
		int t = arr[i];
		arr[i] = arr[m - 1 - i];
		arr[m - 1 - i] = t;
	}
}
void f(int* arr, int m) {
	for (int i = 0; i < m; i++)
	{
		int x = arr[i];
		int y = sqrt(fabs(x)) + 5 * pow(x, 3);
		if (y > 400) {
			cout << "Number " << arr[i] << " warning!" <<endl;
		}
	}
}

int main()
{
	const int n = 10;
	
	int arr[n];
	randArr(arr, n);
	printArr(arr, n);
	bubbleSort(arr, n);
	cout << endl;
	printArr(arr, n); 
	cout << endl;

	const int m = 11;
	int arr2[m];
	initialArr(arr2, m);
	cout << "Your array: ";
	printArr(arr2, m);
	inverArr(arr2, m);
	cout << "Inventory array: ";
	printArr(arr2, m);
	cout << "WARNING!!!"<<endl;
	f(arr2, m);

}
