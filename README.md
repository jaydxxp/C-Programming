# C-Programming

My C notes and Tracker

CHAPTER:1 
VARIABLES,DATA TYPES & IMPUT,OUTPUT.

1:VARIABLES
-Varible is the one where the data stores.

RULES:
No comma or blankspaces
Can use '_' as a blankspaces.
No integers.

NOTE: varible name should be meaningfull.

DATA TYPES:
Int: can store only numbers in this type of data.
for ex. 22,-22,-6,4,0.
Char: can store only characters in this type of data.(this should always be in single header'')
for ex.'*','@'.
Float: can store decimal values in this type of data.
for ex.3.14,3.0,6.28.

KEYWORDS:The words which can't be used as variable name.(32)
ex.int,float,char,continue,void.

Note: C is a case sensitive language here the lowercase letter should be lower and upper should be upper.

COMMENTS: we can write some imp points in codes with this type of function.(not a part of program)
Single line: //
multiple line: /*(open) or */(close)

OUTPUT:
Cases-
1.to print integers value in output- %d
2.to print character in output- %c
3.to print decimal in output- %f
REFER:OUTPUT.C FILE.

INPUT:
Scanf("") function.
(To write number for some output)
REFER:INPUT.C FILE.

CHAPTER:2
INSTRUCTIONS & OPERATORS.

1.INSTRUCTIONS:

Types of instructions:
1.TYPE DECLARATION INSTRUCTIONS-we have to declare the variable before using it.
ex. int a; 
    int b=a;

2.ARITHMETIC INSTRUCTIONS-the code which contain operator and operand.
operator-addition,substraction,multiply,division,modulur.
opearand-the number or the variable we are adding.
ex: a+b.
in which operator is +.
a,b are operands.
NOTE: 1.single variable in LHS.
      2.the variable in which we have to store should be left and the value should be in right.
      3.for doing power function include #include<math.h> and then pow(b,c) it will be b^c.

MODULAR OPERATOR(%): Gives reminder of the sum.      
      -cannot be use in decimal only integers can be used.

TYPE CONVERSION:
Int op Int = Int
Int op Float = Float
Float op Float = Float
REFER: typeconversion.c file.

OPERATOR PRECENDENCE(priority)
Like in maths we can see BODMAS
same in C we have operator precedence
order is,
*,/,% ---> +,- ---> = (also known as assign operator which assigns.)

Associativity- for same precedence like,4+2-5.
Left To Right.

OPERATORS:

1.Relational operators:
In maths greater than,less than,greathan than or equal to,etc.
In C it comes in relational operators.
==:equal to.
>:greater than.
>=:greater than or equal to.
<:less than.
<=:less than or equal to.
!=:not equal to.
In C lang true false output comes as 1=true & 0=false.
REFER:relationalop.c file.

2.Logical operators:
And,Or,Not.
can be used in grading system.
And(&&)- true true --> true // other false.
Or(||)- false false --> false // other true.
Not(!)- changes the sign --> if false than true // true than false.

OPERATOR PRECEDENCE: 
(PRIORITY)
1-!
2-*,/,%
3-+,-
4-<,<=,>,>=
5-==,!=
6-&&
7-||
8-=

3.Assignment Operator: shorts the length of the code. 
=:puts the value in another variable.
+=:
-=:
*=:
/=:
%=:
FOR THIS TYPE OF OPERATOR REFER ASSIGNOP.C FILE.










    













