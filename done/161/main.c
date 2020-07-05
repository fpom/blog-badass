1 # include <stdio.h>
2
3 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
4
5 // NE CHANGEZ PAS CETTE DÉLARATION
6 void tort (char* doff) {
7 int i=0;
for (i =0; i < strlen(doff), i++) {

        if (chaine[i]  >= 97 &&  chaine[i] <= 122)

            chaine[i] = chaine[i] - 32;
}
8 }
9
10 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
11
12 int main () {
13 char sot[] = "shy BARRACUDA";
14 printf("%s\n", tort(sot));
