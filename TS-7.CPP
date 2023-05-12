#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int o,t=0,g=1,i;
	printf("enter number=");
	scanf("%d",&o);
	while(o>t)
	{
		printf("%d,",t);
		i=t+g;
		t=g;
		g=i;
	}
	getch();
}