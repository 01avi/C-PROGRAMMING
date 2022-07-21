 #include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter right angle length:- ");
	scanf("%d", &n);
     
      for( i=1;i<=n;i++){
                 for(j=1;j<=n-i+1;j++){
                    printf("%d",j);
                }
                printf("\n");
        }
        
     
}
