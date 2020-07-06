#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
void named (char* wily){
    int i ;
    for(i=0; ;i++){
        if (wily[i]=='B'){
            wily[i]=wily[i]-'B'+'b';
        }
        else if( wily[i]=='C'){
            wily[i]=wily[i]-'C'+'c';
        }
         else if( wily[i]=='D'){
            wily[i]=wily[i]-'D'+'d';
        }
         else if( wily[i]=='F'){
            wily[i]=wily[i]-'F'+'f';
        }
        else if( wily[i]=='G'){
            wily[i]=wily[i]-'G'+'g';
        }
        else if( wily[i]=='H'){
            wily[i]=wily[i]-'H'+'h';
        }
        else if( wily[i]=='J'){
            wily[i]=wily[i]-'J'+'j';
        }
        else if( wily[i]=='K'){
            wily[i]=wily[i]-'K'+'k';
        }
        else if( wily[i]=='L'){
            wily[i]=wily[i]-'L'+'l';
        }
        else if( wily[i]=='M'){
            wily[i]=wily[i]-'M'+'m';
        }
        else if( wily[i]=='N'){
            wily[i]=wily[i]-'N'+'n';
        }
        else if( wily[i]=='P'){
            wily[i]=wily[i]-'P'+'p';
        }
        else if( wily[i]=='Q'){
            wily[i]=wily[i]-'Q'+'q';
        }
        else if( wily[i]=='R'){
            wily[i]=wily[i]-'R'+'r';
        }
        else if( wily[i]=='S'){
            wily[i]=wily[i]-'S'+'s';
        }
        else if( wily[i]=='T'){
            wily[i]=wily[i]-'T'+'t';
        }
        else if( wily[i]=='V'){
            wily[i]=wily[i]-'V'+'v';
        }
        else if( wily[i]=='W'){
            wily[i]=wily[i]-'W'+'w';
        }
        else if( wily[i]=='X'){
            wily[i]=wily[i]-'X'+'x';
        }
        else if( wily[i]=='Z'){
            wily[i]=wily[i]-'Z'+'z';
        }
        else if(wily[i]==' '){
            wily[i]=' ';
        }
         else if( wily[i]=='\0'){
            break;
        }
    }
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIENs EN DESSOUS
int main () {
    char shirr[] = "lovely DODO";
    named(shirr);
    printf("%s\n",shirr);
}
