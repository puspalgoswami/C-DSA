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

	int max;
	
	max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
		    max = arr[i];
		} 
	}
	
	printf("The max value in the array is %d \n", max);
	
	return 0;
}
