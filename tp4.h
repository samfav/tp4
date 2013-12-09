#ifndef __TP4__
#define __TP4__

typedef struct Noeud {
	char lettre;
	// pour l’arbre
	struct Noeud* pere;
	struct Noeud * filsgauche;
	struct Noeud * filsdroite;
	// pour la liste
	struct Noeud * next;
	} Noeud;
	typedef struct ListeNoeud {
	struct Noeud * debut;
	struct Noeud * fin;
} ListeNoeud;

#endif 
