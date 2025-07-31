# Loops
__For Loop Pattern Programs in C++:__

This repository contains several C++ programs demonstrating the use of for loops to create various number and star patterns with nested loops. Each program includes an algorithm to explain the logic.

Table of Contents:

Simple Nested Loop Output

Star Triangle Pattern

Right-Aligned Star Triangle

Number Pyramid

Hourglass Star Pattern

__Description:__

Prints the sequence of "Outer" and "Inner" loop counters showing how nested loops operate.

__Algorithm:__
1.Start an outer loop from 1 to 2.

2.Print "Outer" with the value of the outer loop variable.

3.Inside the outer loop, start an inner loop from 1 to 3.

4.Print "Inner" with the value of the inner loop variable.

5.Repeat steps 3-4 for each iteration of the outer loop.
2. Number Pyramid

3. Star Triangle Pattern

__Description:__

Prints a right-angled triangle made of stars increasing from 1 to n stars in each row.

__Algorithm:__

1.Set the number of rows n (e.g., 5).

2.For each row i from 1 to n:

3.Print i stars (*).

4.Move to the next line.
4. Right-Aligned Star Triangle

__Description:__

Prints a right-aligned triangle of stars with the number of rows given by user input.

__Algorithm:__

1.Read an integer n from the user.

2.For each row i from 0 to n-1:

3.Print n - i pairs of spaces to create indentation.

4.Print i + 1 stars separated by spaces.

5.Move to the next line.

__Description:__

Prints a triangular number pattern where numbers increment continuously row-wise based on user input.

__Algorithm:__

1.Read number n from the user.

2.Initialize a counter k to 1.

3.For each row i from 0 to n-1:

4.For each column j from 0 to i:

5.Print the current value of k and increment k by 1.

6.Move to the next line after each row.

5. Hourglass Star Pattern

__Description:__

Prints an hourglass-shaped pattern of stars that decreases and then increases symmetrically.

__Algorithm:__

1.First phase (upper part):

2.For i from 1 to 7:

3.Print i-1 spaces.

4.Print 8 - i stars separated by spaces.

5.Second phase (lower part):

6.For i from 1 to 6:

7.Print 6 - i spaces.

8.Print i + 1 stars separated by spaces.
