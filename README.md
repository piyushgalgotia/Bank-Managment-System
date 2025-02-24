# Bank-Managment-System
The Bank Management System is a simple C++ console application that allows users to create and manage bank accounts. This CLI-based system provides basic banking functionalities such as account creation, deposit, withdrawal, and account search.

Features

Create a new bank account

View all accounts

Search for an account by account number

Deposit money into an account

Withdraw money from an account

Secure and efficient data handling using object-oriented programming (OOP)

Technologies Used

C++ (Object-Oriented Programming)

Standard Template Library (STL) (Vectors for account management)

CLI-Based Interface (Simple and easy-to-use text-based UI)

Installation & Usage

Clone the repository:

git clone https://github.com/piyushgalgotia/Bank-Management-System.git

Navigate to the project directory:

cd Bank-Management-System

Compile the program:

g++ bank_management.cpp -o bank_management

Run the executable:

./bank_management

Future Enhancements

1️⃣ System Design Principles

Implement MVC (Model-View-Controller) architecture for better code organization.

Introduce Factory and Singleton design patterns to manage database connections and account objects efficiently.

2️⃣ SQL Database Integration

Store account details in a MySQL or PostgreSQL database instead of using in-memory storage.

Implement SQL queries for creating, updating, and retrieving account data.

Enable data persistence so that account information is not lost after program execution.

3️⃣ Authentication & Security

Add user authentication using hashed passwords.

Implement role-based access control (RBAC) for different levels of users (Admin, Employee, Customer).

Introduce encryption techniques to secure sensitive data.

Contributing

Contributions are welcome! Feel free to fork this repository and submit a pull request with your improvements.
