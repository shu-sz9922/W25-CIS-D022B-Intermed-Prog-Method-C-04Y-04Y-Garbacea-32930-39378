# Corrections
## 3.1: Grouping data: struct
### 3.1.4: The struct construct.
Notes: <br>
1. A struct definition for CartesianPoint has subitems int x and int y. 
How many int locations in memory does the struct definition allocate?  <br>
>Incorrect: Tricky question. The struct definition just creates a type. Does it actually allocate any memory? <br>
>The struct definition just creates a type, but doesn't allocate memory. Later variable declarations, like Point myPoint, will allocate memory locations.<br>


<p>2. If struct definition CartesianPoint has subitems int x and int y, how many total int locations in memory are allocated for these variable declarations?
```
int myNum;
CartesianPoint myPoint1;
CartesianPoint myPoint2;
```
4 Incorrect Each myPoint variable has two int locations allocated, for x and for y.
0 Incorrect Each myPoint variable has two int locations allocated, for x and for y.
1 for myNum. 
2 for myPoint1 (1 for x, 1 for y). 
2 for myPoint2.
</p>
