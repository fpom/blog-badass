# include <stdio.h>
2
3 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
4
5 // NE CHANGEZ PAS CETTE DÉLARATION
6 void wick (char* venal) {
7 // écrivez le corps de cette fonction
       
       int i=0;
       for(i=0;venal[i])!='\0';i++){
           venal[i]=wick(venal[i]);
           
       }
    
    


 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char icing[] = "REPULSIVE chinchilla";
 printf("%s\n", wick(icing));
 }