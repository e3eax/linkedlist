# Linked List Class Implementation in C++

## Overview

This is an implementation of a generic linked list class in C++. It provides basic operations for manipulating a linked list, making it easy to use and efficient for a wide range of data types.

## Features

- **Generic**: The class is templated, which means it can be used with any data type.
- **Ease of use**: The class provides a simple and intuitive API for working with linked lists.
- **Efficiency**: The implementation focuses on performance and memory efficiency.
- **Vector Initialization**: The linked list class can be instantiated with a vector, and all the elements will be appended to the linked list sequentially.

## Operations

- `append`: Add an element to the end of the list.
- `prepend`: Add an element to the beginning of the list.
- `traverse`: Iterate through the list and apply a function to each element.
- `insert`: Insert an element at a specific position in the list.
- `delete`: Remove an element from the list.
- `update`: Update an element in the list.

## Installation

Include the linked list class in your project and create an instance of it:

```cpp
#include "LinkedList.h"

LinkedList<int> myList;
```

## Usage

The generic nature of the linked list class allows you to use it with various data types. Here are some examples:

### Integers

```cpp
#include "LinkedList.h"

LinkedList<int> intList;
intList.append(1);
intList.append(2);
intList.append(3);
intList.traverse([](int value) {
    std::cout << value << std::endl;
});
```

### Strings

```cpp
#include "LinkedList.h"

LinkedList<std::string> stringList;
stringList.append("Hello");
stringList.append("World");
stringList.prepend("Linked List");
stringList.traverse([](std::string value) {
    std::cout << value << std::endl;
});
```

### Vectors

You can also instantiate the linked list with a vector of elements:

```cpp
#include "LinkedList.h"
#include <vector>

std::vector<int> myVector = {1, 2, 3, 4, 5};
LinkedList<int> myList(myVector);
```

### Custom Structures

```cpp
#include "LinkedList.h"

struct Point {
    int x;
    int y;
};

LinkedList<Point> pointList;
Point point1 = {1, 2};
Point point2 = {3, 4};
Point point3 = {5, 6};

pointList.append(point1);
pointList.append(point2);
pointList.prepend(point3);

pointList.traverse([](Point value) {
    std::cout << "(" << value.x << ", " << value.y << ")" << std::endl;
});
```

In these examples, the linked list class is used with integers, strings, and a custom `Point` structure. The `traverse` method is used to print the elements of the list. The lambda function passed to `traverse` handles each data type appropriately.
