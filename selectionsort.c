	//NAME        :MONIYA MOHAN
	//ROLL NO     :35
	//PROGRAM NO  :1
	//PROGRAM NAME:SELECTION SORT

	#include <stdio.h>

	int selectionSort(int array[], int size) {
		int i, j, pos, temp;
		for (i=0; i<size; i++) {
			pos = i;

			for (j=i; j<size; j++) {
				if (array[j] < array[pos]) {
					pos =j;
				}
			}
			if (i != pos) {
				temp = array[i];
				array[i] = array[pos];
				array[pos] = temp;
			}
		}
	}

	int main() {
		int i, j, pos, array[100], temp, size;

		printf("Enter number of elements in the array : ");
		scanf("%d", &size);

		printf("Enter the array\n");
		for (i=0; i<size; i++) {
			scanf("%d", &array[i]);
		}

		selectionSort(array, size);

		printf("Sorted array \n");
		for (i=0; i<size; i++) {
			printf("%d\n", array[i]);
		}
	}

	OUTPUT:


	Enter number of elements in the array : 5
	Enter the array
	25
	14
	9
	11
	75
	Sorted array
	9
	11
	14
	25
	75


















































































