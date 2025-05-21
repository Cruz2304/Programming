#include <stdio.h> 
#include <stdlib.h>
#include <string.h>





int main(){

    FILE *file_ptr = fopen("floors.txt","r");

    if(!file_ptr){

        printf("\nError.\n");

        exit(EXIT_SUCCESS);

    }
    char input[10000];
    int floor=0;
    int basement=0;
    int lvl;
    int i;
    //we need to have a variable that declares the FIRST intitial floor//

    printf("\n\n\n*****Santa's white christmas*****\n\n\n");

    printf("To what floor he lands on: ");

    if(fgets(input, sizeof(input),file_ptr)==NULL){


        printf("\nThere is no input.\n");
        fclose(file_ptr); 
        
        return 1;
    }

    fclose(file_ptr);
    for(i=0,i<strlen(input);i++;){

        if(input[i]='(' ){

        floor++;


        }
        else if(input[i]=')'){

            basement--;

        }

    }

lvl=(floor+basement);
/*if(lvl==0){


    printf("\nfirst floor\n");

}*/
if(lvl>0){

printf("\nSanta is in floor %i",lvl);
}
else{
   
   
    printf("\nSanta is in basement %i",lvl);
}

return 0;
}


