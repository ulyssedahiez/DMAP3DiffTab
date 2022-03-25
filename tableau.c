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

/*double* newTabl(double* tableau){

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
    
}*/

double* newTabl(double* tableau){

    int isIn = 0;
    int iter = 0;

    long long int lecture = 0;
    long long int ecriture = 0;

    srand(time(NULL));

    for (int i = 0; i < NUMS_TO_GENERATE; i++){

        double monEntier = (rand() * rand())%MAX;

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

    printf("\nremplire tableau : lecture : %lli, ecriture : %lli\n", lecture, ecriture);
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
            

            //------------------------------------------

                
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

            //-------------------------------------------
                prec = tableau[tempi];
                tableauTrie[j] = prec;
                ecriture+=1;
            
            pluspetite = prec;  
        } 
    
    printf("\nremplire trier : lecture : %lli, ecriture : %lli\n", lecture, ecriture);
    return tableau;
}

int plusProche(double* tableau, double valeur){
    
    double prec2 = 0;
    double pluspetite2 = MAX;
    int tempi=0;
    int tempo = 0;
    for(int i=0; i < NUMS_TO_GENERATE ; i++){
                
                if(tableau[i]>valeur){
                if(tableau[i]<pluspetite2){

                        pluspetite2 = tableau[i];
                        tempi = i;
                        tempo = 1;
                        
                    }
                }
                
            } 
            return tempi;
            
            
}

int chercherNombre(double* tableau, double nombre){
    int tempi = 0;
    for(int i=0; i < NUMS_TO_GENERATE ; i++){

    }

    return tempi;

}




double* dupliquertableau(double* tableau1, double* tableau2){
    for(int i = 0 ; i < NUMS_TO_GENERATE ; i++){
        tableau1[i] = tableau2[i];
    }
    return tableau1;
}



