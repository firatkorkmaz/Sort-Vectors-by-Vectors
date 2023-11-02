# Sorting Vectors by Vectors
A program written in C++ to sort a vector of unique elements by using another vector of new index values.

## General Information
This is an experimental C++ program that sorts a main vector of unique elements by using another vector of new index values, without using any additional temporary vector to copy the main vector elements by each new index value directly.

**Example:**
```
num(vector) = {6, 4, 2, 5, 1, 3}
ind(vector) = {4, 2, 5, 1, 3, 0}
sorted_num  = {num[4], num[2], num[5], num[1], num[3], num[0]}
sorted_num  = {1, 2, 3, 4, 5, 6}
```
## Setup & Run
Compile the *Sort_Vectors_by_Vectors.cpp* file with a C++ compiler and run the executable file.
```
g++ Sort_Vectors_by_Vectors.cpp
```
