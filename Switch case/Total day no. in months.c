#include<stdio.h>
main()
{
	int month;
    
    printf("ENTER MONTH NUMBER{1-12}:-");
    scanf("%d",&month);
    switch(month)
    {
    	case 1:
    		printf("total no. of days in JANUARY=31");
    		break;
    		case 2:
    			printf("total no. of days in FEBRUARY=28");
    			printf(",,  total no. of days in LEAP FEBRUARY=29");
    			break;
    			case 3:
    				printf("total no. of days in MARCH=31");
    				break;
    				case 4:
    					printf("total no. of days in APRIL=30");
    					break;
    					case 5:
    						printf("total no. of days in MAY=31");
    						break;
    						case 6:
    							printf("total no. of days in JUNE=30");
    							break;
    							case 7:
    								printf("total no. of days in JULY=31");
    								break;
    								case 8:
    									printf("total no. of days in AUGUST=30");
    									break;
    									case 9:
    										printf("total no. of days in SEPTEMBER=31");
    										break;
    										case 10:
    											printf("total no. of days in OCTOBER=30");
    											break;
    											case 11:
    												printf("total no. of days in NOVEMBER=31");
    												break;
    												case 12:
    													printf("total no. of case in DECEMBER=30");
    													break;
    													default:
    														printf("WRONG INPUT!!!!");
    														break;
    													
    									
    											
	}
    
	
}
