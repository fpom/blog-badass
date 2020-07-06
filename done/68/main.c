# include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
// NE CHANGEZ PAS CETTE DÉLARATION
void quiz (char* ham) {
    int i= 0;
    
    while (ham[ i ]!= '\0')
    {
        if (ham[i] >= 97 && ham[i]<= 122)
            
            ham[i]= ham[i] - 32;
        i++;
    }
    
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 

int main () {
 
char jock[] = "FRIGHTENED zebu";
 
printf("%s\n", quiz(jock));