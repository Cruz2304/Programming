#include <stdio.h>
#include <stdlib.h>


void intro();
int shoot();
int roleBot();
int randomizer();




int main(){



// randomizer on whether or not stranger is guilt or innocent//

// prompt user to shoot the stranger// 

//create if structures for the results// 

//have different types of descriptive people walk up to you// 
// shoot will return playuer choice and this int will be put into an argument function of the result (we will be using pointers)//

intro();
shoot();
};


void intro(){

printf("\n\n\t\tGuess the imposter shooting game\n\n");
printf("\nYou will choose whoever walks up to you is either innocent or is set out to kill you.");

}
int roleBot(){


//random generator between 1. Innocent or 2. Murderer//

//this will return a value//

//make a "result" function and compare shoot function return value to this return value to make the result//

//in the main function. create a variable for a starnger and make it equal to this function//

//R E M E M B E R. Make some pointers// 

// Learn structures and TRY to implement them into this project//



}
int shoot(){
int choice;
printf("\nwhat will you do?");
   printf("\n1. Shoot\n2. DO nothing\n"); 
while (choice < 1 || choice > 2){

 printf("choose:"); scanf("%d",&choice);
}

switch (choice){
   case 1: 
      printf("You have shot your gun.");
      break;
   case 2:
      printf("You've decided to do nothing");
      break;
   default:
      printf("wrong choice try again...");
}

return choice;
}
int randomizer(){






}


