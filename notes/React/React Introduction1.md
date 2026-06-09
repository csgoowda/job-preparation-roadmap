# Day 1 – React (2 Hours)



Let's understand this line by line.

### What is React?

React is a JavaScript library used to create websites and web applications.

Instead of writing a full webpage every time, React lets you build small reusable pieces called **components**.

Think of a website like a LEGO house:

* Navbar = 1 component
* Profile Card = 1 component
* Button = 1 component
* Footer = 1 component

You build small pieces and combine them.

---

### Example

```jsx
function App() {
  return <h1>Hello World</h1>;
}
```

### Line 1

```jsx
function App() {
```

This creates a **component** named `App`.

A component is just a JavaScript function that returns UI.

Think:

```jsx
App = Screen
```

React starts by showing whatever is inside the `App` component.

---

### Line 2

```jsx
return <h1>Hello World</h1>;
```

`return` means:

> "Show this on the screen."

`<h1>` is an HTML heading tag.

So React displays:

# Hello World

on the webpage.

---

### Line 3

```jsx
}
```

This closes the function.

---

### Flow

```jsx
function App() {
  return <h1>Hello World</h1>;
}
```

Step 1: React calls `App()`

⬇

Step 2: `App()` returns

```jsx
<h1>Hello World</h1>
```

⬇

Step 3: React displays

# Hello World

in the browser.

---

### Real Example

```jsx
function App() {
  return (
    <div>
      <h1>Chethan</h1>
      <p>ISE Student</p>
    </div>
  );
}
```

Output:

```
Chethan
ISE Student
```

---

### Important Terms for Day 1

| Term      | Meaning                          |
| --------- | -------------------------------- |
| React     | Library for building UI          |
| Component | Reusable piece of UI             |
| Function  | JavaScript code block            |
| JSX       | HTML-like code inside JavaScript |
| return    | What should appear on screen     |

### One-Line Summary

```jsx
function App() {
  return <h1>Hello World</h1>;
}
```

**Creates a React component named `App` and displays "Hello World" on the webpage.**


---

## Part 2: JSX (20 Minutes)

Great! Let's understand **JSX** in a very simple way.

---

# What is JSX?

**JSX = JavaScript XML**

JSX lets us write **HTML-like code inside JavaScript**.

Example:

```jsx
const element = <h1>Hello React</h1>;
```

Looks like HTML, right?

But React understands it and converts it into JavaScript.

---

# Why JSX?

Without JSX, React code looks like this:

```javascript
const element = React.createElement(
  "h1",
  null,
  "Hello React"
);
```

This is harder to read.

With JSX:

```jsx
const element = <h1>Hello React</h1>;
```

Much simpler!

---

# What happens internally?

You write:

```jsx
<h1>Hello React</h1>
```

React converts it to:

```javascript
React.createElement(
  "h1",
  null,
  "Hello React"
);
```

So JSX is just a shortcut.

---

# Rule 1: Use One Parent Element

❌ Wrong

```jsx
return (
  <h1>Hello</h1>
  <p>Welcome</p>
);
```

React gets confused because there are two top-level elements.

---

✅ Correct

```jsx
return (
  <div>
    <h1>Hello</h1>
    <p>Welcome</p>
  </div>
);
```

`div` acts as the parent container.

Structure:

```html
div
 ├─ h1
 └─ p
```

---

# Rule 2: Use className Instead of class

In HTML:

```html
<div class="box">
```

In React JSX:

```jsx
<div className="box">
```

Why?

Because `class` is a reserved keyword in JavaScript.

React uses `className` instead.

---

# Example

```jsx
function App() {
  return (
    <div className="box">
      <h1>Hello React</h1>
      <p>Learning JSX</p>
    </div>
  );
}
```

Output:

```text
Hello React
Learning JSX
```

---

# Quick Revision

| JSX Rule               | Example                          |
| ---------------------- | -------------------------------- |
| One Parent Element     | `<div>...</div>`                 |
| Use className          | `className="box"`                |
| Looks like HTML        | `<h1>Hello</h1>`                 |
| Runs inside JavaScript | `const element = <h1>Hello</h1>` |

---

### Easy Interview Answer

**What is JSX?**

> JSX stands for JavaScript XML. It allows us to write HTML-like code inside JavaScript. JSX makes React code easier to read and write. React converts JSX into JavaScript using `React.createElement()`.


Good question!

### Is JSX created for React?

**Yes.** JSX was introduced by Meta (formerly Facebook) for React.

However, JSX is **not React itself**.

* React = JavaScript library for building UI.
* JSX = A syntax that makes writing React UI easier.

---

### Do React developers usually use JSX?

**Yes, almost always.**

Instead of writing:

```javascript
React.createElement("h1", null, "Hello")
```

developers write:

```jsx
<h1>Hello</h1>
```

It's much shorter and easier to understand.

---

### What is the job of JSX?

JSX's job is to describe **what the UI should look like**.

Example:

```jsx
function App() {
  return (
    <div>
      <h1>Chethan</h1>
      <p>ISE Student</p>
    </div>
  );
}
```

JSX tells React:

