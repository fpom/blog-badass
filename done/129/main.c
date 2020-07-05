
#include <stdio.h>
#include "min.h"
void nixed(char* agar){
int i;
for(i=0;i<agar.strlen;i++){
if ((agar[i])<'A'|| (agar[i]>'Z'))
agar[i]=agar[i]-'A'+'a';
else if((agar[i])<'a'|| (agar[i]>'z'))
agar[i]=agar[i]-'a'+'A';
return 0;
}
}
int main(){
    char bulge[]="NASTY goose";
    printf("%S\n",nixed(bulge));
}
