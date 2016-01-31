// UNSW High Schools Programming Competition 2010 
// Climb Analysis 
#include <stdio.h> 
#include <stdlib.h> 

int main(){
	int i,n;  
	float x1,y1,x2,y2,tot = 0.0,stot = 0.0;  
	scanf("%d",&n); 
	scanf("%f%f",&x1,&y1); 
	while (--n){
		scanf("%f%f",&x2,&y2);  
		if (y2 > y1){
			x1 = (x2-x1)*1000/(y2-y1);  
			tot += (y2-y1); 
			if (x1 <= 10) stot += (y2-y1); 
		}
		x1 = x2; 
		y1 = y2; 
	}
	printf("%f%f\n",tot,stot); 
	return 0; 
}
