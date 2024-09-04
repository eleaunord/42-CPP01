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
