#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION 
#include <string.h>
void nib (char* hubby) { 
     // écrivez le corps de cette fonction 
     for (int i = 0; i <= strlen(hubby)-1; i++){
         if (hubby[i] == 'b'){
            hubby[i]= 'b' - 'a' + 'A';
         }
         if (hubby[i] == 'c'){
            hubby[i]= 'c' - 'a' + 'A';
         }
         if (hubby[i] == 'd'){
            hubby[i]= 'd' - 'a' + 'A';
         }
         if (hubby[i] == 'f'){
            hubby[i]= 'f' - 'a' + 'A';
         }
         if (hubby[i] == 'g'){
            hubby[i]= 'g' - 'a' + 'A';
         }
         if (hubby[i] == 'h'){
            hubby[i]= 'h' - 'a' + 'A';
         }
         if (hubby[i] == 'j'){
            hubby[i]= 'j' - 'a' + 'A';
         }
         if (hubby[i] == 'k'){
            hubby[i]= 'k' - 'a' + 'A';
         }
         if (hubby[i] == 'l'){
            hubby[i]= 'l' - 'a' + 'A';
         }
         if (hubby[i] == 'm'){
            hubby[i]= 'm' - 'a' + 'A';
         }
         if (hubby[i] == 'n'){
            hubby[i]= 'n' - 'a' + 'A';
         }
         if (hubby[i] == 'p'){
            hubby[i]= 'p' - 'a' + 'A';
         }
         if (hubby[i] == 'q'){
            hubby[i]= 'q' - 'a' + 'A';
         }
         if (hubby[i] == 'r'){
            hubby[i]= 'r' - 'a' + 'A';
         }
         if (hubby[i] == 's'){
            hubby[i]= 's' - 'a' + 'A';
         }
         if (hubby[i] == 't'){
            hubby[i]= 't' - 'a' + 'A';
         }
         if (hubby[i] == 'v'){
            hubby[i]= 'v' - 'a' + 'A';
         }
         if (hubby[i] == 'w'){
            hubby[i]= 'w' - 'a' + 'A';
         }
         if (hubby[i] == 'x'){
            hubby[i]= 'x' - 'a' + 'A';
         }
         if (hubby[i] == 'z'){
            hubby[i]= 'z' - 'a' + 'A';
         }
         
     }
     for (int j = 0; j <= strlen(hubby)-1; j++){
         printf(hubby[j]);
     }
} 

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS 

int main () { 
    char leaf[] = "thoughtful LEOPARD";
    nib(yeast);
    printf("%s\n", yeast);
}





