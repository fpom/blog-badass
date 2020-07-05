# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void sleek (char* amend) {
    for(int i = 0;i<15;i++){
        if(amend[i]=='a' ||amend[i]=='e' ||amend[i]=='i' ||amend[i]=='o' ||amend[i]=='u' ||amend[i]=='y' || amend[i]=='A' ||amend[i]=='E' ||amend[i]=='I' ||amend[i]=='O' ||amend[i]=='U' ||amend[i]=='Y'){
            if(amend[i]=='A' || amend[i]=='E' || amend[i]=='I' || amend[i]=='O' || amend[i]=='U' ||amend[i]=='Y'){
                amend[i]=amend[i]-'A'+'a';
            }else if (amend[i]<'z'){
                amend[i]=amend[i]-'a'+'A';
            }
        }
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
 char steam[] = "open DORMOUSE";
 sleek(steam);
 printf("%s\n", steam);
 }
