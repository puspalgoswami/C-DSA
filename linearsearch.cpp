#include <stdio.h>

int main() {
	int n;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	
	int a[n];
	
	for (int i=0; i < n; i++) {
	    printf("Enter the number you want to store in index %d: ", i);
	    scanf("%d", &a[i]);
	}
	
	int search;
	printf("Enter the target element to find its index: ");
    scanf("%d", &search);
	
	for (int j=0; j<n; j++) {
	if (search == a[j]) {
		printf("The target element has been found in index %d ", j);
	}
	}
	
	return 0;
}
