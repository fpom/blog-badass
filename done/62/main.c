# include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
void amen (char* radon) {
    int i = 0;
    for (i = 0; radon[i] != '\0'; i ++)
    {
        if (radon[i]  >= 'a' &&  radon[i] <= 'z')
         radon[i] -=  'a' - 'A';
        
    }
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char ruled[] = "EAGER donkey";
 printf("%s\n", amen(ruled));
 }
 