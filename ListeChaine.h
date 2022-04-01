struct Liste_{
    double val;
    struct Liste_ * next;
};
typedef  struct  Liste_ * liste;

liste newElemList(double v);

int estDansL(liste l, double val);

void  addIL(liste l, double  new);

liste  addInt(liste l, double  new, int iter);

double addRandList(liste l);

void MakeRandList(liste l);

void afficherListe(liste l);

void dupListe(liste l1, liste l2);

liste triList(liste l, liste lt);

liste placer(liste lt, double val);

void iterInList(liste l, double var);