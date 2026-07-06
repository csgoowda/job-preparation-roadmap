# Day 2 — Aggregate Functions, GROUP BY, HAVING

These are **very important interview topics**. Almost every SQL interview asks questions from this section.

---

# Aggregate Functions

Aggregate functions perform calculations on multiple rows and return a single value.

Assume the Employees table:

| id | name    | department | salary |
| -- | ------- | ---------- | ------ |
| 1  | Chethan | IT         | 50000  |
| 2  | Ravi    | HR         | 40000  |
| 3  | Kiran   | IT         | 60000  |
| 4  | Manu    | Sales      | 45000  |
| 5  | Arun    | IT         | 55000  |

---

# 1. COUNT()

Counts rows.

### Count all employees

```sql
SELECT COUNT(*)
FROM employees;
```

Output:

| count |
| ----- |
| 5     |

---

### Count employees in IT

```sql
SELECT COUNT(*)
FROM employees
WHERE department='IT';
```

Output:

| count |
| ----- |
| 3     |

---

# 2. SUM()

Adds values.

### Total salary

```sql
SELECT SUM(salary)
FROM employees;
```

Output:

250000

---

# 3. AVG()

Average value.

```sql
SELECT AVG(salary)
FROM employees;
```

Output:

50000

---

# 4. MAX()

Highest value.

```sql
SELECT MAX(salary)
FROM employees;
```

Output:

60000

---

# 5. MIN()

Lowest value.

```sql
SELECT MIN(salary)
FROM employees;
```

Output:

40000

---

# GROUP BY

Used to create groups of rows.

### Count employees department-wise

```sql
SELECT department,
       COUNT(*)
FROM employees
GROUP BY department;
```

Output:

| department | count |
| ---------- | ----- |
| IT         | 3     |
| HR         | 1     |
| Sales      | 1     |

---

### Average salary department-wise

```sql
SELECT department,
       AVG(salary)
FROM employees
GROUP BY department;
```

Output:

| department | avg   |
| ---------- | ----- |
| IT         | 55000 |
| HR         | 40000 |
| Sales      | 45000 |

---

### Maximum salary department-wise

```sql
SELECT department,
       MAX(salary)
FROM employees
GROUP BY department;
```

Output:

| department | max   |
| ---------- | ----- |
| IT         | 60000 |
| HR         | 40000 |
| Sales      | 45000 |

---

# HAVING

HAVING filters groups.

### Departments with average salary > 50000

```sql
SELECT department,
       AVG(salary)
FROM employees
GROUP BY department
HAVING AVG(salary) > 50000;
```

Output:

| department |
| ---------- |
| IT         |

---

# WHERE vs HAVING

### WHERE

Filters rows before grouping.

```sql
SELECT *
FROM employees
WHERE salary > 45000;
```

---

### HAVING

Filters groups after grouping.

```sql
SELECT department,
       AVG(salary)
FROM employees
GROUP BY department
HAVING AVG(salary) > 50000;
```

---

# Execution Order (Interview Favorite)

SQL executes roughly in this order:

```text
FROM
WHERE
GROUP BY
HAVING
SELECT
ORDER BY
LIMIT
```

---

# Important Interview Questions

### Q1. Count total employees

```sql
SELECT COUNT(*)
FROM employees;
```

---

### Q2. Find total salary paid

```sql
SELECT SUM(salary)
FROM employees;
```

---

### Q3. Find average salary

```sql
SELECT AVG(salary)
FROM employees;
```

---

### Q4. Find highest salary

```sql
SELECT MAX(salary)
FROM employees;
```

---

### Q5. Find lowest salary

```sql
SELECT MIN(salary)
FROM employees;
```

---

### Q6. Count employees in each department

```sql
SELECT department,
       COUNT(*)
FROM employees
GROUP BY department;
```

---

### Q7. Find average salary department-wise

