Let's start, bro! 💪

# Day 1 – Session 2: C# and .NET Fundamentals

Week 1 · Day 1

45 minutes

Today's goal: Understand C# variables, data types, input/output and operators. These are essential for building our Employee Management API.

## Session 2 timetable

| Activity                 | Duration |
| ------------------------ | -------- |
| Variables and data types | 10 min   |
| User input and output    | 10 min   |
| Operators                | 10 min   |
| Practical coding         | 10 min   |
| Knowledge test           | 5 min    |

## Topic 1 – Variables in C\#

### What is a variable?

A variable is a named storage location used to store data in a program.

Think of a variable as a labelled box.

[Eduzza](https://images.openai.com/static-rsc-4/ZbgnbgIq1GfrHoglMPVn4Ms1LJvM0lfdOR-Vo7xbHZmVr1LU6en412EYlsym9PYX_gEacTh4cH9RkQOmcvR8Pet6Wr7jDFEkRVqznCx5vI3A9-bOvhWNmfGLwGifBq70IcGfiIhQQ-1l_SWH8HtVNjfUJGmyOegTor5oDQsIgyc?purpose=inline)

[eduzza.com](https://eduzza.com/blogs/python-variables-and-assignment?utm_source=chatgpt.com)

Example:

```
string employeeName = "Rahul";
int employeeAge = 25;
decimal employeeSalary = 35000.50m;
```

Here:

- `employeeName` stores Rahul.
- `employeeAge` stores 25.
- `employeeSalary` stores 35000.50.

### Variable syntax

```
dataType variableName = value;
```

Example:

```
int age = 22;
```

| Part  | Meaning              |
| ----- | -------------------- |
| `int` | Data type            |
| `age` | Variable name        |
| `=`   | Assignment operator  |
| `22`  | Value                |
| `;`   | Statement terminator |

## Topic 2 – C# Data Types

A data type tells C# what kind of value a variable stores.

| Data type | Stores                 | Example     |
| --------- | ---------------------- | ----------- |
| `int`     | Whole numbers          | `25`        |
| `double`  | Decimal numbers        | `25.75`     |
| `float`   | Decimal numbers        | `25.5f`     |
| `decimal` | Precise decimal values | `25000.50m` |
| `string`  | Text                   | `"Rahul"`   |
| `char`    | Single character       | `'A'`       |
| `bool`    | True or false          | `true`      |

Important for interviews

For our Employee Management API, these are useful:

| Employee information | Data type |
| -------------------- | --------- |
| Employee ID          | `int`     |
| Employee name        | `string`  |
| Salary               | `decimal` |
| Active status        | `bool`    |
| Department           | `string`  |

Remember: `decimal` is generally a good choice for financial values such as salary because it provides decimal precision suitable for money calculations.

## Topic 3 – User Input and Output

So far, we have displayed fixed information.

But real applications need to accept information from users.

### Output – Console.WriteLine()

Displays information.

```
Console.WriteLine("Welcome to Employee Management");
```

### Input – Console.ReadLine()

Accepts information from the user as text.

```
Console.Write("Enter employee name: ");

string name = Console.ReadLine() ?? "";

Console.WriteLine("Employee Name: " + name);
```

Example execution:

```
Enter employee name: Rahul
Employee Name: Rahul
```

### Taking numerical input

`Console.ReadLine()` returns text, so we convert it when we need a number.

```
Console.Write("Enter employee age: ");

int age = Convert.ToInt32(Console.ReadLine());

Console.WriteLine($"Age: {age}");
```

### What is string interpolation?

Instead of joining strings using `+`, we can use `$`.

```
string name = "Rahul";
int age = 25;

Console.WriteLine($"My name is {name} and my age is {age}");
```

Output:

```
My name is Rahul and my age is 25
```

Important: The `$` allows variables and expressions to be inserted inside `{}`.

## Topic 4 – Operators in C\#

Operators perform operations on values and variables.

### 1. Arithmetic operators

| Operator | Meaning        | Example       |
| -------- | -------------- | ------------- |
| `+`      | Addition       | `10 + 5 = 15` |
| `-`      | Subtraction    | `10 - 5 = 5`  |
| `*`      | Multiplication | `10 * 5 = 50` |
| `/`      | Division       | `10 / 5 = 2`  |
| `%`      | Remainder      | `10 % 3 = 1`  |

Example:

```
int a = 10;
int b = 5;

Console.WriteLine(a + b);
Console.WriteLine(a - b);
Console.WriteLine(a * b);
Console.WriteLine(a / b);
Console.WriteLine(a % b);
```

### 2. Comparison operators

These compare two values and return `true` or `false`.

| Operator | Meaning               |
| -------- | --------------------- |
| `==`     | Equal to              |
| `!=`     | Not equal to          |
| `>`      | Greater than          |
| `<`      | Less than             |
| `>=`     | Greater than or equal |
| `<=`     | Less than or equal    |

Example:

```
int age = 22;

Console.WriteLine(age >= 18);
```

Output:

```
True
```

### 3. Logical operators

\| Operator | Meaning |\
\|---|---|\
\| `&&` | AND |\
\| `||` | OR |\
\| `!` | NOT |

Example:

```
int age = 22;
bool hasID = true;

Console.WriteLine(age >= 18 && hasID);
```

Output:

```
True
```

Both conditions must be true for `&&` to return true.

## Topic 5 – Practical coding exercise

Important practical

Now let's apply everything to our Employee Management project.

Open `Program.cs` and replace the code with:

```
Console.WriteLine("===== EMPLOYEE REGISTRATION =====");

Console.Write("Enter employee name: ");
string name = Console.ReadLine() ?? "";

Console.Write("Enter employee ID: ");
int employeeId = Convert.ToInt32(Console.ReadLine());

Console.Write("Enter employee salary: ");
decimal salary = Convert.ToDecimal(Console.ReadLine());

Console.Write("Is employee active? (true/false): ");
bool isActive = Convert.ToBoolean(Console.ReadLine());

Console.WriteLine("\n===== EMPLOYEE DETAILS =====");

Console.WriteLine($"Name: {name}");
Console.WriteLine($"Employee ID: {employeeId}");
Console.WriteLine($"Salary: {salary}");
Console.WriteLine($"Active: {isActive}");
```

Run:

```
dotnet run
```

Try these inputs:

```
Employee name: Rahul
Employee ID: 101
Salary: 35000
Is employee active: true
```

Expected output:

```
===== EMPLOYEE DETAILS =====
Name: Rahul
Employee ID: 101
Salary: 35000
Active: True
```

Note: This is a beginner console exercise. Later, our Web API will accept structured requests and validate data safely instead of relying on console input.

## Knowledge test – Answer without looking at the notes

C# Session 2 quiz

5 questions

Practice

1\. Which data type is suitable for employee salary?

int

decimal

bool

Correct

2\. What does Console.ReadLine() return?

int

string

bool

Correct

3\. Which operator checks equality?

\=

\==

!=

Correct

4\. What does % return?

Quotient

Remainder

Percentage

Correct

5\. What does && mean?

OR

AND

NOT

Correct

# Score: 5/5

Try again

📊 Study Progress

Week 1 · Day 1

In progress

- Session 1 – Project development:&#x20;

  Completed · 90 min

- Session 2 – C# fundamentals: In progress

- Covered: Variables, data types, input/output, operators.

- Pending: Practical exercise verification and quiz.

- Overall Day 1: Approximately 50% (estimated).

Your task: Run the employee registration program, send me its output, and complete the quiz. I'll check your code and answers before we move to SQL.
