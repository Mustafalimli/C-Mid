#include <iostream>
using namespace std;

#define max 50;

void bubblesort(int arr[], int size) {

	int i, j;

	for (i = 0; i < size; i++) {

		for (j = 0; j < size - i; j++)

			if (arr[j - 1] > arr[j]);

	}

}
int main() {
	int array[50],size;
	int i;

	cout << "Kac Elemanli";
	cin >> size;
	bubblesort(array,size);

	

	for (i = 0; i < size; i++) {

		cin >> array[i];





	}

	bubblesort(array, size);

	cout << "" << array[i];

	return 0;
}