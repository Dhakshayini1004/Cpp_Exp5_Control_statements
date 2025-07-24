# Experiment 5: To Study and Implement C++ Decision-Making Statements

## Aim

To understand and implement decision-making statements in C++ using:
- if, if-else, and nested if-else constructs.
- switch-case statement with break and exit(0).

---

## Tool Used

VS Code

--- 

## Objectives

- To apply conditional logic using if and nested if-else.
- To implement multi-branch decision logic using switch-case.
- To learn the importance of break, exit(0) in flow control.
- To differentiate when to use if-else and when to prefer switch.

---

## Theory

### If-Else Statement

- Used for conditional branching.
- The code inside the if block executes only when the condition evaluates to true.
- Otherwise, the else block is executed.
- Syntax:
```cpp
if (condition) {
    // Executes if condition is true
} else {
    // Executes if condition is false
}
```

--- 

### Nested If-Else

- if or if-else inside another if or else block.
- Useful when multiple conditions are to be tested in sequence.

Syntax:
```cpp
if (condition1) {
    // Code
} else {
    if (condition2) {
        // Code
    } else {
        // Code
    }
}
```

---

### Switch-Case Statement

- An efficient way to compare a variable against multiple constant values.
- Each case is followed by a constant and a block of code.
- break prevents fall-through; default is executed when no match is found.

Syntax:
```cpp
switch (variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

--- 

#### Points to remember:
- Without break, control will continue into the next case even after a match.
- default is optional but recommended to handle unexpected inputs.

---

## Concepts Used

- `if`, `if-else`, `nested if-else` statements
- switch-case
- `break`
- `exit(0)`

--- 

## Program Description

#### Programs are based on decision-making tasks such as:
  - Even-odd number checking
  - Finding the largest of three numbers
  - Vowel or consonant detection
  - Basic calculator using switch
  - Weekday display using switch

- if-else is used when comparisons involve conditions or ranges.
- switch-case is used when comparing a variable against multiple fixed values.
- break is used to stop further execution inside switch once a case is matched.
- exit(0) is used to terminate the program early in special cases.

## Execution Steps

1. Initialize loop/control variable(s).
2. Check the condition or switch expression.
3. If condition is true or a case matches, execute corresponding code block.
4. Use break or exit(0) as required.
5. Print result/output.
6. Continue or end the program.

## Sample Output

Even-Odd Test:
```
Enter a number for odd-even test: 3456
The entered number 3456 is even
```

Finding Largest of 3 Numbers:
```
Enter 3 numbers: -1 1 0
1 is greatest
```
```
Enter 3 numbers: 2 2 2
All are equal
```
```
Enter 3 numbers: -1 -2 -2
-1 is greatest
```

Vowel or Consonant:
```
Enter a alphabet: e
It is a vowel
```

Basic Calculator using Switch Case:
```
Enter 2 numbers for basic calculator: 44 88
Enter 1 for addition
Enter 2 for Subtraction
Enter 3 for Multiplication
Enter 4 for Division
4
Quotient: 0.5
```
```
Enter 2 numbers for basic calculator: 44 0
Enter 1 for addition
Enter 2 for Subtraction
Enter 3 for Multiplication
Enter 4 for Division
4
Invalid
```

Weekday Display:
```
Enter a number
7
It's a Sunday!! The real enjoyment of next week begins
```
```
Enter a number
10
Invalid
```

