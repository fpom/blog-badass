# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void thumb (char* cooed) {

 unsigned int j;


   while (cooed[j] != '\0')
    {
    if (cooed[j]  >= 97 &&  cooed[j] <= 122){
            // Conversion en majuscule
            cooed[j] = cooed[j] - 'a' + 'A';
        }
        else if (cooed[j]>= 65 && cooed[j]<= 90){
            // Conversion en minuscule
            cooed[j] = cooed[j] - 'A';
        }
        j++;
    }


 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char rein[] = "UGLY kangaroo";
 printf("%s\n", thumb(rein));
 }
