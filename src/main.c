#include "regle.h"
#include "bc.h"

int main(){

    char input[255];

    // Création de 3 règles

    printf("Creation regle vide");
    Regle r1 = creer_regle();
    
    printf("\nAjout proposition 1 : ");
    gets(input);
    r1 = ajout_proposition(r1,input);
    
    printf("\nAjout conclusion: ");
    gets(input);
    r1 = ajout_conclusion(r1, input);

    afficher_regle(r1);

    printf("\nCreation regle vide");
    Regle r2 = creer_regle();

    printf("\nAjout proposition 2 : ");
    gets(input);
    r2 = ajout_proposition(r2,input);
    
    printf("\nAjout conclusion: ");
    gets(input);
    r2 = ajout_conclusion(r2, input);

    afficher_regle(r2);

    printf("\nCreation regle vide");
    Regle r3 = creer_regle();

    printf("\nAjout proposition 2 : ");
    gets(input);
    r3 = ajout_proposition(r3,input);
    
    printf("\nAjout conclusion: ");
    gets(input);
    r3 = ajout_conclusion(r3, input);

    afficher_regle(r3);

    // Création de la base de connaissance
    /*
    BC b = creer_base();
    b = ajout_regle(b,r1);
    b = ajout_regle(b,r2);
    afficher_regle(b->suiv->rgl);
    b = ajout_regle(b,r3);

    afficher_bc(b); */

    // Libération de l'espace 
    libere_regle(r1);
    libere_regle(r2);
    libere_regle(r3);
    
    return 0;
}