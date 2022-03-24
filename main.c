#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tableau.h"

#define NUMS_TO_GENERATE 100000

int main(){
    double* tableau = malloc(sizeof(double)*NUMS_TO_GENERATE);
    double* tableauTrie = malloc(sizeof(double)*NUMS_TO_GENERATE);
    
    newTabl(tableau);

    dupliquertableau(tableauTrie, tableau);

    triSelection(tableauTrie, tableauTrie);
    double tyo = 200;
    plusProche(tableau, tyo);

    for(int i = 0; i<50; i++){
        printf("%f, ",tableauTrie[i]);
    }

    
    return 0;

}

    


// exo 1

   //lecture : 705243486, ecriture : 100000
   //lecture : 705092013, ecriture : 100000
   //lecture : 705070453, ecriture : 100000