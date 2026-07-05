# Operating System Fundamentals

Before learning OS interview topics, first understand:

> **Why do we even need an Operating System?**

Without an OS, a computer is just hardware.

You would have to manually tell the CPU, RAM, keyboard, and storage how to communicate.

The OS acts as a **manager** between the user and hardware.

```text
User
 ↓
Operating System
 ↓
Hardware
```

---

# What is an Operating System?

An Operating System (OS) is system software that manages computer hardware, software resources, and provides services to programs.

### Examples

* Windows
* Linux
* macOS
* Android

---

# Real-Life Example

Imagine a college.

### Principal

Manages everything.

### Students

Request resources.

### Staff

Perform tasks.

Similarly:

### OS

Manages everything.

### Programs

Request resources.

### Hardware

Provides resources.

---

# Functions of an Operating System

---

## 1. Process Management

The OS manages running programs.

Example:

You open:

* Chrome
* VS Code
* Spotify

OS decides:

* Which program runs first
* How much CPU each gets

---

## 2. Memory Management

OS manages RAM.

Example:

RAM = 8 GB

Open:

* Chrome → 2 GB
* VS Code → 1 GB
* Spotify → 500 MB

OS allocates memory.

---

## 3. File Management

OS manages files and folders.

Example:

```text
Documents/
Pictures/
Videos/
```

Without OS, organizing files would be impossible.

---

## 4. Device Management

OS controls:

* Keyboard
* Mouse
* Printer
* USB

Through device drivers.

---

## 5. Security

OS provides:

* Login passwords
* User permissions
* Access control

---

# Types of Operating Systems

---

# 1. Batch Operating System

Jobs are collected and executed in batches.

Example:

Old payroll systems.

---

### Advantage

High throughput.

### Disadvantage

No direct user interaction.

---

# 2. Multiprogramming OS

Multiple programs stay in memory simultaneously.

Example:

```text
Program A
Program B
Program C
```

CPU switches among them.

---

### Goal

Keep CPU busy.

---

# 3. Multitasking OS

Multiple applications run apparently at the same time.

Example:

```text
Chrome
VS Code
Spotify
```

Running together.

---

### Example

Windows and Linux.

---

# 4. Multiuser OS

Multiple users share the same system.

Example:

Linux server.

Many users connected simultaneously.

---

# 5. Real-Time Operating System (RTOS)

Used where response time is critical.

Examples:

* Air Traffic Control
* Medical Equipment
* Robotics

---

### Example

Pacemaker.

Response delay could be dangerous.

---

# What is a Kernel?

