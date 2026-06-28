# object-oriented-programming
This repository contains my personal implementations and practice files for core Object-Oriented Programming (OOP) concepts in C++. The goal is to demonstrate clean code architecture, proper memory management, and a solid understanding of how to model real-world problems using classes and objects.

## Concepts Covered

Instead of just writing monolithic code, I’ve broken down the project to highlight the four pillars of OOP using C++ specific features:

* **Encapsulation:** Using `private` and `protected` access modifiers, constructor initialization lists, and getter/setter functions to safeguard data.
* **Inheritance:** Creating clean class hierarchies (Base and Derived classes) to promote code reusability. 
* **Polymorphism:** Utilizing `virtual` functions, override specifiers, and pointers/references to achieve dynamic (runtime) binding.
* **Abstraction:** Designing abstract classes containing at least one `pure virtual function` (`= 0`) to act as interfaces.
* Object Relationships & Memory Ownership
I have also implemented examples demonstrating how objects interact and depend on each other, focusing heavily on lifetime management:

* **Association (Has-a / Uses-a):** A loose relationship where two independent objects use each other (e.g., a `Driver` uses a `Car`). Neither object owns the other.
* **Aggregation (Has-a - Weak Dependency):** A relationship where the child can exist independently of the parent. Implemented using raw pointers or `std::weak_ptr` to show that the parent doesn't own the lifecycle of the child (e.g., a `Department` has `Professors`).
* **Composition (Part-of - Strong Dependency):** A strict relationship where the child cannot exist without the parent. Implemented by nesting objects directly or using `std::unique_ptr` so that when the parent is destroyed, the child is automatically cleaned up (e.g., a `House` has `Rooms`).
