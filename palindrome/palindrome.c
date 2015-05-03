#include "palindrome.h"

int lengthOfString(char word[]){
  int length;
  for (length = 0; word[length] != '\0'; length++);
  return length;
}

int isPalindrome(char word[]){
  int i;
  int length;
  length = lengthOfString(word);
  
  for (i = 0; i <= length; i++){
    if (word[i] != word[length - i - 1]){
      return 0;
    }
  }
  return 1;
}