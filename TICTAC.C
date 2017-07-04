#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void playerx();
void check();
void playero();
void computer();
int c,b,r,R,t,p,m,a,flag=0;
char ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9;
int main()
{
	int b,c;
	t=0;
	p=0;
	m=0;
    ch1=' ';
    ch2=' ';
    ch3=' ';
    ch4=' ';
    ch5=' ';
    ch6=' ';
    ch7=' ';
    ch8=' ';
    ch9=' ';
    if(flag==32)
        exit(0);
    system("clear");
	printf("\t\t\tWELCOME\nDo you want to continue?\nEnter 1 to continue\nEnter 2 to stop\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t® by ANKIT TRIPATHI\n");
	scanf("%d",&a);
	while((getchar()) != '\n');
	system("clear");
	if(a==1)
	{
	    printf("Thanks for continuing");
	    printf("\n Enter 1 to play single player");
	    printf("\n Enter 2 to play dual player\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t® by ANKIT TRIPATHI\n");
	    scanf("%d",&b);
	    while((getchar()) != '\n');
	    if(b==2)
	    {
	        system("clear");
	        printf("\t\t\tDual Player Mode\n");
	        printf("  %c|  %c|  %c\n___|___|___\n  %c|  %c|  %c\n___|___|___\n   |   |   \n  %c|  %c|  %c\n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9);
	        printf("\t\t\tPLAYER 1\n");
	        printf("Enter the number of box you want to change\n");
	        playerx();
	    }
	    if(b==1)
	    {
	    	system("clear");
	    	t=t+1;
	    	printf("how would you like to play?\n1. NORMAL MODE\n2. SMART MODE\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t® by ANKIT TRIPATHI\n");
	    	scanf("%d",&c);
	    	while((getchar()) != '\n');
	    	system("clear");
	    	if(c==1)
	    	{
	    	    printf("\t\t\tNORMAL MODE\n");
	    	    printf("  %c|  %c|  %c\n___|___|___\n  %c|  %c|  %c\n___|___|___\n   |   |   \n  %c|  %c|  %c\n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9);
	            srand(time(NULL));
	            r=rand()%2;
	            if(r==0)
	            {
	            printf("COMPUTER PLAYS FIRST\nEnter any number to continue.\n");
	            scanf("%d",&r);
	            while((getchar()) != '\n');
	            computer();
	            }
	            else
	            {
	            	p=p+1;
	            	printf("YOU PLAY FIRST\nEnter the number of box you want to change.\n");
	            	playerx();
	            }
	    	}
	    	if(c==2)
	    	{
	    	    m=m+1;
	    	    printf("\t\t\tSMART MODE\n");
	    	    printf("  %c|  %c|  %c\n___|___|___\n  %c|  %c|  %c\n___|___|___\n   |   |   \n  %c|  %c|  %c\n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9);
	            srand(time(NULL));
	            r=rand()%2;
	            if(r==0)
	            {
	            printf("COMPUTER PLAYS FIRST\nEnter any number to continue.\n");
	            scanf("%d",&r);
	            while((getchar()) != '\n');
	            computer();


	            }
	            else
	            {
	            	p=p+1;
	            	printf("YOU PLAY FIRST\n");
	            	playerx();
	            }
	    	}
	    	else
	    	{
	    		printf("Enter correct choice\nDo you want to try again?\n");
	    		scanf("%d",&c);
	    		while((getchar()) != '\n');
	    		main();
	    	}
	    }



	}
    else if(a==2)
	{
		printf("\n\t\t\tGAME OVER\n");
		exit(0);
	}
	else if (a!=2&&a!=1)
	{
	main();
	}

}
void playerx(){

	int b;
	scanf("%d",&b);
	while((getchar()) != '\n');
    switch(b)
	        {
	        	case 1:
	        	if(ch1==' ')
	        	ch1='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 2:
	        	if(ch2==' ')
	        	ch2='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 3:
	        	if(ch3==' ')
	        	ch3='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 4:
	        	if(ch4==' ')
	        	ch4='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 5:
	        	if(ch5==' ')
	        	ch5='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 6:
	        	if(ch6==' ')
	        	ch6='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 7:
	        	if(ch7==' ')
	        	ch7='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 8:
	        	if(ch8==' ')
	        	ch8='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	case 9:
	        	if(ch9==' ')
	        	ch9='x';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playerx();
	        	}
	        	break;
	        	default:
	        		printf("ENTER A VALID BOX NO. BETWEEN 1-9\n");
	        		playerx();
	        }
	        system("clear");
	        printf("  %c|  %c|  %c\n___|___|___\n  %c|  %c|  %c\n___|___|___\n   |   |   \n  %c|  %c|  %c\n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9);
	        check();
            if(t==0)
            {
            printf("\t\t\tPLAYER 2\n");
	        printf("\n\nEnter the number of box you want to change.\n");
	        playero();
	        }
	        else
	        {
	        computer();
	        }

}
void playero()
{
	int b;
	scanf("%d",&b);
	while((getchar()) != '\n');
    switch(b)
	        {
	        	case 1:
	        	if(ch1==' ')
	        	ch1='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 2:
	        	if(ch2==' ')
	        	ch2='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 3:
	        	if(ch3==' ')
	        	ch3='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 4:
	        	if(ch4==' ')
	        	ch4='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 5:
	        	if(ch5==' ')
	        	ch5='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 6:
	        	if(ch6==' ')
	        	ch6='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 7:
	        	if(ch7==' ')
	        	ch7='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 8:
	        	if(ch8==' ')
	        	ch8='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	case 9:
	        	if(ch9==' ')
	        	ch9='o';
	        	else
	        	{
	        	printf("\t\t\tALREADY TAKEN BOX. TRY AGAIN\n");
	        	playero();
	        	}
	        	break;
	        	default:
	        		printf("ENTER A VALID NUMBER BETWEEN 1-9\n");
	        		playero();
	        }
	        system("clear");
	        printf("  %c|  %c|  %c\n___|___|___\n  %c|  %c|  %c\n___|___|___\n   |   |   \n  %c|  %c|  %c\n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9);
	        check();
            if(t==0)
            {
            printf("\t\t\tPLAYER 1\n");
            printf("\nEnter the number of box you want to change\n");
	        playerx();
            }
	        else
	        computer();
}
void check()
{

	if((ch1=='x'&&ch2=='x'&&ch3=='x')||(ch1=='x'&&ch4=='x'&&ch7=='x')||(ch1=='x'&&ch5=='x'&&ch9=='x')||(ch2=='x'&&ch5=='x'&&ch8=='x')||(ch3=='x'&&ch6=='x'&&ch9=='x')||(ch5=='x'&&ch4=='x'&&ch6=='x')||(ch3=='x'&&ch5=='x'&&ch7=='x')||(ch7=='x'&&ch9=='x'&&ch8=='x'))
	{
		 if(t==0&&p==0)
	     printf("\t\t\tPLAYER1 WINS");
	     else if(t!=0&&p==0)
	     printf("\t\t\tCOMPUTER WINS");
	     else if(t!=0&&p!=0)
	     printf("\t\t\t WIN");
	     printf("\nDO YOU WANT TO PLAY ANOTHER ROUND?\n1. yes\n2. no\n");
	     scanf("%d",&b);
	     while((getchar()) != '\n');
	     if(b==1)
	     {
	     	system("clear");
         	main();
     	}
     	if(b==2)
     	{
     		flag=32;
     		main();
     	}
	}
		if((ch1=='o'&&ch2=='o'&&ch3=='o')||(ch1=='o'&&ch4=='o'&&ch7=='o')||(ch1=='o'&&ch5=='o'&&ch9=='o')||(ch2=='o'&&ch5=='o'&&ch8=='o')||(ch3=='o'&&ch6=='o'&&ch9=='o')||(ch5=='o'&&ch4=='o'&&ch6=='o')||(ch3=='o'&&ch5=='o'&&ch7=='o')||(ch7=='o'&&ch9=='o'&&ch8=='o'))
	{
		if(t==0)
	     printf("\t\t\tPLAYER2 WINS");
	     if(t!=0&&p==0)
	     printf("\t\t\tYOU WIN");
	     else
	     printf("\t\t\tCOMPUTER WINS");
	     printf("\nDO YOU WANT TO PLAY ANOTHER ROUND?\n1. yes\n2. no\n");
	     scanf("%d",&b);
	     while((getchar()) != '\n');
	     if(b==1)
	     {
	     	system("clear");
         	main();
     	}
     	if(b==2)
     	{
     		flag=32;
     		main();
     	}
	}
    if(ch1!=' '&&ch2!=' '&&ch3!=' '&&ch4!=' '&&ch5!=' '&&ch6!=' '&&ch7!=' '&&ch8!=' '&&ch9!=' ')
    {
     	printf("\t\t\tITS A DRAW");
	     printf("\nDO YOU WANT TO PLAY ANOTHER ROUND?\n1. yes\n2. no\n");
	     scanf("%d",&b);
	     while((getchar()) != '\n');
	     if(b==1)
	     {
	     	system("clear");
         	main();
     	}
     	if(b==2)
     	{
     		flag=32;
     		main();
     	}
    }
}
void computer()
{

	if(p==0)
    {
    if((ch1=='x'&&ch2=='x'&&ch3==' ')||(ch6=='x'&&ch9=='x'&&ch3==' ')||(ch7=='x'&&ch5=='x'&&ch3==' '))
    ch3='x';
    else if((ch3=='x'&&ch2=='x'&&ch1==' ')||(ch5=='x'&&ch9=='x'&&ch1==' ')||(ch7=='x'&&ch4=='x'&&ch1==' '))
    ch1='x';
    else if((ch1=='x'&&ch4=='x'&&ch7==' ')||(ch8=='x'&&ch9=='x'&&ch7==' ')||(ch3=='x'&&ch5=='x'&&ch7==' '))
    ch7='x';
    else if((ch1=='x'&&ch5=='x'&&ch9==' ')||(ch6=='x'&&ch3=='x'&&ch9==' ')||(ch7=='x'&&ch8=='x'&&ch9==' '))
    ch9='x';
    else if((ch1=='x'&&ch9=='x'&&ch5==' ')||(ch6=='x'&&ch4=='x'&&ch5==' ')||(ch7=='x'&&ch3=='x'&&ch5==' ')||(ch2=='x'&&ch8=='x'&&ch5==' '))
    ch5='x';
    else if((ch1=='x'&&ch3=='x'&&ch2==' ')||(ch5=='x'&&ch8=='x'&&ch2==' '))
    ch2='x';
    else if((ch1=='x'&&ch7=='x'&&ch4==' ')||(ch5=='x'&&ch6=='x'&&ch4==' '))
    ch4='x';
    else if((ch9=='x'&&ch3=='x'&&ch6==' ')||(ch5=='x'&&ch4=='x'&&ch6==' '))
    ch6='x';
    else if((ch7=='x'&&ch9=='x'&&ch8==' ')||(ch5=='x'&&ch2=='x'&&ch8==' '))
    ch8='x';
    else if((ch1=='o'&&ch2=='o'&&ch3==' ')||(ch6=='o'&&ch9=='o'&&ch3==' ')||(ch7=='o'&&ch5=='o'&&ch3==' '))
    ch3='x';
    else if((ch3=='o'&&ch2=='o'&&ch1==' ')||(ch5=='o'&&ch9=='o'&&ch1==' ')||(ch7=='o'&&ch4=='o'&&ch1==' '))
    ch1='x';
    else if((ch1=='o'&&ch4=='o'&&ch7==' ')||(ch8=='o'&&ch9=='o'&&ch7==' ')||(ch3=='o'&&ch5=='o'&&ch7==' '))
    ch7='x';
    else if((ch1=='o'&&ch5=='o'&&ch9==' ')||(ch6=='o'&&ch3=='o'&&ch9==' ')||(ch7=='o'&&ch8=='o'&&ch9==' '))
    ch9='x';
    else if((ch1=='o'&&ch9=='o'&&ch5==' ')||(ch6=='o'&&ch4=='o'&&ch5==' ')||(ch7=='o'&&ch3=='o'&&ch5==' ')||(ch2=='o'&&ch8=='o'&&ch5==' '))
    ch5='x';
    else if((ch1=='o'&&ch3=='o'&&ch2==' ')||(ch5=='o'&&ch8=='o'&&ch2==' '))
    ch2='x';
    else if((ch1=='o'&&ch7=='o'&&ch4==' ')||(ch5=='o'&&ch6=='o'&&ch4==' '))
    ch4='x';
    else if((ch9=='o'&&ch3=='o'&&ch6==' ')||(ch5=='o'&&ch4=='o'&&ch6==' '))
    ch6='x';
    else if((ch7=='o'&&ch9=='o'&&ch8==' ')||(ch5=='o'&&ch2=='o'&&ch8==' '))
    ch8='x';
    else if(m!=0)
    {
    	if(ch5==' ')
    	ch5='x';
    	else if(ch1==' ')
    	ch1='x';
    	else if(ch3==' ')
    	ch3='x';
    	else if(ch9==' ')
    	ch9='x';
    	else if(ch7==' ')
    	ch7='x';
    	else if(ch2==' ')
    	ch2='x';
    	else if(ch4==' ')
    	ch4='x';
    	else if(ch6==' ')
    	ch6='x';
    	else if(ch8==' ')
    	ch8='x';
    }



    else
    {
	srand(time(NULL));
    R=rand()%9;
	switch(R)
	{
	        	case 1:
	        	if(ch1==' ')
	        	ch1='x';
	        	else
	        	computer();
	        	break;
	        	case 2:
	        	if(ch2==' ')
	        	ch2='x';
	        	else
	        	computer();
	        	break;
	        	case 3:
	        	if(ch3==' ')
	        	ch3='x';
	        	else
	        	computer();
	        	break;
	        	case 4:
	        	if(ch4==' ')
	        	ch4='x';
	        	else
	        	computer();
	        	break;
	        	case 5:
	        	if(ch5==' ')
	        	ch5='x';
	        	else
	        	computer();
	        	break;
	        	case 6:
	        	if(ch6==' ')
	        	ch6='x';
	        	else
	        	computer();
	        	break;
	        	case 7:
	        	if(ch7==' ')
	        	ch7='x';
	        	else
	        	computer();
	        	break;
	        	case 8:
	        	if(ch8==' ')
	        	ch8='x';
	        	else
	        	computer();
	        	break;
	        	case 0:
	        	if(ch9==' ')
	        	ch9='x';
	        	else
	        	computer();
	        	break;
	        	default:
	        	printf("NO ROOM");
	        }

    }
	        system("clear");
	        printf("  %c|  %c|  %c\n___|___|___\n  %c|  %c|  %c\n___|___|___\n   |   |    \n  %c|  %c|  %c\n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9);
	        check();
	        printf("\n\t\t\tYOUR TURN\nEnter the number of box you want to change.\n");
	        playero();

	      }
	      else
	      {
	if((ch1=='o'&&ch2=='o'&&ch3==' ')||(ch6=='o'&&ch9=='o'&&ch3==' ')||(ch7=='o'&&ch5=='o'&&ch3==' '))
    ch3='o';
    else if((ch3=='o'&&ch2=='o'&&ch1==' ')||(ch5=='o'&&ch9=='o'&&ch1==' ')||(ch7=='o'&&ch4=='o'&&ch1==' '))
    ch1='o';
    else if((ch1=='o'&&ch4=='o'&&ch7==' ')||(ch8=='o'&&ch9=='o'&&ch7==' ')||(ch3=='o'&&ch5=='o'&&ch7==' '))
    ch7='o';
    else if((ch1=='o'&&ch5=='o'&&ch9==' ')||(ch6=='o'&&ch3=='o'&&ch9==' ')||(ch7=='o'&&ch8=='o'&&ch9==' '))
    ch9='o';
    else if((ch1=='o'&&ch9=='o'&&ch5==' ')||(ch6=='o'&&ch4=='o'&&ch5==' ')||(ch7=='o'&&ch3=='o'&&ch5==' ')||(ch2=='o'&&ch8=='o'&&ch5==' '))
    ch5='o';
    else if((ch1=='o'&&ch3=='o'&&ch2==' ')||(ch5=='o'&&ch8=='o'&&ch2==' '))
    ch2='o';
    else if((ch1=='o'&&ch7=='o'&&ch4==' ')||(ch5=='o'&&ch6=='o'&&ch4==' '))
    ch4='o';
    else if((ch9=='o'&&ch3=='o'&&ch6==' ')||(ch5=='o'&&ch4=='o'&&ch6==' '))
    ch6='o';
    else if((ch7=='o'&&ch9=='o'&&ch8==' ')||(ch5=='o'&&ch2=='o'&&ch8==' '))
    ch8='o';
	else if((ch1=='x'&&ch2=='x'&&ch3==' ')||(ch6=='x'&&ch9=='x'&&ch3==' ')||(ch7=='x'&&ch5=='x'&&ch3==' '))
    ch3='o';
    else if((ch3=='x'&&ch2=='x'&&ch1==' ')||(ch5=='x'&&ch9=='x'&&ch1==' ')||(ch7=='x'&&ch4=='x'&&ch1==' '))
    ch1='o';
    else if((ch1=='x'&&ch4=='x'&&ch7==' ')||(ch8=='x'&&ch9=='x'&&ch7==' ')||(ch3=='x'&&ch5=='x'&&ch7==' '))
    ch7='o';
    else if((ch1=='x'&&ch5=='x'&&ch9==' ')||(ch6=='x'&&ch3=='x'&&ch9==' ')||(ch7=='x'&&ch8=='x'&&ch9==' '))
    ch9='o';
    else if((ch1=='x'&&ch9=='x'&&ch5==' ')||(ch6=='x'&&ch4=='x'&&ch5==' ')||(ch7=='x'&&ch3=='x'&&ch5==' ')||(ch2=='x'&&ch8=='x'&&ch5==' '))
    ch5='o';
    else if((ch1=='x'&&ch3=='x'&&ch2==' ')||(ch5=='x'&&ch8=='x'&&ch2==' '))
    ch2='o';
    else if((ch1=='x'&&ch7=='x'&&ch4==' ')||(ch5=='x'&&ch6=='x'&&ch4==' '))
    ch4='o';
    else if((ch9=='x'&&ch3=='x'&&ch6==' ')||(ch5=='x'&&ch4=='x'&&ch6==' '))
    ch6='o';
    else if((ch7=='x'&&ch9=='x'&&ch8==' ')||(ch5=='x'&&ch2=='x'&&ch8==' '))
    ch8='o';
    else if(m!=0)
    {
    	if(ch5==' ')
    	ch5='o';
    	else if(ch1==' ')
    	ch1='o';
    	else if(ch3==' ')
    	ch3='o';
    	else if(ch9==' ')
    	ch9='o';
    	else if(ch7==' ')
    	ch7='o';
    	else if(ch2==' ')
    	ch2='o';
    	else if(ch4==' ')
    	ch4='o';
    	else if(ch6==' ')
    	ch6='o';
    	else if(ch8==' ')
    	ch8='o';
    }
	   else
	   {   	srand(time(NULL));
    R=rand()%9;
	switch(R)
	{
	        	case 0:
	        	if(ch1==' ')
	        	ch1='o';
	        	else
	        	computer();
	        	break;
	        	case 1:
	        	if(ch2==' ')
	        	ch2='o';
	        	else
	        	computer();
	        	break;
	        	case 2:
	        	if(ch3==' ')
	        	ch3='o';
	        	else
	        	computer();
	        	break;
	        	case 4:
	        	if(ch4==' ')
	        	ch4='o';
	        	else
	        	computer();
	        	break;
	        	case 5:
	        	if(ch5==' ')
	        	ch5='o';
	        	else
	        	computer();
	        	break;
	        	case 6:
	        	if(ch6==' ')
	        	ch6='o';
	        	else
	        	computer();
	        	break;
	        	case 7:
	        	if(ch7==' ')
	        	ch7='o';
	        	else
	        	computer();
	        	break;
	        	case 8:
	        	if(ch8==' ')
	        	ch8='o';
	        	else
	        	computer();
	        	break;
	        	case 3:
	        	if(ch9==' ')
	        	ch9='o';
	        	else
	        	computer();
	        	break;
	        }
	   }
	        system("clear");
	        printf("  %c|  %c|  %c\n___|___|___\n  %c|  %c|  %c\n___|___|___\n   |   |   \n  %c|  %c|  %c\n",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9);
	        check();
	        printf("\n\t\t\tYOUR TURN\nEnter the number of box you want to change.\n");
	        playerx();

	      }
}