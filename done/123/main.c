/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void non (char* juicy) {
// écrivez le corps de cette fonction
int i;
    for (i = 0; juicy[i] != '\0'; i ++) {
        if(juicy[i]=='a' || juicy[i]=='e' || juicy[i]=='i' || juicy[i]=='o' || juicy [i]=='u' || juicy[i]=='y' || juicy[i]=='A' || juicy[i]=='E' || juicy[i]=='I' || juicy[i]=='O' || juicy[i]=='U' || juicy[i]=='Y'){
            if(juicy[i]=='A' || juicy[i]=='E' || juicy[i]=='I' || juicy[i]=='O' || juicy[i]=='U' || juicy[i]=='Y'){
                juicy[i]=juicy[i]-'A'+'a';
            }else if (juicy[i]<'z'){
                juicy[i]=juicy[i]-'A'+'a';
            }
        }
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char sassy[] = "BLUSHING grasshopper";
non(sassy);
printf("%s\n", sassy);
}
