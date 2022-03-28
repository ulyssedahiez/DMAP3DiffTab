#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tableau.h"
#include "ListeChaine.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 100000

int main(){
    /*double* tableau = malloc(sizeof(double)*NUMS_TO_GENERATE);
    double* tableauTrie = malloc(sizeof(double)*NUMS_TO_GENERATE);
    
    newTabl(tableau);

    dupliquertableau(tableauTrie, tableau);

    triSelection(tableauTrie, tableauTrie);
    double monEntier = (rand() * rand())%MAX;
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableau, monEntier), monEntier);
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableauTrie, monEntier), monEntier);*/
    double ci = 500000;
    liste l = newElemList(ci);
    liste lt = newElemList(ci);

    MakeRandList(l);

    //dupListe(l, lt);

    //afficherListe(lt);
    

    printf("l : %f", l->val);
    
    

    
    return 0;

}

    


// exo 1

   //lecture : 705243486, ecriture : 100000
   //lecture : 705092013, ecriture : 100000
   //lecture : 705070453, ecriture : 100000