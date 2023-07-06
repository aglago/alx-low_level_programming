# Exercises
## Try your hand on these exercises to test your understanding of recursion

### Exercise 1: Factorial
Write a recursive function `factorial` that takes an integer `n` as input and returns the factorial of `n`. The factorial of a non-negative integer `n` is the product of all positive integers less than or equal to `n`. For example, `factorial(5)` should return `5! = 5 * 4 * 3 * 2 * 1 = 120`.

### Exercise 2: Fibonacci Sequence
Write a recursive function `fibonacci` that takes an integer `n` as input and returns the nth term in the Fibonacci sequence. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. The sequence starts with 0 and 1.  
  
For example, `fibonacci(6)` should return `5` because the 6th term in the Fibonacci sequence is 5.

### Exercise 3: Binary Search
Write a recursive function `binarySearch` that takes a sorted array of integers, a search key, and the indices of the lower and upper bounds of the search range. The function should recursively search for the key in the array and return the index where it is found, or -1 if it is not present.

### Exercise 4: Tower of Hanoi
Write a recursive function `towerOfHanoi` that takes three integers `n`, `source`, `destination`, and `auxiliary` as input. The function should solve the Tower of Hanoi problem for `n` disks, where `source` is the source peg, `destination` is the destination peg, and `auxiliary` is the auxiliary peg. The function should print the sequence of moves required to solve the problem.

### Exercise 5: Binary Tree Traversal
Write recursive functions to perform various traversals on a binary tree: `preorder`, `inorder`, and `postorder`. The functions should take a pointer to the root of the tree and perform the respective traversal, printing the values of the tree nodes in the specified order.

These exercises cover a range of problems that can be effectively solved using recursion. They will help you practice recursive thinking, problem-solving, and implementing recursive algorithms in C.


# Solutions
### Exercise 1.
```c
#include <stdio.h>

/* 
Write a recursive function factorial that takes an integer n as input and returns the factorial of n. 
The factorial of a non-negative integer n is the product of all positive integers less than or equal to n. 
For example, factorial(5) should return 5! = 5 * 4 * 3 * 2 * 1 = 120.


Factorial Formula:
num! = num * (num - 1)!
*/

unsigned int factorial(int num);

int main(void)
{
	int n, fact;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	fact = factorial(n);
	printf("Factorial of %d is: %d", n, fact);
}

unsigned int factorial(int num)
{
	// base case
	if (num <= 1)
		return (1);
	return num * factorial(num - 1); // recursive phase
}
```




### Exercise 2
```c
#include <stdio.h>

/**
 * Exercise 2: Fibonacci Sequence
 * Write a recursive function fibonacci that takes an integer n as input and returns the nth term in the Fibonacci sequence. 
 * The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. 
 * The sequence starts with 0 and 1. 
 * For example, fibonacci(6) should return 8 because the 6th term in the Fibonacci sequence is 8.
 *
 *
 * Formula for finding nth term in fibonacci sequence: 
 * F(n) = F(n-1) + F(n-2), where n if greater than > 1
 */

unsigned int fibonacci(int position);

int main(void)
{
	int pos;
	
	printf("Enter the position: ");
	scanf("%d", &pos);
	
	printf("the %dth term of the fibonacci sequence is: %d", pos, fibonacci(pos);
}

unsigned int fibonacci(int position)
{
	if (position > 0)
	{
		if(position == 1)
			return (0);
		if (position == 2)
			return (1);
		return fibonacci(position - 1) + fibonacci(position - 2);
	}
}
```

**ALTERNATIVELY, THIS PROBLEM CAN BE SOLVED ITERATIVELY USING A LOOP**  
  
```C
#include <stdio.h>

unsigned int fibonacci (unsigned int);

int main() {
    unsigned int pos;
    
    printf("Enter a number: ");
    scanf("%u", &pos);
    
    printf("%unth term of sequence is: %u", pos, fibonacci(pos));
    return 0;
}

unsigned int fibonacci (unsigned int position) 
{
    int arr[position];
    arr[0] = 0;
    arr[1] = 1;
    
    for (int i = 2; i < position; i++)
        arr[i] = arr[i-1] + arr[i-2];
        
    return arr[position - 1];
}
```

### Exercise 3: Binary Search




# Get In Touch With Me
Feel free to get in touch if you need help with any of these tasks.  
Twitter: [@ami_aglago](https://twitter.com/ami_aglago)  
WhatsApp: [+233 (0) 509581027](https://wa.me/233509581027?text=Kindle%20be%20brief%20and%20straightforward)  
LinkedIn: [Samuella Manye Aglago](https://www.linkedin.com/in/aglago) 
