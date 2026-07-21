# **Q. Explain the Two Mandatory Steps Involved in Creating and Displaying the Main Window in a Program and Illustrate the Functionality of the Application Class with an Example.**

**(10 Marks)**

---

# Definition

A **Windows Form** is a graphical user interface (GUI) window used to create desktop applications in C#. The **Form** class represents a window, while the **Application** class manages the execution of a Windows Forms application.

According to your notes, the **Form** and **Application** classes are the core infrastructure of the `System.Windows.Forms` namespace. 

---

# Introduction

To create and display the main window of a Windows Forms application, **two mandatory steps** are required:

1. **Create a class that inherits from the `Form` class.**
2. **Start the application by calling `Application.Run()` with the form object.**

These steps allow the application to create the main window and start the message loop that keeps the window active. Your notes explain that the `Form` class represents windows and that the `Application` class is used to build the main window.  

---

# Step 1: Create the Main Window

### Theory

* Create a class that **inherits** from `Form`.
* This class becomes the main window of the application.
* Set properties such as **Title**, **Width**, and **Height**.

### Syntax

```csharp
class MainWindow : Form
{
}
```

### Example

```csharp
class MainWindow : Form
{
    public MainWindow()
    {
        Text = "My First Window";
        Width = 400;
        Height = 300;
    }
}
```

---

# Step 2: Display the Main Window

### Theory

* The application starts by calling the **Application.Run()** method.
* `Application.Run()` displays the form and starts the Windows message loop.

### Syntax

```csharp
Application.Run(new MainWindow());
```

---

# Complete C# Program

```csharp
using System;
using System.Windows.Forms;

class MainWindow : Form
{
    public MainWindow()
    {
        Text = "My First Window";
        Width = 400;
        Height = 300;
    }
}

class Program
{
    static void Main()
    {
        Application.Run(new MainWindow());
    }
}
```

---

# Output

```
---------------------------------
|                               |
|        My First Window        |
|                               |
|                               |
---------------------------------
```

(A Windows Form titled **"My First Window"** appears.)

---

# Functionality of the Application Class

The **Application** class controls the execution of a Windows Forms application.

### Main Functions

* Starts the application.
* Displays the main window.
* Starts the message loop.
* Processes keyboard and mouse events.
* Ends the application when the main form is closed.

Your notes identify the **Application** class as one of the core infrastructure classes used to build Windows Forms applications. 

---

# Important Methods of the Application Class

| Method                 | Description                                       |
| ---------------------- | ------------------------------------------------- |
| `Run()`                | Starts the application and displays the main form |
| `Exit()`               | Closes the application                            |
| `DoEvents()`           | Processes pending Windows messages                |
| `EnableVisualStyles()` | Enables modern Windows controls                   |

---

# Simple Example of Application Class

```csharp
using System;
using System.Windows.Forms;

class MyForm : Form
{
    public MyForm()
    {
        Text = "Application Class Example";
    }
}

class Program
{
    static void Main()
    {
        Application.EnableVisualStyles();
        Application.Run(new MyForm());
    }
}
```

---

# Output

```
-------------------------------
|                             |
| Application Class Example   |
|                             |
-------------------------------
```

---

# Advantages of the Application Class

* Starts the Windows Forms application.
* Displays the main window.
* Handles user messages and events.
* Manages the application life cycle.
* Provides methods to exit the application safely.

---

# Applications of Windows Forms

* Student Management System
* Library Management System
* Banking Applications
* Billing Software
* Hospital Management System

---

# Conclusion

The two mandatory steps for creating a Windows Forms application are:

1. **Create a class derived from `Form`.**
2. **Call `Application.Run()` to display the form.**

The **Application** class is responsible for starting the application, displaying the main window, processing messages, and managing the overall execution of the program.

---

# Notes Referred

This answer is based on your uploaded **"12 Win Forms.pdf"**:

* Objectives and use of the **Form** and **Application** classes. 
* `System.Windows.Forms` namespace and core infrastructure (`Form`, `Application`). 
* Building a main window using the `Form` class. 

> **Exam Tip:** The examiner usually expects you to mention these **two mandatory steps** clearly:
>-
> ---
---
---
---
---
----
---
---
---
---


---
---
---
---
----
---
---
---
---


---
---
---
---
----
---
---
---
---



---
---
---
---
----
---
---
---
---
> 1. **Derive a class from `Form`.**
> 2. **Call `Application.Run()` to create and display the main window.** This is the key point to score full marks.
---
