# UNIT 3 – Question 1 (20 Marks)

# Explain Monolithic Architecture

**(Answer based on your uploaded notes and textbook)**

### 📚 References Used

* **Unit – 3 (Microservices).pdf** – **Pages 2–5** (Application Architecture, Monolithic Architecture, Drawbacks)
* **Chapter 4 – Cloud Computing Applications and Paradigms** (Application Architecture) 
* **Cloud Computing: Theory and Practice** – Chapter 4 

---

# Explain Monolithic Architecture

## Introduction

Application architecture defines how software components are designed, organized, and interact with each other.

According to your uploaded notes, there are **two main types of application architectures**:

1. **Monolithic Architecture**
2. **Distributed Architecture (Microservices)**

Monolithic Architecture is the traditional software development approach in which the **entire application is developed, deployed, and maintained as a single unit**.

---

# Definition

A **Monolithic Architecture** is an application architecture where **all components of an application—such as the User Interface (UI), Business Logic, and Database Access Layer—are combined into a single codebase and deployed as one application.**

According to your notes:

> **"Monolithic architecture is similar to a big container that clubs all application components together into a single package."**

---

# Monolithic Architecture Diagram

![Image](https://images.openai.com/static-rsc-4/MQl6Dw1Shj4_ZDyDnmcAuPmNaOAtq-U-8bsCSh1csvtRssongswOzrFXZjyBoSsNO4rFPsV2jdSgkvovxjChxHusDjaJyZOJPdNzjW53mFokJjH4qQtq7n6DU6mQnYPnD6HGwmuOWIQ8_-fQZQeq7PgVedNrz2DxlMpINE-6jkT7y3KNkcGUPowD9o2lO3uh?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/9DACBcNrkFcqYCCq3n7tJyChbiFQNwRR_zLIoGHAAhr-H8PtAd7uR0QO2PswHe8hoTjCtc5yd-fs_t7PQXz9tqpvEk3O5E-P_RHMR8LZgGztbi1pSqss3c4FFAdki_-XwCMgBLUnOBBqGJ7MzepnYhkyMriIvPmKvM9PiX4Vy1ithPeoRyYAHBNLxtCgoA4F?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/lOie2eBIGh6Xg5w6EJHm1ECba7mBKLF1l6SNh0dMVqbSinw6zm0E_gC2AoEXcNNftD2tkgPB1cZKBkPE6oFUplW-9QAcpPTov3_gmoykFYzEZQ_HJpsDeQhyexpkGO7RHHWDNNLF3ji8xORKKwnItAYHvz6GZn6hWFTF_AziMgixTOzN-dwJVUFy9gqLIQ8z?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/i5PzsRLph74vGoLIkIFwpL2PlZpnhW0aloBkMJBA03TmnrXnkGyllKCNLcEncpjUHfMt4dGQI5tsTgx5kL2AX7bKTpD2XthJkGSIHNt-UmJXASjC_7dcyiInuw7BgFD1K2DOxRpCA2SNZ4EBmjvKyi6uEVwaYIa7OWzpPyB7-d0yi2t9Mxn7nh2hQEmj9HQO?purpose=fullsize)

### Diagram Name

**Monolithic Architecture**

### Draw and Label

```text
                User

                  │

             Web Browser

                  │

      ┌───────────────────────────┐
      │     Monolithic App        │
      │                           │
      │  User Interface (UI)      │
      │  Business Logic           │
      │  Authentication           │
      │  Payment Module           │
      │  Order Module             │
      │  Inventory Module         │
      └───────────────────────────┘
                  │
             Database
```

---

# Components of Monolithic Architecture

## 1. User Interface (Presentation Layer)

Provides interaction between users and the application.

Examples:

* Login Page
* Dashboard
* Product Page

---

## 2. Business Logic Layer

Contains all application processing.

Examples:

* Payment Processing
* Order Processing
* User Authentication
* Calculations

---

## 3. Database Layer

Stores application data.

Examples:

* Customer Details
* Product Information
* Orders
* Transactions

---

# Working of Monolithic Architecture

### Step 1

The user sends a request through the web browser.

↓

### Step 2

The request reaches the Monolithic Application.

↓

### Step 3

Business Logic processes the request.

↓

### Step 4

Application accesses the Database.

↓

### Step 5

Response is returned to the user.

---

# Features of Monolithic Architecture

* Single Codebase
* Single Deployment Unit
* Shared Database
* Tightly Coupled Components
* Simple Development for Small Applications
* Centralized Management

---

# Advantages of Monolithic Architecture

## 1. Simple Development

Easy to develop for small applications.

---

## 2. Easy Deployment

Entire application is deployed as one unit.

---

## 3. Easy Testing

Testing is easier because everything is in one project.

---

## 4. Better Performance

Components communicate internally without network delays.

---

## 5. Simple Debugging

Finding errors is easier in small applications.

---

# Drawbacks of Monolithic Architecture

Your uploaded Unit-3 notes list the following major drawbacks:

## 1. Less Agility (Less Flexibility)

Even a small change requires rebuilding and redeploying the entire application.

---

## 2. Unscalable

You cannot scale only one feature.

The whole application must be duplicated.

Example:

If only the **Search** feature receives heavy traffic,

the complete application must be scaled.

---

## 3. Slow Development

Features are developed one after another.

Different teams cannot independently release features.

---

## 4. Poor Fault Tolerance

A bug in one module can affect the entire application.

One failure may crash the complete system.

---

## 5. Difficult to Adopt New Technologies

Since everything is tightly coupled,

introducing a new programming language or framework becomes difficult.

---

## 6. Blocks Continuous Development

Independent deployment is not possible.

Every update requires deploying the entire application.

---

# Real-Life Example

Suppose an **Online Shopping System** contains:

* Login
* Product Management
* Payment
* Cart
* Order Processing
* Inventory

In a monolithic architecture, **all these modules are packaged together into a single application**.

If the **Payment Module** needs an update, the **entire application** must be rebuilt, tested, and redeployed.

---

# Advantages and Disadvantages

| Advantages          | Disadvantages                |
| ------------------- | ---------------------------- |
| Easy Development    | Less Agility                 |
| Easy Deployment     | Difficult Scaling            |
| Easy Testing        | Slow Development             |
| Better Performance  | Poor Fault Tolerance         |
| Easy Debugging      | Difficult Technology Upgrade |
| Simple Architecture | No Independent Deployment    |

---

# Applications

Monolithic Architecture is suitable for:

* College Projects
* Small Business Applications
* Inventory Systems
* Library Management
* Attendance Systems
* Banking Applications (Old Systems)

---

# Monolithic vs Microservices (Important for Exams)

| Monolithic                     | Microservices                   |
| ------------------------------ | ------------------------------- |
| Single Application             | Multiple Independent Services   |
| Single Deployment              | Independent Deployment          |
| Shared Database                | Separate Databases              |
| Difficult Scaling              | Easy Scaling                    |
| Tightly Coupled                | Loosely Coupled                 |
| One Technology                 | Multiple Technologies           |
| One Failure Affects Entire App | Failure Isolated to One Service |

> **Exam Tip:** This comparison is one of the most frequently asked questions along with "Explain Monolithic Architecture." Since your Unit-3 notes discuss both together, preparing this table is highly recommended.

---

# Conclusion

Monolithic Architecture is a traditional software architecture in which all application components are integrated into a single codebase and deployed as one unit. It is simple to develop and manage for small applications but becomes difficult to maintain, scale, and update as the application grows. These limitations led to the adoption of **Microservices Architecture**, which provides better scalability, flexibility, and independent deployment.

---

# ⭐ Examiner Keywords

Write these keywords exactly:

* Monolithic Architecture
* Single Codebase
* Single Deployment
* Tightly Coupled
* Business Logic
* Shared Database
* Scalability
* Fault Tolerance
* Continuous Deployment
* Application Architecture

---

# 💯 Exam Tip (20 Marks)

To score full marks:

1. Write the **definition** and **introduction**.
2. Draw the **Monolithic Architecture diagram**.
3. Explain:

   * Components
   * Working
   * Features
   * Advantages
   * Drawbacks (especially the **six drawbacks** from your uploaded notes)
4. Include a **real-life example**.
5. Add the **Monolithic vs Microservices comparison table**.
6. Finish with a short **conclusion**.

This answer closely follows your uploaded **Unit–3 (Microservices)** notes, especially the section describing the architecture and its six key drawbacks.




# UNIT 3 – Question 2 (20 Marks)

# Explain Distributed Architecture

**(Answer based on your uploaded notes and textbook)**

### 📚 References Used

* **Unit–3 (Microservices).pdf** – **Distributed Architecture and Microservices**
* **Chapter 4 – Cloud Computing Applications and Paradigms** – Distributed Applications 
* **Cloud Computing: Theory and Practice** – Chapter 4 

> **Note:** According to your uploaded notes, **Distributed Architecture** was introduced to overcome the limitations of **Monolithic Architecture**. It divides a large application into multiple independent services that communicate over a network.

---

# Explain Distributed Architecture

## Introduction

As applications became larger and more complex, **Monolithic Architecture** faced problems such as:

* Difficult Scaling
* Slow Development
* Single Point of Failure
* Difficult Maintenance

To overcome these issues, **Distributed Architecture** was introduced.

In Distributed Architecture, an application is divided into **multiple independent components or services** that work together through a network.

Each service performs a specific task and communicates with other services using APIs or messaging protocols.

---

# Definition

**Distributed Architecture** is an application architecture in which an application is divided into **multiple independent services or components** running on different servers. These services communicate with each other through a network to perform a complete business operation.

---

# Distributed Architecture Diagram

![Image](https://images.openai.com/static-rsc-4/agpMbI7dPtX5wFTXK3owAYYirKSKlgVu_P033XteM3dktQX-0vWQ_qtA0A5JwQ5uZR1dgk0E8Wsg_ANyBgl6bZLYMTquU2lsdIJcNNMNCfPcSUb9pBPanf7EwGM-Ubw_Frb9Z_nB0dwUMo8smRCthw35Trvg-tGrLLF1EFhDjebpknzz9c1Kxa4BxUAzpplF?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/n2PbOwGNcrHoP04WGcUDFaT1Bq_phjJyRaavfsk-rYqs4OUYI0EYwnjjLaR7TuqpxOvAPqZ-agNcEcp5wjYg3SCgeagY8-4NIvrm0ZpWb8oR-zFia6ibNRJ9CbJ0Jgvr1noXLQKQrYlyDFSPkPMRNqZHIo5Lb5C_xXSPXPN_x7bNyBOz9ZueM93qXr1m0ZFC?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/zQv8g9gxJ-cFjyBpxXWQnB57CfweXXSPvBFQ-QGfZwnJPcOKOyQ3L129UQOdY-qPrAvtmPybVlm7xkz08_ppoykZv06gOSUYsLpJoQKG7yCgvMMzjxoHQ40tCluTqU62SmAMfL2KW9ANQIA37PUM2wtg1KBRpSxrIGqGD3tjv4DLCFLJlIHiS1OGWZ8iMebp?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/PDPy-AV4-PB2TsN4jS2B5pbC_DrnacHCDhnS-tv62mlo4vnipIOHs6TIh_jlyzyS0yMXCnj1P7zkyCdwFbtQqgA4vAr-BkRDonDRPCHV2vlJMfkEySE77OcsxoKX_IUUlhpMh9xHtGqnMDfjd20KMdazv_E5PznoqWkinFSS92ZjtK4VljCpGIl5u1YStd69?purpose=fullsize)

### Diagram Name

**Distributed Architecture**

### Draw and Label

```text
                User
                  │
             Web Browser
                  │
             API Gateway
       ┌──────────┼──────────┐
       │          │          │
 User Service  Order Service  Payment Service
       │          │          │
   User DB    Order DB    Payment DB
```

---

# Components of Distributed Architecture

## 1. Client

The client sends requests to the application.

Examples:

* Mobile App
* Web Browser
* Desktop Application

---

## 2. API Gateway

Acts as the entry point for all client requests.

Functions:

* Authentication
* Routing
* Security
* Load Balancing

---

## 3. Independent Services

The application is divided into separate services.

Examples:

* Login Service
* Product Service
* Payment Service
* Order Service
* Inventory Service

Each service performs only one specific task.

---

## 4. Database

Each service may have its own database.

This improves:

* Performance
* Scalability
* Data Isolation

---

# Working of Distributed Architecture

### Step 1

The user sends a request through a browser or mobile app.

↓

### Step 2

The request reaches the API Gateway.

↓

### Step 3

The API Gateway forwards the request to the appropriate service.

↓

### Step 4

The selected service processes the request.

↓

### Step 5

The service accesses its database.

↓

### Step 6

The response is returned to the API Gateway.

↓

### Step 7

The API Gateway sends the final response to the user.

---

# Features of Distributed Architecture

### 1. Independent Services

Each service works independently.

---

### 2. Loose Coupling

Services are not tightly connected.

Changes in one service do not affect others.

---

### 3. Scalability

Individual services can be scaled independently.

---

### 4. Fault Isolation

Failure of one service does not stop the entire application.

---

### 5. Parallel Development

Different teams can develop different services simultaneously.

---

### 6. Technology Independence

Different services may use different programming languages and databases.

Example:

* Login → Java
* Payment → Python
* Inventory → Node.js

---

# Advantages

## 1. High Scalability

Only the required service is scaled.

---

## 2. Better Fault Tolerance

Failure of one service does not affect the remaining services.

---

## 3. Faster Development

Multiple teams can work simultaneously.

---

## 4. Easy Maintenance

Individual services can be updated independently.

---

## 5. Independent Deployment

Each service can be deployed without redeploying the entire application.

---

## 6. Better Resource Utilization

Resources are allocated only where required.

---

# Disadvantages

## 1. Complex Architecture

Managing multiple services is more difficult than a monolithic application.

---

## 2. Network Dependency

Communication between services depends on the network.

---

## 3. Security Challenges

Each service must be secured separately.

---

## 4. Data Consistency Issues

Maintaining consistency across multiple databases is difficult.

---

## 5. Monitoring Complexity

Tracking failures across many services is challenging.

---

## 6. Higher Deployment Complexity

Deploying multiple services requires advanced tools and automation.

---

# Real-Life Example

Consider an **Online Shopping Application**.

Instead of one large application, it is divided into:

* Login Service
* Product Service
* Cart Service
* Payment Service
* Order Service
* Delivery Service

If the **Payment Service** requires an update, only that service is modified and deployed.

The remaining services continue running without interruption.

---

# Applications

Distributed Architecture is used in:

* Amazon
* Netflix
* Flipkart
* Paytm
* Google
* Facebook
* Banking Systems
* E-Commerce Applications

---

# Monolithic vs Distributed Architecture

| Monolithic Architecture           | Distributed Architecture       |
| --------------------------------- | ------------------------------ |
| Single Application                | Multiple Independent Services  |
| Single Deployment                 | Independent Deployment         |
| Difficult Scaling                 | Easy Scaling                   |
| Single Database                   | Multiple Databases             |
| Tightly Coupled                   | Loosely Coupled                |
| One Failure Affects Entire System | Failure Limited to One Service |
| Slow Development                  | Parallel Development           |
| Difficult Maintenance             | Easy Maintenance               |

---

# Benefits in Cloud Computing

Distributed Architecture is widely used in cloud computing because it provides:

* Elastic Scalability
* High Availability
* Load Balancing
* Fault Tolerance
* Independent Deployment
* Better Performance
* Continuous Integration & Deployment (CI/CD)

---

# Conclusion

Distributed Architecture divides an application into multiple independent services that communicate over a network. Compared to Monolithic Architecture, it provides better scalability, fault tolerance, flexibility, and maintainability. It is the foundation for **Microservices Architecture**, making it the preferred choice for modern cloud-based applications.

---

# ⭐ Examiner Keywords

Write these keywords exactly:

* Distributed Architecture
* Independent Services
* API Gateway
* Loose Coupling
* Scalability
* Fault Tolerance
* Parallel Development
* Independent Deployment
* Multiple Databases
* Service Communication

---

# 💯 Exam Tip (20 Marks)

To score full marks:

1. Write the **definition** and **introduction**.
2. Draw the **Distributed Architecture diagram**.
3. Explain:

   * Components
   * Working
   * Features
   * Advantages
   * Disadvantages
4. Include a **real-life example**.
5. Add the **Monolithic vs Distributed Architecture comparison table**.
6. End with a concise **conclusion**.

This answer is based on your uploaded **Unit–3 (Microservices)** notes and **Chapter 4**, where Distributed Architecture is introduced as the solution to the limitations of Monolithic Architecture.
