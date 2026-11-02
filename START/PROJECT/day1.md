
# Day 1 – Session 1: Project Development

Completed

90 minutes

Important revision notes

Project name: Employee Management API

Career goal: Junior .NET Backend Developer

Technologies introduced:

- C#
- .NET SDK
- Visual Studio Code
- Git
- GitHub (to host our code later)

## 1. What are we building?

We are building an Employee Management System for a company.

The system will allow HR employees to:

1. Add employees.
2. View employee details.
3. Update employee information.
4. Delete employee records.
5. Search employees.
6. Manage departments.

Why are we building this project?

To gain practical experience in backend development using C#, ASP.NET Core Web API, Entity Framework Core and PostgreSQL.

## 2. Understand backend architecture

A typical application has three important parts.

[Client-Server Architecture: Request Flow and Response | Sushilkumar Patil posted on the topic | LinkedIn](https://images.openai.com/static-rsc-4/QhrxpIdTofxmkUNvcPt5kUigPjsi85V4AjcWV7Iy9Uyq86ieRyv0wxWBP4W2aoLBsRuPPB7hsC107myg-wKIVwqj3HEPaLih51u61mEVEsE3FxO-FkPxNo_XfHQQVYPaxpFTFQrSdRYq50KmIPA_oNjM9-gy5jxzBO2c2BKTrvg?purpose=inline)

[linkedin.com](https://www.linkedin.com/posts/sushilkumar-patil_clientserverarchitecture-systemdesignbasics-activity-7409188926680395777-v0z4?utm_source=chatgpt.com)

| Component | Responsibility                        |
| --------- | ------------------------------------- |
| Frontend  | User interface                        |
| Backend   | Processes requests and business logic |
| Database  | Stores information                    |

Example:

When HR adds a new employee:

1. HR enters employee details in the frontend.
2. Frontend sends a request to the backend.
3. Backend validates the information.
4. Backend saves the details in the database.
5. Backend returns a response.

Interview question: What is backend development?

Answer: Backend development involves building the server-side logic, APIs, authentication and database operations that make an application work.

## 3. Development environment

We checked the tools required for development.

| Tool     | Purpose                         | Your status        |
| -------- | ------------------------------- | ------------------ |
| .NET SDK | Build and run .NET applications | Installed          |
| VS Code  | Write and edit code             | Installed          |
| Git      | Track code changes              | Installed          |
| C#       | Programming language            | Learning           |
| GitHub   | Host code online                | Not configured yet |

### Important commands

```
dotnet --version
```

Checks the installed .NET SDK version.

```
git --version
```

Checks Git installation.

```
code --version
```

Checks VS Code command-line availability.

Your installed .NET SDK

```
10.0.402
```

Remember: .NET SDK is a development toolkit that allows you to create, build and run .NET applications.

## 4. Creating a .NET application

We used these commands:

Step 1 – Create project

```
dotnet new console -n EmployeeManagementAPI
```

Explanation:

- `dotnet`: .NET command-line interface.
- `new`: Creates a new project.
- `console`: Creates a console application.
- `-n`: Specifies the project name.

Step 2 – Enter the project folder

```
cd EmployeeManagementAPI
```

Step 3 – Run the application

```
dotnet run
```

Output:

```
Hello, World!
```

Important: A console application is not yet a Web API. We used it to verify that your .NET environment works.

Later, we will create an ASP.NET Core Web API.

## 5. Understanding Program.cs

Example:

```
Console.WriteLine("Employee Management System");
Console.WriteLine("My first .NET application!");
Console.WriteLine("Backend Developer Journey Started!");
```

Important concepts:

| Concept       | Meaning                                     |
| ------------- | ------------------------------------------- |
| `Console`     | Provides console input/output functionality |
| `WriteLine()` | Displays text and moves to a new line       |
| `;`           | Ends a C# statement                         |

### What is Program.cs?

`Program.cs` is the entry point of a modern C# application. It contains the application startup code.

Interview question: What is the purpose of Program.cs?

Answer: It is the entry point where application execution begins and application services and configuration can be set up.

## 6. Understanding project structure

Our project contains these important files and folders:

```
EmployeeManagementAPI/
│
├── Program.cs
├── EmployeeManagementAPI.csproj
├── bin/
└── obj/
```

| File/folder | Explanation              | Importance |
| ----------- | ------------------------ | ---------- |
| Program.cs  | Application startup code | Very high  |
| .csproj     | Project configuration    | Very high  |
| bin         | Compiled output          | Medium     |
| obj         | Intermediate build files | Medium     |

### What is a .csproj file?

It is the C# project configuration file.

It contains information such as:

- Target .NET framework.
- Project settings.
- Package dependencies.
- Build configuration.

### What are bin and obj?

- `bin`: Stores compiled application output.
- `obj`: Stores intermediate files generated during the build.

Important: These folders are generated automatically. Normally, you don't need to edit them manually.

## 7. Understanding Git

[What is Git Commit? How to Use It? (Complete Guide + Examples) | gitlearn](https://images.openai.com/static-rsc-4/cLbyO1Hamx5gh2RoP0o4zTOGwpYXGaFH9x0U38h519_8rGXDYi_aQFeITL4JII8qurhVnJejWSRACoBbZTmNc4SUR0xH8hmPXZkcdL3K5s5k9PlSNpkh83QcgL4IzO9phaJtD4onMpaN7SpoHAGj4xJjG-Co9JOc2IS3fPX7YoE?purpose=inline)

[gitlearn.io](https://gitlearn.io/blog/what-is-git-commit-how-to-use-it?utm_source=chatgpt.com)

### What is Git?

Git is a distributed version control system.

It tracks changes in your source code and allows you to maintain a history of committed versions.

Example:

Imagine you write 500 lines of code and accidentally delete some of them.

If you previously committed your work, Git can help you recover the earlier committed version.

### Important Git commands

| Command                   | Purpose                            |
| ------------------------- | ---------------------------------- |
| `git init`                | Initializes a Git repository       |
| `git status`              | Checks changed and untracked files |
| `git add .`               | Stages changes                     |
| `git commit -m "message"` | Saves a version in Git history     |
| `git log --oneline`       | Shows commit history               |

### Understand the Git workflow

Working directory

Write or modify code

Staging area

git add .

Local repository

git commit -m "message"

### What is GitHub?

GitHub is an online platform for hosting Git repositories.

Remember the difference:

- Git = Version control software.
- GitHub = Online code hosting and collaboration platform.

### What is .gitignore?

`.gitignore` tells Git which files or folders to ignore.

We created:

```
bin/
obj/
.vs/
```

This prevents these generated files and folders from being tracked.

### Your completed Git activity

You successfully created two commits:

1. Initial project creation.
2. Added company details to the application.

You also used `git status` and `git log --oneline`.

## 8. Important concepts to remember

Must remember

High priority

1. .NET SDK is used to build and run .NET applications.
2. C# is a programming language.
3. Program.cs is the application entry point.
4. A `.csproj` file contains project configuration.
5. Git tracks source-code changes.
6. Git commit saves a version in repository history.
7. GitHub hosts repositories online.
8. A console application is different from a Web API.

   Useful interview questions
9. What is .NET?
10. What is C#?
11. What is the .NET SDK?
12. What is Program.cs?
13. What is a `.csproj` file?
14. What is Git?
15. Difference between Git and GitHub?
16. What is a Git commit?
17. What is `.gitignore`?
18. What is the difference between a console application and a Web API?

## 9. Practical commands – Quick revision sheet

Keep these commands handy:

```
# Check .NET
dotnet --version

# Create a console application
dotnet new console -n EmployeeManagementAPI

# Run application
dotnet run

# Initialize Git
git init

# Check Git status
git status

# Stage changes
git add .

# Save changes
git commit -m "Your message"

# View history
git log --oneline
```

## 10. Session 1 final revision test

Try answering these without looking at the notes.

Session 1 revision quiz

5 questions

1\. Which command checks the installed .NET SDK?

git --version

dotnet --version

dotnet run

Correct

2\. What is the purpose of Program.cs?

Stores database records

Application entry point

Stores Git history

Correct

3\. Which file contains project configuration?

Program.cs

.csproj

.gitignore

Correct

4\. Which Git command saves a committed version?

git add .

git status

git commit

Correct

5\. What is the difference between Git and GitHub?

They are exactly the same

Git tracks versions; GitHub hosts repositories online

GitHub runs C# code

Correct

## Score: 5/5

Try again

📊 Study Progress

Week 1 · Day 1

Session 1 completed

- Project development: 90/90 minutes completed.
- .NET setup and first application: Completed.
- Project structure and Git: Completed.
- Knowledge test: 3/3.
- Revision notes: Prepared.
- Current status: Session 2 – C# and .NET not yet started.

My advice: Save these notes and revise them before interviews. Understanding these fundamentals is more valuable than simply memorizing commands.

After the revision quiz, we can continue with Session 2: C# Variables and Data Types.
