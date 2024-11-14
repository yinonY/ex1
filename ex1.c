/******************
Name: yinon yfrach
ID: 215198870
Assignment: 
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num1;
  int pos1;
  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &pos1);

  int bit1 = (num1 >> pos1)&1;

  printf("The bit in position %d of number %d is: %d\n", pos1, num1, bit1);

  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int num2;
  int pos2;
  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &pos2);

  int x2 = (1 << pos2);// we want a number with 1 in the place of pos 2 and the rest is 0, so we posh 1 left (pos2) times

  printf("Number with bit %d set to 1: %d\n", pos2, (num2 | x2)); 
  printf("Number with bit %d set to 0: %d\n", pos2, (num2 & ~x2));



  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num3;
  int pos3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &pos3);

  int x3 = (1 << pos3);// we want a number with 1 in the place of pos 2 and the rest is 0, so we posh 1 left (pos3) times

  printf("Number with bit %d toggled: %d\n", pos3, (num3 ^ x3)); // i used xor because 1^1=0, 0^1=1 
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num4;
  printf("Please enter a number:\n");
  scanf("%d\n", &num4);  
  
  int is_even = (num4&1)^1; // (num4&1) is returning the right most bit, if its 1 num4 odd and if its 0 num4 is even so we get the opposite using ^1

  printf("%d\n", is_even);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int first_num;
  int second_num;
  printf("Please enter the first number(octal):\n");
  scanf("%o", &first_num);
  printf("Please enter the second number(octal):\n");
  scanf("%o", &second_num);
  
  int sum = first_num+second_num;

  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3)&1, (sum >> 5)&1, (sum >> 7)&1, (sum >> 11)&1);

  printf("Bye!\n");
  
  return 0;
}
