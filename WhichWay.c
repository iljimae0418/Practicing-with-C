// PLU advanced 2011 
// press ctrl+D to simulate end of input in UNIX. 
#include <stdio.h> 
#include <string.h> 

void count(int n, int *nzeros, int *nones){
	int dig; 
	*nzeros = 0; 
	*nones = 0;  
	while (n){
		dig = n%2; 
		if (dig%2) (*nones)++; 
		else (*nzeros)++;  
		n /= 2; 
	}
}

int main(){
	char res[1024] = "", s[64];  
	int n, n1s, n0s;  
	while (!feof(stdin)){
		scanf("%d",&n); 
		count(n,&n1s,&n0s); 
		if (n1s > n0s) sprintf(s,"left\n");  
		else if (n1s == n0s) sprintf(s,"straight\n");  
		else sprintf(s,"right\n");  
		strcat(res,s);   
	}
	printf("%s",res);  
	return 0; 
}
