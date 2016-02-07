#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void printString(char *z){
	int i = 0; 
	while (z[i] == '0') i++;  
	while (z[i] != '\0') printf("%c",z[i]);  
	printf("\n"); 
}

int main(){
	char x[32],y[32],z[32]; 
	int i,j,k,min,max,m,n,sum;  
	scanf("%s",x);  
	scanf("%s",y);  
	m = strlen(x); 
	n = strlen(y);  
	if (m < n){
		max = n; 
		strrev(x); 
		for (i = 0; i < (n-m); i++){
			strcat(x,"0");  
		}
		strrev(x); 
	}else if (n < m){
		max = m; 
		strrev(y); 
		for (i = 0; i < (m-n); i++){
			strcat(x,"0");  
		}
		strrev(y);  
	}else max = m; 

	for (i = max-1; i >= 0; i--){
		sum = (x[i]-48) + (y[i]-48);  
		sum %= 10;  
		z[i] = sum+48; 
	}
	z[max] = '\0';  
	printString(z);
	return 0; 
}
