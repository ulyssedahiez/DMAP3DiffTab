#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tableau.h"
#include "ListeChaine.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 1000

int main(){

    // ----------------Tableau--------------------

    /*double* tableau = malloc(sizeof(double)*NUMS_TO_GENERATE);
    double* tableauTrie = malloc(sizeof(double)*NUMS_TO_GENERATE);
    
    newTabl(tableau);

    dupliquertableau(tableauTrie, tableau);

    triSelection(tableauTrie, tableauTrie);
    double monEntier = (rand() * rand())%MAX;
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableau, monEntier), monEntier);
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableauTrie, monEntier), monEntier);*/
    

    // ----------------Liste Chainée--------------------

    /*double ci = 500000;
    
    liste l = newElemList(ci);
    liste lt = newElemList(ci);

   

    MakeRandList(l);


    lt = triList(l, lt);
    

    srand(time(NULL));
    double monEntier = (rand() * rand())%MAX;

    printf("\n iter dans la liste non trie :\n");
    iterInList(l, monEntier);
    printf("\n iter dans la liste trie :\n");
    iterInList(lt, monEntier);
*/
    
    // ----------------arbre binaire--------------------
    
    
    
    return 0;

}

    


// exo 1

   //lecture : 705243486, ecriture : 100000
   //lecture : 705092013, ecriture : 100000
   //lecture : 705070453, ecriture : 100000