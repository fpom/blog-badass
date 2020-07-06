# include <stdio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void gruel (char* diner) {
    // écrivez le corps de cette fonction
    int i = 0;
    for (i = 0; diner[i] != '\0'; i++){
        if(diner[i] == 'B' || diner[i] =='C' || diner[i] =='D' || diner[i] =='F'|| diner[i] =='G'|| diner[i] =='H'|| diner[i] =='J'|| diner[i] =='K'|| diner[i] =='L'|| diner[i] =='M'|| diner[i] =='N'|| diner[i] =='P'|| diner[i] =='Q'|| diner[i] =='R'|| diner[i] =='S'|| diner[i] =='T'|| diner[i] =='V'|| diner[i] =='W'|| diner[i] =='X'|| diner[i] =='Z'){
            diner[i] -=  'A' + 159;
        }
    }

}



// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main () {
    char bate[] = "DANGEROUS caracal";
    gruel(bate);
    printf("%s\n", bate);
}