```sql
SELECT department,
       AVG(salary)
FROM employees
GROUP BY department;
```

---

### Q8. Find departments having more than 2 employees

```sql
SELECT department,
       COUNT(*)
FROM employees
GROUP BY department
HAVING COUNT(*) > 2;
```

Output:

| department |
| ---------- |
| IT         |

---

### Q9. Find departments with average salary greater than 50000

```sql
SELECT department,
       AVG(salary)
FROM employees
GROUP BY department
HAVING AVG(salary) > 50000;
```

Output:

IT

---

### Q10. Find total salary department-wise

```sql
SELECT department,
       SUM(salary)
FROM employees
GROUP BY department;
```

Output:

| department | total_salary |
| ---------- | ------------ |
| IT         | 165000       |
| HR         | 40000        |
| Sales      | 45000        |

---

# Assignment (Solve Yourself)

Using the same table:

### Easy

1. Count all employees.
2. Find highest salary.
3. Find lowest salary.
4. Find average salary.
5. Find total salary.

### Medium

6. Count employees department-wise.
7. Find maximum salary department-wise.
8. Find minimum salary department-wise.
9. Find total salary department-wise.
10. Find average salary department-wise.

### Hard

11. Departments having more than 1 employee.
12. Departments with average salary > 45000.
13. Departments whose total salary > 100000.
14. Count employees whose salary > 45000 department-wise.
15. Find department with highest average salary.

---

## Interview Must-Know

**COUNT(*) vs COUNT(column)?**

```sql
COUNT(*)        -- counts all rows
COUNT(salary)   -- counts non-NULL salary values
```

**Can HAVING be used without GROUP BY?**

* Yes, but rarely.

**Can aggregate functions be used in WHERE?**

* No ❌
* Use HAVING ✅

---


Using this table:

| id | name    | department | salary |
| -- | ------- | ---------- | ------ |
| 1  | Chethan | IT         | 50000  |
| 2  | Ravi    | HR         | 40000  |
| 3  | Kiran   | IT         | 60000  |
| 4  | Manu    | Sales      | 45000  |
| 5  | Arun    | IT         | 55000  |

---

# Easy

## 1. Count all employees

### Query

```sql
SELECT COUNT(*)
FROM employees;
```

### Output

| count |
| ----- |
| 5     |

### Explanation

COUNT(*) counts all rows in the table.

---

## 2. Find highest salary

### Query

```sql
SELECT MAX(salary)
FROM employees;
```

### Output

| max   |
| ----- |
| 60000 |

### Explanation

MAX() returns the largest value.

---

## 3. Find lowest salary

### Query

```sql
SELECT MIN(salary)
FROM employees;
```

### Output

| min   |
| ----- |
| 40000 |

### Explanation

MIN() returns the smallest value.

---

## 4. Find average salary

### Query

```sql
SELECT AVG(salary)
FROM employees;
```

### Calculation

```text
(50000 + 40000 + 60000 + 45000 + 55000)
/ 5
=
50000
```

### Output

| avg   |
| ----- |
| 50000 |

---

## 5. Find total salary

### Query

```sql
SELECT SUM(salary)
FROM employees;
```

### Calculation

```text
50000 + 40000 + 60000 + 45000 + 55000
=
250000
```

### Output

| sum    |
| ------ |
| 250000 |

---

# Medium

## 6. Count employees department-wise

### Query

```sql
SELECT department,
       COUNT(*)
FROM employees
GROUP BY department;
```

### Output

| department | count |
| ---------- | ----- |
| IT         | 3     |
| HR         | 1     |
| Sales      | 1     |

### Explanation

GROUP BY creates groups based on department.

---

## 7. Find maximum salary department-wise

### Query

```sql
SELECT department,
       MAX(salary)
FROM employees
GROUP BY department;
```

### Output

| department | max_salary |
| ---------- | ---------- |
| IT         | 60000      |
| HR         | 40000      |
| Sales      | 45000      |

