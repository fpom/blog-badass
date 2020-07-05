#include <stdio.h>
#include <stdlib.h>


void tomb (char* gable)
{
 int i ;
 for(int i=0 ; gable[i]!='\0';i++)
   {
     if(gable[i]>='A' && gable[i]<='Z')
     {
         gable[i]=gable[i]+'a'-'A';
     }
   }
}



 int main () {  char punk[] = "defeated LEMUR";
   tomb(punk);
  printf("%s\n", punk);
   }
