#include "fun.h"
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(){
    system("cls");
    printf("\t\t\t     QUIZ GAME\n");
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

	 }
     else if(choice=='H')
	 {
         system("cls");
         help();
         
	 }
     else if(choice=='R')
	 {
         system("cls");
         reset_score();
	     
     }
     else if (choice=='Q')
	 {
         exit(1);
     }    
     else if(choice=='S'){
         game();
     }
     else {
         printf("wrong choice\n");
     }
return 0;
}