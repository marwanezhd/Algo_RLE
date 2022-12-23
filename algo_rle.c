#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *compress(const char* s) {

  int len = strlen(s);
  char *output = malloc((len * 2) + 1);
  output[0] = '\0';
  int count = 1;

    if (i > 0 && s[i] != s[i-1]) {
      sprintf(output + strlen(output), "%d%c", count, s[i-1]);
      count = 1;
    else
      count++;
  }
  sprintf(output + strlen(output), "%d%c", count, s[len-1]);
  return (output);
}

int main(int argc, char** argv) {
  char *s = argv[1];
  char* output = compress(s);
  printf("reception buffer : %s\n", s);
  printf("sortie : %s\n", output);
  free(output);
  return (0);
}