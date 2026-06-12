# Day 4 – React (2 Hours)

# 1. Forms in React (30 Minutes)

## What is a Form?

A form is used to collect user data.

Example:

```text
Student Registration Form

Name
Email
Phone

[Submit]
```

Common examples:

* Login Form
* Registration Form
* Contact Form

---

# 2. Inputs in React

HTML Input:

```jsx
<input type="text" />
```

Used for:

```text
Name
Email
Phone
Password
```

Example:

```jsx
<input type="text" placeholder="Enter Name" />
```

---

# 3. Event Handling

## What is an Event?

An event occurs when the user interacts.

Examples:

```text
Click Button
Type Input
Submit Form
```

React uses:

```jsx
onClick
onChange
onSubmit
```

---

## Example

```jsx
function handleClick()
{
    alert("Button Clicked");
}

<button onClick={handleClick}>
    Click Me
</button>
```

---

# Controlled Components

## What is a Controlled Component?

The input value is controlled by React State.

Example:

```jsx
const [name, setName] = useState("");
```

Input:

```jsx
<input
    type="text"
    value={name}
    onChange={(e) => setName(e.target.value)}
/>
```

---

## How It Works

User types:

```text
Chethan
```

React stores:

```jsx
name = "Chethan"
```

UI updates automatically.

---

# Student Registration Form Project

## Requirements

Fields:

```text
Name
Email
Phone
```

Button:

```text
Submit
```

---

# Step 1: Create State

```jsx
const [name, setName] = useState("");
const [email, setEmail] = useState("");
const [phone, setPhone] = useState("");
```

Purpose:

```text
Store form data
```

---

# Step 2: Create Inputs

Name:

```jsx
<input
    type="text"
    value={name}
    onChange={(e) => setName(e.target.value)}
/>
```

Email:

```jsx
<input
    type="email"
    value={email}
    onChange={(e) => setEmail(e.target.value)}
/>
```

Phone:

```jsx
<input
    type="text"
    value={phone}
    onChange={(e) => setPhone(e.target.value)}
/>
```

---

# Step 3: Handle Submit

```jsx
function handleSubmit(event)
{
    event.preventDefault();

    console.log(name);
    console.log(email);
    console.log(phone);
}
```

---

## Why preventDefault()?

Normally:

```text
Submit Form

↓

Page Refresh
```

We don't want that.

So:

```jsx
event.preventDefault();
```

prevents page refresh.

---

# Full Project Code

## App.jsx

```jsx
import { useState } from "react";

function App()
{
    const [name, setName] = useState("");
    const [email, setEmail] = useState("");
    const [phone, setPhone] = useState("");

    function handleSubmit(event)
    {
        event.preventDefault();

        console.log("Name:", name);
        console.log("Email:", email);
        console.log("Phone:", phone);

        alert("Form Submitted");
    }

    return (
        <div>
            <h1>Student Registration Form</h1>

            <form onSubmit={handleSubmit}>

                <input
                    type="text"
                    placeholder="Enter Name"
                    value={name}
                    onChange={(e) =>
                        setName(e.target.value)
                    }
                />

                <br /><br />

                <input
                    type="email"
                    placeholder="Enter Email"
                    value={email}
                    onChange={(e) =>
                        setEmail(e.target.value)
                    }
                />

                <br /><br />

                <input
                    type="text"
                    placeholder="Enter Phone"
                    value={phone}
                    onChange={(e) =>
                        setPhone(e.target.value)
                    }
                />

                <br /><br />

                <button type="submit">
                    Submit
                </button>

            </form>
        </div>
    );
}

export default App;
```

---

# How It Works

Initial:

```text
name = ""
email = ""
phone = ""
```

User enters:

```text
Name  : Chethan
Email : chethan@gmail.com
Phone : 9876543210
```

State becomes:

```jsx
name = "Chethan"
email = "chethan@gmail.com"
phone = "9876543210"
```

Click Submit:

```text
Console:

Name: Chethan
Email: chethan@gmail.com
Phone: 9876543210
```

---

# Pattern Recognition

Whenever you see:

```text
Form
Input Field
Registration
Login
Contact Form
```

Think:

```text
useState
onChange
onSubmit
```

---

# Interview Questions

## What is a Controlled Component?

Answer:

```text
A form element whose value
is controlled by React State.
```

---

## What does onChange do?

Answer:

```text
It updates state whenever
the input value changes.
```

---

## What does onSubmit do?

Answer:

```text
It runs when the form
is submitted.
```

---

## Why use preventDefault()?

Answer:

```text
To prevent page refresh
after form submission.
```

---

# Today's Todo

✅ Learn Forms

✅ Learn Inputs

✅ Learn Event Handling

✅ Create Student Registration Form

✅ Use Controlled Components

✅ Handle Form Submit

---

# Push to GitHub

```bash
git add .
git commit -m "Day 4 React Forms"
git push
```

### Homework

1. Add **Age** field.
2. Add **Address** field.
3. Clear all inputs after submit.
4. Display submitted data below the form.

### Memory Trick

```text
Input Change
↓

onChange

Store Data
↓

useState

Submit Form
↓

onSubmit

Prevent Refresh
↓

preventDefault()
```
