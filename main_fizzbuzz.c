/* FizzBuzz Solution
 * by: Eric Gallager
 * 5/6/12
 *
 * Problem: Write a program that prints the numbers from 1 to 100.
 * But for multiples of 3 print "Fizz" instead of the number and for the multiples of five print "Buzz".
 * For numbers which multiples of both three and five print "FizzBuzz".
 *
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h> // I like including more headers than necessary, you never know when they might come in handy!
#ifdef __OBJC__
#include <dispatch/dispatch.h>
#endif

// I felt like using #defines because I could
#define Fizz 3
#define Buzz 5
#define FizzBuzz 15

int main (int number) { // I was using type "double" at first, but had to remove it once I switched from division to remainder (see below)
    for (number = 1; number <= 100; number++) {
		if (number % FizzBuzz == 0) { // using the "remainder" function instead of division because when I used division == 1, it only worked for the first time it hit a multiple of it
			printf("FizzBuzz \n"); // putting the "FizzBuzz" statement first, because when I put it last, it would hit the "Fizz" conditional first and just print that instead
		} else if (number % Fizz == 0) {
			printf("Fizz \n");
		} else if (number % Buzz == 0) {
			printf("Buzz \n");
		} else {
			printf("%i \n", number);
		}
	}
    return 0;
}
// newline \n
