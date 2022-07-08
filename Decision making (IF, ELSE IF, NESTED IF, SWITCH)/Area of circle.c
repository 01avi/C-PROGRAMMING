#include<stdio.h>
main()
{
	 float p=3.14;
	 float R,A;
  
	 printf("PLEASE ENTER THE VALUE OF THE RADIOUS OF CIRCLE :- ");
	 scanf("%f", &R);
	 
	 	 if(R<=0)
	 	 {
	 	 	printf("CIRCLE IS NOT VALID\n");
	    	        printf("RADIOUS COULD BE GREATER THAN ZERO\n");
		 }
	
	            A= p*R*R;
                    printf("AREA OF THE CIRCLE IS:- %f", A);
}
	
