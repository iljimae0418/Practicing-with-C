// UNSW 2010
// If key letter is G, program should generate a code 
// from teh identifier  
// If key letter is V, program should display the code that follows. 
// check if the code is eitehr valid or invalid. 

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <ctype.h> 
#include <string.h> 

void ps(char x[],int b){
	int i; 
	for (i = b; x[i] != '\0'; i++) printf("%c",x[i]); 
}

int main(){
	int i,n,j,len,p,tot;  
	char **x; 
	scanf("%d",&n); 
	fflush(stdin); 
	x = (char **)malloc(n*sizeof(char *)); 
	for (i = 0; i < n; i++){
		x[i] = (char *)malloc(40*sizeof(char));  
	}
	for (i = 0; i < n; i++){
		fgets(x[i],40,stdin); 
		fflush(stdin);  
		x[i][strlen(x[i])-1] = '\0';  
	}
	for (i = 0; i < n; i++){
		len = strlen(x[i]);  
		switch(x[i][0]){
			case 'G': 
				p = len-2; 
				tot = 0;  
				for (j = 2; j < len; j++,p--){
					if (isalpha(x[i][j])) tot += p*(x[i][j]-55);  
					else{
						tot += p*(x[i][j]-48);  
					}
				}
				ps(x[i],2); 
				if (tot%36 > 10) printf("%c\n",55+tot%36); 
				else printf("%d\n",tot%36);   
				break; 
			case 'V': 
				p = len-3;  
				tot = 0;  
				for (j = 2; j < len-1; j++,p--){
					if (isalpha(x[i][j])) tot += p*(x[i][j]-55);  
					else{
						tot += p*(x[i][j]-48); 
					}
				} 
				ps(x[i],2);  
				tot = tot%36; 
				if (tot > 10) tot += 55; 
				else tot += 48;  
				if (tot == x[i][len-1]) printf(" valid\n"); 
				else printf("invalid\n");  
				break; 
 		}
	}
	return 0; 
}
