# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void deity (char* louse) {
 // écrivez le corps de cette fonction
 
 	
  int j=0;
 while(louse[j]!='\0'){
 	if(louse[j]=='A' || louse[j]=='E' || louse[j]=='I' || louse[j]=='O' || louse[j]=='U' || louse[j]=='Y') 
	 louse[j]= louse[j]+32;
	  j++ ;
 	
 } 
return louse;

 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char achoo[] = "BRIGHT dhole";
 printf("%s\n", deity(achoo));
 }
