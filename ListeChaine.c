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
    long long int tailleM = 0;
    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        double monEntier = (rand() * rand())%MAX;
        
        int isIn = 0;
        while(l->next !=NULL){
            
            l=l->next;

            if(l->val == monEntier){
                isIn =1;
                i-=1;
            }
            //printf("%i, ",lecture);
        }
        if(isIn == 0){
            
            addIL(l, monEntier);
            ecriture+=1;
            tailleM+= (long long int) sizeof(l);
            }
    }
    printf("\nremplir liste : lecture : %lli, ecriture : %lli, taille memoire : %lli bytes \n", lecture, ecriture);
    
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

void dupListe(liste l1, liste l2){
    while(l1->next!=NULL){
        addIL(l2, l1->val);
        l1=l1->next;
    }
}

void triList(liste l, liste lt){
    lt->val = l->val;
    while(l->next!=NULL){
        while(lt->next!=NULL){
            if(lt->val = l->val){
                
            }
            lt=lt->next;

        }
        l=l->next;

    }

}







