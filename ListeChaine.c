#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListeChaine.h"

#define MAX 100000
#define NUMS_TO_GENERATE 10000




liste newElemList(double v){
    liste  elt = malloc(sizeof(struct Liste_));
    elt -> val = v;
    elt ->next = NULL;
    
    return  elt;
}

void  addIL(liste l, double  new) {
   if(l==NULL){ printf("error"); }
    while(l->next!=NULL){
        l=l->next;
    }
    
    l->next = newElemList(new);

}

double addRandList(liste l){
    double monEntier = (rand() * rand())%MAX;
    addIL(l, monEntier);
    return monEntier;
}

void MakeRandList(liste l){

    long long int lecture = 0;
    long long int ecriture = 0;
    liste first = l;
    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        double monEntier = (rand() * rand())%MAX;
        
        int isIn = 0;
        while(l->next !=NULL){
            
            l=l->next;

            if(l->val == monEntier){
                isIn =1;
                i-=1;
            }
            lecture+=1;
        }
        if(isIn == 0){
            
            addIL(l, monEntier);
            ecriture+=1;
            }
    }
    printf("\nremplir liste : lecture : %lli, ecriture : %lli\n", lecture, ecriture);
    
}

void afficherListe(liste l){
    printf("\n\n");
    int count = 0;
    while(l->next!=NULL){
        count++;
        printf("%f, ",l->val);
        l=l->next;
    }
    printf("\n\nil y a %i elements.\n", count);
    

}






