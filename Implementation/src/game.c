#include<stdio.h>
#include<string.h>
#include "fun.h"
void game(){
     int i,r1,r,countr;
     int score;
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
		          printf("\n\n Which of the following is not a valid C variable name?");
		          printf("\n\nA.int number\t\tB.float rate\n\nC.int variable_count\t\tD.int $main");
		          if (toupper(getch())=='D')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }
		
        
        else
	    {
	            printf("\n\nWrong!!! The correct answer is D.int $main");
		        getch();
		        system("cls");
		        break;
  	   	}
                  case 2:
		          printf("\n\nWhat is the size of an int data type?");
		          printf("\n\nA.4 Byte \t\tB.8 Byte\n\nC.Depends on compiler\t\tD. Cannot be determined");
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
	            printf("\n\nWrong!!! The correct answer is C.Depends on Compiler");
		        getch();
		        system("cls");
		        break;
  	   	}
        
        system("cls");
        
        case 3:
		printf("\n\n\nWhich keyword is used to prevent any changes in the variable within a C program?");
		printf("\n\nA.immutable\t\tB.Mutable\n\nC.Const\t\tD.Volatile");
		
        
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
               printf("\n\nWrong!!! The correct answer is C.Volatile");
		       getch();
		       system("cls");
               break;
          }
        }
     }

     if(count>=2){
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
     if(toupper(getch())=='p')
     {
                              goto game;
     }
     game:
      countr=0;
     for(i=1;i<=10;i++)
     {
                       system("cls");
                       r=i;

     switch(r)
     {
		case 1:
		printf("\n\nAll are the example of input devices Except a:");
		printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
		if (toupper(getch())=='C')
		{
                                  printf("\n\nCorrect!!!");countr++;getch();
			                      break;
                                 
         }
		
        
        else
        {
                                  printf("\n\nWrong!!! The correct answer is C.Printer");
                                  getch();
		                          goto score;
		                          
        }

	
    	case 2:
		printf("\n\n\nWhat kind of file extension .mpg?,");
		printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
         }
	
    
    	else
        {
                    printf("\n\nWrong!!! The correct answer is A.Movie file");
                    getch();
	                goto score;
		            break;
	     }

        case 3:
        
		printf("\n\n\nA DVD is an example of a/an.. ");
		printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
		if (toupper(getch())=='D')
		{
                     printf("\n\nCorrect!!!");
                     countr++;
                     getch();
			         break;
                     }
		else
	    {
                    printf("\n\nWrong!!! The correct answer is D.Optical disk");
                    getch();
		            goto score;
		            break;
                    }

        case 4:
		printf("\n\n\nWho is he founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A')
		{
                                  printf("\n\nCorrect!!!");
                                  countr++;
                                  getch();
			                      break;
                                  }
		
        else
        {
                printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
                getch();
       	        goto score;
		        break;
		       }

        
        case 5:
		printf("\n\n\nWhich of he following is a web browser?");
		printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
		if(toupper(getch())=='B')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
		       getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\nWhat kind of file extension .bak?,");
		printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Backup file");
		       getch();
		       goto score;
		       break;
		       }
	
		case 7:
		printf("\n\n\nwhich of he following is a read only memory storage device ");
		printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
		if(toupper(getch())=='D')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is D.CDROM");
		       getch();
		       goto score;
		       break;
		       }
        case 8:
		printf("\n\n\nThe _____ shows all the web sites any pages that you have visited one of recent time ");
		printf("\n\nA.Hisory list\t\tB.Status bar \n\nC.task bar\t\tD.record");
		if(toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Hisory list");
		       getch();
		       goto score;
		       break;
		       }
        case 9:
		printf("\n\n\nA 32 bit word computer can access ____ bytes at a time ");
		printf("\n\nA.32\t\tB.16\n\nC.8\t\tD.4");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.8");
		       getch();
		       goto score;
		       break;
		       }
        case 10:
     	printf("\n\n\nWho is the founder of pixar animation?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;
                                 
                                 }
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Steve jobs");
		       getch();
		       goto score;
		       break;
		       }

		}
  }
     score:
       system("cls");
	score=countr*100;
	if(score>0 && score<1000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
       printf("\n\t You won $%d",score);
       goto go;
    }

	 else if(score==1000)
	 {
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t\t\t You won $%d",score);
	    printf("\n\t\t\t\t Thank You !!");
	 }
	 else
     {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;
     }

     go:
       printf("DO YOU WANT TO CONTINUE THE GAME");
       puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getchar())=='Y')
	{
		goto home;
    }
        else
	    {
	    
		    main();
        }
 }


