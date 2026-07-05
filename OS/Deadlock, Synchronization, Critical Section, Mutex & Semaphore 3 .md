# Deadlock, Synchronization, Critical Section, Mutex & Semaphore

⚠️ This is one of the most important OS interview topics.

Interviewers frequently ask:

* What is Deadlock?
* What are the 4 conditions of Deadlock?
* Mutex vs Semaphore?
* What is Critical Section?
* What is Synchronization?

Let's understand them deeply.

---

# Why Do We Need Synchronization?

Imagine a bank account.

Balance:

```text
₹1000
```

Two threads execute simultaneously.

---

## Thread 1

Withdraw ₹500

---

## Thread 2

Withdraw ₹700

---

Both read:

```text
Balance = 1000
```

at the same time.

Thread 1 updates:

```text
Balance = 500
```

Thread 2 updates:

```text
Balance = 300
```

Final balance becomes incorrect.

This is called a **Race Condition**.

---

# What is a Race Condition?

A race condition occurs when multiple processes or threads access shared data simultaneously and the final result depends on execution order.

---

### Interview Answer

> A race condition occurs when multiple threads access and modify shared data simultaneously, leading to unpredictable results.

---

# What is Synchronization?

Synchronization is the technique of controlling access to shared resources so that data remains correct and consistent.

---

### Goal

Prevent:

* Race conditions
* Data corruption
* Inconsistency

---

### Real-Life Example

One ATM machine.

Only one person should use it at a time.

---

# Critical Section

The part of a program where shared resources are accessed is called the Critical Section.

---

### Example

```cpp
balance = balance - 500;
```

If balance is shared among multiple threads,

this statement belongs to the critical section.

---

### Interview Answer

> A critical section is the portion of code where shared resources are accessed and must be protected from concurrent access.

---

# Critical Section Problem

We must ensure:

```text
Only one process enters critical section at a time.
```

Otherwise:

```text
Race Condition
```

occurs.

---

# Requirements of Critical Section

---

## 1. Mutual Exclusion

Only one process can enter the critical section at a time.

---

## 2. Progress

If critical section is free,

some waiting process should be allowed to enter.

---

## 3. Bounded Waiting

No process should wait forever.

---

# What is Mutex?

Mutex = Mutual Exclusion.

It is a locking mechanism.

---

### Example

Suppose:

```text
Thread A
Thread B
```

want to update balance.

Thread A acquires lock.

```text
Mutex Locked
```

Thread B must wait.

After Thread A finishes:

```text
Mutex Unlocked
```

Thread B enters.

---

### Easy Analogy

Bathroom with one key.

If you have the key:

```text
Others wait.
```

---

### Interview Answer

> Mutex is a locking mechanism that allows only one thread to access a shared resource at a time.

---

# What is Semaphore?

Semaphore is a synchronization tool used to control access to resources.

---

### Types

1. Binary Semaphore
2. Counting Semaphore

---

# Binary Semaphore

Values:

```text
0
1
```

Works similarly to mutex.

---

# Counting Semaphore

Allows multiple processes to access limited resources.

---

### Example

Parking Lot

```text
10 parking spaces
```

Semaphore count:

```text
10
```

Each car entering:

```text
count--
```

Each car leaving:

```text
count++
```

---

### Interview Answer

> A semaphore is a synchronization mechanism used to control access to shared resources using a counter.

---

# Mutex vs Semaphore

Most asked interview question.

| Mutex                | Semaphore                 |
| -------------------- | ------------------------- |
| Locking mechanism    | Signaling mechanism       |
| One thread at a time | Multiple threads possible |
| Ownership exists     | No ownership              |
| Binary only          | Binary or counting        |

---

### Easy Memory Trick

Mutex:

```text
One Key
```

Semaphore:

```text
Multiple Tickets
```

---

# What is Deadlock?

Deadlock occurs when two or more processes wait forever for resources held by each other.

---

# Real-Life Example

Imagine:

### Person A

Has:

```text
Pen
```

Needs:

```text
Notebook
```

---

### Person B

Has:

```text
Notebook
```

Needs:

