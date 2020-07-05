# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void thank (char* gist) {
    int m;
    int i;
    for (i=0; i<gist.c; i++){
        m = gist[i];
        if(m>"A" && m<"Z"){
            gist[i]= m + "a" - "A";
        }
        else{
            gist[i]= m + 32
        }
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char unify[] = "ugly LABRADOODLE";
    printf("%s\n", thank(unify));
}