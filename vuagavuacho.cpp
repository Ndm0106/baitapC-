#include<stdio.h>
#include<conio.h>

int main()
{
	int cho,ga;
	for(cho=1;cho<36;cho++)
	{
		for(ga=1;ga<36;ga++)
		{
			if((cho+ga==36) && (2*ga+4*cho==100))
			{
				printf("so ga la  %d",ga);
				printf("\nso cho la %d",cho);
			}
		}
	}
}
