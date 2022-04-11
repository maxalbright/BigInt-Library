# BigInt Library

This program stores signed integers as vectors (i.e. 123 as {3, 2, 1}) to implement integers that are longer than what the standard C++ integer data types allow. 

These integers can be of any base in the range 2 - 36

Likwise, the following operators/math operations are implemented with these integers (of any base) utilizing vector math:
- assignment
- addition assignment
- subtraction assignment
- multiplication assignment
- division assignment 
- modulus assignment
- exponentiation assignment 
- modular exponentiation assignment
- addition
- subtraction
- multiplication
- division
- modulus
- exponentiation
- modular exponentiation
- comparison operators (==, !=, <=, >=, <, >)
    
The operator overloading was done in a way such to improve time complexity and minimize the copying of vectors, but there is certainly still room to minimize time compleixity.
    
