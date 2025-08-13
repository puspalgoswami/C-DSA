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
	
	for (int j=0; j<n; j++) {
	if (max == arr[j]) {
		printf("The max element is at index %d \n", j);
	}
	}
	
	printf("The max value in the array is %d \n", max);
	
	arr.remove(j);
	
	int max2;
	
	max2 = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max2) {
		    max2 = arr[i];
		} 
	}
	
	printf("The 2nd max value in the array is %d \n", max2);
	
	return 0;
}
