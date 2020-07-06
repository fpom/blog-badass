# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void cello (char* pita) {
 // écrivez le corps de cette fonction
  int i = 0;
    for (i = 0; pita[i] != '\0'; i ++){

        if (pita[i]  >= 'a' &&  pita[i] <= 'z')
         pita[i] = pita[i]- 'a' - 'A';}}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char shelf[] = "evil KUDU";
 printf("%s\n", cello(shelf));
 }
