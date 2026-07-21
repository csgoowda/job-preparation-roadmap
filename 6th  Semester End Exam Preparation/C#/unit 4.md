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
# **Q. Develop a New Windows Form that is Capable of Handling the Following Events**

### **a) MouseMove and MouseDown Events**

### **b) KeyUp Event**

**(10 Marks)**

---

# Definition

A **Windows Form** is a graphical user interface (GUI) provided by the **System.Windows.Forms** namespace. It enables users to interact with applications using controls such as buttons, labels, text boxes, mouse, and keyboard.

Windows Forms support **events**, which occur when the user performs an action like moving the mouse, clicking the mouse, or pressing a key.

According to your notes, Windows Forms applications use the **Form** and **Application** classes, and they can capture and respond to **mouse and keyboard events**.  

---

# Events Used

### 1. MouseMove Event

* Occurs whenever the mouse pointer moves over the form.
* Used to obtain the mouse coordinates.

---

### 2. MouseDown Event

* Occurs when a mouse button is pressed.
* Used to detect Left, Right or Middle mouse button clicks.

---

### 3. KeyUp Event

* Occurs when a keyboard key is released.
* Used to detect which key the user has pressed.

---

# Algorithm

1. Import `System.Windows.Forms`.
2. Create a class that inherits from `Form`.
3. Register `MouseMove`, `MouseDown`, and `KeyUp` events.
4. Display the mouse coordinates when the mouse moves.
5. Display the mouse button when clicked.
6. Display the released keyboard key.
7. Run the form using `Application.Run()`.

---

# C# Program

```csharp
using System;
using System.Windows.Forms;

class MyForm : Form
{
    public MyForm()
    {
        Text = "Windows Form Events";
        Width = 400;
        Height = 300;

        this.MouseMove += Form_MouseMove;
        this.MouseDown += Form_MouseDown;
        this.KeyUp += Form_KeyUp;
    }

    void Form_MouseMove(object sender, MouseEventArgs e)
    {
        Text = "Mouse Position : " + e.X + ", " + e.Y;
    }

    void Form_MouseDown(object sender, MouseEventArgs e)
    {
        MessageBox.Show("Mouse Button : " + e.Button);
    }

    void Form_KeyUp(object sender, KeyEventArgs e)
    {
        MessageBox.Show("Key Released : " + e.KeyCode);
    }

    [STAThread]
    static void Main()
    {
        Application.EnableVisualStyles();
        Application.Run(new MyForm());
    }
}
```

---

# Sample Output

### When Mouse Moves

```
Mouse Position : 150 , 80
```

---

### When Left Mouse Button is Clicked

```
Mouse Button : Left
```

---

### When 'A' Key is Released

```
Key Released : A
```

---

# Explanation

### Creating Form

```csharp
class MyForm : Form
```

Creates a Windows Form by inheriting the `Form` class.

---

### MouseMove Event

```csharp
this.MouseMove += Form_MouseMove;
```

Whenever the mouse moves inside the form,

```csharp
e.X
e.Y
```

return the X and Y coordinates.

---

### MouseDown Event

```csharp
this.MouseDown += Form_MouseDown;
```

When the user presses a mouse button,

```csharp
e.Button
```

returns:

* Left
* Right
* Middle

---

### KeyUp Event

```csharp
this.KeyUp += Form_KeyUp;
```

When a keyboard key is released,

```csharp
e.KeyCode
```

returns the key name such as:

* A
* B
* Enter
* Space

---

### Application.Run()

```csharp
Application.Run(new MyForm());
```

Starts the application and displays the form.

---

# Advantages

* Supports interactive GUI applications.
* Handles mouse and keyboard input easily.
* Improves user experience.
* Enables event-driven programming.
* Easy to develop desktop applications.

---

# Applications

* Drawing Applications
* Paint Software
* Games
* Text Editors
* Student Management Systems
* Calculator Applications

---

# Conclusion

Windows Forms provide an event-driven programming model where user actions generate events. The **MouseMove** event tracks mouse movement, **MouseDown** detects mouse clicks, and **KeyUp** captures keyboard input after a key is released. These events make desktop applications interactive and user-friendly.

---

# Notes Referred

This answer is based on your uploaded **"12 Win Forms.pdf"**:

* Objectives of Windows Forms, including handling **mouse and keyboard events**. 
* `System.Windows.Forms` namespace, **Form** class, and core infrastructure. 

### ⭐ Exam Tip

For full marks:

1. Write the **definition** of Windows Forms and events.
2. Explain **MouseMove**, **MouseDown**, and **KeyUp** events.
3. Write the **complete program**.
4. Include **sample output** and a brief explanation of each event. This is typically sufficient for a 10-mark answer.


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
