# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void mossy (char* sieve) {
 char mossy[18];
 
 sieve[2] = 'U' - 'A' + 'a';
 sieve[3] = 'E' - 'A' + 'a';
 sieve[5] = 'E' - 'A' + 'a';
 sieve[6] = 'Y' - 'A' + 'a';
 sieve[7] = 'E' - 'A' + 'a';
 sieve[11] = 'o' - 'a' + 'A';
 sieve[12] = 'o' - 'a' + 'A';
 sieve[15] = 'o' - 'a' + 'A';
 sieve[16] = 'u' - 'a' + 'A';
 sieve[18] = 'e' - 'a' + 'A';
    
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char gorge[] = "BLUE-EYED woodlouse";
 mossy(gorge);
 printf("%s\n", gorge);
 }

