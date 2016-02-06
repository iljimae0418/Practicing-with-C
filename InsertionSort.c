#include <stdio.h> 
#include <stdlib.h> 

void insertionSort(int *arr, int n){
	int j,temp; 
	for (int i = 0; i < n; i++){
		j = i; 
		while (j > 0 && arr[j] < arr[j-1]){
			temp = arr[j];   
			arr[j] = arr[j-1]; 
			arr[j-1] = temp; 
			j--; 
		}
	}
}

int main(){
	int a[4] = {4,7,1,16}; 
	insertionSort(a,4); 
	for (int i = 0; i < 4; i++){
		printf("%d ",a[i]);  
	}
	printf("\n");  
	return 0; 
}
