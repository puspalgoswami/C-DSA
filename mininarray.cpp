#include <stdio.h>

int main() {
	int n;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for (int i=0; i < n; i++) {
	    printf("Enter the number you want to store in index %d: ", i);
	    scanf("%d", &arr[i]);
	}

	int min;
	
	min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
		    min = arr[i];
		}
	}
	
	printf("The min value in the array is %d \n", min);
	
	return 0;
}
