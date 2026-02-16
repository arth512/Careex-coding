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
		for(j=1;j<=i;j++){
			printf("%d",5-j);
		}
		printf("\n");
	}
}


//     5
//    454
//   34543
//  2345432
// 123454321
