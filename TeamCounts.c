/* UNSW 2011
Example Input: 
4
7
9
2
1
Example Output: 
7 participants = 1 team of 3, 2 teams of 2  
9 participants = 3 teams of 3.  
2 participants = 1 team of 2.  
1 participant = 1 team of 1.  
*/

#include <stdio.h> 
#include <stdlib.h> 
int main(){
	int i,n,m,Threes,Twos,Ones,*members,rem;  
	scanf("%d",&n);  
	members = (int *)malloc(n*sizeof(int));  
	for (i = 0; i < n; i++){
		scanf("%d",members+i);  
	}
	for (i = 0; i < n; i++){
		if (members[i] == 1){
			printf("1 participant = 1 team of 1.\n");  
			continue; 
		}
		Threes = members[i]/3;  
		rem = members[i]%3; 
		if (rem == 1){
			Twos = 2; 
			Threes--;  
		}else Twos = 1;  
		printf("%d participants = ",members[i]);  
		if (Threes){
			if (Threes == 1) printf("1 team of 3,");  
			else printf("%d teams of 3,",Threes);  
		}
		if (Twos){
			if (Twos == 1) printf("1 team of 2,");  
			else printf("%d teams of 2,",Twos); 
		}
		printf("\n");  
	}
	return 0; 
}
