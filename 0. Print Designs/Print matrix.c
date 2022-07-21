 #include<stdio.h>
main()
{
	int n,i,j,m;
	printf("Enter row length:- ");
	scanf("%d", &n);
		printf("Enter colomn length:- ");
	scanf("%d", &m);
	
	  for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
           printf("*");
        }
        printf("\n");
    }


}
