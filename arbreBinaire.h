struct arbreB_ {
    double val;
    struct arbreB_ * la_droite; // next
    struct arbreB_ * la_gauche; // prev
};
typedef struct arbreB_ * arbreB;

arbreB createNewA(double val);

arbreB addA(arbreB a, double val);

arbreB MakeArbreTrie(arbreB a);

int inserer_dans_abo(arbreB* ceci, double quoi);

void afficher_arbre_binaire(arbreB ceci, int decalage);

void afficher_n_espaces(int n);

void afficher_element(double ceci);

int est_arbre_vide(arbreB ceci);

int est_inferieur_a(double ceci, double cela);

void estDansArbre(arbreB ceci, double cela);