struct Liste_{
    double val;
    struct Liste_ * next;
};
typedef  struct  Liste_ * liste;

liste newElemList(double v);

void  addIL(liste l, double  new);

void  addInt(liste l, double  new, int iter);

double addRandList(liste l);

void MakeRandList(liste l);

void afficherListe(liste l);

void dupListe(liste l1, liste l2);

void triList(liste l, liste lt);