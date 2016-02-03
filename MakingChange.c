// PLU novice 2011 
#include <stdio.h> 
#include <string.h> 

int main(){
	int coins[5] = {50,20,10,5,1}; 
	char res[1000],s[256]; 
	int n,c,i,j,m; 
	double x,y; 
	scanf("%d",&m); 
	for (j = 0; j < m; j++){
		scanf("%lf%lf",&x,&y); 
		n = y-x; 
		while (i < 5){
			c = n/coins[i]; 
			n -= c*coins[i]; 
			sprintf(s,"%d-$%d\n",c,coins[i]);   
			strcat(res,s); 
			i++;  
		}
		printf("%s",res); 
	}
	return 0; 
}
