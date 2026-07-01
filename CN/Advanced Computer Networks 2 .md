Day 15 – Advanced Computer Networks (Most Asked Interview Topics)

⚠️ This is the final Core CS day and contains some of the most frequently asked networking interview questions.

Interviewers often ask:

TCP vs UDP?

HTTP vs HTTPS?

What is DNS?

What happens when you type google.com in a browser?

What are Cookies and Sessions?



---

1. What is TCP?

TCP = Transmission Control Protocol

TCP is a connection-oriented protocol that provides reliable communication.


---

How TCP Works

Before sending data:

Client ↔ Server

A connection is established.

Then data is sent.


---

Features of TCP

Reliable

Lost packets are retransmitted.


---

Ordered Delivery

Packets arrive in the correct order.


---

Error Checking

Detects transmission errors.


---

Flow Control

Prevents receiver overload.


---

Examples

Web Browsing

Email

Online Banking

File Transfer



---

Real-Life Example

Sending important documents by courier.

You want:

Delivery confirmation
Correct order
No missing pages

TCP behaves similarly.


---

2. What is UDP?

UDP = User Datagram Protocol

UDP is a connectionless protocol.

No connection setup.

Data is sent directly.


---

Features

Faster

Less overhead.


---

No Guarantee

Packets may be lost.


---

No Ordering

Packets may arrive out of order.


---

Examples

Online Gaming

Video Streaming

Voice Calls

Live Broadcasting



---

Real-Life Example

Watching live cricket.

Missing one frame is acceptable.

Speed is more important than perfection.


---

TCP vs UDP

TCP	UDP

Connection-oriented	Connectionless
Reliable	Unreliable
Slower	Faster
Error recovery	No recovery
Ordered delivery	No ordering



---

Interview Trick

Banking Transaction

Use:

TCP

Because reliability is critical.


---

Live Video Streaming

Use:

UDP

Because speed is critical.


---

3. What is HTTP?

HTTP = HyperText Transfer Protocol

Used for communication between browser and web server.


---

Example

When you open:

www.google.com

Browser sends:

HTTP Request

Server returns:

HTTP Response


---

Problem

HTTP sends data in plain text.

Anyone intercepting traffic can read it.


---

4. What is HTTPS?

HTTPS = HTTP Secure

HTTP + SSL/TLS Encryption


---

Benefits

Encryption

Data cannot be easily read.


---

Authentication

Ensures correct website.


---

Data Integrity

Data cannot be modified easily.


---

Example

Online Banking

Passwords must be encrypted.

HTTPS provides security.


---

HTTP vs HTTPS

HTTP	HTTPS

Not secure	Secure
No encryption	Encryption
Port 80	Port 443
Faster	Slightly slower



---

Easy Memory Trick

HTTP = Open Letter

HTTPS = Sealed Envelope


---

5. What is DNS?

DNS = Domain Name System

Converts domain names into IP addresses.


---

Problem

Humans remember:

google.com

Computers use:

142.250.xxx.xxx


---

DNS translates:

google.com
↓
IP Address


---

Real-Life Example

Phone Contact List

You search:

Mom

Phone finds:

9876543210

DNS works similarly.


---

Interview Answer

> DNS translates human-readable domain names into IP addresses.




---

6. What is DHCP?

DHCP = Dynamic Host Configuration Protocol

Automatically assigns IP addresses.


---

Without DHCP

You must manually configure:

IP Address
Subnet Mask
Gateway
DNS


---

With DHCP

Router automatically assigns everything.


---

Example

When your phone connects to Wi-Fi:

Router assigns IP automatically.

DHCP performs this.


---

DNS vs DHCP

DNS	DHCP

Resolves names	Assigns IP addresses
Domain → IP	Device → IP
Translation	Configuration



---

7. What are Cookies?

Cookies are small files stored in the browser.


---

Why Needed?

HTTP is stateless.

After each request:

Server forgets you.

Cookies help remember users.


---

Example

Login to Amazon.

Close browser.

Open again.

Still logged in.

Because:

Cookie stored.


---

Information Stored

Login token

User preferences

Shopping cart



---

8. What is a Session?

A session stores user information on the server.


---

Example

User logs in.

Server creates:

Session ID

Stores user data.

Browser stores session identifier.


---

Cookies vs Sessions

Cookies	Sessions

Stored in browser	Stored on server
Less secure	More secure
Small size	Larger data possible



---

What Happens When You Type google.com?

Most asked networking interview question.


---

Step 1

User types:

google.com


---

Step 2

Browser checks cache.


---

Step 3

DNS lookup occurs.

DNS returns:

IP Address


---

Step 4

TCP Connection established.

(TCP Three-Way Handshake)

SYN
SYN-ACK
ACK


---

Step 5

HTTPS security established.

SSL/TLS handshake occurs.


---

Step 6

Browser sends HTTP Request.


---

Step 7

Google Server processes request.


---

Step 8

Server sends HTTP Response.


---

Step 9

Browser renders page.

Google appears.


---

TCP Three-Way Handshake

Very common interview question.


---

Step 1

Client sends:

SYN

Request to connect.


---

Step 2

Server responds:

SYN + ACK

Acknowledges request.


---

Step 3

Client sends:

ACK

Connection established.


---

Memory Trick

SYN
SYN-ACK
ACK


---

Four-Way Handshake (Connection Termination)

Used to close TCP connection.

FIN
ACK
FIN
ACK


---

Most Important Interview Questions

Easy

What is TCP?

Reliable connection-oriented protocol.


---

What is UDP?

Fast connectionless protocol.


---

What is HTTP?

Protocol used for web communication.


---

What is HTTPS?

Secure version of HTTP using SSL/TLS.


---

What is DNS?

Converts domain names into IP addresses.


---

What is DHCP?

Automatically assigns IP addresses.


---

Medium

TCP vs UDP?

Reliability vs Speed.


---

HTTP vs HTTPS?

Security difference.


---

Cookies vs Sessions?

Browser storage vs server storage.


---

Why is DNS needed?

Humans remember names, computers use IPs.


---

Hard

Explain TCP Three-Way Handshake.

SYN → SYN-ACK → ACK.


---

What happens when you type google.com?

DNS → TCP → HTTPS → HTTP Request → Response → Render Page.


---

Why is TCP slower than UDP?

Because TCP provides reliability, acknowledgments, retransmissions, and ordering.


---

Core CS Completed 🎉

You have now covered:

OOP

✅ Basics
✅ 4 Pillars
✅ Advanced OOP

DBMS

✅ SQL
✅ Keys
✅ Normalization
✅ ACID
✅ Indexing
✅ JOINs

Operating Systems

✅ Process
✅ Thread
✅ Scheduling
✅ Deadlock
✅ Memory Management

Computer Networks

✅ OSI
✅ TCP/IP
✅ TCP vs UDP
✅ HTTP vs HTTPS
✅ DNS
✅ DHCP
✅ Cookies & Sessions

This covers the vast majority of Core CS theory questions asked in fresher placement interviews. Your next step should be revision and mock interview practice using these topics.
