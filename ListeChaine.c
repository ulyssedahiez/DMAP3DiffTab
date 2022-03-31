#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ListeChaine.h"

#define MAX 1000000
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
liste  addInt(liste l, double  new, int iter) {
    liste first=l;
    liste temp = l;
    liste temp2 = l->next;
    if(iter == 0){
        liste obj = newElemList(new);
        obj->next=l;
        first=obj;
    }else {
        int estder = 0;
        if(iter!=1){
    
    for( int i = 1; i<iter; i++){
        if(temp2->next != NULL){
            temp = temp->next;
            temp2 = temp2->next;
        }else{
            estder=1;
            temp = temp->next;
        }
    }
        }
    if(estder==0){
        liste obj = newElemList(new);
        temp->next = obj;
        obj->next = temp2;
    }else{
        liste obj = newElemList(new);
        temp->next = obj;
    }
    }
    return first;
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
    
    printf("%f, ",l->val);
    printf("\n\nil y a %i elements.\n\n", count); 

}

void dupListe(liste l1, liste l2){
    while(l1->next!=NULL){
        addIL(l2, l1->val);
        l1=l1->next;
    }
}


liste triList(liste l, liste lt){
    lt->val = l->val;
    l = l->next;
    int iter = 0;
    int first = 0;
    liste firstLt = lt;
        if(lt->next == NULL && first ==0){
                    double firstc = 500000.000;
                    if(l->val >= firstc ){
                        addIL(lt, l->val);
                    }else{
                        liste bFirst = newElemList(l->val);
                        bFirst->next = lt;
                        lt=bFirst;
                    }
                first = 1;
                l=l->next;
                }
    while(l->next!=NULL){
            lt = placer( lt, l->val);
            l=l->next;
    }
    return lt;

}

liste placer(liste lt, double val){
    liste firstLt = lt;
    int  iter = 0;
    while(lt->next!=NULL){
                if(val > lt->val){
                        iter++;
                }
                lt=lt->next;
            }
            if(lt->next == NULL && val > lt->val ){
                    iter++;
                }
            lt = addInt(firstLt, val,iter);
    return lt;
        
}







