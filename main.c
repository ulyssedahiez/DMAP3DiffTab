#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tableau.h"
#include "ListeChaine.h"
#include "arbreBinaire.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 1000

int main(){

    srand(time(NULL));
    double monEntier = (rand() * rand())%MAX;
    // ----------------Tableau--------------------

    double* tableau = malloc(sizeof(double)*NUMS_TO_GENERATE);
    double* tableauTrie = malloc(sizeof(double)*NUMS_TO_GENERATE);
    
    newTabl(tableau);

    dupliquertableau(tableauTrie, tableau);

    triSelection(tableauTrie, tableauTrie);
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableau, monEntier), monEntier);
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableauTrie, monEntier), monEntier);
    

    // ----------------Liste Chainée--------------------

    double ci = 500000;
    
    liste l = newElemList(ci);
    liste lt = newElemList(ci);

   

    MakeRandList(l);


    lt = triList(l, lt);
    

    

    printf("\n iter dans la liste non trie :\n");
    iterInList(l, monEntier);
    printf("\n iter dans la liste trie :\n");
    iterInList(lt, monEntier);

    
    // ----------------arbre binaire--------------------
    double da = 500000;
    arbreB ar = createNewA(da);
    

    MakeArbreTrie(ar);
    estDansArbre(ar, monEntier);

   // afficher_arbre_binaire(ar,0);
    return 0;

}

    
