# TruthTableGenerator
Generates truth table for logical expressions in C.

Usage: eval [logical expression]

Outputs the truth table for the expression

# Example:
~ eval "a & b"

a	b	expr

T	T	T
T	F	F
F	T	F
F	F	F

# Syntax:

operands: 
	[A-Za-z]
operators:
	x & y; where x,y, in {0,1}
	x | y; where x,y in {0,1}
	x > y; where x,y in {0,1}
	~x; where x in {0,1}

Ex: x | (x & y)
Ex: x > (x | y)
