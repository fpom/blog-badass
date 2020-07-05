#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void bend (char* acme)
{
char(asme)
int j ;

scanf("%s", acme);

for(j=0;acme[j];j++)
    {
if(acme[j]>= 'A' && acme[j] <= 'Z')
    acme[j] = acme[j] - 'A' + 'a' ;
    }

else if (acme[j] >= 'a' && acme[j] <= 'z')
    acme[j]=acme[j]- 'a' +'A';

for (j=0 ; j<strlen(acme); j++)
    {
    acme[j]= toupper (acme[j]);

    }


}

int main()
    {
    char raved[] = "shiny RAT";
    lop(bend(raved));
    printf("%s\n", bend );
    return 0;
    }
