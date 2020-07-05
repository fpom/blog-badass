# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void job (char* pivot) {
for(int i=0; i<16; i++){
    if(pivot[i]=='A'){
        pivot[i]=pivot[i]-"A"+"a"
        
    } else if (pivot[i]=='E'){
        pivot[i]=pivot[i]-"A"+"a"
    }
}
    
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char fall[] = "cheerful RAGDOLL";
job (pivot);
printf("%s\n",pivot);
}