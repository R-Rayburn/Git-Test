//Name: Robert Rayburn
//Date: 9-1-16
//Class: CSCI 352
//Description: Hello World example with user input.

#include <iostream>
using namespace std;

int sum(int n);
/*
** Description: Caluclates the sum from 1 to the integer n.
** Input: The integer that is the end bound for the sum.
** Return: Sum of 1 to n.
*/

int main(){
  //Asks the user for integer input.
  int n;
  cout << "Give me a number: " << endl;
  cin >> n;

  //Prints Hello World!
  cout << "Hello World!" << endl;

  //Prints the sum of 1 to n.
  cout << sum(n) << " is the sum from 1 to " << n  << endl;
  
  return 0;
}


int sum(int n){

  int x = 0;

  for(int i = 1; i < n + 1; i++){
    x+=i;
  }

  return x;
}
