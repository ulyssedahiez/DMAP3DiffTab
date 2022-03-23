#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "tableau.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 100000



/*double* newTabl(double* tableau, int iter){

    int lecture = 0;
    int ecriture = 0;
    
    srand(time(NULL));
        
    double monEntier = rand() % MAX;

    if(iter == NUMS_TO_GENERATE){
        printf("lecture : %i, ecriture : %i", lecture, ecriture);
        return tableau;
    }

    if(estDans(monEntier, tableau, &lecture) == 0){
        tableau[iter] = monEntier;
        iter +=1;
        ecriture+=1;
        newTabl(tableau, iter);
    }else{
        newTabl(tableau, iter);
    }  
    return 0;
}*/
double generateDouble(){
    

    return (rand() * rand())%MAX;

    
}

double* newTabl(double* tableau){

    int isIn = 0;
    int iter = 0;

    int lecture = 0;
    int ecriture = 0;


    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        
        double monEntier = generateDouble();

        isIn = 0;
        

        

        if(estDans(monEntier, tableau, &lecture) == 0){
        tableau[i] = monEntier;
        ecriture+=1;

        printf("%i\n ", ecriture);
        }else{
            i--;
        }
    }

    printf("lecture : %i, ecriture : %i", lecture, ecriture);
    return tableau;
    
}


int estDans(double monNombre, double* tableau, int* lecture){
    int isIn = 0;
    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        if(tableau[i]== monNombre){
            *lecture +=1;
            isIn = 1;
            break;
        }
    }
    return isIn;
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
     

