#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "arbreBinaire.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 1000
#define ARBRE_VIDE NULL

int iterEstDans = 0;
long long int tailleA = 0;
long long int uno = 1;
long long int lecturemakeRandArbre = 0;
long long int ecrituremakeRandArbre = 0;
int doublons =0;

arbreB createNewA(double val){
    arbreB l = (arbreB)malloc(sizeof(struct arbreB_));
    l->val = val;
    l->la_droite = NULL;
    l->la_gauche=NULL;
    return l;
}


arbreB MakeArbreTrie(arbreB a){
    srand(time(NULL));
     arbreB first = a;
     long long int beforeEcriture = ecrituremakeRandArbre;
    for(int i =0; i<NUMS_TO_GENERATE; i++){
        double monEntier = (rand() * rand())%MAX;
        inserer_dans_abo(&a, monEntier);
        if(ecrituremakeRandArbre != beforeEcriture+1){
            
            i-=1;
        }
        beforeEcriture = ecrituremakeRandArbre;
        doublons =0;
    }
    printf("\nremplir arbre trie : lecture : %lli, ecriture : %lli, taille memoire : %lli bytes \n", lecturemakeRandArbre, ecrituremakeRandArbre, tailleA);
   
    return first;
}
int inserer_dans_abo(arbreB* ceci, double quoi){
    lecturemakeRandArbre+=1;
    if(!est_arbre_vide(*ceci) && (*ceci)->val == quoi){
        return 1;
    }
    else if (est_arbre_vide(*ceci)){
        *ceci = createNewA(quoi);
        ecrituremakeRandArbre+=1;
        tailleA += (long long int) sizeof(struct arbreB_);

    }else if (est_inferieur_a((*ceci)->val, quoi)){
        inserer_dans_abo(&((*ceci)->la_droite), quoi);
    }else{
        inserer_dans_abo(&((*ceci)->la_gauche), quoi);
    }
    return doublons;
}



int est_arbre_vide(arbreB ceci){
    return ceci == ARBRE_VIDE;
}

int est_inferieur_a(double ceci, double cela){
    
    return ceci<cela;
}


void afficher_arbre_binaire(arbreB ceci, int decalage){

    if(ceci != ARBRE_VIDE){
        afficher_arbre_binaire(ceci->la_gauche, decalage + 1);
        afficher_n_espaces((int)2*decalage);
        afficher_element(ceci->val);
        printf("\n");
        afficher_arbre_binaire(ceci->la_droite, decalage + 1);
    }
}

void estDansArbre(arbreB ceci, double cela){
    
    
    iterEstDans+=1;
    if(ceci->val == cela){
            printf("\n%f est trouve au bout de %i lectures.\n", cela, iterEstDans);
       
        }
    else if(est_inferieur_a(ceci->val, cela)){
        estDansArbre(ceci->la_droite, cela);
        
    }else{
        estDansArbre(ceci->la_gauche, cela);
    }
}

void afficher_n_espaces(int n){
    for(int i = 0; i < n; i++){
        printf(" ");
    }
}

void afficher_element(double ceci){
    printf("%f", ceci);
}




