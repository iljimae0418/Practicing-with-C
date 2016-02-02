// PLU 2011 Novice 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 

void yodatalk(char x[]){
	char *p,q[200],r[200]; 
	int i = 0;  
	p = strtok(x," ");  
	while (p != NULL){
		if (i == 0) strcpy(q,p); 
		else if (i == 1) strcpy(r,p); 
		else printf("%s",p); 
		p = strtok(NULL, " ");  
		i++;  
	}
	printf("%s %s\n",q,r);  
}

int main(){
	char *x[200];  
	int i,n; 
	scanf("%d\n",&n);  
	for (i = 0; i < n; i++){
		x[i] = (char *)malloc(256); 
	}
	for (i = 0; i < n; i++){
		scanf("%[^\n]",x[i]); 
		fflush(stdin);  
	}
	for (i = 0; i < n; i++){
		yodatalk(x[i]);  
	}
	return 0; 
}
