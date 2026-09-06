// Factorial using Recursion
/*
  5!
= 5 × 4!
= 5 × (4 × 3!)
= 5 × (4 × (3 × 2!))
= 5 × (4 × (3 × (2 × 1!)))
= 5 × (4 × (3 × (2 × (1 × 0!))))
= 5 × 4 × 3 × 2 × 1 × 1
= 120
*/

#include <iostream>
using namespace std;

// Function to calculate factorial
//factorial formula n! = n * (n - 1) * (n - 2) * ... * 1
//factorial work on natural numbers only not on negative numbers and decimal numbers
//factorial of 0 is 1 and factorial of 1 is also 1
int fact(int n)
{
    if (n < 0)
    {
        cout << "Factorial of negative number is not possible ";
        return 0;
    }
    else if (n == 0)
        return 1;
    // Recursive case:
    return n * fact(n - 1);
}
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    // Call factorial function and print the returned result
    cout << fact(number);
    return 0;
}