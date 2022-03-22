#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tableau.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 10000



double* newTabl(double* tableau){

    int isIn = 0;
    int iter = 0;

    int lecture = 0;
    int ecriture = 0;

    srand(time(NULL));

    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        
        double monEntier = rand() % MAX;

        isIn = 0;
        iter =0;

        while (iter < i){
            lecture+=1;
            if(monEntier == tableau[iter]){
                isIn =1;
                i-=1;
            }
                iter +=1;
        }

        if(isIn == 0){
        tableau[i] = monEntier;
        ecriture+=1;
        }
    }

    printf("lecture : %i, ecriture : %i", lecture, ecriture);
    return tableau;
    
}

double* triSelection(double* tableau){
    int min = 0;
    double temp = 0;
     for(int i = 0 ; i < NUMS_TO_GENERATE-1 ; i++)
     {
         min = i;                 
         for(int j = i+1 ; j < NUMS_TO_GENERATE ; j++)
             if(tableau[j] < tableau[min])
                min = j;
         if(min!=i)
         {
            //échanger t[i] et t[min]
            temp = tableau[i];
            tableau[i]=tableau[min];
            tableau[min]=temp;          
         }
     }
     return tableau;
}
     

