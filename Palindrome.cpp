/*
Author: Vikram Vasudevan
Date: 9/13/2023
Description: The program takes in an input. It then removes punctuation from
the input and stores that value in an array. It then reverses the characters
in the array and stores that value in another array. It then compares those two
arrays and if they are the same, it tells the user that the input was a
palindrome. Otherwise, it informs the user that the input wasn't a palindrome.

 */


#include <iostream>
#include <cstring>
using namespace std;
//main
int main(){
  //creating the input array and storing the input in it.
  char inputStr[81];
  for(int i = 0; i < 81; i++){
    inputStr[i] = '.';
  }
  cin.get(inputStr, 81);
  cin.get();
  int counter = 0;
  //setting all the characters to lower case
  for(int i = 0; i < strlen(inputStr); i++){
    if(((int)inputStr[i] <= 90 && (int) inputStr[i] >= 65)){
      inputStr[i] = tolower(inputStr[i]);
      counter++;
    }
    else if( (int) inputStr[i] <= 122 && (int) inputStr[i] >= 97){
      inputStr[i] = tolower(inputStr[i]);
      counter++;
    }
    else if((int) inputStr[i] <=57 && (int) inputStr[i] >= 48){
      inputStr[i] = tolower(inputStr[i]);
      counter++;
    }

  }
  //initializing the compareStr and reverseStr.
  char compareStr[counter];
  char reverseStr[counter];
  for(int i = 0; i < counter; i++){
  compareStr[i] = '.';
  reverseStr[i] = '.';

 }
  int changeIndex = 0;
  int copyIndex = 0;
  //storing the punctuation-free version of inputStr in compareStr
  while(changeIndex < counter){
    if((int) inputStr[copyIndex] <= 90 && (int) inputStr[copyIndex] >= 65){
      compareStr[changeIndex] = inputStr[copyIndex];
      changeIndex++;

    }
    else if((int) inputStr[copyIndex] <= 122 && (int) inputStr[copyIndex] >= 97){
      compareStr[changeIndex] = inputStr[copyIndex];
      changeIndex++;
    }
    else if(((int) inputStr[copyIndex] <=57) && ((int) inputStr[copyIndex] >= 48)){
      compareStr[changeIndex] = inputStr[copyIndex];
      changeIndex++;
    }
    copyIndex++;
  }
  //storing the reverse of compareStr in reverseStr
  for(int i = 0; i < strlen(reverseStr); i++){
    reverseStr[i] = compareStr[counter - 1 - i];
  }
  int palindrome = 0;
  //determining if the input is a palindrome.
  for(int i = 0; i < strlen(compareStr); i++){
    if(reverseStr[i] != compareStr[i]){
      palindrome++;
    }
  }
  //outputting answer
  if(palindrome == 0){
    cout << "That is a palindrome!";
  }
  else{
    cout << "That isn't a palindrome";
  }
   


  return 0;





}
