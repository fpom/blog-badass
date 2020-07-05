# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void born (char* crux) {
 // écrivez le corps de cette fonction
 int i=0;
 while (crux[i] != '\0') {
     if( crux[i]== 97||crux[i]==101||crux[i]==105||crux[i]==111||crux[i]==117||crux[i]==121){
     crux[i] = crux[i] - 32;}
     
     else if(crux[i]== 65||crux[i]==69||crux[i]==73||crux[i]==79||crux[i]==85||crux[i]==89){
     crux[i] = crux[i] + 32;
     }
     i++;
 }
 
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char prep[] = "awful BLOODHOUND";
 born(prep);
printf("%s\n", prep);
 }