#include <stdio.h>
int main()
 {
    int i,j;
    int rows=5; 
    for (i=1;i<=rows;i++)
	 {
        for (j=1;j<=5;j++)
		 {
            if (j==1 ||                  
                i==1 ||                  
                i==3 ||                  
                (j==5&&i==2))
				 {      
                printf("* ");
            } 
			else
			 {
                printf("  "); 
            }
        }
        
        printf("\n");
    }
}


//* * * * *
//*       *
//* * * * *
//*
//*
