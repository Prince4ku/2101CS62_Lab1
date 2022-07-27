//  program for insertion sort

#include <stdio.h>

//function of insertion sort
void insertionSort(int arr[], int n)
{
	int i, k, j;
	for (i = 1; i < n; i++) {
		k = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > k) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = k;
	}
}

// function to print sorted array
void print(int arr[], int m)
{
	int i;
	for (i = 0; i < m; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers of array\n");
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
printf("before performing insertion sort\n");
print(arr, n);
printf("after performing insertion sort\n");
	insertionSort(arr, n);
	print(arr, n);

	return 0;
}
