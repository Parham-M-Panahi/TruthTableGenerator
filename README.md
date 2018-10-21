# TruthTableGenerator
Generates truth table for logical expressions in C.

Usage: eval [logical expression]

Outputs the truth table for the expression

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

# Progress:

main.c outputs

Truth Table for  and
------------------
p       q        p & q

false   false   false
false   true    false
true    false   false
true    true    true



Truth Table for  or
------------------
p       q        p | q

false   false   false
false   true    true
true    false   true
true    true    true



Truth Table for  not
------------------
p       ~p

false   true
true    false



Truth Table for  imply
------------------
p       q        p->q

false   false   true
false   true    true
true    false   false
true    true    true
