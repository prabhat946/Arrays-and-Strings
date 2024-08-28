# Arrays and Strings
Experiment 7


## AIM
To study use of and to implement arrays and strings in C++.

## Theory

### Arrays in C++
An array is a data structure of elements with same data type stored at contiguous memory locations.Arrays are used to store multiple values in a single variable, making it easier to manage large sets of data.

**Features :**
- Fixed size: The size of an array after being defined cannot be changed later.
- Contiguous memory allocation: All elements are stored in continuous memory blocks.
- Index-based: Array elements can be accessed using thier indices.

**Example:**
An array of 4 integers
```cpp
int a[4]; 
```
<br>


### Strings in C++
Strings are sequences of characters used to store text. In C++, the `string` class is defined in the ```<string>``` header file. There are two types of strings in C++ : <br>
1. C style Strings
2. std : : string

**Features:**
- Iteration: Strings support iterations for traversing thier contents.
- Concatenation: Strings can be concatenated using the `+` operator.
- Indexing: Strings support indexing, allowing access to individual characters using the `[]` operator.
- Comparison: Strings can be compared using operators `(==, !=, <, >, etc.)`.
- Modification: Characters in a string can be modified through direct indexing.

**Example:**
An array of strings
```cpp
string str1 = "Hello"; 
```
## Algorithms
### Checking Palindrome


1. **Input the String:**
   - Ask the user to enter a string.

2. **Initialize Variables:**
   - Store the input string in a variable, `a`.
   - Initialize an empty string, `revstr`.

3. **Determine the Length:**
   - Calculate the length of `a` and store it in `length`.

4. **Reverse the String:**
   - Loop from the end of the string to the beginning:
   - Append each character to `revstr`.

5. **Compare the Strings:**
   - Compare the original string `a` with the reversed `revstr`.
   - If `a` == `revstr`, the string is a palindrome.
   - Else not a palindrome.

6. **Output the Result:**
   - Print whether the string is a palindrome or not based on the comparison.


### Printing Array Elements

1. **Initialize the Array:**
   - Define an array `x` as  `{19, 10, 8, 6, 8}`.

2. **Loop Through Array:**
   - Use `for` loop in the array.

3. **Print Each Element:**
   - print each element of the array using the loop.

4. **End Program:**



### Search in an Array and Sum and Average

1. **Initialization:**
   - Define an integer variable `n` and    set it to 6 (the size of the array).
   - Initialize the array marks with values {100, 200, 300, 400, 500, 600}.
   - Define an integer variable `key` with the value 400.
   - Initialize integer variables `sum` to 0 and `avg` to store the sum and average, respectively.

2. **Search for the Key in the Array:**
   - Loop through the array marks from index `0` to `n-1`.
   - Compare each element `marks[i]` with the `key`.
   - If `marks[i]` is equal to the key, print the message “Key found at location: i” and break the loop.

3. **Calculate the Sum of the Array Elements:**
   - Loop through the array marks again from index `0` to `n-1`.
   - Add each element `marks[j]` to the sum.

4. **Calculate the Average:**
   - Divide the sum by `n` to get the average and store it in the variable `avg`.

5. **Output the Results:**
   - Print the sum of all the elements.
   - Print the average of all the elements.# Arrays-and-Strings
