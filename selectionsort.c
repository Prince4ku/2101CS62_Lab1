// C program  of selection sort
#include <stdio.h>
//declaring swap function
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min;

	
	for (i = 0; i < n-1; i++)
	{
		// Finding the minimum element in unsorted array
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;

		// now we swap the minimum element with first element
		swap(&arr[min], &arr[i]);
	}
}

/* Function to print an array */
void print(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the you want to store in array\n");
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
	selectionSort(arr, n);
	printf("array came after sorting\n");
	print(arr, n);
	return 0;
}
