

# Array and String Operations

This repository contains solutions and exercises from Chapter 3 of **C++ Primer**, focusing on array and string manipulations, as well as vector operations. Each exercise is implemented as a standalone program, and the corresponding source files are provided in the `src` folder.

## Directory Structure

```
.
├── build                         # Compiled executable files
├── doc                           # Documentation related to exercises and topics
├── src                           # Source code for all programs
```

### Folders Overview

- **build**: Contains the compiled binary files for each exercise.
- **doc**: Documentation in Markdown and PDF formats, providing answers and explanations for exercises and string operations in C and C++.
- **src**: Source code for various programs solving exercises from Chapter 3.

## Build Instructions

To compile the programs, navigate to the `src` folder and use a C++ compiler. For example:

```bash
g++ -o build/capitalize_words src/capitalize_words.cpp
./build/capitalize_words
```

You can compile and run any of the programs in a similar manner by replacing the source file and output names accordingly.

## Exercises and Programs

### Array Operations
- **initialize_array_with_index.cpp**: Initializes an array of size 10, setting each element's value to its index.
- **zero_array_with_pointers.cpp**: Uses pointers to set all elements of an array to zero.
- **compare_arrays_and_vectors.cpp**: Compares arrays and vectors to check for equality.

### String Operations
- **read_strings.cpp**: Reads multiple strings from input and stores them in a vector.
- **read_one_word.cpp**: Reads a single word from input.
- **remove_punctuation.cpp**: Removes punctuation from a string.
- **replace_chars_with_X.cpp**: Replaces characters in a string with 'X'.
- **concatenate_strings_with_space.cpp**: Concatenates multiple strings, separated by spaces.

### Vector Operations
- **double_vector_values.cpp**: Doubles the value of all elements in a vector.
- **sum_adjacent_elements.cpp**: Outputs the sum of adjacent elements in a vector.
- **check_vector_contents.cpp**: Checks and prints the contents and size of vectors.

### Miscellaneous
- **hex_converter.cpp**: Converts numbers to hexadecimal format.
- **signed_unsigned_mismatch.cpp**: Demonstrates issues with signed and unsigned integer operations.

## Documentation

In the `doc` folder, you will find:
- **练习解答.md**: Contains detailed answers for some exercises.
- **C与C++的字符串.md / C与C++的字符串.pdf**: A comparison of string handling in C and C++.

