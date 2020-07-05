 # include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void seen (char* aorta) {
     int i = 0;


   while (aorta[i] != '\0')
    {

        if (aorta[i]  >= 97 &&  aorta[i] <= 122)


            aorta[i] = aorta[i] - 32;
        i++;

         if (aorta[i]  >= 65 &&  aorta[i] <= 90)


            aorta[i] = aorta[i] + 32;
        i++;
}
 // écrivez le corps de cette fonction
 }


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char plate[] = "innocent AKBASH";
    printf("%s\n", plate);
}
