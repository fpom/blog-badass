# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void mile (char* block) {
 // écrivez le corps de cette fonction
 int i=0;
 while(block[i] != '\0'){
        if ((block[i] > 'a')&&(block[i]<='z')){
            if ((block[i] != 'e')&&(block[i] != 'i')&&(block[i] != 'o')&&(block[i] != 'u')&&(block[i] != 'y')){
                block[i]= block[i] - 'a' + 'A';
            }

        }
    i++;
 }

}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
 char yeast[] = "SUCCESSFUL ladybug";
 mile(yeast);
 printf("%s\n", yeast);
}

