/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void pity (char* swill) {
    int n = 26;
    int i;
    for (i=0; i<26; i++){
        if (swill[i]=='U'){
            swill[i] = swill[i]-'A'+'a';
        }
        if (swill[i]=='Y'){
            swill[i] = swill[i]-'A'+'a';
        }
    }   
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char redid[] = "LUCKY macaw";
pity(redid);
printf("%s\n", redid);
}
