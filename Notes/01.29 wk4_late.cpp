//NEED TO READ #1&4

//04_1_Pointer_Variable.pptx
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














