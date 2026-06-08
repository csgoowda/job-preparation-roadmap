# Day 1 – Skills (1 Hour)

## Part 1: Git Basics (30 Minutes)

### 1. Initialize Git Repository

```bash
git init
```

Creates a new Git repository in your project folder.

---

### 2. Add Files

Add a specific file:

```bash
git add App.jsx
```

Add all files:

```bash
git add .
```

---

### 3. Commit Changes

```bash
git commit -m "Initial React Project"
```

A commit is a snapshot of your project.

---

### 4. Push to GitHub

Connect repository:

```bash
git remote add origin <repository-url>
```

Push code:

```bash
git push -u origin main
```

For future pushes:

```bash
git push
```

---

## Part 2: Linux Basics (30 Minutes)

### Check Current Directory

```bash
pwd
```

Example Output:

```text
/home/chethan/projects
```

---

### List Files and Folders

```bash
ls
```

Example:

```text
README.md
week-1
react-day1
```

---

### Change Directory

```bash
cd react-day1
```

Go back:

```bash
cd ..
```

---

### Create Folder

```bash
mkdir week-1
```

Create nested folders:

```bash
mkdir -p week-1/dsa
```

---

### Create File

```bash
touch day-1.md
```

Create multiple files:

```bash
touch day-1.md day-2.md day-3.md
```

---

# Practice Exercise

### Create This Structure

```text
job-preparation-roadmap/
│
├── week-1/
│   ├── dsa/
│   │   └── day-1.md
│   │
│   ├── react/
│   │   └── day-1.md
│   │
│   └── skills/
│       └── day-1.md
│
└── README.md
```

Commands:

```bash
mkdir -p week-1/dsa
mkdir -p week-1/react
mkdir -p week-1/skills

touch week-1/dsa/day-1.md
touch week-1/react/day-1.md
touch week-1/skills/day-1.md
touch README.md
```

---

# Today's Todo

## 1. Push React Project

```bash
cd react-day1

git init
git add .
git commit -m "Day 1 React Project"
git branch -M main
git remote add origin <repo-url>
git push -u origin main
```

---

## 2. Push DSA Notes

```bash
git add .
git commit -m "Day 1 DSA Notes"
git push
```

---

# End of Day 1 Checklist

✅ `git init`
✅ `git add`
✅ `git commit`
✅ `git push`
✅ `pwd`
✅ `ls`
✅ `cd`
✅ `mkdir`
✅ `touch`
✅ Push React Project
✅ Push DSA Notes

### Homework

1. Create a new GitHub repository.
2. Push your React project without looking at notes.
3. Create 5 folders and 5 files using Linux commands.
4. Practice `git add`, `git commit`, and `git push` at least 3 times.

**Goal:** Be comfortable using GitHub and basic Linux commands without copying commands from notes. These skills are used daily in internships and software jobs.
