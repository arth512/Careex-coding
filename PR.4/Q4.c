#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++){
			printf(" ");
	}
	for(k=i;k<=5;k++){
		if(k%2==0){
			printf("1");
		}
		else{
			printf("0");
		}
	}
		printf("\n");
	}
}



// 101010
//  01010
//   1010
//    010
//     10
//      0
