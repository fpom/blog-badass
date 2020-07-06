#include <stdio.h>

// NE CHANGEZ PAS CETTE DÃ?LARATION
 void thyme (char* lilac) {
     int i = 0;
 
     while (lilac[i] != '\0')
    {
        
        if (lilac[i]  >= 97 &&  lilac[i] <= 122)

            
            lilac[i] = lilac[i] - 32;
        i++;
        
         if (lilac[i]  >= 65 &&  lilac[i] <= 90)

            
            lilac[i] = lilac[i] + 32;
        i++;
}
 // Ã©crivez le corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char wreck[] = "filthy FISH";
    thyme(wreck);
printf("%s\n", wreck);
 }
