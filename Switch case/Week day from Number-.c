#include<stdio.h>
main()
{
	int week;
	printf("Enter week number(1-7)");
	scanf("%d",&week);
	switch(week)
	{case 1:
		printf("SUNDAY");
		break;
		case 2:
			printf("MONDAY");
			break;
			case 3:
				printf("TUESDAY");
				break;
				case 4:
					printf("WEDNESDAY");
					break;
					case 5:
						printf("THURSDAY");
						break;
						case 6:
							printf("FRIDAY");
							break;
							case 7:
								printf("SATURDAT");
								break;
								default:
									printf("INVALID INPUT!");
	}
}
