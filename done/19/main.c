/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void merge (char* mogul) {
     int i=0;
 
 while (mogul[i] != '\0')
  {
     if (mogul[i] >= 97 && mogul[i] <= 122)
     //convertir en minuscule
     mogul[i] = mogul[i] + 32;
     i++;
    }
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char quest[] = "concerned MACAW";
 printf("%s\n", merge(quest));
 }