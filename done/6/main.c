# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void whale (char* milch) {
// écrivez le corps de cette fonction
    int i =0;
    //ci-dessous (ligne 12) pour ne pas limiter à 14 il faut faire : si le charactère est différent de \0
    //while (milch[i]=!'\0'){
    //l'instruction ci-dessus ne compile pas correctement
        for(i;i<14;i++){
            //il ne faut pas modifier les espaces donc on continue seulement si le charactère est différent d'un espaces
            //if(milch[i]=!' '){
            //l'instruction ci-dessus ne compile pas correctement
            if(milch[i]<'a'){
                //'a'-'A'=32
            milch[i] = milch[i]+32;
            }
            //}
        }
    //}
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char psalm[] = "anxious BIRMAN";
whale(psalm);
printf("%s\n", psalm);
}