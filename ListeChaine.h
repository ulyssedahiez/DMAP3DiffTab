struct Liste_{
    double val;
    struct Liste_ * next;
};
typedef  struct  Liste_ * liste;

liste newElemList(double v);

void  addIL(liste l, double  new);

double addRandList(liste l);

void MakeRandList(liste l);

void afficherListe(liste l);

void dupListe(liste l1, liste l2);