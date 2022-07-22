#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter Pyramid length:- ");
	scanf("%d", &n);
	
             for(i=1;i<=n;i++){
                 //spaces;
                 for(j=1;j<=n-i;j++){
                    printf(" ");
                  
                }
                //numbers-print row no.,row no times;
                for( j=1;j<=i;j++){
                  printf("%d ",i);
                }  
                printf("\n");         
        }
}
    

