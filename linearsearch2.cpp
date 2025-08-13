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
	
	int search;
	printf("Enter the target element to find its index: ");
    scanf("%d", &search);
	
	int count = 0;
	for (int j=0; j<n; j++) {
	if (search == arr[j]) {
		printf("The target element has been found in index %d \n", j);
		count +=1;
	} continue;
	}
	printf("%d have been repeated %d times", search, count);
	
	return 0;
}