**A kernel is the central core of an operating system that manages communication between hardware and software, controlling system resources like CPU, memory, and input/output devices.** It is always loaded into memory at startup and ensures stability, security, and efficient resource allocation.  [Wikipedia](https://en.wikipedia.org/wiki/Kernel_%28operating_system%29)  

---

## 🔑 Key Functions of a Kernel
- **Resource Management**: Allocates CPU time, memory, and I/O devices among processes.
- **Process Scheduling**: Decides which program runs at a given time.
- **Memory Management**: Keeps track of memory usage, prevents conflicts, and isolates user space from kernel space.
- **Device Management**: Uses device drivers to control hardware like disks, keyboards, and network cards.
- **System Calls Interface**: Provides a low-level API for applications to request services (e.g., file access, networking).

---

## 🛠 Kernel Types
| **Type**            | **Description** | **Examples** |
|----------------------|-----------------|--------------|
| **Monolithic Kernel** | All OS services run in kernel space for speed. | Linux, Unix |
| **Microkernel**       | Minimal core; most services run in user space for modularity and resilience. | MINIX, QNX |
| **Hybrid Kernel**     | Mix of monolithic and microkernel features. | Windows NT, macOS |
| **Exokernel**         | Provides minimal abstraction, giving applications more direct hardware control. | MIT Exokernel project |

---

## 📌 Kernel in Practice
- **Linux Kernel**: Free, open-source, created by Linus Torvalds in 1991, widely used in servers, desktops, and Android devices.  [Wikipedia](https://en.wikipedia.org/wiki/Linux_kernel)  
- **Windows Kernel**: Hybrid design, integrates performance with modularity.  
- **macOS Kernel (XNU)**: Combines Mach microkernel with BSD components.  

---

## ⚠️ Why Kernels Matter
- **Stability**: Prevents faulty apps from crashing the system.  
- **Security**: Protects kernel space from unauthorized access.  
- **Performance**: Optimizes CPU and memory usage.  

---


---

### Architecture

```text
User
 ↓
Application
 ↓
Kernel
 ↓
Hardware
```

---

# Responsibilities of Kernel

* Memory Management
* Process Management
* Device Management
* System Calls

---

# Real-Life Example

Think of Kernel as:

```text
Prime Minister
```

Every important decision goes through it.

---

# What is a Shell?

**A shell is the user interface of an operating system that lets you communicate with the kernel by typing commands or using graphical menus.** It acts as a bridge between you and the system, supporting both command-line (CLI) shells like Bash and graphical shells like Windows Explorer.  [GeeksForGeeks](https://www.geeksforgeeks.org/operating-systems/shell-in-operating-system/)  [Analytics Vidhya](https://www.analyticsvidhya.com/blog/2024/06/what-is-shell/)  

---

## 🔑 What a Shell Does
- **Command Interpretation**: Reads and executes user commands.
- **Program Execution**: Launches applications or system utilities.
- **Input/Output Redirection**: Controls where data flows (e.g., `>` to send output to a file).
- **Pipes**: Connects commands so one’s output becomes another’s input (`ls | grep txt`).
- **Scripting**: Automates tasks with shell scripts.
- **Environment Customization**: Lets you set aliases, variables, and preferences.  [GeeksForGeeks](https://www.geeksforgeeks.org/operating-systems/shell-in-operating-system/)  

---

## 🖥️ Types of Shells
| **Type** | **Interface** | **Examples** | **Use Cases** |
|----------|---------------|--------------|---------------|
| **Command-Line Shell (CLI)** | Text-based | Bash, sh, csh, zsh, ksh, fish | System administration, programming, automation |
| **Graphical Shell (GUI)** | Windows, icons, menus | GNOME Shell (Linux), Windows Explorer | Everyday user interaction, file management |  [GeeksForGeeks](https://www.geeksforgeeks.org/operating-systems/shell-in-operating-system/)  [Analytics Vidhya](https://www.analyticsvidhya.com/blog/2024/06/what-is-shell/)  

---

## ⚙️ Popular Shells
- **Bash (Bourne Again Shell)**: Default in Linux, supports scripting, job control, and command history.  
- **Zsh**: Advanced features like auto-completion, plugins, and themes.  
- **Csh**: Syntax similar to C programming.  
- **Ksh (Korn Shell)**: Strong scripting capabilities.  
- **Fish (Friendly Interactive Shell)**: User-friendly with auto-suggestions and syntax highlighting.  [Analytics Vidhya](https://www.analyticsvidhya.com/blog/2024/06/what-is-shell/)  

---

## 📌 Example: Simple Bash Script
```bash
#!/bin/bash
echo "Welcome to Shell Scripting!"
```
This script prints a message when executed, showing how shells can automate tasks.  [GeeksForGeeks](https://www.geeksforgeeks.org/operating-systems/shell-in-operating-system/)  

---

## ✅ Advantages
- Lightweight and fast.  
- Powerful for system administration.  
- Highly customizable.  
- Excellent for automation.  

## ⚠️ Disadvantages
- CLI shells can be complex for beginners.  
- Requires memorizing commands.  
- Syntax errors in scripts may cause failures.  [GeeksForGeeks](https://www.geeksforgeeks.org/operating-systems/shell-in-operating-system/)  

---
---

# Shell vs Kernel

| Shell            | Kernel            |
| ---------------- | ----------------- |
| User interface   | Core of OS        |
| Accepts commands | Executes commands |
| Outer layer      | Inner layer       |

---

# System Calls

**System calls are the fundamental interface between user programs and the operating system, allowing applications to request services like file handling, process control, memory management, and device communication.** They act as the gateway for switching from *user mode* to *kernel mode* safely.  

---

## 🔑 What Are System Calls?
- **Definition**: A system call is a programmatic request from a user-level process to the OS kernel for a service.  
- **Purpose**: Provides controlled access to hardware and kernel-level functions.  
- **Mechanism**: Usually triggered by a software interrupt or trap instruction, which transfers control to the kernel.  
- **Security**: Ensures user programs cannot directly manipulate hardware or kernel memory.  

---

## 🛠 Categories of System Calls
| **Category** | **Examples** | **Purpose** |
|--------------|--------------|-------------|
| **File System Operations** | `open()`, `read()`, `write()`, `close()` | Manage files and directories. |
| **Process Control** | `fork()`, `exec()`, `wait()`, `exit()`, `kill()` | Create, terminate, and synchronize processes. |
| **Memory Management** | `brk()`, `sbrk()`, `mmap()`, `munmap()` | Allocate and free memory dynamically. |
| **Device Management** | `ioctl()`, `read()`, `write()` | Interact with hardware devices. |
| **Interprocess Communication (IPC)** | `pipe()`, `socket()`, `shmget()`, `semget()` | Enable communication and synchronization between processes.   [Wikipedia](https://en.wikipedia.org/wiki/System_call)  [GeeksForGeeks](https://www.geeksforgeeks.org/operating-systems/traps-and-system-calls-in-operating-system-os/)  [GeeksForGeeks](https://www.geeksforgeeks.org/operating-systems/different-types-of-system-calls-in-os/) |

---

## 📌 Example: File Handling System Call
```c
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("example.txt", O_CREAT | O_WRONLY, 0644);
    write(fd, "Hello, System Call!", 20);
    close(fd);
    return 0;
}
```
- **open()**: Creates or opens a file.  
- **write()**: Writes data to the file.  
- **close()**: Closes the file descriptor.  

---

## ⚙️ How System Calls Work
1. **User Program** places request (e.g., `read()`).
2. **Trap Instruction** switches CPU to kernel mode.
3. **Kernel Handler** validates and executes the request.
4. **Control Returns** to user mode with results.  

---

## ✅ Advantages
- Provides **safe access** to hardware.  
- Enables **multi-tasking** and resource sharing.  
- Supports **automation and scripting**.  

## ⚠️ Limitations
- **Performance overhead** due to mode switching.  
- **Complexity** in debugging system-level errors.  
- **Portability issues** since system calls differ across OS (Linux vs Windows).  

---
---

# Why System Calls?

Security.

Without them:

Applications could directly manipulate hardware.

---

# User Mode vs Kernel Mode

**User mode is where applications run with restricted access, while kernel mode is where the operating system’s core executes with full control over hardware.** The distinction ensures security, stability, and efficient resource management in modern operating systems.  

---

## 🔑 Key Differences Between User Mode and Kernel Mode

| **Aspect** | **User Mode** | **Kernel Mode** |
|------------|---------------|-----------------|
| **Access Level** | Limited, cannot directly access hardware or kernel memory | Full, unrestricted access to CPU, memory, and devices |
| **Who Runs Here** | Application programs (e.g., text editors, browsers) | Operating system kernel, device drivers, system services |
| **Memory Space** | Each process has its own isolated memory space | Shared memory space for kernel and system processes |
| **Error Impact** | Crashes affect only the application | Errors can crash the entire system |
| **Instruction Privileges** | Cannot execute privileged instructions | Can execute all instructions, including hardware-level |
| **Transition Mechanism** | Requests services via **system calls** | Executes requested services, then returns to user mode |
| **Performance** | Safer but slower (due to mode switching overhead) | Faster for low-level tasks but riskier if misused |

---

## 🖥️ How Mode Switching Works
1. **Program in User Mode** requests a service (e.g., reading a file).  
2. **System Call** triggers a switch to kernel mode.  
3. **Kernel Executes** the privileged operation (e.g., disk I/O).  
4. **Control Returns** to user mode with the result.  

This switching is essential for protecting hardware and ensuring that user applications cannot directly interfere with system-level operations.  

---

## ✅ Advantages
- **User Mode**: Safer execution, process isolation, easier debugging.  
- **Kernel Mode**: Direct hardware access, efficient resource management, advanced scheduling.  

## ⚠️ Limitations
- **User Mode**: Performance overhead due to frequent transitions, limited control.  
- **Kernel Mode**: Errors can destabilize the entire system, harder to debug.  

---

## 📌 Real-World Example
- When you open a file in a text editor:  
  - The editor runs in **user mode**.  
  - It requests file access via a **system call**.  
  - The OS kernel switches to **kernel mode**, interacts with the disk, and returns the data.  

---

👉 In simple terms: **User mode is the “safe playground” for applications, while kernel mode is the “control room” of the operating system.** Without this separation, a faulty app could crash your entire computer.  

---

# User Mode

Applications run here.

Examples:

* Chrome
* VS Code
* WhatsApp

Restrictions exist.

Cannot directly access hardware.

---

# Kernel Mode

Operating system runs here.

Full access to:

* CPU
* Memory
* Devices

---

# User Mode vs Kernel Mode

| User Mode        | Kernel Mode   |
| ---------------- | ------------- |
| Limited access   | Full access   |
| Applications run | OS runs       |
| More secure      | More powerful |

---

# Booting Process

What happens when you press the power button?

---

## Step 1

Power ON.

---

## Step 2

BIOS/UEFI starts.

Checks hardware.

---

## Step 3

Bootloader loads.

---

## Step 4

Kernel loads into memory.

---

## Step 5

Operating System starts.

---

# BIOS vs UEFI

| BIOS             | UEFI          |
| ---------------- | ------------- |
| Older            | Newer         |
| Slower           | Faster        |
| Limited features | More features |

---

# Most Important Interview Questions

## Easy

### What is an Operating System?

An Operating System is system software that manages hardware and software resources.

---

### Why is OS needed?

To manage hardware, software, memory, files, and processes.

---

### What are the functions of OS?

* Process Management
* Memory Management
* File Management
* Device Management
* Security

---

### What is a Kernel?

The core component of an OS that directly interacts with hardware.

---

### What is a Shell?

An interface between user and operating system.

---

## Medium

### Shell vs Kernel?

| Shell            | Kernel            |
| ---------------- | ----------------- |
| Interface        | Core              |
| Accepts commands | Executes commands |

---

### What are System Calls?

Mechanism by which applications request services from the OS.

---

### What is User Mode?

Restricted mode where applications run.

---

### What is Kernel Mode?

Privileged mode where the OS runs.

---

## Hard

### Why can't applications directly access hardware?

For security and resource management.

---

### Explain the booting process.

Power On → BIOS/UEFI → Bootloader → Kernel → OS.

---

### Why is Kernel important?

Because it manages CPU, memory, devices, and system resources.

---

# End of Day 10 Target

You should clearly understand:

✅ What is OS

✅ Functions of OS

✅ Types of OS

✅ Kernel

✅ Shell

✅ System Calls

✅ User Mode vs Kernel Mode

✅ Booting Process

These topics build the foundation for Day 11, where you'll learn the most frequently asked OS interview topic:

**Process, Thread, Process States, Context Switching, and CPU Scheduling.**
