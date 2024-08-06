# Bit Manipulation in C

### Introduction
Bit manipulation refers to the act of algorithmically manipulating bits or binary digits, which are the most basic form of data in computing and digital communications. Bit manipulation is essential in low-level programming, optimizing code performance, and handling data efficiently.

### Basics of Bit Manipulation
In C, bit manipulation is performed using bitwise operators. The fundamental bitwise operators are:

+ '&' (AND)
+ '|' (OR)
+ '^' (XOR)
+ '~' (NOT)
+ '<<' (Left Shift)
+ '>>' (Right Shift)

## Bitwise Operators

### AND (&)


The AND operator compares each bit of its operands. If both bits are 1, the resulting bit is 1; otherwise, it's 0.

```

int a = 5;  // 0101 in binary
int b = 3;  // 0011 in binary
int result = a & b;  // 0001 in binary (1 in decimal)
```

### OR (|)


The OR operator compares each bit of its operands. If at least one of the bits is 1, the resulting bit is 1.

```
int a = 5;  // 0101 in binary
int b = 3;  // 0011 in binary
int result = a | b;  // 0111 in binary (7 in decimal)
```

### XOR (^)

The XOR operator compares each bit of its operands. If the bits are different, the resulting bit is 1; otherwise, it's 0.

```
int a = 5;  // 0101 in binary
int b = 3;  // 0011 in binary
int result = a ^ b;  // 0110 in binary (6 in decimal)
```

### NOT (~)

The NOT operator inverts all the bits of its operand.

```
int a = 5;  // 0101 in binary
int result = ~a;  // 1010 in binary (Two's complement representation for -6 in decimal)
```

### Left Shift (<<)
The left shift operator shifts bits to the left by a specified number of positions, filling the rightmost bits with 0s.

```
int a = 5;  // 0101 in binary
int result = a << 1;  // 1010 in binary (10 in decimal)
```

### Right Shift (>>)
The right shift operator shifts bits to the right by a specified number of positions. The leftmost bits are filled based on the sign bit for signed integers (arithmetic shift) or with 0s for unsigned integers (logical shift).

```
int a = 5;  // 0101 in binary
int result = a >> 1;  // 0010 in binary (2 in decimal)
```

### Conclusion

Bit manipulation is a powerful tool in C programming that allows for efficient and low-level data processing. Understanding how to use bitwise operators effectively can lead to optimized code and better performance in various applications.