```text
Pen
```

Both wait forever.

This is Deadlock.

---

# Computer Example

Process P1 holds:

```text
Printer
```

Needs:

```text
Scanner
```

Process P2 holds:

```text
Scanner
```

Needs:

```text
Printer
```

Neither can proceed.

Deadlock occurs.

---

# Coffman Conditions (4 Conditions of Deadlock)

All four must occur for deadlock.

---

# 1. Mutual Exclusion

Resource cannot be shared.

Example:

One printer.

---

# 2. Hold and Wait

Process holds one resource while waiting for another.

Example:

Holding printer, waiting for scanner.

---

# 3. No Preemption

Resource cannot be forcibly taken away.

Only owner can release it.

---

# 4. Circular Wait

Processes form a circular chain.

Example:

```text
P1 → waits for P2
P2 → waits for P3
P3 → waits for P1
```

---

### Easy Memory Trick

```text
M H N C

Mutual Exclusion
Hold & Wait
No Preemption
Circular Wait
```

---

# Deadlock Prevention

Prevent any one Coffman condition.

---

### Example

Remove Circular Wait

Assign resource order:

```text
Printer → Scanner → Disk
```

All processes must follow same order.

Deadlock prevented.

---

# Deadlock Avoidance

System checks whether granting a resource may cause deadlock.

If dangerous:

```text
Request denied.
```

---

### Famous Algorithm

```text
Banker's Algorithm
```

---

# Deadlock Detection

Allow deadlock to happen.

Then detect it.

---

# Deadlock Recovery

After detection:

### Option 1

Terminate processes.

---

### Option 2

Force resource release.

---

# Producer Consumer Problem

Classic OS synchronization problem.

---

# Scenario

Producer:

```text
Produces data
```

Consumer:

```text
Consumes data
```

Shared Buffer:

```text
Size = 5
```

---

# Problem

Producer may produce too much.

Consumer may consume empty buffer.

Synchronization needed.

---

### Solution

Use:

* Semaphore
* Mutex

---

# Reader Writer Problem

Another famous synchronization problem.

---

### Readers

Only read data.

---

### Writers

Modify data.

---

### Rule

Many readers allowed.

Only one writer allowed.

---

# Dining Philosophers Problem

Classic deadlock problem.

---

Five philosophers:

```text
Need two forks to eat.
```

Each picks one fork.

Everyone waits for second fork.

Deadlock occurs.

---

# Most Important Interview Questions

## Easy

### What is synchronization?

Synchronization controls access to shared resources.

---

### What is a race condition?

Occurs when multiple threads access shared data simultaneously.

---

### What is a critical section?

Part of code that accesses shared resources.

---

### What is mutex?

A locking mechanism allowing only one thread at a time.

---

### What is semaphore?

A synchronization mechanism using counters.

---

## Medium

### Mutex vs Semaphore?

Mutex = One owner

Semaphore = Counter-based access

---

### What is deadlock?

Processes wait forever for resources held by each other.

---

### What are the four conditions of deadlock?

1. Mutual Exclusion
2. Hold and Wait
3. No Preemption
4. Circular Wait

---

### How can deadlock be prevented?

Break any one Coffman condition.

---

## Hard

### Difference between deadlock prevention and avoidance?

Prevention: Break conditions.

Avoidance: Check safe state before granting resources.

---

### Why is semaphore better than mutex in some cases?

Semaphore can allow multiple threads simultaneously.

Mutex allows only one.

---

### Explain Producer Consumer Problem.

Producer generates data, consumer uses it, synchronization ensures buffer correctness.

---

# End of Day 12 Target

You should clearly understand:

✅ Synchronization

✅ Race Condition

✅ Critical Section

✅ Mutex

✅ Semaphore

✅ Deadlock

✅ Four Deadlock Conditions

✅ Deadlock Prevention

✅ Deadlock Avoidance

✅ Producer Consumer Problem

✅ Reader Writer Problem

These topics alone cover a large percentage of advanced OS interview questions. Day 13 will cover **Memory Management, Paging, Segmentation, Virtual Memory, Thrashing, and Fragmentation**.
