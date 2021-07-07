#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void help();
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t  DEPSTAR MINI-PROJECT C LANGAUGE QUIZ    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
    if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are in total 5 questions regarding c langauge");

    printf("\n    By this  you can win upto FIVE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=5;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe c langauge has been developed at...");
		printf("\n\nA.IBM,USA\t\tB.Sun Microsystem\n\nC.AT & T Bell labs\t\tD.Borland,USA");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.AT & T Bell labs");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nC langauge was developed in the year?");
		printf("\n\nA.1980\t\tB.1972\n\nC.1971\t\tD.1975");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.1972");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nThe c program are converted in machine langauge using?");
		printf("\n\nA.Assembler\t\tB.Compiler\n\nC.Interpreter\t\tD.Operating system");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Compiler");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nIn Turbo-C editor _____ is used to execute the program");
        printf("\n\nA.Alt+C\t\tB.  ctrl+f9\n\nC.Alt+f9\t\tD.Enter");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.ctrl+f9");
		       getch();
		       break;}


		       }
     }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT QUALIFIED, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you have completed your quiz ***",playername);
     printf("\n\n\n\n\t!Press any key to see your score!");
     if(toupper(getch())=='p')
		{goto score;}

	score:
    system("cls");
	score=(float)count*100000;
	if(score>0.00 && score<=5000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\n\tscore is %d",count);
	     printf("\n\t You won $%.2f",score);

	     goto go;}


	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	    printf("\n\n\tC PROGRAM QUIZ GAME is developed by \n\t\t->Dhrumil Mehta(18DCE056)");
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		goto mainhome;}}

     }




void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There is a quiz related to C language");
    printf("\n >> There will be in total five questions");
    printf("\n    Each question will give you ONE MILLION ");
    printf("\n    You should be qualified if u have atleast 2 correct answers");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by \n\t\t->Dhrumil Mehta(18DCE056)");getch();}



