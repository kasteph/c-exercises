#include <stdio.h>
#include "palindrome.h"

int main(void) {
  char word[64];
  int result;
  printf("Palindrome Test\n");
  printf("Enter the word to test: ");
  scanf(" %63s", word);

  result = isPalindrome(word);

  if (result == 1) {
    printf("The word \"%s\" is a palindrome.", word);
  } else {
    printf("The word \"%s\" is not a palindrome.", word);
  }
  return 0;
}