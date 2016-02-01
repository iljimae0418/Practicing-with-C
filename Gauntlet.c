// PLU 2011 Advanced Competition 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int checkBounds(int x, int y, int m, int n){
	return (x >= 0 && x < m && y >= 0 && y < n);  
}

int main(){
	int m,n,i,j,p,**a,x,y,sum;  
	char res[1024] = "", s[64];  
	scanf("%d",&p);  
	while (p--){
		scanf("%d%d",&m,&n);  
		a = (int **)malloc(m*sizeof(int *));  
		for (i = 0; i < m; i++){
			a[i] = (int *)malloc(n*sizeof(int));  
		}
		for (i = 0; i < m; i++){
			for (j = 0; j < n; j++){
				scanf("%d",a[i]+j);  
			}
		}
		x = 0, y = 0; 
		sum = a[0][0];  
		while (!((x == m-1) && (y == n-1))){
			if (checkBounds(x+1,y,m,n) && checkBounds(x,y+1,m,n)){
				if (a[x+1][y] >= a[x][y+1]){
					x++; 
				}else y++; 
			}else if (checkBounds(x+1,y,m,n)){
				x++; 
			}else if (checkBounds(x,y+1,m,n)){
				y++; 
			}
			sum += a[x][y];  
		}
		sprintf(s,"%d\n",sum);  
		strcat(res,s);  
	}
	printf("%s",res);  
	return 0; 
}
