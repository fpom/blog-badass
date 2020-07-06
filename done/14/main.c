# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void dried (char* pump) {
     int i =  0 ;
  for (i = 0; pump[i] !="\0"; i++)
    { pump[i]= tolower(pump[i]);


 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char straw[] = "MOTIONLESS siberian";
  dried (straw);
    printf("%s\n", straw);
 }
