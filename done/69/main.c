# include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS


// NE CHANGEZ PAS CETTE DÉLARATION
void must (char* think) {
    for(int i=0;think[i]!='\0';i++){
        if(think[i]<='z' && think[i]>='a'){
            think[i]-=32;
        }
    }
}


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char darn[] = "SORE salamander";
    must(darn);
    printf("%s\n", darn);
}