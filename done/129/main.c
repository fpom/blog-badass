#include <stdio.h> 

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 

 // NE CHANGEZ PAS CETTE DÉLARATION 
void pat (char* lost) { 
    // écrivez le corps de cette fonction 
    int i = 0;
    while(lost[i] != '\0')
    {
    
  //changer les voyelles en minuscules
    if (lost[i] == 97 || lost[i] == 101 ||lost[i] == 105 || lost[i] == 111
    || lost [i] == 117 || lost[i] == 121)
    
    lost [i] = lost [i] - 32;
    i++;
     } 
     }
     
     // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS 
    
    int main () { 
         char sired[] = "bright PARROT";
         pat(sired);
         printf("%s\n", sired);
      
        }
