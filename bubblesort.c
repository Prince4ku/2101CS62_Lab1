// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void print(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }

	printf("after sorting the array elemnts are \n");
   bubbleSort(arr,n);
	print(arr, n);
	return 0;
}
