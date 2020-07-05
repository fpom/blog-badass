/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void beard (char* ounce) {
        int i = 0;
    for (i = 0; ounce[i] != '\0'; i ++)
    {
         ounce['A'] =  'a';
         ounce[69] =  101;
         ounce[105] =  73;
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char yokel[] = "ALERT pig";
 beard(yokel);
 printf("%s\n", yokel);
 }