> "Create a page with a heading 'Chethan' and a paragraph 'ISE Student'."

React then converts the JSX into JavaScript and displays it in the browser.

---

### Real-Life Analogy

Imagine you're building a house.

* React = Construction workers.
* JSX = Blueprint (design).

JSX describes **what to build**.
React actually **builds and updates** the UI.

---

### One-Line Answer for Interviews

**JSX is a syntax extension for JavaScript that allows us to write HTML-like code in React, making UI code easier to read and write.**


---

## Part 3: Components (30 Minutes)

This is one of the most important React concepts.

# What is a Component?

A **component** is a reusable piece of UI (User Interface).

Think of a website:

* Header
* Navbar
* Login Form
* Footer
* Profile Card

Each can be a separate component.

Instead of writing the same code again and again, we create a component once and reuse it.

---

## Example

```jsx
function Welcome() {
  return <h2>Welcome Student</h2>;
}
```

Here:

* `Welcome` = Component name
* It returns UI
* React displays the returned content

---

## How to Use a Component?

```jsx
<Welcome />
```

When React sees:

```jsx
<Welcome />
```

it calls:

```jsx
Welcome()
```

and shows:

```html
<h2>Welcome Student</h2>
```

on the screen.

---

## Real Example

```jsx
function Welcome() {
  return <h2>Welcome Student</h2>;
}

function App() {
  return (
    <div>
      <Welcome />
      <Welcome />
      <Welcome />
    </div>
  );
}
```

Output:

```text
Welcome Student
Welcome Student
Welcome Student
```

One component, used 3 times.

---

# Types of Components

## 1. Functional Component

```jsx
function Header() {
  return <h1>My Website</h1>;
}
```

This is a normal JavaScript function.

Use it like:

```jsx
<Header />
```

Output:

```text
My Website
```

---

## 2. Arrow Function Component

Same thing, different syntax.

```jsx
const Header = () => {
  return <h1>My Website</h1>;
};
```

Use:

```jsx
<Header />
```

Output:

```text
My Website
```

---

## Why Use Components?

Without components:

```jsx
<h1>My Website</h1>
<h1>My Website</h1>
<h1>My Website</h1>
```

Repeated code ❌

With components:

```jsx
<Header />
<Header />
<Header />
```

Reusable code ✅

---

## Important Rules

### Component names must start with a Capital Letter

✅ Correct

```jsx
function Header() {
  return <h1>Hello</h1>;
}
```

❌ Wrong

```jsx
function header() {
  return <h1>Hello</h1>;
}
```

React treats lowercase names as HTML tags.

---

## Interview Answer

**What is a Component in React?**

> A component is a reusable piece of UI that returns JSX. Components help divide the application into small, reusable, and manageable parts.

---

# Build Project 1 – Hello World App (20 Minutes)

### App.jsx

```jsx
function App() {
  return (
    <div>
      <h1>Hello World</h1>
      <p>My First React App</p>
    </div>
  );
}

export default App;
```

Output:

```text
Hello World
My First React App
```

---

# Build Project 2 – Student Card Component (30 Minutes)

### StudentCard.jsx

```jsx
function StudentCard() {
  return (
    <div>
      <h2>Chethan S Gowda</h2>
      <p>ISE - 6th Semester</p>
      <p>SJCE Mysore</p>
    </div>
  );
}

export default StudentCard;
```

### App.jsx

```jsx
import StudentCard from "./StudentCard";

function App() {
  return (
    <div>
      <StudentCard />
    </div>
  );
}

export default App;
```

---

# Installation (10 Minutes)

### Install Node.js

Check:

```bash
node -v
npm -v
```

### Create React Project Using Vite

```bash
npm create vite@latest react-day1 -- --template react
```

Go inside folder:

```bash
cd react-day1
```

Install dependencies:

```bash
npm install
```

Run project:

```bash
npm run dev
```

---

# Todo Tasks

### 1. Install React

```bash
npm create vite@latest react-day1 -- --template react
```

### 2. Create Project

```bash
cd react-day1
npm install
npm run dev
```

### 3. Create These 3 Components

#### Header.jsx

```jsx
function Header() {
  return <h1>Student Dashboard</h1>;
}

export default Header;
```

#### StudentCard.jsx

```jsx
function StudentCard() {
  return <h2>Chethan</h2>;
}

export default StudentCard;
```

#### Footer.jsx

```jsx
function Footer() {
  return <p>© 2026</p>;
}

export default Footer;
```

### Use Them in App.jsx

```jsx
import Header from "./Header";
import StudentCard from "./StudentCard";
import Footer from "./Footer";

function App() {
  return (
    <>
      <Header />
      <StudentCard />
      <Footer />
    </>
  );
}

export default App;
```

---

# End of Day 1 Checklist

✅ React Introduction
✅ JSX Basics
✅ Components
✅ Install React
✅ Create Vite Project
✅ Build Hello World App
✅ Build Student Card Component
✅ Create 3 Components (Header, StudentCard, Footer)

### Homework

1. Create a `TeacherCard` component.
2. Create a `CourseCard` component.
3. Change StudentCard to show your own details.
4. Push the project to your GitHub repository.
