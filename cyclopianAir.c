#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

int main(){
	int n,max = 0,first,a,b,prod; 
	scanf("%d",&n);  
	scanf("%d",&first);  
	a = first;  
	for (int i = 0; i < n-1; i++){
		scanf("%d",&b);  
		prod = a*b; 
		if (prod > max) max = prod; 
		a = b;  
	}
	if (first*a > max) max = a*first;  
	printf("%d\n",max); 
	return 0; 
}
