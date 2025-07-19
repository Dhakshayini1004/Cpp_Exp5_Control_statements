# C++ Experiment 5: To study and implement C++ decision making statements

## Aim

To:
1. To implement if-else and nested if statements.
2. To implement swtich case.

---

## Objectives

- To use if and nested if statements to code boundary conditions.
- To use `exit(0)` and `break` on switch case and understand their uses.
- TO understand the syntax and structure of switch case.

---

## Theory
### If-else Statement
- If-else is a control statement that selects the code to be executed depending on whethere the entered condtion is true or false. If the entered condition is true, the code under if is executed, whereas if false, the code under else is executed.
```
 if(condition){
      code
}
else{
      code
)
```
### Swtich Case
- Switch case is a selection control statement like if else, however it is used when a lot of options are possible.
- When you have multiple values to check for a single variable.
- Alternative to writing multiple if-else if statements.
- If you don't use break, control will continue to the next case even if the match was found.
- expression is evaluated.
- The value is matched with one of the case labels.
- If a match is found, execution starts from that case.
- `break` is used to exit the switch block after a match.
- If no match is found, default (if present) is executed.

  
  ```
  switch (choice) {
    case value1:
        // Code block for value1
        break;

    case value2:
        // Code block for value2
        break;

    // You can have any number of case statements
    default:
        // Code block if no case matches
  }
  ```

## Program Description

### Syntax
- We define variables to hold the user-input values.
- When using switch case, the variable to be evaluated is `(variable)`, according to the value of variable, the code is executed.
- However on if-else or nested ifs, a condition is given `if()`,thus if true, condition under if is executed or the code under else.
- exit(0); is a function call that immediately terminates the program. 0 means successful or normal termination.

## Concepts Used

- if-else statements
- Nested if statements
- Switch case
- `break`,`exit(0)`

---
### 🧪 Sample Output
- Even-Odd test
```
Enter a number for odd-even test: 3456
The entered number 3456 is even
```
-  Finding Largest of 3 numbers without logical functions
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
- Vowel or consonant
```
Enter a alphabet: e
It is a vowel
```
- Basic calculator using switch case
```
Enter 2 numbers for basic calculator: 44 88
Enter 1 for addition
Enter 2 for Subtraction
Enter 3 for Multiplication
Enter 4 for Division
4
Quotient: 0.5
```
- Weekday Display
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
