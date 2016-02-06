// UNSW 2010 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main(){
	int i,n;  
	float x1,y1,x2,y2,x3,y3,a=0,b=0,area; 
	scanf("%d",&n);  
	scanf("%f%f",&x1,&y1);  
	x3 = x1; 
	y3 = y1; 
	while (n--){
		scanf("%f%f",&x2,&y2);  
		a += x1*y2;  
		b += y1*x2;  
		x1 = x2; 
		y1 = y2;  
	}
	a += x1*y3; 
	b += x3*y1;  
	area = fabs(a-b)/2;  
	printf("%f\n",area);  
	return 0;  
}
