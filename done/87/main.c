/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void weer (char* redid) {
 // écrivez le corps de cette fonction
    int i;
    for (i = 0; redid[i]!='\0'; i++) {
    if(redid[i] >= 'a' && redid[i] <= 'z') 
         redid[i] = redid[i] -32;
    }
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char lamed[] = "dull PUG";
 weer(lamed);
 printf("%s\n", lamed);
 }
