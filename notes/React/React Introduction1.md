# Day 1 – React (2 Hours)

## Part 1: React Introduction (20 Minutes)

### What is React?

React is a JavaScript library used to build user interfaces (UI).

Benefits:

* Reusable Components
* Fast Rendering
* Easy to Maintain
* Used by many companies

Example:

```jsx
function App() {
  return <h1>Hello World</h1>;
}
```

---

## Part 2: JSX (20 Minutes)

### What is JSX?

JSX = JavaScript XML

Allows writing HTML-like code inside JavaScript.

Example:

```jsx
const element = <h1>Hello React</h1>;
```

Without JSX:

```javascript
const element = React.createElement(
  "h1",
  null,
  "Hello React"
);
```

### Rules of JSX

✅ Use one parent element

```jsx
return (
  <div>
    <h1>Hello</h1>
    <p>Welcome</p>
  </div>
);
```

✅ Use `className` instead of `class`

```jsx
<div className="box">
```

---

## Part 3: Components (30 Minutes)

### What is a Component?

A reusable piece of UI.

Example:

```jsx
function Welcome() {
  return <h2>Welcome Student</h2>;
}
```

Use:

```jsx
<Welcome />
```

### Types

#### Functional Component

```jsx
function Header() {
  return <h1>My Website</h1>;
}
```

#### Arrow Function Component

```jsx
const Header = () => {
  return <h1>My Website</h1>;
};
```

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
