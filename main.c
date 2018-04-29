#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fractal.h"

int main()
{
    /* TODO */
	int i;
	struct fractal *tabfracts = malloc(sizeof(struct fractal * 1000));
	struct fractal *tabcandid = malloc(sizeof(struct fractal * 4));
	struct linkedfractal *maxfract = malloc(sizeof(struct fractal))

	if (tabfracts == NULL || tabcandid == NULL)
	{
		//retourne erreur
	}

	pthread_t thread[5];

	pthread_create(thread[4], NULL, compare_to_max, (void*)tabcandid);
	pthread_join(thread[4], linked)//jsp comment gérer la liste chainée

	for (i = 0; i < 4; i++) {
		pthread_create(thread[i], NULL, fractal_compute_averageandtable, (void*)tabfracts);
	}

	for (i = 0; i < 4; ++i) {
		pthread_join(threads[i], (void**)&tabcandid[i]);
	}


    /*
      on va chercher dans le fichier une fractale, ensuite un thread (le producteur) se charge de faire le calcul sur la fractale grace a la methode fractal_compute_value
      puis stock le resultat du calcul dans le tableau de donnee. une fois qu'une donnée a été placé un autre thread (consommateur), va chercher cette donnee
      pour ensuite l'utiliser et afficher sur l'ecran la valeur correspondant à une couleur du pixel suite au calcul iteratif.

      dans la premiere etape, on va chercher les donnees de la fractal qui nous interesse ( nom, taille, a, b, etc..), grace aux fonctions get
      apres quoi, on creer une nouvelle fractal, grace a la fonction fractal_new. Une fois que cette nouvelle fractal est cree, on lui applique la fonction fractal_compute_value
      puis on va stocker la valeur retourner par la fonction dans le tableau.

      l'acces aux tableaux constituera les section critique, il nous faudra utiliser les mutex afin de bloquer l'acces

    */

    // etape1: traitement du fichier



    int fichier;
    fichier = open("fractale.txt")

    return 0;
}

/*fonction qui ouvre un fichier, et fait le traitement ligne par ligne
  elle prend en parametre le nom du fichier
*/

void fichier(const char *pathname){
  int fd, i = 0;
  char fractalTab[];
  int line[256];
  fd = open(pathname, O_RDONLY);
  if(fd == -1){
    error("erreur lors de l'ouverture du fichier\n");
    exit(EXIT_FAILURE);
  }
  printf("l'ouverture du fichier a reussi\n");

    /* chaque ligne du fichier etant une description de la fractale
     on stock chaque ligne dans le tableau fractalTab
     ensuite, pour chaque element du tableau (ligne par ligne)
     tant que le caractere courant n'est pas egale a '\0', on parcour la ligne
     des que c'est le cas, sachant dans quel ordre sont agencé les elements du tableau
     on definit le premier mot comme etant le nom etc.., puis on affecte ses valeur
     a la strucutr fractale*/

     while(!eof){
       char lineRead[] = read(fd, (void *) &line, 50); //on lit les 50 premiere lettres du fichier
       fractalTab[i] = lineRead;
     }




}
