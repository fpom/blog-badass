#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
// NE CHANGEZ PAS CETTE DÉLARATION
 void piled (char* quart) 
 {
    int i = 0
    while (char[i] != '\0')
    {
            if (char[i] == 'q')
                char[i] = 'Q' ;
                
            if (char[i] == 'u')
                char[i] = 'U' ;
                
            if (char[i] == 'a')
                char[i] = 'A' ;
                
            if (char[i] == 'r')
                char[i] = 'R' ;
                
            if (char[i] == 't')
                char[i] = 'T' ;
// écrivez le corps de cette fonction
 } 
  // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS 
 
 int main () { 
 char downy[] = "LONG horse";
 printf("%s\n", piled(downy)); 
 }
