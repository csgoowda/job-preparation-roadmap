Day 14 – Computer Networks Fundamentals (OSI Model, TCP/IP, IP Addressing)

⚠️ This is the foundation of Computer Networks.

Most interviews start CN with:

What is a Computer Network?

What is the OSI Model?

What is TCP/IP?

What is an IP Address?


If you understand Day 14 well, TCP/UDP, HTTP/HTTPS, DNS become very easy.


---

1. What is a Computer Network?

A Computer Network is a collection of interconnected devices that communicate and share resources.


---

Example

Laptop ←→ Router ←→ Internet ←→ Server

When you open YouTube:

Laptop
 ↓
Internet
 ↓
YouTube Server

Data travels through a network.


---

Why Networks?

Resource Sharing

File Sharing

Communication

Internet Access



---

Types of Networks


---

LAN (Local Area Network)

Small geographical area.

Example

Home Wi-Fi

College Lab


Building

Coverage is small.


---

MAN (Metropolitan Area Network)

City-level network.

Example

Mysuru City Network


---

WAN (Wide Area Network)

Large geographical area.

Example

Internet

Worldwide coverage.


---

LAN vs MAN vs WAN

LAN	MAN	WAN

Small Area	City	Worldwide
Fast	Medium	Slower
Example: College Lab	City Network	Internet



---

Networking Devices


---

Hub

Old networking device.

Receives data and broadcasts to everyone.


---

Problem

All devices receive data.

Not efficient.


---

Switch

Improved version of hub.

Sends data only to the intended device.


---

Example

PC1 → Switch → PC3

Only PC3 receives.


---

Router

Connects different networks.

Example:

Home Network
↓
Router
↓
Internet


---

Hub vs Switch vs Router

Hub	Switch	Router

Broadcasts data	Intelligent forwarding	Connects networks
Less efficient	Efficient	Most intelligent



---

What is MAC Address?

Every network device has a unique hardware address.

Called:

MAC Address

Example:

00:1A:2B:3C:4D:5E

Assigned by manufacturer.


---

Real-Life Example

Like a fingerprint.

No two devices should have the same MAC address.


---

What is IP Address?

IP Address = Internet Protocol Address

Used to identify a device on a network.


---

Example IPv4

192.168.1.10


---

Real-Life Example

MAC Address = Person's fingerprint

IP Address = Person's house address


---

Why Both MAC and IP?

MAC:

Identifies device

IP:

Identifies location


---

IPv4

Most common addressing scheme.

32-bit address.

Example:

192.168.1.1


---

Total Addresses

Approximately:

4.3 Billion


---

Problem with IPv4

Internet grew rapidly.

Addresses became insufficient.


---

IPv6

128-bit address.

Example:

2001:db8::1

Huge number of addresses available.


---

IPv4 vs IPv6

IPv4	IPv6

32-bit	128-bit
Limited addresses	Huge address space
192.168.1.1	2001:db8::1



---

What is the OSI Model?

OSI = Open Systems Interconnection Model

It explains how data travels from one device to another.


---

Why OSI Model?

Without layers:

Everything becomes complex.

OSI divides networking into 7 layers.


---

OSI Layers

7 Application
6 Presentation
5 Session
4 Transport
3 Network
2 Data Link
1 Physical


---

Easy Memory Trick

All People Seem To Need Data Processing


---

Layer 7 – Application Layer

Closest to user.

Examples:

Browser

Email

WhatsApp


Protocols:

HTTP

FTP

SMTP



---

Layer 6 – Presentation Layer

Responsible for:

Encryption

Compression

Translation



---

Example

HTTPS encryption.


---

Layer 5 – Session Layer

Creates and manages sessions.

Example:

Login Session


---

Layer 4 – Transport Layer

Provides end-to-end communication.

Protocols:

TCP

UDP


Responsibilities:

Segmentation

Reliability



---

Layer 3 – Network Layer

Responsible for routing.

Uses:

IP Address

Device:

Router


---

Layer 2 – Data Link Layer

Uses:

MAC Address

Device:

Switch


---

Layer 1 – Physical Layer

Actual transmission.

Examples:

Cables

Fiber

Electrical signals



---

What Happens When You Send Data?

Data moves down the layers.


---

Sender:

Application
↓
Presentation
↓
Session
↓
Transport
↓
Network
↓
Data Link
↓
Physical


---

Receiver:

Physical
↑
Data Link
↑
Network
↑
Transport
↑
Session
↑
Presentation
↑
Application


---

TCP/IP Model

Real-world internet uses TCP/IP.


---

Layers

Application
Transport
Internet
Network Access


---

TCP/IP vs OSI

OSI	TCP/IP

7 Layers	4 Layers
Theoretical	Practical
Reference Model	Internet Model



---

Mapping

OSI	TCP/IP

Application + Presentation + Session	Application
Transport	Transport
Network	Internet
Data Link + Physical	Network Access



---

Most Important Interview Questions

Easy

What is a Computer Network?

Collection of interconnected devices that communicate.


---

What is an IP Address?

Unique logical address of a device on a network.


---

What is a MAC Address?

Unique physical address assigned to a network device.


---

What is LAN?

Network within a small area.


---

What is Router?

Device that connects different networks.


---

Medium

IPv4 vs IPv6?

32-bit vs 128-bit addressing.


---

Hub vs Switch?

Hub broadcasts. Switch forwards intelligently.


---

Switch vs Router?

Switch works within a network. Router connects networks.


---

What is OSI Model?

7-layer reference model for network communication.


---

Hard

Explain all OSI Layers.

(You should be able to explain all 7.)


---

Why is OSI important?

It standardizes communication and simplifies troubleshooting.


---

Why does Layer 3 use IP addresses?

Because routing decisions are based on IP addresses.


---

Why does Layer 2 use MAC addresses?

Because communication inside a local network uses hardware addresses.


---

End of Day 14 Target

You should clearly understand:

✅ Computer Networks

✅ LAN, MAN, WAN

✅ Hub

✅ Switch

✅ Router

✅ MAC Address

✅ IP Address

✅ IPv4

✅ IPv6

✅ OSI Model

✅ TCP/IP Model

These are the foundations of networking.

Day 15 (Final CN Day) will cover the highest-frequency interview topics:

TCP vs UDP

HTTP vs HTTPS

DNS

DHCP

Cookies

Sessions

What happens when you type google.com in a browser?

Complete CN interview revision.
