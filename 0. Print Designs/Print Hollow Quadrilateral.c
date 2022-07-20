#include<stdio.h>
main()
{
	int n, m, i, j;
	printf("Enter Length of Quadrilateral:- ");
	scanf("%d", &m);
	printf("Enter Height of Quadrilateral:-");
	scanf("%d", &n);
	
	for( i=1;i<=n;i++){
        for( j=1;j<=m;j++){
            if(i==1  || j==1 || i==n || j==m) {
               printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
