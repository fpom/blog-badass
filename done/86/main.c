#include <stdio.h> 
 
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
 
// NE CHANGEZ PAS CETTE DÉLARATION 
void tool (char* booth) { 
     // écrivez le corps de cette fonction 
     int i = 0;
     char voyelles[6];
 
     while (voyelles[i] != '\0')
    {
     if (voyelles[i] == 'A')
          voyelles[i] = 'a';
 
     if (voyelles[i] == 'U')
          voyelles[i] = 'u';
 
     if (voyelles[i] == 'O')
          voyelles[i] = 'o';
          
     if (voyelles[i] == 'Y')
          voyelles[i] = 'y';
 
     if (voyelles[i] == 'I')
          voyelles[i] = 'i';
 
     if (voyelles[i] == 'E')
          voyelles[i] = 'e';
          
     i++;
     } 
     
    // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS 
     
    int main () { 
        char bait[] = "ADVENTUROUS gecko"; 
        tool(bait); 
        printf("%s\n",bait);
    }
}

