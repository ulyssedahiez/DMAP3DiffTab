#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "tableau.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 1000




double generateDouble(){

    return (rand() * rand())%MAX;

}



double* newTabl(double* tableau){

    int isIn = 0;
    int iter = 0;
    printf("beug1 \n");
    long long int lecture = 0;
    long long int ecriture = 0;

    srand(time(NULL));

    for (int i = 0; i < NUMS_TO_GENERATE; i++){

        double monEntier = (rand() * rand())%MAX;
        //printf("monEntier : %f, iter : %f \n", monEntier, iter);
        isIn = 0;
        iter =0;
        while (iter < i){
            
            lecture+=1;
            if(monEntier == tableau[iter]){
                printf("%f %f \n", monEntier, tableau[iter]);
                isIn =1;
                i-=1;
            }
                iter +=1;
        }

        if(isIn == 0){
            //printf("%f %f \n", monEntier, tableau[iter]);
        tableau[i] = monEntier;
        ecriture+=1;
        }
    }

    printf("\nremplir tableau : lecture : %lli, ecriture : %lli\n", lecture, ecriture);
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

 

double* triSelection(double* tableau, double* tableauTrie){
    long long int lecture = 0;
    long long int ecriture = 0;
    int tempi = 0;
    double prec = 0;
    double pluspetite = 0;
        for(int j=0; j<NUMS_TO_GENERATE;j++){
            
                
            double pluspetite2 = MAX;
    
            int tempo = 0;
            for(int i=0; i < NUMS_TO_GENERATE ; i++){
                lecture+=1;
                if(tableau[i]>pluspetite){
                    if(tableau[i]<pluspetite2){
                            
                            pluspetite2 = tableau[i];
                            tempi = i;
                            
                            
                    }
                }
                
            } 
                prec = tableau[tempi];
                tableauTrie[j] = prec;
                ecriture+=1;
            
            pluspetite = prec;  
        } 
    
    printf("\nremplir trier : lecture : %lli, ecriture : %lli\n", lecture, ecriture);
    return tableau;
}



int chercherNombre(double* tableau, double nombre){
    int tempi = 0;
    for(int i=0; i < NUMS_TO_GENERATE ; i++){
        if(tableau[i]== nombre){
            tempi =i;
            break;
        }
    }

    return tempi;

}




double* dupliquertableau(double* tableau1, double* tableau2){
    for(int i = 0 ; i < NUMS_TO_GENERATE ; i++){
        tableau1[i] = tableau2[i];
    }
    return tableau1;
}
