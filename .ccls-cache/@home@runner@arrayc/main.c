#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char revstr();

int main(void) {

  char word[40];
  int i, len;
  printf("Enter a lower case word: ");
  scanf("%s", &word);

  printf("\nHere is your word: %s", word);

  len = strlen(word);

  if (revstr(word) == 1) {
    printf("\nYour word IS a Palindrome");
  } else {
    printf("\nYour word is NOT a Palindrome");
  }
  printf("\n\nCode Response: %d", revstr(word));
}

char revstr(char *str) {
  int i, len, temp;
  len = strlen(str);

  for (i = 0; i < len / 2; i++) { // dividing in half gives us middle of string
    if (str[i] != str[len - i - 1])
      return false; // str.len = 6(length) - 0(first iter) - 1 = 5
    return true;
  }
}
