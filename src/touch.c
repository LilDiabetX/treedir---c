#include<assert.h>
 #include "../lib/struct.h"
 #include "../lib/touch.h"

 void touch(noeud *n, char *nom){
   assert(n->est_dossier);
   assert(is_correct(nom));
   assert(!has_son(n, nom));

   noeud *fils = creer_noeud(false, nom, n->racine, n);
   n->fils = pushTail(n->fils, fils);
 }