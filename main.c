#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tableau.h"

#define NUMS_TO_GENERATE 100000

int main(){

    double* tableau = malloc(sizeof(double)*NUMS_TO_GENERATE);
    //double* tableauTrie = malloc(sizeof(double)*NUMS_TO_GENERATE);
    printf("\n oui zin \n");
    tableau = newTabl(tableau);
    printf("\n oui zo \n");
    //tableauTrie = triSelection(tableau);
    
    printf("\n oui 1 \n");
    int i=NUMS_TO_GENERATE-200;
    while(i<100000){
        printf("%f, ", tableau[i]);
        i+=1;
    }
    printf("\n oui 2 \n");

    
    return 0;
}

// exo 1

   //lecture : 705243486, ecriture : 100000
   //lecture : 705092013, ecriture : 100000
   //lecture : 705070453, ecriture : 100000