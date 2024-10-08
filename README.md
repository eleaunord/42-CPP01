## Exercise 00: How to allocate memory in C++ ? 
### Stack vs Heap
Stack memory
> Automatically managed by the compiler and is allocated when you declare a local variable inside a function.
- Automatic Deallocation: Memory is automatically deallocated when the function exits.
- Limited Size: The stack has a limited size, usually set by the system or the compiler, making it unsuitable for large data.
- Fast Access: Stack memory is faster to allocate and deallocate compared to heap memory because it involves simple pointer arithmetic.
To use when we know the size of the data at compile time and the data doesn’t need to persist beyond the scope of the function..

Heap memory
> Dynamically allocated during the runtime using the new keyword and must be explicitly deallocated using delete.
- Manual Deallocation: You must manually deallocate memory using delete or delete[] for arrays.
- Flexible Size: The heap is much larger than the stack and can allocate large amounts of memory.
- Slower Access: Heap allocation and deallocation are generally slower compared to stack operations.
To use when we DON'T know the size of the data at compile time or when the data needs to persist beyond the function scope (e.g., returning data from a function or allocating large arrays).

### Allocating zombies in the exercise

Allocate on the Stack:
- When the zombie object is small or of a fixed size.
- When the zombie's lifetime is limited to the function scope.
- When you want faster access to the object and automatic memory management.

Allocate on the Heap:
- When the zombie object is large or has a dynamic size (e.g., large arrays, complex data structures).
- When the zombie needs to persist after the function returns, or when the lifetime of the zombie is not tied to a single function call.
- When you need to manage the object’s lifetime manually, for example, to share the object across different parts of the program.

## Exercise 01: new[] and delete[]

## Exercise 02: Demystify references

Constant pointer that is never NULL and always unreferenced. Assign variable directly to the reference, it will always be pointing to this variable and we will not able to make it point to something else later. 

## Exercise 03: pointers and references

### Similarities
Indirect Access:
- Both pointers and references allow you to access and modify the value of another variable indirectly.

int a = 10;
int* ptr = &a;   // Pointer to a
int& ref = a;    // Reference to a

*ptr = 20;       // Modifies a through pointer
ref = 30;        // Modifies a through reference

Memory Address:
- Both can be used to obtain the memory address of a variable.
- Pointers store the address of the variable, while references internally hold the address of the variable they refer to.

int a = 10;
int* ptr = &a;   // Pointer holds the address of a
int& ref = a;    // Reference refers to a

std::cout << ptr << std::endl;   // Outputs the memory address of a
std::cout << &ref << std::endl;  // Outputs the memory address of a

Function Arguments:
- Both can be used to pass arguments to functions, allowing the function to modify the original variable.

### Differences
- Syntax
  
- Initialization : pointers can be declared without initialization and later assigned to any address. It can be re-assigned to point to another variable VS references must be initialized at the time of declaration and cannot be made to refer to another variable after initialization.
  
- Nullability : pointers can be assigned nullptr to indicate that it points to nothing.
  
- Reference : cannot be NULL

- Deferencing : pointers require explicit dereferencing using the * operator to access the value pointed to while references automatically dereferenced; no special syntax is needed to access the value.

- Pointer arithmetic :
int arr[3] = {10, 20, 30};
int* ptr = arr;

ptr++;  // Points to the next element in the array

int& ref = arr[0];
// ref++;  // This would increment the value at arr[0], not move the reference

- Use cases : 
Pointer: Used when you need to:
  - Manage dynamic memory (e.g., with new and delete).
  - Implement data structures like linked lists, trees, etc.
  - Use pointer arithmetic.
  - Point to an array or a block of memory.
Reference: Preferred when:
    - You want to create an alias for a variable.
    - You want to pass arguments to functions without copying them.
    - You need to ensure that the reference always points to a valid object.

## Exercise 04: ifstream and ofstream

From the stream library <fstream>

ifstream (Input File Stream): used to read data from files. You open a file using the open() method or by passing the file name directly to the constructor. Works similarly to reading from cin, except that the input is taken from a file.

ofstream (Output File Stream): used to write data to files. You can open a file for writing using open() or by passing the file name to the constructor. Data can be written to the file similarly to how data is written to cout.

## Exercise 05 : new[],delete[]

## Exercise 06: switch statement

switch (expression) {
    case constant1:
        // code to be executed if expression == constant1
        break;
    case constant2:
        // code to be executed if expression == constant2
        break;
    // more cases
    default:
        // code to be executed if expression doesn't match any case
}




