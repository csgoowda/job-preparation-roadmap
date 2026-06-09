# Day 2 – Skills (1 Hour)

## Part 1: Git (30 Minutes)

---

# 1. git status

### What does it do?

Shows the current state of your repository.

### Command

```bash
git status
```

### Example Output

```text
On branch main

Changes not staged for commit:
  modified: App.jsx

no changes added to commit
```

### Why use it?

Before every commit, check:

* Which files changed?
* Which files are staged?
* Which files are untracked?

---

# 2. git log

### What does it do?

Shows commit history.

### Command

```bash
git log
```

### Example Output

```text
commit a1b2c3d4
Author: Chethan
Date: June 10

Added React Props Project

commit e5f6g7h8
Author: Chethan
Date: June 9

Added DSA Day 1 Notes
```

### Short Version

```bash
git log --oneline
```

Example:

```text
a1b2c3d Added React Props
e5f6g7h Added DSA Notes
```

---

# 3. git diff

### What does it do?

Shows what changed in your files.

### Command

```bash
git diff
```

### Example

Before:

```cpp
cout << "Hello";
```

After:

```cpp
cout << "Hello World";
```

Git shows:

```text
- cout << "Hello";
+ cout << "Hello World";
```

### Why use it?

Check changes before committing.

---

# Part 2: Linux Commands (30 Minutes)

---

# 1. cp (Copy)

### Copy File

```bash
cp source.txt backup.txt
```

Creates:

```text
source.txt
backup.txt
```

---

### Copy Folder

```bash
cp -r react-day1 react-backup
```

---

# 2. mv (Move / Rename)

### Rename File

```bash
mv old.txt new.txt
```

---

### Move File

```bash
mv notes.txt week-1/dsa/
```

Before:

```text
notes.txt
week-1/
```

After:

```text
week-1/
└── dsa/
    └── notes.txt
```

---

# 3. rm (Remove)

### Delete File

```bash
rm notes.txt
```

---

### Delete Folder

```bash
rm -r react-day1
```

⚠️ Be careful:

```bash
rm
```

permanently deletes files.

---

# Practice Exercise

Create:

```bash
mkdir practice
touch file1.txt
```

Copy:

```bash
cp file1.txt file2.txt
```

Rename:

```bash
mv file2.txt notes.txt
```

Delete:

```bash
rm notes.txt
```

---

# Todo 1 – Commit DSA

### Check Status

```bash
git status
```

### Add Files

```bash
git add .
```

### Commit

```bash
git commit -m "Day 2 DSA Problems"
```

### Push

```bash
git push
```

---

# Todo 2 – Commit React Project

### Check Changes

```bash
git diff
```

### Add Files

```bash
git add .
```

### Commit

```bash
git commit -m "Day 2 React Props"
```

### Push

```bash
git push
```

---

# Quick Revision Table

| Command      | Purpose                 |
| ------------ | ----------------------- |
| `git status` | Check repository status |
| `git log`    | View commit history     |
| `git diff`   | View file changes       |
| `cp`         | Copy file/folder        |
| `mv`         | Move or rename file     |
| `rm`         | Delete file/folder      |

---

# Interview Questions

### Q1: Difference between `git add` and `git commit`?

**Answer:**

```text
git add -> Moves changes to staging area

git commit -> Saves changes permanently in local repository
```

---

### Q2: What does `git status` show?

**Answer:**

```text
Shows modified, staged,
and untracked files.
```

---

### Q3: Difference between `cp` and `mv`?

**Answer:**

```text
cp -> Creates a copy

mv -> Moves or renames file
```

---

# Day 2 Checklist

✅ git status

✅ git log

✅ git diff

✅ cp

✅ mv

✅ rm

✅ Commit DSA Notes

✅ Commit React Project

### English Correction

Your sentence:

> "Commit DSA Commit React Project"

Better:

> **"Commit the DSA notes and commit the React project."** ✅
