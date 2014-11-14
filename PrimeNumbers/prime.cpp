/*Finds all the prime numbers from 1 to 999*/

#include <stdio.h>
#define ARRAYSIZE 1000

int main()
{
	int numbers[ARRAYSIZE];	 /*The actual numbers to check if prime*/
	int	primeOrNot[ARRAYSIZE];	/*1 if prime, 0 if not */

	/*Setup the arrays*/
	for (int i = 0; i<ARRAYSIZE; i++)
	{
		primeOrNot[i] = 1;
		numbers[i] = i + 1;
	}
	/*Test the numbers of the array*/
	for (int i = 1; i<ARRAYSIZE; i++)
	{
		if (primeOrNot[i] == 1)
		{
			for (int j = i + 1; j < ARRAYSIZE; j++)
			{
				if (numbers[j] % numbers[i] == 0)
				{
					primeOrNot[j] = 0;
				}
			}
		}
	}

	/*print the results*/
	printf("The prime numbers from 1 to %d are: ", ARRAYSIZE);
	for (int i = 1; i < ARRAYSIZE; i++)
	{
		if (primeOrNot[i] == 1)
		{
			printf("%3d ", numbers[i]);
		}
	}
	printf("\n\n");
	return 0;
}
