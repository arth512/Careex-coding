#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0; i<5; i++){
		for(j=i; j<5; j++){
			printf(" ");
		}
		for(k=5-i; k<=5; k++){
			printf("%d", k);
		}
		printf("\n");
	}

}



//    5
//   45
//  345
// 2345
//12345
