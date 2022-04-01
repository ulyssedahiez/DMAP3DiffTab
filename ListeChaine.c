#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ListeChaine.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 10000
long long int counterLectureTri = 0;
long long int lecturemakeRandList =0;
int ecriture2 = 0;

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



void MakeRandList(liste ld){
    srand(time(NULL));
    long long int lecture = 0;
    long long int ecriture = 0;
    long long int tailleM = 0;
    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        double monEntier = (rand() * rand())%MAX;
        //printf("%f , ", monEntier);
        int isIn = 0;
        liste l=ld;
        while(l->next !=NULL){
           
            lecturemakeRandList+=1;
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
    printf("\nremplir liste : lecture : %lli, ecriture : %lli, taille memoire : %lli bytes \n", lecturemakeRandList, ecriture);
    
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
    int first = 0;
     
        if(lt->next == NULL && first ==0){
            ecriture2+=1;
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
            ecriture2+=1;
            
            lt = placer( lt, l->val);
            l=l->next;
    }
     printf("\nremplir liste : lecture : %lli, ecriture : %d, \n", counterLectureTri, ecriture2);
    
    return lt;

}
int itero = 0;
void iterInList(liste l, double var){
    itero = 0;
    int place = 0;
     while(l->next!=NULL){
         itero+=1;
         //printf("\nitero : %i", itero);
         if(l->val == var){
             place = itero;
         }
         l=l->next;
     }
     if(place == 0){
         printf("\n%f n'est pas dans le tableau.\n", var);
     }else{
         printf("%f est a la place %i.", var, place);
     }
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



liste  addInt(liste l, double  new, int iter) {
    liste first=l;
    liste temp = l;
    liste temp2 = l->next;
    if(iter == 0){
        liste obj = newElemList(new);
        obj->next=l;
        first=obj;
        counterLectureTri++;
    }else {
        int estder = 0;
        if(iter!=1){
    
    for( int i = 1; i<iter; i++){
        counterLectureTri++;
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



