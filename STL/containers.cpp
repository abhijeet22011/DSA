/*
    * Standard Template Library (STL) 
    
    *  Created on: 2024-06-01

    what is STL?

    STL is a powerful set of C++ template classes to provide general-purpose classes and functions with templates. It includes algorithms and data structures that allow programmers to use them without having to implement them from scratch. 
    
    STL provides a collection of template classes and functions for data structures such as vectors, lists, queues, stacks, maps, and sets, as well as algorithms for sorting, searching, and manipulating these data structures.

    STL is a part of the C++ Standard Library and is widely used in C++ programming for efficient and reusable code. It allows developers to write code that is more efficient, maintainable, and easier to read by providing a standardized way to work with data structures and algorithms.

    the main components of STL are:

    1. Containers: These are data structures that store objects and data. Examples include vector, list, deque, set, map, etc.

    2. Algorithms: These are functions that perform operations on containers, such as sorting,
       searching, and manipulating data. Examples include sort, find, copy, etc.

    3. Iterators: These are objects that point to elements within containers and allow traversal and manipulation of the container's elements.     They provide a way to access and modify the elements in a container without exposing the underlying implementation.

    4. Function Objects (Functors): These are objects that can be called as if they were functions. They are often used in conjunction with     algorithms to customize their behavior.
      
*/

/*
 lets begin with containers in STL.
    Containers are data structures that store objects and data. They provide a way to organize and manage data efficiently. STL provides several types of containers, each with its own characteristics and use cases.

    1. Sequence Containers: These containers store elements in a linear sequence. Examples include:
        - vector: A dynamic array that can resize itself automatically when elements are added or removed.
        - list: A doubly linked list that allows for efficient insertion and deletion of elements.
        - deque: A double-ended queue that allows for fast insertion and deletion at both ends.
    2. Associative Containers: These containers store elements in a way that allows for fast retrieval based on keys. Examples include:
        - set: A collection of unique elements that are sorted by default.
        - map: A collection of key-value pairs where each key is unique and maps to a value.
        - unordered_set: A collection of unique elements that are not sorted and provide faster access than set.
        - unordered_map: A collection of key-value pairs that are not sorted and provide faster access than map.
    3. Container Adapters: These are specialized containers that provide a specific interface for certain data structures. Examples include:
        - stack: A last-in-first-out (LIFO) data structure that allows for fast insertion and deletion at the top.
        - queue: A first-in-first-out (FIFO) data structure that allows for fast insertion at the back and deletion at the front.
        - priority_queue: A data structure that allows for fast retrieval of the largest (or smallest) element.
*/

/*
lets start with vector container in STL.
    A vector is a dynamic array that can resize itself automatically when elements are added or removed. It provides fast access to elements and is efficient for storing and manipulating data. 

    Here is an example of how to use a vector in C++:

    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        // Create a vector of integers
        vector<int> myVector;

        // Add elements to the vector
        myVector.push_back(10);
        myVector.push_back(20);
        myVector.push_back(30);

        // Access elements in the vector
        cout << "Elements in the vector: ";
        for (size_t i = 0; i < myVector.size(); ++i) {
            cout << myVector[i] << " ";
        }
        cout << endl;

        // Remove the last element
        myVector.pop_back();

        // Access elements after removal
        cout << "Elements in the vector after pop_back: ";
        for (size_t i = 0; i < myVector.size(); ++i) {
            cout << myVector[i] << " ";
        }
        cout << endl;

        return 0;
    }

    In this example, we create a vector of integers, add some elements to it, and then access and manipulate those elements using the provided member functions of the vector class.    

*/

/*
lets move on to list container in STL.
    A list is a doubly linked list that allows for efficient insertion and deletion of elements. It provides fast access to elements and is efficient for storing and manipulating data when frequent insertions and deletions are required.

    Here is an example of how to use a list in C++:

    #include <iostream>
    #include <list>
    using namespace std;

    int main() {
        // Create a list of integers
        list<int> myList;

        // Add elements to the list
        myList.push_back(10);
        myList.push_back(20);
        myList.push_back(30);

        // Access elements in the list
        cout << "Elements in the list: ";
        for (int num : myList) {
            cout << num << " ";
        }
        cout << endl;

        // Remove the last element
        myList.pop_back();

        // Access elements after removal
        cout << "Elements in the list after pop_back: ";
        for (int num : myList) {
            cout << num << " ";
        }
        cout << endl;

        return 0;
    }

    In this example, we create a list of integers, add some elements to it, and then access and manipulate those elements using the provided member functions of the list class. The list allows for efficient insertion and deletion of elements compared to a vector, especially when dealing with large datasets.    
*/
