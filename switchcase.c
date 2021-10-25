#include<stdio.h>
#include<conio.h>
int main(){
	
int x;
printf("enter the value of x\n");  // value of x denote the name of day of week	
scanf("%d",&x);
switch(x)	
{
 case 1:
    {
	printf("day is monday");
	break;
	}	
case 2:
  {
	printf("day is tuesday");
	break;
	}	
	case 3:
		{ 
		printf("day is wednesday");
		break;
		}
	case 4:
		{
			printf("day is thursday");
		break;	
		}
	case 5:
		{ 
		printf("enter day is friday");
		break;
		}
	case 6:
		{
			printf("enter day is satuday");
			break;
		}
	
	case 7:
		{
			printf("enter day is sunday");
			break;
default :
	{
		printf("none is matched");
	}
}
}
}