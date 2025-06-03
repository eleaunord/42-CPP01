# C++ Module 01 – Memory, References, and Control Flow

This module is an introduction to **dynamic memory allocation**, **pointers**, **references**, and **control structures** in C++. It builds the foundation for deeper understanding of how memory and object interaction works in C++, contrasting it with C.

---

## 📘 What I Learned

* Differences between stack and heap memory
* How to allocate and deallocate memory with `new` and `delete`
* Basics of references vs pointers
* How to safely manipulate and share data using references
* How to manage object ownership
* The `switch` statement and its use in control flow
* Introduction to streams with file input/output
* Function pointers and their role in dynamic behavior

---

## Exercise 00: BraiiiiiiinnnzzzZ

**Focus**: Stack vs Heap memory allocation

This exercise introduces the idea of memory management by creating `Zombie` objects.

### Concepts:

* **Stack allocation**: Object lives and dies within a function scope.
* **Heap allocation**: Object persists beyond scope, manually freed.
* Destructor used to track when a zombie is destroyed.

```cpp
Zombie* newZombie(std::string name);   // allocated on the heap
void randomChump(std::string name);    // allocated on the stack
```

Key takeaway: Use the **stack** for short-lived objects; use the **heap** for persistent or shared objects.

---

## Exercise 01: Moar brainz!

**Focus**: `new[]` and `delete[]` for heap-allocated arrays

I learned to create a **zombie horde** using a dynamically allocated array of objects.

```cpp
Zombie* zombieHorde(int N, std::string name);
```

### Concepts:

* Use of `new[]` to allocate an array of objects
* Iterating through array to initialize objects
* Importance of `delete[]` to prevent memory leaks

---

## Exercise 02: HI THIS IS BRAIN

**Focus**: Pointers and References

I explored pointers and references by pointing both to a string and observing memory behavior.

### Concepts:

* A **reference** is an alias to a variable — cannot be null, must be initialized.
* A **pointer** stores an address — can be reassigned or null.

```cpp
std::string brain = "HI THIS IS BRAIN";
std::string* stringPTR = &brain;
std::string& stringREF = brain;
```

Takeaway: Pointers offer flexibility and control; references offer safety and simplicity.

---

## Exercise 03: Unnecessary violence

**Focus**: References vs pointers in object members

This task involved two humans (HumanA and HumanB) who can hold weapons and attack.

### Concepts:

* Using **references** when a value must be bound at construction
* Using **pointers** when a value may change or be null
* Class design and dependency injection

Key insight: HumanA uses a reference (always armed); HumanB uses a pointer (optional weapon).

---

## Exercise 04: Sed is for losers

**Focus**: File I/O using `ifstream` and `ofstream`

I created a program that reads a file, replaces all instances of `s1` with `s2`, and writes to a new file.

### Concepts:

* Reading and writing files with `<fstream>`
* Handling input arguments and errors
* Manipulating `std::string` (without `.replace()`!)

Learned to build file tools and work with I/O in a C++ idiomatic way.

---

## Exercise 05: Harl 2.0

**Focus**: Function pointers to class members

I implemented a class `Harl` that prints messages based on severity levels.

### Concepts:

* Pointers to member functions
* Avoiding if-else chains with clean dispatch
* Mapping strings to behaviors dynamically

Learned dynamic function calling using member function pointers.

---

## Exercise 06: Harl filter

**Focus**: `switch` statement

Filtered `Harl`'s complaints based on a minimum severity level using `switch`.

### Concepts:

* Use of `switch` for cleaner multi-case logic
* Default behavior for unrecognized input
* Chained logging logic from a defined entry point

Good introduction to control flow structures and fallthrough behavior in C++.

