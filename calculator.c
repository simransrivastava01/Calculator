/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Calculator

#include<stdio.h>
int main ()
{
  float n1, result;
  int i, n, choice, n2, res;
  printf ("Calculator\n\n");
  printf ("What do you wanna do?\n 1.Addition\n 2.Subtraction\n 3.Multiply\n 4.Division\n 5.Modulus\n");


  scanf ("%d", &choice);

  if (choice > 5)
    printf ("Invalid Choice");
  else
    {
      printf ("Enter the no. of input values to apply selected operation. ");

      scanf ("%d", &n);
    }


  switch (choice)

    {
    case 1:

      result = 0;
      for (i = 1; i <= n; i++)
	{
	  printf ("Enter next number:");

	  scanf ("%f", &n1);
	  result = result + n1;


	}




      printf ("Result is : %f", result);

      break;



    case 2:

      result = 0;

      for (i = 1; i <= n; i++)

	{

	  printf ("Enter next number:");

	  scanf ("%f", &n1);

	  if (i == 1)

	    result = n1 - result;

	  else

	    result = result - n1;


	}

      printf ("Result is : %f", result);

      break;


    case 3:

      result = 1;

      for (i = 1; i <= n; i++)

	{

	  printf ("Enter next number:");

	  scanf ("%f", &n1);

	  result = result * n1;

	}

      printf ("Result is : %f", result);

      break;


    case 4:

      result = 1;

      for (i = 1; i <= n; i++)

	{

	  printf ("Enter next number:");

	  scanf ("%f", &n1);
	  if (i == 1)
	    result = n1 / result;
	  else
	    result = result / n1;

	}

      printf ("Result is : %f", result);

      break;

    case 5:
      res = 1;

      for (i = 1; i <= n; i++)

	{

	  printf ("Enter next number:");

	  scanf ("%d", &n2);

	  if (i == 1)

	    res = n2;

	  else

	    res = res % n2;
	}

      printf ("Result is : %d", res);

      break;




    }



  return 0;

}
