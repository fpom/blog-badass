
# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void pod (char* lunch) {
 // écrivez le corps de cette fonction
 if(char >= 65 && char <= 90){
     char = char + 32;
       return char;
 } else if(char >= 90 && char <= 122){
     char = char - 32;
     return char;
 } else {
      printf(" Ce n'est pas une lettre du code ascii\n");
      return 0;
 }
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char carol[] = "brainy SOMALI";
 pod(carol);
printf("%s\n", carol);
}