### Explanation

Finds highest salary in each department.

---

## 8. Find minimum salary department-wise

### Query

```sql
SELECT department,
       MIN(salary)
FROM employees
GROUP BY department;
```

### Output

| department | min_salary |
| ---------- | ---------- |
| IT         | 50000      |
| HR         | 40000      |
| Sales      | 45000      |

### Explanation

Finds lowest salary in each department.

---

## 9. Find total salary department-wise

### Query

```sql
SELECT department,
       SUM(salary)
FROM employees
GROUP BY department;
```

### Output

| department | total_salary |
| ---------- | ------------ |
| IT         | 165000       |
| HR         | 40000        |
| Sales      | 45000        |

### Calculation

```text
IT
50000 + 60000 + 55000
=
165000
```

---

## 10. Find average salary department-wise

### Query

```sql
SELECT department,
       AVG(salary)
FROM employees
GROUP BY department;
```

### Output

| department | avg_salary |
| ---------- | ---------- |
| IT         | 55000      |
| HR         | 40000      |
| Sales      | 45000      |

### Calculation

```text
IT
(50000 + 60000 + 55000)
/ 3
=
55000
```

---

# Hard

## 11. Departments having more than 1 employee

### Query

```sql
SELECT department,
       COUNT(*)
FROM employees
GROUP BY department
HAVING COUNT(*) > 1;
```

### Output

| department |
| ---------- |
| IT         |

### Explanation

```text
IT = 3 employees
HR = 1 employee
Sales = 1 employee
```

Only IT satisfies the condition.

---

## 12. Departments with average salary > 45000

### Query

```sql
SELECT department,
       AVG(salary)
FROM employees
GROUP BY department
HAVING AVG(salary) > 45000;
```

### Output

| department |
| ---------- |
| IT         |

### Explanation

```text
IT = 55000
HR = 40000
Sales = 45000
```

Only IT is greater than 45000.

---

## 13. Departments whose total salary > 100000

### Query

```sql
SELECT department,
       SUM(salary)
FROM employees
GROUP BY department
HAVING SUM(salary) > 100000;
```

### Output

| department |
| ---------- |
| IT         |

### Explanation

```text
IT = 165000
HR = 40000
Sales = 45000
```

Only IT exceeds 100000.

---

## 14. Count employees whose salary > 45000 department-wise

### Query

```sql
SELECT department,
       COUNT(*)
FROM employees
WHERE salary > 45000
GROUP BY department;
```

### Output

| department | count |
| ---------- | ----- |
| IT         | 3     |

### Explanation

Employees with salary > 45000:

```text
Chethan = 50000
Kiran   = 60000
Arun    = 55000
```

All belong to IT.

---

## 15. Find department with highest average salary

### Query

```sql
SELECT department,
       AVG(salary) AS avg_salary
FROM employees
GROUP BY department
ORDER BY avg_salary DESC
LIMIT 1;
```

### Output

| department | avg_salary |
| ---------- | ---------- |
| IT         | 55000      |

### Explanation

```text
IT    = 55000
Sales = 45000
HR    = 40000
```

IT has the highest average salary.

---

# Interview Revision (Remember)

| Function | Purpose       |
| -------- | ------------- |
| COUNT()  | Count rows    |
| SUM()    | Total         |
| AVG()    | Average       |
| MAX()    | Highest value |
| MIN()    | Lowest value  |
| GROUP BY | Create groups |
| HAVING   | Filter groups |

### Golden Rule

```sql
WHERE  -> Filters rows
HAVING -> Filters groups
```

Example:

```sql
WHERE salary > 45000
```

Filters employees.

```sql
HAVING AVG(salary) > 45000
```

Filters departments.


Tomorrow (Day 3): **JOINs (INNER JOIN, LEFT JOIN, RIGHT JOIN, FULL JOIN)** — one of the most frequently asked SQL interview topics.
