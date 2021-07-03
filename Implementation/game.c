#include<stdio.h>
#include<string.h>
#include "fun.h"
void game(){
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
       
}