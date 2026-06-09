# Day 2 – React (2 Hours)

## Part 1: Props (30 Minutes)

### What are Props?

**Props (Properties)** are used to pass data from a parent component to a child component.

Think of props as function parameters.

Example:

```jsx id="6h6ylt"
<StudentCard
  name="Chethan"
  branch="ISE"
/>
```

Here:

```text id="crq3j6"
name = "Chethan"
branch = "ISE"
```

are props.

---

## Part 2: Reusable Components (30 Minutes)

### Without Props

Bad Practice ❌

```jsx id="u13p6v"
function StudentCard()
{
  return (
    <div>
      <h2>Chethan</h2>
      <p>ISE</p>
    </div>
  );
}
```

Can only display one student.

---

### With Props

Good Practice ✅

```jsx id="2z5o3u"
function StudentCard(props)
{
  return (
    <div>
      <h2>{props.name}</h2>
      <p>{props.branch}</p>
    </div>
  );
}
```

Now the component can display any student.

---

# Build Project – Student Profile Card

## Step 1: Create StudentCard.jsx

```jsx id="l05dgn"
function StudentCard(props)
{
  return (
    <div>
      <h2>Name: {props.name}</h2>
      <p>Branch: {props.branch}</p>
      <p>Semester: {props.semester}</p>
    </div>
  );
}

export default StudentCard;
```

---

## Step 2: Use Component in App.jsx

```jsx id="d64gmg"
import StudentCard from "./StudentCard";

function App()
{
  return (
    <div>
      <StudentCard
        name="Chethan S Gowda"
        branch="ISE"
        semester="6th"
      />
    </div>
  );
}

export default App;
```

---

## Output

```text id="pcw2ys"
Name: Chethan S Gowda
Branch: ISE
Semester: 6th
```

---

# Display Dynamic Data

Props make data dynamic.

Example:

```jsx id="3o9qvn"
<StudentCard
  name="Rahul"
  branch="CSE"
  semester="5th"
/>
```

Output:

```text id="aw9s6y"
Name: Rahul
Branch: CSE
Semester: 5th
```

Same component, different data.

---

# Create Multiple Cards

## App.jsx

```jsx id="6zppjy"
import StudentCard from "./StudentCard";

function App()
{
  return (
    <div>
      <StudentCard
        name="Chethan"
        branch="ISE"
        semester="6th"
      />

      <StudentCard
        name="Rahul"
        branch="CSE"
        semester="5th"
      />

      <StudentCard
        name="Priya"
        branch="ECE"
        semester="4th"
      />
    </div>
  );
}

export default App;
```

---

## Output

```text id="7zcqlc"
Name: Chethan
Branch: ISE
Semester: 6th

Name: Rahul
Branch: CSE
Semester: 5th

Name: Priya
Branch: ECE
Semester: 4th
```

---

# Full Project Code

## StudentCard.jsx

```jsx id="pnqvag"
function StudentCard(props)
{
  return (
    <div>
      <h2>Name: {props.name}</h2>
      <p>Branch: {props.branch}</p>
      <p>Semester: {props.semester}</p>
    </div>
  );
}

export default StudentCard;
```

---

## App.jsx

```jsx id="2g53hy"
import StudentCard from "./StudentCard";

function App()
{
  return (
    <div>
      <h1>Student Profiles</h1>

      <StudentCard
        name="Chethan"
        branch="ISE"
        semester="6th"
      />

      <StudentCard
        name="Rahul"
        branch="CSE"
        semester="5th"
      />

      <StudentCard
        name="Priya"
        branch="ECE"
        semester="4th"
      />
    </div>
  );
}

export default App;
```

---

# Interview Notes

### What are Props?

```text id="n6fkv0"
Props are used to pass data
from parent component to child component.
```

### Why use Props?

```text id="ud8m79"
To make components reusable.
```

### Syntax

```jsx id="9i4s6z"
<Component name="Chethan" />
```

Access:

```jsx id="a3rj1q"
props.name
```

---

# Today's Checklist

✅ Learn Props

✅ Learn Reusable Components

✅ Create StudentCard Component

✅ Pass Props

✅ Display Dynamic Data

✅ Create Multiple Cards

---

# Homework

### Create a TeacherCard Component

```jsx id="v7pgo0"
<TeacherCard
  name="Ravi Kumar"
  subject="Java"
  experience="10 Years"
/>
```

### Create a CourseCard Component

```jsx id="k96b55"
<CourseCard
  course="React"
  duration="30 Days"
/>
```

### Push Project to GitHub

```bash id="v7yl4h"
git add .
git commit -m "Day 2 React Props"
git push
```

### English Correction

Your sentence:

> "give qns and out put and all in commend line"

Correct sentence:

> **"Please give the question, output, and explanation in comment lines."** ✅
