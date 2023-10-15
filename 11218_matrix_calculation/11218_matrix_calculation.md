## Task Description
Write a C program to perform addition, subtraction, and multiplication operations of two 2D matrices. The size of all the matrices will not lager than 100*100.



## Hint

When you do the addition and subtraction, the size of the two matrices should be the same.

When you do the multiplication, the column size of the first matrix should equal to the row size of the second matrix.

## Input Format
The first line contains five integers: 

The first two integers represent the dimensions (row and column) of the first matrix.

The following two integers represent the dimensions (row and column) of the second matrix.

The last integer represents the type of operation you will perform(0 represents addition, 1 represents subtraction, and 2 represents multiplication).

Starting from the second line represents the elements of the two matrices in matrix format respectively.

Note that: Starting from the second line, the shape of the two matrices should match the dimensions provided in the first line.

## Ouput Format
Print all the elements of the resulting matrix after performing the operation in matrix format.

## Sample Input 1
```
2 3 2 3 1
1 2 3
1 2 3
4 5 6
4 5 6
```

## Sample Output 1
```
-3 -3 -3
-3 -3 -3
```

## Sample Input 2
```
2 3 3 2 2
1 1 1
1 1 1
1 1
1 1
1 1
```

## Sample Output 2
```
3 3
3 3
```
