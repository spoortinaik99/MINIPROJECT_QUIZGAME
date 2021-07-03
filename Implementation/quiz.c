#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
main(){
    
    mainhome:
    system("cls");
    printf("\t\t\t     QUIZ GAME\n");
    printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
   

     char  choice=toupper(getch());
    if(choice=='V')
	 {
         system("cls");
         show_record();
         system("cls");
         goto mainhome;
	 }
     else if(choice=='H')
	 {
         system("cls");
         help();
         getch();
         system("cls");
	     goto mainhome;
	 }
     else if(choice=='R')
	 {
         system("cls");
         reset_score();
	     getch();
	     goto mainhome;
      }
	 
     else if (choice=='Q')
	 {
         exit(1);
     }    
     else if(choice=='S'){
         printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     }
     else {
         printf("wrong choice\n");
         goto mainhome;
     }
}