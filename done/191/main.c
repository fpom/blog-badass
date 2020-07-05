# include <stdio.h>
# include >stdlib.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void stank (char* wise) {
 // écrivez le corps de cette fonction
int i= 0;
 while (*(wise + i ) != '0') {
     i++;
     if (*(wise + i - 1) == 'a' || *(wise + i-1 ) == 'e' || *(wise + i-1 ) =='i'  || *(wise + i-1 ) =='o' {
         
         || *(wise + i-1 ) =  *(wise + i-1 ) - ('a' - 'A');
     }
     if (*(wise + i - 1) == 'A' || *(wise + i-1 ) == 'E' || *(wise + i-1 ) =='I' || *(wise + i-1 ) =='O' {
         
         || *(wise + i-1 ) =  *(wise + i-1 ) - ('a' - 'A');
     }
     
 }
 }
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char towel[] = "impossible AVOCET";
 printf("%s\n", stank);
 }
