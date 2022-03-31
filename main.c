#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tableau.h"
#include "ListeChaine.h"

#define MAX 1000000
#define NUMS_TO_GENERATE 1000

int main(){
    /*double* tableau = malloc(sizeof(double)*NUMS_TO_GENERATE);
    double* tableauTrie = malloc(sizeof(double)*NUMS_TO_GENERATE);
    
    newTabl(tableau);

    dupliquertableau(tableauTrie, tableau);

    triSelection(tableauTrie, tableauTrie);
    double monEntier = (rand() * rand())%MAX;
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableau, monEntier), monEntier);
    printf("\ntableau non trie %i, val : %f\n", chercherNombre(tableauTrie, monEntier), monEntier);*/
    double ci = 501000;
    double test = 290322;
    double co = 20000;
    double inter =240598;
    liste l = newElemList(ci);
    liste lt = newElemList(ci);

    /*addIL(l, ci);
    addIL(l, test);
    addIL(l, co);*/

    MakeRandList(l);

    //dupListe(l, lt);
    printf("\nbug 1\n");

    // c'est ici que ça beug pelo
    lt = triList(l, lt);
    printf("\nbug 2\n");
    //l=addInt(l, inter, 4);
    
    printf("\n\nliste non trie : \n\n");
    afficherListe(l);
    printf("\n\nliste triee : \n\n");
    afficherListe(lt);

    printf("l : %f", l->val);
    
    

    
    return 0;

}

    


// exo 1

   //lecture : 705243486, ecriture : 100000
   //lecture : 705092013, ecriture : 100000
   //lecture : 705070453, ecriture : 100000