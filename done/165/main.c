# include <stdio.h>
2
3 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
4
5 // NE CHANGEZ PAS CETTE DÉLARATION
6 void ink (char* vogue) {
7 // écrivez le corps de cette fonction
    int i = 0;

        while(vogue[i] != '\0'){
         // si vogue miniscule
         if(vogue[i] >= 97 && vogue[i] <= 122){
         // convertir en Majuscule
            vogue[i] = vogue[i] - 32;
            i++ ;
         }

        }

8 }
9
10 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
11
12 int main () {
13 char mote[] = "jolly DUNKER";
14 printf("%s\n", ink(mote));
15 }
