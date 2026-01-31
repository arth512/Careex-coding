#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    do {
        count++;
        num = num / 10;
    } 
	while (num != 0);
    printf("Total digits = %d", count);
}

