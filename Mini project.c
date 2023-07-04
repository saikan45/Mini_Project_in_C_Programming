#include <stdio.h>

   void title()
{
    system("cls");
    system("COLOR 03");
    printf("\n\n\t");

    printf("\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
    printf("\n\n\t\t\t\t\t\t\tMini Project Spring 2023");
    printf("\n\n\t\t\t\t\t\t\tStructure Programming Lab");
    printf("\n\n\t\t\t\t\t\t    Dhaka International University\n\t\t\t");
    //printChar('=',38);
    printf("\n\n\n\t\t\t\t       Press Any key to Enter:: ");
    getchar();
    printf("\033[H\033[J");

}
void title2()
{
        system("cls");
        system("COLOR 03");
        printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
        printf("\n\n\t\t\t\t***********************************************************************");
        printf("\n\n\n\t\t\t\tSummary of Our Project: ");
        printf("\n\n\t\t\t\t1. Our Services");
        printf("\n\n\t\t\t\t2. Help");
        printf("\n\n\t\t\t\t3. About Us");
        printf("\n\n\t\t\t\t4. Logout\n\t");

        printf("\n\n\t\t\t\tEnter Your Option :--> ");





}
void displayHelp() {
    printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
    printf("\n\n\t\t\t\t***********************************************************************");
    printf("\n\nProgram Name - Mini Project For Structure Programming:\n");
    printf("\n----------------------------------------------------\n");
    printf("Usage:\n");


    printf("Shortcut Commands - C Programming:\n");
    printf("-----------------------------------\n");
    printf("Ctrl + N : Create a new file\n");
    printf("Ctrl + O : Open an existing file\n");
    printf("Ctrl + S : Save the current file\n");
    printf("Ctrl + Z : Undo the last action\n");
    printf("Ctrl + X : Cut selected text\n");
    printf("Ctrl + C : Copy selected text\n");
    printf("Ctrl + V : Paste copied/cut text\n");
    printf("Ctrl + F : Find text in the file\n");
    printf("Ctrl + R : Replace text in the file\n");
    printf("Ctrl + A : Select all text\n");
    printf("Ctrl + B : Toggle bold text\n");
    printf("Ctrl + I : Toggle italic text\n");
    printf("Ctrl + U : Toggle underline text\n");
    printf("Ctrl + P : Print the file\n");
}

void about()
{

    printf("\n\n\n\t\t\t*********************************************************\n");
    printf("\t\t\t*               A mini C Project                         *\n");
    printf("\t\t\t*                 Version 1.0                            *\n");
    printf("\t\t\t*                                                        *\n");
    printf("\t\t\t*                 Developed by:                          *\n");
    printf("\t\t\t*             Suman Ahmed Saikan                         *\n");
    printf("\t\t\t*                Lecturer,DIU                            *\n");
    printf("\t\t\t*          Email: sumanmia.cse@gmail.com                 *\n");
    printf("\t\t\t*              Phone: 01635048520                        *\n");
    printf("\t\t\t*                                                        *\n");
    printf("\t\t\t**********************************************************\n");


}


void logout() {

    printf("\n\n\n\t\t\t   Logged out successfully.\n");

}



int main() {

    float num1, num2, result;
    char operator,ch;
    int choice1,choice2;
     int reversed, remainder, original;
   //  SetConsoleTitle("Student Management System | DIU");
       title();
       title2();




    scanf("%d",&choice1);
    printf("\033[H\033[J");


  switch(choice1)
  {
   case 1:
       printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
       printf("\n\n\t\t\t\t***********************************************************************");
       printf("\n\n\n\t\t\t\t*************************** Our Services Are  ***********************");

        printf("\n\n\t\t\t\t1. Calculator");
        printf("\n\n\t\t\t\t2. Fibonacci Series");
        printf("\n\n\t\t\t\t3. Prime Number");
        printf("\n\n\t\t\t\t4. Palindrome Number\n\t");
        printf("\n\n\t\t\t\tEnter Your Option :--> ");
        scanf("%d",&choice2);
        printf("\033[H\033[J");

       // break;



    switch(choice2)
{
    case 1:

   // float num1, num2, result;
    //char operator;

        printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
        printf("\n\n\n\t\t\t\t***********************************************************************");
        printf("\n\n\n\n\n\t\t\t\t*************************** Basic Calculator  ***********************");

        printf("\n\n\n\t\t\t\tEnter the first number: ");
        scanf("%f", &num1);

        printf("\n\n\n\t\t\t\tEnter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("\n\n\n\t\t\t\tEnter the second number: ");
        scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n\n\n\t\t\t\tResult: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n\n\n\t\t\t\tResult: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n\n\n\t\t\t\tResult: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("n\n\n\t\t\t\tResult: %.2f\n", result);
            } else {
                printf("n\n\n\t\t\t\tError: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("n\n\n\t\t\t\tError: Invalid operator.\n");
    }
    break;

        case 2:
        printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
        printf("\n\n\n\t\t\t\t***********************************************************************");
        printf("\n\n\n\t\t\t\t*************************** Fibonacci Series  ***********************");

       int i, n;


  int t1 = 0, t2 = 1;


  int nextTerm = t1 + t2;


  printf("\n\n\n\t\t\t\tEnter the number of terms: ");
  scanf("%d", &n);

  printf("\n\n\n\t\t\t\tFibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  break;

        case 3:


        printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
        printf("\n\n\n\t\t\t\t***********************************************************************");
        printf("\n\n\n\t\t\t\t*************************** Prime Number  *****************************");

         int  flag = 0;
  printf("\n\n\n\t\t\t\tEnter a positive integer: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("\n\t\t\t\t%d is a prime number.\n\n", n);
  else
    printf("\n\t\t\t\t%d is not a prime number.\n\n", n);

   break;



        case 4:

       printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
       printf("\n\n\n\t\t\t\t***********************************************************************");
        printf("\n\n\n\t\t\t\t*************************** Palindrome Number  *****************************");

    printf("\n\n\n\t\t\t\t Enter an Integer:: ");
    scanf("%d", &n);
    original = n;


    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }


    if (original == reversed)
        printf("\n\n\n\t\t\t\t%d is a palindrome.\n\n\n", original);
    else
        printf("\n\n\n\t\t\t\t%d is not a palindrome.\n\n\n\n", original);

    break;


  }

  break;

    case 2:
       displayHelp();
       break;

    case 3:
       about();
       break;
    case 4:



        printf("\n\n\n\t\t\t\t====================  Structure Programming Lab  ===================== ");
        printf("\n\n\n\t\t\t\t***********************************************************************");
        printf("\n\n\n\t\t\t\t*************************** Logout  *****************************");
        printf("\n\n\n\t\t\t\tAre you sure you want to logout? (Y/N): ");
    scanf(" %c", &ch);

    if (ch == 'Y' || ch == 'y')
        logout();
        break;


}


    return 0;
}

