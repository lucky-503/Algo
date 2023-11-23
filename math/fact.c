#include <stdio.h>

#define INVALID_NUMBER -1

int fact(int n);
void display_result(int n, int fact_n);

int main(){
	/// Initialisations des données
	int n = 7;
	int fact_n = 1;	// valeur de n factorielle

	/// Traitement
	fact_n = fact(n);	// fact_n = n x (n - 1) x (n - 2) x ... x 1

	/// Résultats
	display_result(n, fact_n);

	return 0;
}
/*	Fonction qui retourne n factorielle (n: paramètre de la fonction)
	Retourne: - n factorille si le nombre est positif
			  - NULL sinon	*/
int fact(int n){
	int res = 1;

	if(n >= 0){
		for(int i = n; i > 0; i--){
			res *= i;	/* res = res * i */ // Multiplication de res par i, i allant de n à 1
			/*
				Initialisation la valeur de i par n, ie i = n.
				A chaque tours de boucle, la valeur de "i" se décremente et on stocke les résultats dans "res".
				On obtient alors: 
				res = i x (i - 1) x (i - 2) x ... x 1
			*/
		}
	}
	else{
		res = INVALID_NUMBER;
	}

	return res;
}

void display_result(int n, int fact_n){
	if(n >= 0){
		printf("%d factorielle = %d\n", n, fact_n);
	}
	else{
		fprintf(stderr, "Le nombre doit être positif!\n");
	}
}