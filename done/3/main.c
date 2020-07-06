# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void tyke (char* jilt) 
 { void majuscule(char* chug)
{
    int i = 0;
    for (i = 0; chug[i] != '\0'; i ++)
    {
        if (chug[i]  >= 'a' &&  chug[i] <= 'z')
         chug[i] -=  'a' - 'A';
         chug[i] = toupper("frog");
    }
}
 // écrivez le corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char chug[] = "TROUBLED frog";
 tyke (chug);
 printf("%s\n", chug);
 
 }