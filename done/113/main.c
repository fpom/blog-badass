# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void lest (char* crow) {
  switch (crow) {
 case "A" ... "Z" :
 return 0;
 case "a" ... "z" :
 return 1;
 case "0" ... "9" :
 return 2;

 }
 }
 // écrivez le corps de cette fonction


 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char label[] = "tough QUAIL";
lest(label);
 printf("%s\n", lest(label);
 }