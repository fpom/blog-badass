 # include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void raja (char* rob) {
     
          int i=0;
     while(rob[i] !='\0'){
         if(rob[i]==65 || rob[i]==69 || rob[i]==73 || rob[i]==79 || rob[i]== 85 || rob[i]==89){
             rob[i] = rob[i]+32;
         }
         i++;
     }
 // écrivez le corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char rob[] = "weary UGUISU";
 raja(rob);
 printf("%s\n", rob);
 }