# Process, Thread, Context Switching & CPU Scheduling

⚠️ This is the **most asked Operating System topic** in placement interviews.

Many interviewers start OS with:

> "What is the difference between Process and Thread?"

or

> "Explain Context Switching."

Let's understand it deeply.

---

# 1. What is a Program?

A program is a set of instructions stored on disk.

Examples:

```text
Chrome.exe
VSCode.exe
Spotify.exe
```

These are programs.

### Important

A program is **passive**.

It is just stored on disk.

It is not running.

---

# Example

Suppose:

```text
Chrome.exe
```

exists on your laptop.

Until you open Chrome:

```text
Program only
```

No execution.

---

# 2. What is a Process?

A process is a program in execution.

### Example

Before opening Chrome:

```text
Chrome.exe
```

Program.

After opening Chrome:

```text
Chrome running
```

Process.

---

# Real-Life Example

Recipe Book = Program

Cooking = Process

A recipe sitting on a shelf does nothing.

Cooking means instructions are being executed.

---

# Process Components

A process contains:

---

## Code Section

Program instructions.

Example:

```cpp
cout<<"Hello";
```

---

## Data Section

Global variables.

Example:

```cpp
int age = 22;
```

---

## Stack

Stores:

* Function calls
* Local variables

Example:

```cpp
void fun()
{
   int x = 10;
}
```

x stored in stack.

---

## Heap

Stores dynamically allocated memory.

Example:

```cpp
new Student();
```

Memory goes to heap.

---

# Process Memory Layout

```text
+----------------+
| Code Section   |
+----------------+
| Data Section   |
+----------------+
| Heap           |
+----------------+
| Stack          |
+----------------+
```

---

# Why Processes?

Processes provide:

* Isolation
* Security
* Resource management

If Chrome crashes:

```text
Chrome dies
```

Not entire OS.

---

# Process States

Interview favorite.

---

# 1. New

Process is being created.

---

# 2. Ready

Process is waiting for CPU.

---

# 3. Running

CPU is executing process.

---

# 4. Waiting / Blocked

Waiting for resource.

Example:

```text
Waiting for file
Waiting for keyboard input
```

---

# 5. Terminated

Execution finished.

---

# Process State Diagram

```text
New
 ↓
Ready
 ↓
Running
 ↓
Terminated

Running
 ↓
Waiting
 ↓
Ready
```

---

# Real-Life Example

Restaurant.

---

New

Customer enters.

---

Ready

Waiting for table.

---

Running

Eating.

---

Waiting

Waiting for food.

---

Terminated

Leaves restaurant.

---

# What is a Thread?

A thread is the smallest unit of execution inside a process.

A process may contain multiple threads.

---

# Example

Chrome Process

Contains:

```text
Thread 1 → UI
Thread 2 → Download
Thread 3 → Rendering
Thread 4 → Network
```

All belong to one process.

---

# Why Threads?

Suppose browser downloads a file.

Without threads:

```text
Browser freezes
```

Until download completes.

---

With threads:

```text
Download continues
Browser remains usable
```

---

# Process vs Thread

Most important OS question.

| Process         | Thread          |
| --------------- | --------------- |
| Heavyweight     | Lightweight     |
| Separate memory | Shared memory   |
| More resources  | Less resources  |
| Slower creation | Faster creation |
| Independent     | Part of process |

---

# Real Example

### Process

Chrome

VS Code

Spotify

---

### Threads

Inside Chrome:

```text
UI Thread
Rendering Thread
Download Thread
```

---

# Why Are Threads Faster?

Threads share:

```text
Code
Data
Memory
```

Processes do not.

Therefore:

```text
Thread creation < Process creation
```

---

# What is Context Switching?

CPU can execute only one process at a time.

OS rapidly switches CPU between processes.

This is Context Switching.

---

# Example

Running:

```text
Chrome
VS Code
Spotify
```

CPU does:

```text
Chrome
↓
VS Code
↓
Spotify
↓
Chrome
```

Very quickly.

Appears simultaneous.

---

# What Gets Saved?

When switching:

OS saves:

```text
Program Counter
Registers
Process State
```

Then loads another process.

---

# Real-Life Example

Teacher checking papers.

```text
Paper 1
Paper 2
Paper 3
```

Teacher switches repeatedly.

This resembles context switching.

---

# Why Is Context Switching Needed?

Without it:

```text
One process monopolizes CPU.
```

Others never run.

---

# Disadvantage

Context switching consumes CPU time.

Too many switches reduce performance.

---

# CPU Scheduling

OS decides:

```text
Which process gets CPU?
For how long?
```

This decision is CPU Scheduling.

---

# Scheduling Goals

* Maximum CPU utilization
* Minimum waiting time
* Maximum throughput
* Fairness

---

# FCFS (First Come First Serve)

Processes execute in arrival order.

---

Example

```text
P1
P2
P3
```

Execution:

```text
P1 → P2 → P3
```

---

### Advantage

Simple.

---

### Disadvantage

Long process blocks short processes.

---

# SJF (Shortest Job First)

Shortest process executes first.

---

Example

| Process | Burst Time |
| ------- | ---------- |
| P1      | 10         |
| P2      | 2          |
| P3      | 1          |

Order:

```text
P3 → P2 → P1
```

---

### Advantage

Minimum average waiting time.

---

### Disadvantage

Long processes may starve.

---

# Priority Scheduling

Higher priority executes first.

---

Example

| Process | Priority |
| ------- | -------- |
| P1      | 1        |
| P2      | 5        |

P2 executes first.

---

### Problem

Low-priority processes may never execute.

Called:

```text
Starvation
```

---

# Round Robin

Most common interview algorithm.

Each process gets a fixed time slice.

Called:

```text
Time Quantum
```

---

Example

Quantum = 2

```text
P1 → 2 sec
P2 → 2 sec
P3 → 2 sec
```

Then repeat.

---

### Advantage

Fair scheduling.

---

### Used In

Time-sharing systems.

---

# Scheduling Algorithms Summary

| Algorithm   | Advantage             | Disadvantage           |
| ----------- | --------------------- | ---------------------- |
| FCFS        | Simple                | High waiting time      |
| SJF         | Low waiting time      | Starvation             |
| Priority    | Important tasks first | Starvation             |
| Round Robin | Fair                  | More context switching |

---

# Starvation

A process waits forever because higher-priority processes keep executing.

---

Example

```text
Priority 10
Priority 9
Priority 8
```

Low-priority process:

```text
Priority 1
```

May never run.

---

# Aging

Solution to starvation.

Increase priority over time.

Eventually process gets CPU.

---

# End of Day 11 Target

You should clearly understand:

✅ Program vs Process

✅ Process Memory Layout

✅ Process States

✅ Process vs Thread

✅ Context Switching

✅ CPU Scheduling

✅ FCFS

✅ SJF

✅ Priority Scheduling

✅ Round Robin

✅ Starvation

✅ Aging

---

# Most Important Interview Questions for Day 11

### Easy

1. What is a process?
2. What is a thread?
3. Process vs Thread?
4. What is context switching?
5. What is CPU scheduling?

### Medium

6. Explain process states.
7. Why are threads faster than processes?
8. What is starvation?
9. What is aging?
10. FCFS vs Round Robin?

### Hard

11. Why is context switching expensive?
12. What happens during context switching?
13. Why do modern browsers use multiple threads?
14. SJF vs Priority Scheduling?
15. Round Robin vs FCFS?

Day 12 will cover **Deadlock, Synchronization, Critical Section, Semaphore, Mutex, and Producer-Consumer Problem** — another extremely important OS interview topic.
