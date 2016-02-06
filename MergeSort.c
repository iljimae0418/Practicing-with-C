#include <stdio.h>
#include <stdlib.h> 

void merge(int *a, int *b, int low, int pivot, int high){
	int h,i,j,k; 
	h = low, i = low, j = pivot+1;  
	while ((h <= pivot) && (j <= high)){
		// traverse both halves of the array. 
		if (a[h] <= a[j]){
			// if an element of left half is less than element of right half. 
			b[i] = a[h]; // store element of left half in temporary array. 
			h++; 
		}else{
			b[i] = a[j];  
			j++;  
		}
		i++;  
	}
	if (h > pivot){
		for (k = j; k <= high; k++){
			b[i] = a[k]; 
			i++;  
		}
	}else{
		for (k = h; k <= pivot; k++){
			b[i] = a[k]; 
			i++;  
		}
	}
	for (k = low; k <= high; k++){
		a[k] = b[k];  // recopy the values from temporary to original array. 
	}
}

void mergeSort(int *a, int *b, int low, int high){
	int pivot; 
	if (low < high){
		pivot = (low+high)/2;  
		mergeSort(a,b,low,pivot); 
		mergeSort(a,b,pivot+1,high);  
		merge(a,b,low,pivot,high); 
	}
}

int main(){
	int a[] = {12,10,43,23,-78,45,123,56,98,41,90,24};  
	int num = sizeof(a)/sizeof(int);  
	int b[num];  // temporaray array for merging. 
	mergeSort(a,b,0,num-1);  
	for (int i = 0; i < num; i++){
		printf("%d ",a[i]); 
	}
	printf("\n"); 
	return 0; 
}
