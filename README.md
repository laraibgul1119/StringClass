# Custom C++ String Class ✨

This repository contains a custom implementation of a `String` class in C++, providing a robust set of functionalities for string manipulation. Designed as an alternative to `std::string`, this class offers a deeper understanding of string handling and memory management in C++.

## Features 🚀

- **Constructors:** Multiple constructors for various initialization scenarios, including default, character, C-style string, copy, and move constructors.
- **Basic Operations:** `getLength()`, `getSize()`, `isEmpty()`, `display()`.
- **Manipulation:**
  - `reverse()`: Reverses the string. 🔄
  - `shrink()`: Resizes the string to its actual length.
  - `trimLeft()`, `trimRight()`, `trim()`: Removes leading, trailing, or both leading and trailing whitespace characters. ✂️
  - `makeUpper()`, `makeLower()`: Converts the string to uppercase or lowercase. 🔡
  - `insert()`: Inserts a substring at a specified index. ➕
  - `remove()`: Removes characters from a specified index. ➖
  - `replace()`: Replaces all occurrences of a substring with another. 🔁
  - `left()`, `right()`: Extracts a substring from the left or right. ➡️
- **Search and Comparison:**
  - `find()`: Finds the first occurrence of a substring. 🔍
  - `compare()`: Compares two strings. ⚖️
- **Type Conversion:**
  - `convertToInteger()`: Converts the string to a `long long int`. 🔢
  - `convertToFloat()`: Converts the string to a `float`.  decimals
- **Operator Overloading:**
  - `==`: Equality comparison. ✅
  - `[]`: Character access by index. 📍
  - `+=`, `+`: String concatenation. 🔗
  - `=`: Assignment operators for `String`, `long long int`, and `double`. ✍️
  - `!`: Checks if the string is empty. 🚫
  - `explicit operator long long int()`, `explicit operator double()`, `explicit operator bool()`: Explicit type conversions. 🔄
  - `()`: Tokenizes the string based on a delimiter. 🧩
- **Input/Output:** Overloaded `>>` and `<<` operators for easy input and output. 💻
- **Memory Management:** Custom dynamic memory allocation and deallocation for efficient string storage. 🧠

## Usage 💡

This class can be used in C++ projects where a custom string implementation is preferred or for educational purposes to understand the underlying mechanisms of string handling.

## Contribution 🤝

Feel free to fork the repository, open issues, or submit pull requests to improve this custom String class.

