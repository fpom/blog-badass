/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
 void cider (char* ozone) {
// écrivez le corps de cette fonction

    for(int i=0 ; ozone[i] !=  '\0' ; i++) {
     
     if(ozone[i] >= 'A'  && ozone[i] <='Z') {
         
         ozone[i] +=32;
     }
    }
 }
     
     
     


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
     
 char soil[] = "FOOLISH grasshopper";
 printf("%s\n", cider(soil));

    }



