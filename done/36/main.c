# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void dab (char* arose) {
    char* consonne1 = malloc(19*sizeof(char));
    char* consonne2 = malloc(19*sizeof(char));
    consonne1[0]='b';
    consonne1[1]='c';
    consonne1[2]='d';
    consonne1[3]='f';
    consonne1[4]='g';
    consonne1[5]='h';
    consonne1[6]='j';
    consonne1[7]='k';
    consonne1[8]='l';
    consonne1[9]='m';
    consonne1[10]='n';
    consonne1[11]='p';
    consonne1[12]='q';
    consonne1[13]='r';
    consonne1[13]='s';
    consonne1[14]='t';
    consonne1[15]='v';
    consonne1[16]='w';
    consonne1[17]='x';
    consonne1[18]='z';

    consonne2[0]='B';
    consonne2[1]='C';
    consonne2[2]='D';
    consonne2[3]='F';
    consonne2[4]='G';
    consonne2[5]='H';
    consonne2[6]='J';
    consonne2[7]='K';
    consonne2[8]='L';
    consonne2[9]='M';
    consonne2[10]='N';
    consonne2[11]='P';
    consonne2[12]='Q';
    consonne2[13]='R';
    consonne2[13]='S';
    consonne2[14]='T';
    consonne2[15]='V';
    consonne2[16]='W';
    consonne2[17]='X';
    consonne2[18]='Z';
    int m=0;
    while (arose[m]!='\0'){
        int a;
         for (a=0;a<=18;a++){
            if (arose[m]==consonne1[a]){
                arose[m]=consonne2[a];
            }
         }
        m++;
    }

}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char glove[] = "fancy ANT";
printf("%s\n", dab(glove));
}
