//NEED TO READ #1&4

04_1_Pointer_Variable
// Introduction to Pointers
// 1. Address of variables of different types – memory map
// 2. Address of a variable – code
// 3. Pointer variable
// 4. The address (&) and indirection (*) operators
// 5. Dereferencing an uninitialized pointer
// 6. Pointer variable
// 7. Pointer – a derived data type
// 8. Why pointers?
// 9. Who is the inventor of the pointer variable concept?

//3. Pointer Variable - combined variable deriving from basic variables
int *ptr;
int* ptr;
int *ptr, *b;

ptr = &a;  //can work, but better in two steps instead of one


//4. The address (&) and indirection (*) operators
int  a = 10, b;
int *ptr; 

ptr = &a;

cin >> a;
b = a + 1; 
a++;


//5. What is wrong?
double  pi = 3.14; 
double *ptr; //can be double since pi is a double - see exL32

cout << pi   << endl;
cout << &ptr << endl;
cout <<  ptr << endl;
cout << *ptr << endl; //couldn't work since it hasn't been initialize

//22A - char can be converted into int
//ex: pic 12:23
int a=10;
int *ptr;
char ch='A';

ptr = &a;
cout << *ptr;
ptr = &ch; //->ERROR!
cout << *ptr;


//A pointer variable is a variable that can store an address.
double  n = 75.99;
double *ptr;

ptr  = &n;

cout << n << " " << &n  << " " << ptr;
//in the past, we could learn levels of ptr
//q = &ptr;
//then how can we define q?
// double **q; 



04_3_Ptr_Arithmetic
// Pointer Arithmetic and Arrays
// 1. Arithmetic operators
// 2. Relational operators
// 3. Traversing an array using a pointer – find smallest
// 4. Why use a pointer to traverse an array?
// 5. Traversing an array using a pointer – find smallest (function)
// 6. Traversing an array using a pointer – calculate sum (function)
// 7. Traversing an array using a pointer – right rotation

//pg5
ptr[-1]; //does exist!!!
//ptr[-1] is actually 30



04_4_MemAlloc
// Pointers and Memory Allocation
// 1. Memory Management: Stack versus Heap Allocation
// 2. Pointer Fun Video
// 3. Find and fix errors 
// 4. Find and fix errors  – memory leak
