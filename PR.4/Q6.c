#include <stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			printf("%d",1+j);
		}
		for(j=i;j<=3;j++){
			printf("  ");
		}
		for(k=5-i;k<=5;k++){
			printf("%d",6-k);
		}
		printf("\n");
	}
}



//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1
