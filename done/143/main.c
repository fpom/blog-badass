/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void brick (char* tin) {
 // écrivez le corps de cette fonction
for(int i=0; i<tin[i]; i++) {
    if(tin[i] == 'F' | tin[i] == 'S' | tin[i] == 'S') {
        tin[i] = tin[i] - 'A' + 'a';
    } 
    
     if(tin[i] == 'm' | tin[i] == 't' | tin[i] == 'l' | tin[i] == 'n' | tin[i] == 's' ) {
          tin[i] = tin[i] - 'a' + 'A';  
        }

}
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char bake[] = "motionless FOSSA";
  brick(bake);
  printf("%s\n", bake);
 }

