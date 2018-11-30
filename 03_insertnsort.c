	//NAME        :MONIYA MOHAN
	//ROLL NO     :35
	//PROGRAM NO  :3
	//PROGRAM NAME:INSERTION SORT

	#include <stdio.h>

	int insertionSort(int array[], int size) {
		int i, j, temp;
		for (i=1; i<size; i++) {
			temp = array[i];
			for (j=i-1; j>=0 && array[j] > temp; j--) {
					array[j+1] = array[j];
			}
			array[j+1] = temp;
		}
	}
	void main() {
		int array[100], i, j, size;

		printf("Enter size of the array : ");
		scanf("%d", &size);

		printf("Enter array\n");
		for (i=0; i<size; i++) {
			scanf("%d", &array[i]);
		}

		insertionSort(array, size);

		printf("Sorted array\n");
		for (i=0; i<size; i++) {
			printf("%d\n", array[i]);
		}
	}

	OUTPUT :

	Enter size of the array : 5
	Enter array
	32
	12
	11
	6
	45
	Sorted array
	6
	11
	12
	32
	45
