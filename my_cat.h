/*  MY_CAT.H
 *
 * Contient les fonctions li�es � la commande cat
 *
 */

#ifndef _MY_CAT_
#define _MY_CAT_

#include "my_shell.h"

/* Fonction: affiche_fichier
 * Entrees: fichier
 * 			option d'affichage
 *
 * Sortie: aucune
 *
 * Affiche le contenu d'un fichier
 * Si option_n vaut 1, la num�rotation des lignes est activ�e,
 * sinon elle ne l'est pas
 * G�re le dernier retour chariot d'un fichier texte
 */
void affiche_fichier(FILE* fichier, int option_n);

/* Fonction: my_cat
 * Entrees: le premier fichier
 * 			le second fichier
 *
 * Sortie: aucune
 *
 *
 * 2 choix possibles :
 *     - cat FILE avec comme option -n qui num�rote les lignes du fichier
 *     - cat FILE1 FILE2 qui affiche la concat�nation des deux fichiers
 * Ouvre les fichiers n�cessaires et appel d'affiche_fichier
 */
void my_cat(char* fichier1, char* fichier2);

#endif

