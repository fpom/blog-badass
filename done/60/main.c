# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
unsigned int l (char* s){
    unsigned int i = 0;
    while (s[i] != '\0'){
        i++;
    }
    return i;
}
// NE CHANGEZ PAS CETTE DÉLARATION
void gamed (char* crier) {
    for(int i = 0; i<l(crier);i++){
        if( crier[i] == 'a' || crier[i] == 'e' || crier[i] == 'i' 
        || crier[i] == 'o' ||crier[i] == 'u' || crier[i] == 'y' ){
            crier[i]+=-'a'+'A';
        } else if(crier[i] == 'A' || crier[i] == 'E' || crier[i] == 'I' 
        || crier[i] == 'O' ||crier[i] == 'U' || crier[i] == 'Y' ){
           crier[i]+=-'A'+'a';
        }
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char seed[] = "LONG panther";
gamed(seed);
printf("%s\n", seed);
}
