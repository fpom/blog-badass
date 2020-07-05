#include <stdio.h>

void met (char* s) {
 int i = 0;
 while (s[i]) {
  if (s[i] >= 'a' && s[i] <= 'z') {
   s[i] += 'A' - 'a'; 
  }
  i++;
 }
}

int main () {
	char c[] = "anxious DRAGONFLY";
	met(c);
	printf("%s\n", c);
}
