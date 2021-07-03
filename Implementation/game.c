#include<stdio.h>
#include<string.h>
#include "fun.h"
void game(){
     int i,r1;
     char playername[20];
      printf("                         welcome to the quiz game\n");
          printf("                         here are the categories");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);
         system("cls");
   printf("\n *********** Welcome %s to C Program Quiz Game *****************",playername);
   printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n ********************************************************************************");

        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");

        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");

        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");

        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");

        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");

        printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");

        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");

        printf("\n >> You will be asked questions continuously, till right answers are given");

        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");

         printf("\n\n\n Press Y  to start the game!\n");

        printf("\n Press any other key to return to the main menu!");
       if (toupper(getch())=='Y')
		{
            system("cls");
		    goto home;
        }
        else{
             main();
        }

        home:
           printf("your game has started\n");
            system("cls");
     int count=0;
     
     
     for(i=1;i<=3;i++)
     {
        r1=i;
        switch(r1)
        {
                  case 1:
		          printf("\n\nA collecion of 8 bits are called?");
		          printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }
		
        
        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.byte");
		        getch();
		        system("cls");
		        break;
  	   	}
                  case 2:
		          printf("\n\nWhich of the following is a Palindrome number?");
		          printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		          if (toupper(getch())=='C')
		          {
			        printf("\n\nCorrect!!!");
                    count++;
			        getch();
			        system("cls");
			        break;
                 }
		
        
        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.23232");
		        getch();
		        system("cls");
		        break;
  	   	}
        
        system("cls");
        
        case 3:
		printf("\n\n\nWhich of the following is most oriented toward scientific programming ?");
		printf("\n\nA.Cobol\t\tB.Fortran\n\nC.c++\t\tD.Basic");
		
        
        if (toupper(getch())=='B')
		{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			system("cls");
            break;
        }
		
        
        else
        {
               printf("\n\nWrong!!! The correct answer is B.Fortran");
		       getch();
		       system("cls");
               break;
        }
      }
  }
     if(count>2){
          goto test;
     
     }
     else{
          printf("SORRY YOU ARE NOT QUALIFIED FOR THIS GAME,BETTER LUCK NEXT TIME\n");
          system("cls");
          main();
     }

     test:
        printf("WELCOME TO SECOND ROUND\n");
        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
}