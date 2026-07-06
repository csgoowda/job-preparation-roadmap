# Day 1 — SQL Basics + SELECT

## What is a Database?

A database is a collection of organized data stored electronically.

Example:

| ID | Name    | Age |
| -- | ------- | --- |
| 1  | Chethan | 21  |
| 2  | Ravi    | 22  |
| 3  | Kiran   | 20  |

This table is stored inside a database.

---

# What is DBMS?

**DBMS (Database Management System)** is software used to create, store, manage, and retrieve data.

Examples:

* MySQL
* PostgreSQL
* Oracle Database
* Microsoft SQL Server

---

# What is RDBMS?

**RDBMS (Relational DBMS)** stores data in tables and relationships.

Example:

### Students Table

| StudentID | Name    |
| --------- | ------- |
| 1         | Chethan |
| 2         | Ravi    |

### Courses Table

| CourseID | CourseName |
| -------- | ---------- |
| 101      | Java       |
| 102      | SQL        |

Relationships can be created between tables using keys.

---

# DBMS vs RDBMS

| DBMS               | RDBMS                  |
| ------------------ | ---------------------- |
| Stores data        | Stores data in tables  |
| No relationship    | Supports relationships |
| Less secure        | More secure            |
| Small applications | Large applications     |

**Interview Answer:**

> RDBMS is an advanced version of DBMS that stores data in related tables using keys.

---

# Important Terms

## Table

A collection of rows and columns.

Example:

| ID | Name    | Salary |
| -- | ------- | ------ |
| 1  | Chethan | 50000  |

---

## Row (Record)

One complete entry.

Example:

```text
1 | Chethan | 50000
```

---

## Column (Field)

Represents an attribute.

Example:

```text
ID
Name
Salary
```

---

# Primary Key

A column that uniquely identifies each row.

Example:

| ID | Name    |
| -- | ------- |
| 1  | Chethan |
| 2  | Ravi    |

Here **ID** is Primary Key.

Rules:

* Unique
* Cannot be NULL

---

# SQL Basics

SQL = Structured Query Language

Used to:

* Insert data
* Update data
* Delete data
* Retrieve data

---

# Sample Table

### Employees

| id | name    | age | department | salary |
| -- | ------- | --- | ---------- | ------ |
| 1  | Chethan | 21  | IT         | 50000  |
| 2  | Ravi    | 22  | HR         | 40000  |
| 3  | Kiran   | 23  | IT         | 60000  |
| 4  | Manu    | 24  | Sales      | 45000  |

---

# SELECT Statement

Used to retrieve data.

### Syntax

```sql
SELECT column_name
FROM table_name;
```

### Example

```sql
SELECT name
FROM employees;
```

Output:

| name    |
| ------- |
| Chethan |
| Ravi    |
| Kiran   |
| Manu    |

---

# Select Multiple Columns

```sql
SELECT name, salary
FROM employees;
```

Output:

| name    | salary |
| ------- | ------ |
| Chethan | 50000  |
| Ravi    | 40000  |
| Kiran   | 60000  |
| Manu    | 45000  |

---

# Select All Columns

```sql
SELECT *
FROM employees;
```

`*` means all columns.

---

# WHERE Clause

Used to filter records.

### Syntax

```sql
SELECT *
FROM employees
WHERE condition;
```

### Example

```sql
SELECT *
FROM employees
WHERE department = 'IT';
```

Output:

| id | name    | age | department | salary |
| -- | ------- | --- | ---------- | ------ |
| 1  | Chethan | 21  | IT         | 50000  |
| 3  | Kiran   | 23  | IT         | 60000  |

---

# Comparison Operators

| Operator | Meaning          |
| -------- | ---------------- |
| =        | Equal            |
| >        | Greater than     |
| <        | Less than        |
| >=       | Greater or equal |
| <=       | Less or equal    |
| !=       | Not equal        |

Example:

```sql
SELECT *
FROM employees
WHERE salary > 50000;
```

Output:

Kiran

---

# DISTINCT

Removes duplicate values.

Example:

```sql
SELECT DISTINCT department
FROM employees;
```

Output:

```text
IT
HR
Sales
```

---

# ORDER BY

Sorts data.

### Ascending

```sql
SELECT *
FROM employees
ORDER BY salary ASC;
```

### Descending

```sql
SELECT *
FROM employees
ORDER BY salary DESC;
```

---

# LIMIT

Shows limited rows.

Example:

```sql
SELECT *
FROM employees
LIMIT 2;
```

Output:

First 2 rows only.

---

# Combining Conditions

### AND

```sql
SELECT *
FROM employees
WHERE department='IT'
AND salary > 50000;
```

Output:

Kiran

---

### OR

```sql
SELECT *
FROM employees
WHERE department='IT'
OR department='HR';
```

---

# Interview Questions

### 1. What is SQL?

SQL stands for Structured Query Language used to manage and retrieve data from databases.

---

### 2. What is a Primary Key?

A column that uniquely identifies each row and cannot contain NULL values.

---

### 3. Difference between WHERE and HAVING?

| WHERE                | HAVING              |
| -------------------- | ------------------- |
| Filters rows         | Filters groups      |
| Used before GROUP BY | Used after GROUP BY |

