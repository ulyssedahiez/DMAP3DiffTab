#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListeChaine.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 10




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
void  addInt(liste l, double  new, int iter) {
    
    liste temp = l;
    liste temp2 = l->next;
    for( int i = 0; i<iter; i++){
        printf(" iter : %i \n", i);
        if(temp2->next != NULL){
            temp = temp->next;
            temp2 = temp2->next;
        }
    }

    liste obj = newElemList(new);
    temp->next = obj;
    obj->next = temp2;
    

}


double addRandList(liste l){
    double monEntier = (rand() * rand())%MAX;
    addIL(l, monEntier);
    return monEntier;
}

void MakeRandList(liste l){
    srand(time(NULL));
    long long int lecture = 0;
    long long int ecriture = 0;
    long long int tailleM = 0;
    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        double monEntier = (rand() * rand())%MAX;
        //printf("%f , ", monEntier);
        int isIn = 0;
        while(l->next !=NULL){
            lecture+=1;
            l=l->next;

            if(l->val == monEntier){
                isIn =1;
                i-=1;
            }
            
        }
        if(isIn == 0){
            //printf("oui : %f", monEntier);
            addIL(l, monEntier);
            ecriture+=1;
            tailleM+= (long long int) sizeof(l);
            }
    }
    printf("\nremplir liste : lecture : %lli, ecriture : %lli, taille memoire : %lli bytes \n", lecture, ecriture);
    
}

void afficherListe(liste l){
    printf("\n\n afficherListe : \n\n");
    int count = 0;
    while(l->next!=NULL){
        count++;
        printf("%f, ",l->val);
        l=l->next;
    }
    printf("\n\n\nil y a %i elements.\n\n\n", count); 

}

void dupListe(liste l1, liste l2){
    while(l1->next!=NULL){
        addIL(l2, l1->val);
        l1=l1->next;
    }
}

void triList(liste l, liste lt){
    lt->val = l->val;
    l = l->next;
    liste ltb=lt;
    int iter = 0;
    int first = 0;
    while(l->next!=NULL){
        printf("iter : %i \n", iter);
        // pour le premier ellement
        if(lt->next == NULL && first ==0){
            double firstc = 500000;
            if(l->val >= firstc ){
                addIL(lt, l->val);
            }else{
                liste bFirst = newElemList(l->val);
                bFirst->next = lt;
            }
        first = 1;
        //pour tout les autres
        }else{
            
            while(lt->next!=NULL){
                if(lt->next != NULL && lt->next->val < l->val ){
                    lt=lt->next;  
                    iter ++;
                }
            }

            printf("%i, ",iter);
        
            addInt(lt, l->val, iter-1);
            l=l->next;
            lt=ltb;
            iter = 0;

        }
        

    }

}







