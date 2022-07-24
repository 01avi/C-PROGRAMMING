#include<stdio.h>
main()
{
	int n,i,j,y;
	printf("Enter right angle length:- ");
	scanf("%d", &n);

        for(int i=1;i<=n;i++){
             for(int j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");

       }
}