---

### 4. What does SELECT * mean?

It retrieves all columns from a table.

---

### 5. What is DISTINCT?

Used to remove duplicate values.

---

# Practice Questions

Using the Employees table:

### Q1

Display all employees.

### Q2

Display only employee names.

### Q3

Display name and salary.

### Q4

Find employees working in IT department.

### Q5

Find employees with salary greater than 45000.

### Q6

Display unique departments.

### Q7

Sort employees by salary ascending.

### Q8

Sort employees by salary descending.

### Q9

Display first 3 employees.

### Q10

Find employees in IT department with salary greater than 50000.

---

# Assignment

Create this table in PostgreSQL:

```sql
CREATE TABLE employees(
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    department VARCHAR(50),
    salary INT
);
```

Insert:

```sql
INSERT INTO employees VALUES
(1,'Chethan',21,'IT',50000),
(2,'Ravi',22,'HR',40000),
(3,'Kiran',23,'IT',60000),
(4,'Manu',24,'Sales',45000);
```

Then solve Q1–Q10 without looking at notes.



Using the **employees** table:

| id | name    | age | department | salary |
| -- | ------- | --- | ---------- | ------ |
| 1  | Chethan | 21  | IT         | 50000  |
| 2  | Ravi    | 22  | HR         | 40000  |
| 3  | Kiran   | 23  | IT         | 60000  |
| 4  | Manu    | 24  | Sales      | 45000  |

---

## Q1. Display all employees

```sql
SELECT * FROM employees;
```

Output:

| id | name    | age | department | salary |
| -- | ------- | --- | ---------- | ------ |
| 1  | Chethan | 21  | IT         | 50000  |
| 2  | Ravi    | 22  | HR         | 40000  |
| 3  | Kiran   | 23  | IT         | 60000  |
| 4  | Manu    | 24  | Sales      | 45000  |

---

## Q2. Display only employee names

```sql
SELECT name FROM employees;
```

Output:

| name    |
| ------- |
| Chethan |
| Ravi    |
| Kiran   |
| Manu    |

---

## Q3. Display name and salary

```sql
SELECT name, salary FROM employees;
```

Output:

| name    | salary |
| ------- | ------ |
| Chethan | 50000  |
| Ravi    | 40000  |
| Kiran   | 60000  |
| Manu    | 45000  |

---

## Q4. Find employees working in IT department

```sql
SELECT * FROM employees
WHERE department = 'IT';
```

Output:

| id | name    | age | department | salary |
| -- | ------- | --- | ---------- | ------ |
| 1  | Chethan | 21  | IT         | 50000  |
| 3  | Kiran   | 23  | IT         | 60000  |

---

## Q5. Find employees with salary greater than 45000

```sql
SELECT * FROM employees
WHERE salary > 45000;
```

Output:

| id | name    | age   | department | salary |
| -- | ------- | ----- | ---------- | ------ |
| 1  | Chethan | 50000 |            |        |
| 3  | Kiran   | 60000 |            |        |

---

## Q6. Display unique departments

```sql
SELECT DISTINCT department
FROM employees;
```

Output:

| department |
| ---------- |
| IT         |
| HR         |
| Sales      |

---

## Q7. Sort employees by salary ascending

```sql
SELECT * FROM employees
ORDER BY salary ASC;
```

Output:

| name    | salary |
| ------- | ------ |
| Ravi    | 40000  |
| Manu    | 45000  |
| Chethan | 50000  |
| Kiran   | 60000  |

---

## Q8. Sort employees by salary descending

```sql
SELECT * FROM employees
ORDER BY salary DESC;
```

Output:

| name    | salary |
| ------- | ------ |
| Kiran   | 60000  |
| Chethan | 50000  |
| Manu    | 45000  |
| Ravi    | 40000  |

---

## Q9. Display first 3 employees

```sql
SELECT * FROM employees
LIMIT 3;
```

Output:

| id | name    | age | department | salary |
| -- | ------- | --- | ---------- | ------ |
| 1  | Chethan | 21  | IT         | 50000  |
| 2  | Ravi    | 22  | HR         | 40000  |
| 3  | Kiran   | 23  | IT         | 60000  |

---

## Q10. Find employees in IT department with salary greater than 50000

```sql
SELECT * FROM employees
WHERE department = 'IT'
AND salary > 50000;
```

Output:

| id | name  | age | department | salary |
| -- | ----- | --- | ---------- | ------ |
| 3  | Kiran | 23  | IT         | 60000  |

---

### Mini Interview Questions

**1. Difference between `WHERE` and `ORDER BY`?**

* `WHERE` filters rows.
* `ORDER BY` sorts rows.

**2. Difference between `DISTINCT` and `GROUP BY`?**

* `DISTINCT` removes duplicates.
* `GROUP BY` creates groups for aggregate functions.

**3. Difference between `SELECT *` and `SELECT name`?**

* `SELECT *` returns all columns.
* `SELECT name` returns only the name column.

Practice writing these 10 queries manually 2–3 times. In interviews, these basic queries are expected instantly.
Tomorrow: **Day 2 – Aggregate Functions, GROUP BY, HAVING (very important for interviews).**
