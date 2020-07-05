#include <string.h>
#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
void berry (char* frisk) {
    // écrivez le corps de cette fonction

   char frisk[100] = "allo les zeros";
int i = 0;
 
while (frisk[i] != '\0')
{
    
 
     if (frisk[i] == 'b')
          frisk[i] = 'B';
 
     if (frisk[i] == 'c')
          frisk[i] = 'C';
    if (frisk[i] == 'd')
          frisk[i] = 'D';
   
          
    if (frisk[i] == 'f')
          frisk[i] = 'F';
    if (frisk[i] == 'g')
          frisk[i] = 'G';
    if (frisk[i] == 'h')
          frisk[i] = 'H';
   
    if (frisk[i] == 'j')
          frisk[i] = 'J';
    if (frisk[i] == 'k')
          frisk[i] = 'K';
    if (frisk[i] == 'l')
          frisk[i] = 'M';
    if (frisk[i] == 'n')
          frisk[i] = 'N';
    
    if (frisk[i] == 'p')
          frisk[i] = 'P';
    if (frisk[i] == 'q')
          frisk[i] = 'Q';
    if (frisk[i] == 'r')
          frisk[i] = 'R';
    if (frisk[i] == 's')
          frisk[i] = 'S';
    if (frisk[i] == 't')
          frisk[i] = 'T';
    
    if (frisk[i] == 'v')
          frisk[i] = 'V';
    if (frisk[i] == 'w')
          frisk[i] = "W";
    if (frisk[i] == 'x')
          frisk[i] = 'X';
    if (frisk[i] == 'y')
          frisk[i] = 'Y';
    if (frisk[i] == 'z')
          frisk[i] = 'Z';
 
     i++;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main () {
   char ever[] = "COURAGEOUS pelican";
   printf("%s\n", berry(ever));
}
