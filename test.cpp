#include<iostream>
using namespace std;

int main(){
    Student s1;

}












































WHAT IS LANGUAGE?
==>A lang is used to communicate.
==>Language is a mode of communication that is used to share ideas, opinions with each other.we need a language that is understandable by both communicators.
==>For general communication,use general lang like hindi, english etc

FAQ:
What is Computer Language?
==>A lang is used to communicate with the computer m/c.
 ==>But why?
==>instead of performing complex operation manually,it is better to interact with computer /m/c....Within fraction of sec we will get answer.Time and human effort will get reduced.






==>But we can communicate with computer in that language, which is understandable to the computer.
i.e machine lang/binary lang.
for that we need to pass intructions to a computer  in a machine/binary code only.

FAQ:
Can any1 pass instructions in binary lang?
==>no not possible.
==>we cannot write applications in binary lang because of its  complex nature.
so for that we have to first learn one programming lang.
==>A programming language is a computer language that is used by programmers (developers) to communicate with computers. It is a set of instructions written in any specific language ( C, C++, Java, Python) to perform a specific task.

==>using programming lang we are writing programs (source code). source code cannot communicate with computer directly because whatever instructions has written it is in english lang.computer cannot understand english. it understand only binary lang.1/0 ...

FAQ:
How to convert english statments to binary lang?
==>Compiler is a predefined program/software responsible for conversion into binary languages.
==>After compilation process, we can  pass input to the computer for processing the output. this is 
the process of communication with the computer.


Summary:
Programming Language-  The programing language enables us to write efficient programs and develop online solutions such as- mobile applications, web applications, and games, etc.

Types of programming language
1. Low-level programming language
Low-level language is machine-dependent (0s and 1s) programming language. The processor runs low- level programs directly without the need of a compiler or interpreter, so the programs written in low-level language can be run very fast.


2. High-level programming language (HLL) -It is designed for developing user-friendly software programs and websites.
This programming language requires a compiler or interpreter to translate the program into machine language (execute the program).
Example: Python, Java, JavaScript, PHP, C#, C,C++, etc.
A high-level language is further divided into two parts -
	a)Procedural Oriented programming language
	b)Object-Oriented Programming language
 
FAQ:
What is a compiler and interpreter?
Compiler: A compiler translates code from a high-level programming language (like Python, JavaScript ) into machine code before the program runs. The work of a Compiler is to transform the codes written in the programming language into machine code (format of 0s and 1s) so that computers can understand.
C, C++, C#, etc are programming languages that are compiler-based.

Interpreter: An interpreter translates code written in a high-level programming language into machine code line-by-line as the code runs.It translates only one statement of the program at a time.
Python, Ruby, Perl, MATLAB, etc are programming languages that are interpreter-based.

==>A compiler is similar to an interpreter. However, a compiler is faster than an interpreter and translates the entire file at once. An interpreter reads the source program line by line and, therefore, is a slower process. 

FAQ:
Difference between Compiler and Interpreter
Compiler													Interpreter
1)Execution of the program takes place only after the        Execution of the program happens after every line is checked or whole program is compiled.							      evaluated.

2)Compiled codes run faster than Interpreter.			      Interpreted codes run slower than Compiler.

3)It does not require source code for later execution.	      It requires source code for later execution.

4)The compiler saves the Machine Language in form of     The Interpreter does not save the Machine Language.
Machine Code on disks.

==================================================================================================
FAQ:
Using computer lang what kinds of applications we can developed?
1: Standalone application/Desktop application
==>application which provides services to a single user/client is called as standalone application
==>application that is installed in our computer. browsing from internet requires to install chrome, VLC player.
==>Doesnot requires need for a server or internet connection.
ex-->AntiVirus,Calculator,notepad,Microsoft word,mobile -app,gaming,all programs which starts with main()
C lang is used in standalone application/desktop application






2: WebApplication/Client-Server Application
==>Application executes on server provide services to the multiple clients concurrently is called as webapplication
==>Without installing any software,still we are working is webapplication.it is not necessary to install gmail/facebook in our computer. we just need browser s/w to browse any application that is running in server.
ex-->facebook,gmail,ticket reservation







Difference between Standalone Application and WebApplication
 Standalone Application												WebApplication
1)The standalone user’s applications can run on a 				The client-Server application can run on any machine which         single local machine.										        has an internet 																			connection.

2)To run the standalone application, a network or internet        To run the Client-Server application, a network or internet 	connection is not required.								connection is required.

3)No scalability.												Efficient in scalability and ability to provide shared 																	resources to multiple clients.



===============================================================================
Platform Dependency...
==>Platform dependent  refers to applications that run under only one operating system .
==>On which platform we compile the application,on the same platform only we can run the application
==>compiler is working for specific os i.e window compiler is working for window os.
==>.
========================================================================================================


CONVERSION OF .C TO.EXE

C sourcefile----->	compiler---->object file--->linker--->executable file
demo.c			                  demo.obj			            demo.exe
	COMPILATION PHASE 						   EXECUTION/RUNNING PHASE 

Source file-->The file in which source code(program) is written.
demo.c
demo.c.c
demo.c-->name of the file 
.c-->extension
123demo.c //valid

Object File
source code is provided to language translator like compiler which converts it into m/c understandable code which is called m/c code or object code.
  object file is in binary format(0,1 format)
object file is in machine level lang/not in human readble format 
  compilation process-->the process of converting error free source code into object code

Linker
==>linker helps in executing the object file.The output of the linker is the executable file.
==>all the programs written in C use library functions. 
==>These library functions are pre-compiled, and the object code of these library files is stored with '.lib' extension. 
==>The main working of the linker is to combine the object code of library files with the object code of our program. 

============================================================================
======================================================================================












IDENTIFIER

Identifier is a name given to the entity/container(variable,array,string,function,structure) .
C identifiers represent the name in the C program, for example, variables, functions, arrays, structures, unions, labels, etc.
Identifiers are userdefined words.

An identifier can be composed of letters such as uppercase, lowercase letters, underscore, digits, but the starting letter should be either an alphabet or an underscore.

Rules for constructing C identifiers

1)The first character of an identifier should be either an alphabet or an underscore, and then it can be followed by any of the character, digit, or underscore.
2)It should not begin with any numerical digit.
3)In identifiers, both uppercase and lowercase letters are distinct. Therefore, we can say that identifiers are case sensitive.
4)Commas or blank spaces cannot be specified within an identifier.
5)Keywords cannot be represented as an identifier.
6)The length of the identifiers should not be more than 31 characters.
7)Identifiers should be written in such a way that it is meaningful, short, and easy to read.
==============================================================================

VARIABLE
==>For every computer application we need to store information at a particular location. 
==>every m/c is having memory locations,every memory location is identified by an address(+ve integer value)
==>A name given to the memory location in which data of different types can be stored and retrieves it when required is called as variable.

syntax:
data_type variable_name = value;    // defining single variable
            or
data_type variable_name1, variable_name2;    // defining multiple variable

There are 3 aspects of defining a variable:
Variable Declaration
Variable Initialization

1. C Variable Declaration
==>Variable declaration in C tells the compiler about the existence of the variable with the given name and data type.
==>At declaration,compiler automatically allocates the memory for it.

2. C Variable Initialization
Initialization of a variable is the process where the user assigns some meaningful value to the variable
A  variable will contain some random garbage value till it is not initialized.

int x;//declaration
x=10;//initilization
int x=20;//declaration+initilization
====================================================================================
Rules for Naming Variables in C
You can assign any name to the variable as long as it follows the following rules:

A variable name must only contain alphabets, digits, and underscore.
A variable name must start with an alphabet or an underscore only. It cannot start with a digit.
No whitespace is allowed within the variable name.
A variable name must not be any reserved word or keyword.

int BREAK;//valid
int Break;//valid
int break;//invalid
int break1=1,2;//not valid

==============================================================================================

=======================================================================================
KEYWORDS
==>keywords is a predefined words whose meaning and functionality is already predefine and
 as a user we cannot change any one of those...
32 keywords
ex:break,for,while-----
==>keywords always use in small letters
BREAK//error->it is no longer a keyword
==>we cannot use keywords as an identifiers.
=======================================================================
Keyword														Identifier
Keyword is a pre-defined word.						The identifier is a user-defined word
It must be used in a lowercase letter.				It can be written in both lowercase and uppercase letters.
Its meaning is pre-defined in the c compiler.			Its meaning is not defined in the c compiler.

=================================================================================







Data Types in C
A data type specifies the type of data that a variable can store such as integer, floating, character, etc.
The data types in C can be classified as follows

Primitive Data Types::Primitive data types are the most basic data types that are used for representing simple values such as integers, float, characters, etc.
User Defined Data Types	::The user-defined data types are defined by the user himself.ex:Array,pointer

============================================================================================

DATATYPES    			KEYWORD    		 16bit      		 32/64bit     		format specifier
INTEGER			   	 int	     		2bytes       		4bytes    		 %d
-32768 to 32767

FLOAT				float	    		4 bytes	  		4bytes    		%f

DOUBLE				double        		8bytes	  		8bytes    		%lf
(long float)

CHARACTER			char         		1byte         	         1        		 %c
'A'-'Z','a'-'z',
'0'--'9','#'
256 characters

long -->long(keyword) 32/64(8 bytes)  like phno
(long int)


1--->int
'1'-->char
1.0--->double every decimal number is by default double
1.0f-->float
"1"-->string



=======================================================================================
Format Specifier:
==>The format string determines the format of the input and output.
==>format specifier tells which type of data to be accepted from user or display on console

============================================================================
============================================================================
C Operators
An operator is simply a symbol that is used to perform operations on operands.

Precedence of Operators in C
Operator precedence determines which operation is performed first in an expression with more than one operator with different precedence.

Operator Associativity
Operator associativity is used when two operators of the same precedence appear in an expression. Associativity can be either from Left to Right or Right to Left. 

Category				Operator						Associativity
Postfix					() [] -> . ++ - -					Left to right
Unary					- ++ - -  sizeof					Right to left
Multiplicative			* / %							Left to right
Additive				+ -								Left to right
Logical 					AND&&							Left to right
Logical 					OR	||							Left to right

There are 3 types of operators depending on no of operands
Unary operators--> those operators which takes only 1 operand

a)unary minus operator(-) is used for negation.
The minus operator ( – ) changes the sign of its argument. A positive number becomes negative, and a negative number becomes positive.

 
int a=5;
a = -a;
a =-5

int a=-5;
a=-a;
a=-(-5)
a=5
=====================================================================================
b)increment operator(++)
The increment operator ( ++ ) is used to increment the value of the variable by 1. The increment can be done in two ways:

int a=10;
a++;//a=a+1 //a=10+1 //a=11
++a;//a=a+1//a=11+1 //a=12








Increment operator is divided into 2 types
1)pre increment operator(increment,assign)
int a=10;
int b;
b=++a;
//a=11
//b=11

2)post increment operator(assign,increment)
int a=10;
int b;
b=a++;
//a=11
//b=10

c)decrement operator(--)
It is used to decrement the value of the variable by 1. The decrement can be done in two ways:

int a=10;
a--;//a=a-1 //a=10-1 //a=9
--a;//a=a-1//a=9-1 //a=8

decrement operator is divided into 2 types
1)pre decrement operator(decrement,assign)
int a=10;
int b;
b=--a;
//a=9
//b=9

2)post decrement operator(assign,decrement)
int a=10;
int b;
b=a--;
//a=9
//b=10

d) NOT ( ! )
The logical NOT operator ( ! ) is used to reverse the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false and viceversa.

Example:
   If x is true, then !x is false
   If x is false, then !x is true

int main() 
{
    int x=!0;
    printf("%d",x);
}

e)sizeof()
This operator returns the size of its operand, in bytes.
its a keyword

int a=10;
sizeof(a)--->4 bytes

sizeof(double)-->8 bytes

char ch='x';
sizeof(ch)-->1 byte

sizeof(100)-->4 bytes

sizeof(1.1)--->8 bytes
every decimal number is by default double 

sizeof(1.1f)--->4 bytes
=======================================================================

2)binary operators--->requires 2 operands
binary operators is divided into 4 types

1)Arithmetic operators(+,-,/,*,%)

Modulus(%)
Calculate the remainder when the first operand is divided by the second operand.	
x % y

10/2-->5   / gives quotient part after division
10%2-->0   % gives remainder part after division
---------------------------------------------------------------------------------------------------------------------

 The % modulus operator cannot be applied to floating-point numbers i.e. float or double. If you try to use the modulo operator with floating-point constants or variables, the compiler will produce an error.
10.0f %2-->error
-----------------------------------------------------------------------------------------------------------------------------
% gives numerator as result when numerator is less than denominator
2%10-->2
100%110-->100
--------------------------------------------------------------------------------------------------------

2)Relational operator      >,<,<=,>=,==(comparison),!=(not=)
==>In C, relational operators are the symbols that are used for comparison between two values .
==>The result that we get after the relational operation is a boolean value, that tells whether the comparison is true or false.
==> Relational operators are mainly used in conditional statements and loops to check the conditions in C programming.
==>Relational operators return 1 if expression is true and return 0 if expression is false

nonzero--->other than 0--->true-->1
-5-->other than 0--->true--->1
zero-->0->false-->0

int x=5>2;
x=1

int a=10,b=2;
int c=   a==b;
c=0

3)Assignment operator(=)-->Assignment operators are used for assigning value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. The value on the right side must be of the same data-type of the variable on the left side
int a = 10;//initilization

10=a;//not valid

c=a+b;//valid

a+b=c;//not valid(expression cannot be used on lhs of assignment operator)


4)Logical operators(&&(AND),||(OR) !(NOT)
 Logical Operators returns either 0 or 1, it depends on whether the expression result is true or false.

We have 3 logical operators in the C language:

Logical AND ( && )
Logical OR ( || )
Logical NOT ( ! )

Types of Logical Operators
1. Logical AND Operator ( && )
If both operands are non zero then the condition becomes true(1). Otherwise, the result has a value of 0(false). 
2. Logical OR Operator ( || )
The condition becomes true if any one of them is non-zero. Otherwise, it returns false i.e., 0 as the value.
3. Logical NOT Operator ( ! )
If the condition is true then the logical NOT operator will make it false and vice-versa. 
	
		&&		||
0 0		0		0
0 1		0		1
1 0 		0		1
1 1		1		1


(1&&5) || (1||2)
1 || 1
1

==================================================================
Constant variable
==>The variable declare with const keyword is called as constant variable
==>value of constant variable cannot be changed
const int a=10;
a++; // a=a+1 //a=10+1 //a=11---->error
a=a+1;

const int b=20;
int c=b+2;



==>constant variable should be initialized at the time of declaration
int a;
a=10;//allowed

const int a;
a=10;//not allowed

const int a=10;//allowed

==>we can use the value of a constant variable but we cannot change the value.

int a=10;
a++;//a=a+1 //a=10+1 //a=11

const int a=10;
a++;//error //a=a+1 // a=10+1 //a=11 //not possible

const int a=20;
int b=a+1;//allowed

value of constant variable can be used on rhs of assignment operator
constant variable cannot be used on LHS of asssignment operator


const int a=30;
int b=a*2;//no error
a++;//error a=a+1 
a*2;//no error
a=a*2;//error
------------------------------------------------------------------------------------------------------------------------






scanf()-->to accept values/inputs from the user
printf()-->to display values/output on the console/output screen

Components of a C Program:
==>A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files. 
==>All lines that start with # are processed by a preprocessor which is a program invoked by the compiler. 

main() is the entry point of a C program and the execution  begins with the first line of the main().
The value returned by the main indicates the status of program termination. The returned value may be used by an operating system to know the termination status of your program.

#include<stdio.h>


int main()
{
	int radius;
	float area;
	printf("enter radius");
	scanf("%d",&radius);
	area=3.142f * radius * radius;
	printf("area of circle=%f",area);
}
-----------------------------------------------------------------------------------------------------
Typecasting

==>Conversion of one datatype into another datatype is called as typecasting
==>The type conversion is only performed to those data types where conversion is possible. 
==>Type conversion is performed by a compiler.
==>In type conversion, the destination data type can’t be smaller than the source data type.
char -> short int -> int -> float -> double -> 

int/int-->int    		5/2-->2
int/float-->float 		5/2.0f-->2.5
float/int-->float 		5.0f/2-->2.5
float/float-->float 	5.0f/2.0f-->2.5

There are 2 types of typecasting
1)implicit typecasting-->typecasting done by compiler implicitly
2)explicit typecasting-->typecasting done by programmer explicitly

#include<stdio.h>
int main()
{
	int a=5,b=2;
	int c = a/b;
	printf("value of c=%d",c);
}

#include<stdio.h>
int main()
{
	int a=5,b=2;
	float c = a/b;
	float c= 5/2;
	printf("value of c=%f",c);
}

with implicit typecasting,value is getting truncated
we are not getting exact value thats why use explicit typecasting for getting exact  answer

Explicit Typecasting
Here the user can typecast the result to make it of a particular data type. The syntax in C Programming:
(type) expression
Type indicated the data type to which the final result is converted. 

#include<stdio.h>
int main()
{
	int a=5,b=2;
	float c = (float)a/b;
	printf("value of c=%f",c);
}

// C program to demonstrate explicit type casting
#include<stdio.h>
  int main()
{
    double x = 1.2;
       // Explicit conversion from double to int
    int sum = (int)x + 1;
      printf("sum = %d", sum);   
}

#include <stdio.h>
 int main() {
  float a = 1.5;
  int b = (int)a;
 
  printf("a = %f\n", a);
  printf("b = %d\n", b);
}

wap to accept 5 marks(int) of a student from the user and calculate 
average(float) of that student
#include<stdio.h>
int main()
{
	int a, b, c, d, e, sum;
	float avg;
	printf("enter marks");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	sum = a + b + c + d + e;
	avg = sum / 5;
	printf("Average is = %f", avg);
	
}

==========================================================

//width specification-->restrict the compiler in accepting no of inputs from the user
//scanf("%wd",&variablename);

#include<stdio.h>
int main()
{
	int num,rem1,rem2,rem3,sum;
	printf("accept 3 digit number\n");
	scanf("%3d",&num);
	printf("num=%d\n",num);
	rem1=num%10;
	num=num/10;
	rem2=num%10;
	num=num/10;
	rem3=num%10;
	num=num/10;
	sum=rem1+rem2+rem3;
	printf("sum=%d",sum);
}
========================================================================
What is Character Arithmetic?
==>Character arithmetic is used to implement arithmetic operations like addition, subtraction, multiplication, and division on characters in C language. 
In character arithmetic character converts into an integer value to perform the task. For this ASCII value is used.

0 to 255 Ascii  value range (ASCII(American standard code for information interchange)
 VALUES-->integer constant) i.e 256 characters 

'A'-->65
'B'-->66
' '-->32
'0'-->48
'1'-->49
'a'-->97

int main()
{
    char a = 'A';
    char b = 'B';
 
    printf("a = %c\n", a);
    printf("b = %c\n", b);
    printf("a + b = %c\n", a + b);
}

#include<stdio.h>
int main()
{
	char ch = 'A';
	printf("ASCII VALUE OF %c is %d", ch, ch);

}

#include<stdio.h>
int main()
{
	char ch = '0';
	printf("ASCII VALUE OF %c is %d", ch, ch);

}
#include<stdio.h>
int main()
{
	char ch = ' ';
	printf("ASCII VALUE OF %c is %d", ch, ch);

}

#include<stdio.h>
int main()
{
	char ch = 'A';
	printf("ASCII VALUE OF %c is %d",ch+1,ch+1);

}

}
=========================================================================================
Compile time vs Runtime
 Compile-time is the time at which the source code is converted into an executable code while the run time is the time at which the executable code is started running. Both the compile-time and runtime refer to different types of error.

Compile-time errors
Compile-time errors are the errors that occurred when we write the wrong syntax and symantic. 

The compile-time errors can be:
Syntax errors
Semantic errors

Syntax errors
When the programmer does not follow the syntax of any programming language, then the compiler will throw the syntax error.

For example,
int a, b:

Semantic errors
The semantic errors exist when the statements are not meaningful to the compiler and order of structure is not proper .

For example,

a+b=c;

The above statement throws a compile-time errors. In the above statement, we are assigning the value of 'c' to the summation of 'a' and 'b' which is not possible in C programming language as it can contain only one variable on the left of the assignment operator while right of the assignment operator can contain more than one variable.

The above statement can be re-written as:

c=a+b;
=====================================================================================
Runtime errors
The runtime errors are the errors that occur during the execution . The examples of runtime errors are division by zero, etc. These errors are not easy to detect as the compiler does not point to these errors.
such as division by zero, determining the square root of a negative number.

#include <stdio.h>  
int main()  
{  
    int a=20;  
    int b=a/0; // division by zero  
    printf("The value of b is : %d",b):  
    return 0;  
}  
=================================================================================================
RAM(PRIMARY STORAGE)
MEMORY IS DIVIDED INTO THREE SECTION

1)STACK SECTION
2)HEAP SECTION
3)DATA SECTION

Types of Variables in C
LOCAL VARIABLE
A variable that is declared inside the function or block is called a local variable.
1)local variable cannot be declared globally 
2)initial value is garbage
3)scope and lifetime is within the block/within the function
4)storage is stack section

==>lifetime means how long the variable exists in the memory
==>scope means how long the variable can be accessed
in local variable lifetime depends on scope of variable


==>if scopes are different then two variables may have same name,but there addresses
will be different
#include<stdio.h>
int main()
{
	int a=10;
	 printf("%d",a);
	 {
		 int a=100;
		 printf("%d",a);
	 }
	 printf("%d",a);
}

GLOBAL VARIABLE

A variable that is declared outside the function or block is called a global variable.
initial value is 0
storage is data section
lifetime is through out the program
scope-->through out the program

int value=20;//global variable  
int main()
{
int value=10;//local variable 
printf("%d", a);

}
local variable is having high priority over global variable 
}  
==>Two variables can have same if scopes of two variables are different.
==>no two variables can share memory location even if there names are same





=====================================================


Decision making statements
==>The if-else statement in C is used to perform the operations based on some specific condition. The operations specified in if block are executed if and only if the given condition is true.

==>whenever some statements will get executed depending on the condition, that condition may be  true/false,such statements is called as decision making statements

There are the following variants of if statement in C language.
If statement
If-else statement
If else-if ladder
Nested if

If Statement
The if statement is used to check some given condition and perform some operations depending upon the correctness of that condition. It is mostly used in the scenario where we need to perform the different operations for the different conditions. 

if(condition/expression)//AE,RE,LE,CONSTANT,character
{	
	//block of statements;
}

if the output of the expression is nonzero that means expression is true,if expression is true then
 the statements inside if will get executed otherwise it will get skipped

if(-5)//1,10,2+2,5<10,1&&1,'A'
{
		printf("hello");
}
output-->hello

if(0)//7-7,0&&0,7>10
{
		printf("hello");
}
//output--->no output

Program to find the largest number of the three.
#include <stdio.h>  
int main()  
{  
    int a, b, c;   
     printf("Enter three numbers?");  
    scanf("%d %d %d",&a,&b,&c);  
    if(a>b && a>c)  
    {  
        printf("%d is largest",a);  
    }  
    if(b>a  && b > c)  
    {  
        printf("%d is largest",b);  
    }  
    if(c>a && c>b)  
    {  
        printf("%d is largest",c);  
    }  
    if(a == b && a == c)   
    {  
        printf("All are equal");   
    }  
}  
------------------------------------------------------------------------------------------------------------
If-else Statement
The if-else statement is an extension to the if statement using which, we can perform two different operations, i.e., one is for the correctness of that condition, and the other is for the incorrectness of the condition. Here, we must notice that if and else block cannot be executed simiulteneously. 
***if block can exist without else(if can be standlone)
**there should not be any statements between if and else
**else cannot be standalone,it always requires if block

syntax:

if(expression/condition)
{
	//block of statements;
}
else
{
	//block of statements;
}
---------------------------------
#include<stdio.h>
int main()
{
	if(0)
	printf("hello");
	printf("hi");
}
//hi
=============================================
#include<stdio.h>
int main()
{
	if(1)
	printf("hello");
	printf("hi");
}
//hello hi
=================================================
==============================================
#include <stdio.h>
void main()
{
	int marks;
	printf("enter agg marks\n");
	scanf("%d",&marks);
	if(marks>=60)
	printf("you are eligible");
	printf("good bye");
}
============================================================
wap to accept 1 number and print whether the number is even or odd

int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);//6
	if(num%2==0) // if(num%2!=1) // if(!(num%2==1))
	printf("even");
	else
	printf("odd");

}

---------------------------------------------------------

#include<stdio.h>
int main()
{
	int num;
	printf("accept number\n");
	scanf("%d",&num);
	if(num>=1 && num<=100)
	printf("in range");
	else	
	printf("not in range");
}
=================================================================
'0'-->48
'1'-->49
'9'-->57





#include<stdio.h>
int main()
{
	char num;
	printf("accept character\n");
	scanf("%c",&num);//'0'
	if(num>=48  && num<=57)
	printf("digit");
	else	
	printf("may be charcater/symbol");
}
==============================================================

#include<stdio.h>
int main()
{
	char ch;
	printf("accept character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("vowel");
	else	
	printf("not vowel");
}
=============================================================
If else-if ladder Statement
The if-else-if ladder statement is an extension to the if-else statement. It is used in the scenario where there are multiple cases to be performed for different conditions. In if-else-if ladder statement, if a condition is true then the statements defined in the if block will be executed, otherwise if some other condition is true then the statements defined in the else-if block will be executed, at the last if none of the condition is true then the statements defined in the else block will be executed.

syntax:
if(condition1){  
//code to be executed if condition1 is true  
}else if(condition2){  
//code to be executed if condition2 is true  
}  
else if(condition3){  
//code to be executed if condition3 is true  
}  
...  
else{  
//code to be executed if all the conditions are false  
}  

----------------------------------------------------------------
#include <stdio.h>  
int main()  
{  
    int marks;   
    printf("Enter your marks?");  
    scanf("%d",&marks);   
    if(marks > 85 && marks <= 100)  
    {  
        printf("Congrats ! you scored grade A ...");   
    }  
    else if (marks > 60 && marks <= 85)   
    {  
        printf("You scored grade B + ...");  
    }  
    else if (marks > 40 && marks <= 60)   
    {  
        printf("You scored grade B ...");  
    }  
    else if (marks > 30 && marks <= 40)   
    {  
        printf("You scored grade C ...");   
    }  
    else   
    {  
        printf("Sorry you are fail ...");   
    }  
}  

ladder of if 
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("%d is greater than %d ",a,b);
	if(a==b)
	printf("%d and %d are equal",a,b);
	else
	printf("%d is less than %d ",a,b);
		 
}
-----------------------------------------------------------------------------
Conditional Operator in C
The conditional operator is also known as a ternary operator. The conditional statements are the decision-making statements which depends upon the output of the expression. It is represented by two symbols, i.e., '?' and ':'

As conditional operator works on three operands, so it is also known as the ternary operator.

The behavior of the conditional operator is similar to the 'if-else' statement as 'if-else' statement is also a decision-making statement.

Syntax of a conditional operator
Expression1? expression2: expression3;  

In the above syntax, the expression1 is a Boolean condition that can be either true or false value.
If the expression1 results into a true value, then the expression2 will execute.
If the expression1 returns false value then the expression3 will execute.


#include<stdio.h>
int main()
{
	int a, b;
	printf("enter value of a and b\n");
	scanf("%d%d", &a, &b);
	int max = (a > b) ? 		a			:					b;
	printf("maximum no =%d", max);

} 

#include<stdio.h>
int main()
{
	int a, b;
	printf("enter value of a and b\n");
	scanf("%d%d", &a, &b);//50 20
	(a > b) ? printf("%d is greater",a) : printf("%d is greater",b);

}


#include<stdio.h>
int main()
{
	int a=5, b=2;
	int c = a != b ? a++        :            b++;
	printf("%d %d %d", a, b, c);

}


----------------------------------------------------------------------------------------------------------------------------------------------

nested if else--->one if-else is a part of another if-else is called as nested if-else.
if(condition1)
{
	if(condition2)
	{
	}
	else
	{
	}
}
else
{
	-=============
}

#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
		if(a==b)
		printf("%d and %d are equal",a,b);
		else
		printf("%d is greater than %d ",a,b);

	}
	else
	printf("%d is less than %d ",a,b);
		 
}
  
---------------------------------------------------------------------------------------------



switch statements/selection statements

Switch case statement evaluates a given expression and based on the evaluated value(matching a certain condition), it executes the statements associated with it. Basically, it is used to perform different actions based on different conditions(cases). 


switch(expression){    
case value1:    
 //code to be executed;    
 break;  //optional  
case value2:    
 //code to be executed;    
 break;  //optional  
......    
    
default:     
 code to be executed if all cases are not matched;    
}    
Rules for switch statement in C language
The switch expression must be of an integer or character type.
The case value must be an integer or character constant.
The case value can be used only inside the switch statement.
The break statement in switch case is not compulsory. It is optional. If there is no break statement found in the case, all the cases will be executed present after the matched case. It is known as fall through the state of C switch statement.

	if(6+6)//condition-->nonzero(12)-->TRUE
	{
		printf("hi");
	}
	//hi
	if(6-6)//condition-->zero(0)-->false
	{
		printf("hi");
	}
	//no output

	switch(6+6)//exact value-->12
	{
	case 13:printf("hi");
	case 12:printf("bye");
	}
	//bye
	switch(6-6)//exact value-->0
	{
	case 13:printf("hi");
	case 0:printf("bye");
	}
	//bye


==>switch expression cannot contain float and double constant and 
variable name and string
==>case value can not contain float and double constant and variable
 and string
==>case value should not be repeated

Valid Switch		Invalid Switch		Valid Case		Invalid Case
switch(x)		switch(1.1f)			case 3;			case 2.5;
switch(x>y)		switch(x+2.5)		case 'a';			case x;
switch(a+b-2)						case 1+2;		case x+2;
									case 'x'>'y';		case 1,2,3;
													case "hello"
Functioning of switch case statement
First, the expression specified in the switch statement is evaluated. This value is then matched one by one with the constant values given in the different cases. If a match is found, then all the statements specified in that case are executed along with the all the cases present after that case including the default statement when no break is specified. No two cases can have similar values. If the matched case contains a break statement, then all the cases present after that will be skipped, and the control comes out of the switch. Otherwise, all the cases following the matched case will be executed.

Break Keyword:
The "break" keyword is used within the code block of each case to terminate the switch statement prematurely. When the program encounters a "break" statement inside a case block, it immediately exits the switch statement, preventing the execution of subsequent case blocks. 


Default Keyword:
When none of the case constants match the evaluated expression, it operates as a catch-all case. If no matching case exists and a "default" case exists, the code block associated with the "default" case is run


#include <stdio.h>
int main()
{
	switch (6 + 2)
	{
	case 7:printf("hi");
	case 8:printf("bye");
	}
}
//bye
==================================================
#include <stdio.h>
int main()
{
	switch (6 + 2)
	{
	case 7:printf("hi");
	case 8:printf("bye");
	
	case 20:printf("goodbye");
	
	case 22:printf("hello");

	}
}
//bye goodbye
-========================================================

#include <stdio.h>
int main()
{
	switch (6 >2)
	{
	case 0:printf("hi");
	case 1:printf("bye");
	}
	
}
//bye
====================================================
#include <stdio.h>
int main()
{
	switch (6 >2)
	{
	case 1:printf("hi");
		break;//takes the control outside the block
	case 0:printf("bye");
	}

}
//hi
================================================

#include <stdio.h>
int main()
{
	switch (6 >2)
	{
	case 1:printf("hi");
	case 0:printf("bye");
	}

}
//hi bye
=============================================


#include <stdio.h>
int main()
{
	switch (1&&1)
	{
	case 1:printf("hi");
		break;//takes the control outside the block
	case 0:printf("bye");
	}
}
//hi
==========================================

#include <stdio.h>
int main()
{
	switch (5)
	{
	case 5:printf("hi");
		
	case 1:printf("bye");
	
	case 2:printf("goodbye");
	}

	
}
//hi bye goodbye
=============================================
#include <stdio.h>
int main()
{
	switch ('z')
	{
	case 'z':printf("hi");
	break;	
	case 'Z':printf("bye");
	}
}
//hi
==============================================

#include <stdio.h>
int main()
{
	char a = 'A';
	switch (a)
	{
	case 65:printf("hi");
	
	case 0:printf("bye");

	}
}
//hi bye
==========================================
#include <stdio.h>
int main()
{
	char a = 'A';
	switch (a)
	{
	case 66:printf("hi");
	case 0:printf("bye");
	}

}
o/p-->no output
==========================================

#include <stdio.h>
int main()
{
	char a = 'A';
	switch (a)
	{
	default:printf("invalid case value");
	case 66:printf("hi");
	case 0:printf("bye");
	

	}
}




//invalid case value
==========================================
#include <stdio.h>
int main()
{
	
	switch (1)
	{
	case 66:printf("hi");
	case 1&&1:printf("bye");
	default:printf("invalid case value");

	}
}







//bye invalid case value
===========================================
#include <stdio.h>
int main()
{
	
	switch (1)
	{
	case 66:printf("hi");
	case 6>1:printf("bye");
	default:printf("invalid case value");

	}
}






o/p-->bye invalid case value

=========================================

#include <stdio.h>
int main()
{
	
	switch (1)
	{
	case 66:printf("hi");
	case 'B':printf("bye");
		break;
	default:printf("invalid case value");

	}
}




//error
=======================================
#include <stdio.h>
int main()
{
	float a=1;
	switch (a)
	{
	case 1:printf("hi");
	case 'b':printf("bye");
		break;
	default:printf("invalid case value");

	}
}
o/p-->//error
==========================================================
	
#include<stdio.h>
int main()
{
	int a,b,res,ch;
	printf("MENU\n");
	printf("1.ADD\n2.SUB\n3.DIV\n4.MULT\n");
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	
	case 1:res=a+b;
		
	case 4/2:res=a-b;
		
	case 3:res=a/b;
		
	case 4:res=a*b;
		
	}
	printf("result=%d",res);
	
}
 ==>We can use a range of numbers instead of a single number or character in the case statement. Range in switch case can be useful when we want to run the same set of statements for a range of numbers so that we do not have to write cases separately for each value.

You can specify a range of consecutive values in a single case label.
Syntax
The syntax for using range case is:
case low ... high:

It can be used for a range of ASCII character codes like this:
case 'A' ... 'Z':

You need to Write spaces around the ellipses ( … ). For example, write this:
// Correct  -   case 1 ... 5: 
// Wrong -    case 1...5: 

#include <stdio.h>
int main()
{
    int arr[] = { 1, 5, 15, 20 };
 
    for (int i = 0; i < 4; i++) {
        switch (arr[i]) {
            // range 1 to 6
        case 1 ... 6:
            printf("%d in range 1 to 6\n", arr[i]);
            break;
            // range 19 to 20
        case 19 ... 20:
            printf("%d in range 19 to 20\n", arr[i]);
            break;
        default:
            printf("%d not in range\n", arr[i]);
            break;
        }
    }
    return 0;
}

---------------------------------------------------------------------
LOOPS::
when a certain task/statements is need to be repeated a number of times,loop should be used.
The looping can be defined as repeating the same process multiple times until a specific condition satisfies.

ex: if we need to print the first 10 natural numbers then, instead of using the printf statement 10 times, we can print inside a loop which runs up to 10 iterations.

ADV OF LOOPS
1)Loops in programming are used to repeat a block of code until the specified condition is meet. A loop statement allows programmers to execute a statement or group of statements multiple times without repetition of code.
2)provides reusability

There are 2 types of loops

a)pretested loop/entry control loop

First condition is checked,if condition is true then statements inside loop will get execute,if condition is false then statements inside loop will not get execute
ex:for,while

b)post-tested loop/exit control loop
First the statements inside loop will get execute atleast once,then the condition will get check,if condition is true then the statents inside loop will get execute otherwise it will get skipped.
ex:do-while loop
=========================================================================================
for loop in C
The for loop is used in the case where we need to execute some part of the code until the given condition is satisfied. The for loop is also called as a per-tested loop. It is better to use for loop if the number of iteration is known in advance.

The syntax of for loop in c language is given below:

for(initialization;condition;incr/decr){  
//code to be executed  
}  
when no of iterations is already known to the user at that time it is feasible/approachable to use for loop
iteration-->how many times the control will enter inside loop

#include<stdio.h>
int main()
{
	int a;
	for (a = 1; a <= 10; a++)
	{
		printf("%d\t", a);//1 2 3 4 5 ----10
	}
}
==============================================

#include<stdio.h>
int main()
{
	int a=1;
	for (; a <= 10; )
	{
		printf("%d\t", a);
		a++;
	}
}
=====================================================
#include<stdio.h>
int main()
{
	int a;
	for (a = 1; a <= 20; a++)
	{
		if(a%2==0)//if(a%2!=1)  // if(!(a%2==1))
		printf("%d\t", a);
	}
}
==============================================================
#include<stdio.h>
int main()
{
	int a;
	for (a = 65; a <= 90; a++)
	{
		
		printf("%c\t", a);
	}
}
==========================================================
#include<stdio.h>
int main()
{
	char a;
	for (a = 'A'; a <= 'Z'; a++)
	{
		
		printf("%c\t", a);
	}
}
===========================================
#include<stdio.h>
int main()
{
	int a;
	for (a=65;a<=90;a=a+2)
	{
		
		printf("%c\t",a);
	 } 
}
=====================================================
5*1=5
5*2=10

5*10=50










#include<stdio.h>
int main()
{
	int num,i;
	printf("enter number\n");
	scanf("%d", &num);//5
	for (i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
	
	
}

//c.w-->
num-->5
5*2=10
5*4=20
5*6=30
5*8=40
5*10=50

==========================================================

==========================================================
1+2+3+4+-----------10 =====>55
#include<stdio.h>
int main()
{
	int i, sum=0;
	for (i = 1; i <= 10; i++)
	{
		sum =sum + i;
	}
	printf("summation=%d", sum);
	
	
}
======================================================
1*2*3*4-------------10=======>
#include<stdio.h>
int main()
{
	int i, mult=1;
	for (i = 1; i <= 10; i++)
	{
		mult =mult * i;
	}
	printf("multiplication=%d", mult);
	
	
}
========================================================
3!--->1*2*3
4!-->1*2*3*4
num!-->1*2*3----num

num=6
for(i=1;i<=num;i++)
{
		fact=1*2*3*4*5*6;

}


#include<stdio.h>
int main()
{
	int num, i, fact = 1;
	printf("enter number\n");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		fact = fact * i;
	}

	printf("factorial=%d", fact);
}


===========================================================
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		break;//takes the control outside the block/loop
		printf("%d\t", i);
	}
}
=======================================================================
#include<stdio.h>
int main()
{
	int num, i;
	printf("enter number\n");
	scanf("%d", &num);//5
	for (i = 1; i <= 10; i++)
	{
		if (i == num)
			break;
		printf("%d * %d = %d\n", num, i, num * i);
	}

}
======================================================================
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		continue;//skips the iteration that satisfies the condition and 
		//control jumps to the next iteration
		printf("%d\t", i);
	}
}

//wap to print even numbers between 1 to 20 using continue keyword

#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		if (i%2==1)
			continue;
		printf("%d\t", i);
	}
}

#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1, j = 5 ; i <= 5 && j != 2; i++, j--)
	{
		printf("%d %d\n", i, j); 
	}
}






c.w
//wap to print addition of even and odd number between 1 to 20
#include<stdio.h>
int main()
{
	int i,sum_e=0,sum_o=0;
	for (i = 1; i <= 20; i++)
	{
		if (i % 2 == 0)
		{
			sum_e = sum_e + i;
		}
		else
		{
			sum_o = sum_o + i;
		}
	}
	printf("%d  %d", sum_e, sum_o);
	
}

c.w
//accept 5 marks each for 5 students and display there respective averages

#include<stdio.h>
int main()
{
	int student, m1, m2, m3, m4, m5, sum;
	float avg;
	for (student = 1; student <= 5; student++)
	{
		printf("enter 5 marks\n");
		scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
		sum = m1 + m2 + m3 + m4 + m5;
		avg = (float)sum / 5;
		printf("average of %d student is %f\n", student, avg);
	}
}

c.w
2 5 8 11
#include<stdio.h>
int main()
{
	int i;
	for (i = 2; i <= 20; i+=3)//i=i+3
	{
	
		printf("%d\t", i);
	}
}

c.w---> 5 10 15 20 25
=================================

#include<stdio.h>
int main()
{
	for(;1;)//condition-->1--->nonzero---->true--
	{
		printf("hi");
	}
}

==================================
#include<stdio.h>
int main()
{
	for(;'A';)
	{
		printf("hi");
	}
}
====================================
#include<stdio.h>
int main()
{
	for(;-5;)
	{
		printf("hi");
	}
}
===================================
#include<stdio.h>
int main()
{
	for(;0;)
	{
		printf("hi");
	}
}
============================================
#include<stdio.h>
int main()
{
	for(;;)//if condition is not given then by default condition is true
	{
		printf("hi");
	}
}
============================================
C.W -->
BASE 2 EXP 3  POWER--->8

POW=2*2*2

#include <stdio.h>

int main()
{
    int base, exponent, i, power = 1;
    printf("Enter base");
    scanf("%d", &base);
    printf("Enter exponent");
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d", power);

}

================================================================
#include <stdio.h>  
#include <math.h>  
int main ()  
{  
   
int base, exp;  
int result; 
printf (" Enter the base value from the user: ");  
scanf (" %d", &base);   
printf (" Enter the power value for raising the power of base: ");  
scanf (" %d", &exp);  
result = pow ( base, exp);  
printf (" %d to the power of %d is %d",base,exp, result);
}

===============================================
while loop in C
The while loop in c is to be used in the scenario where we don't know the number of iterations in advance. 
The block of statements is executed in the while loop until the condition specified in the while loop is satisfied. 
It is also called a pre-tested loop.
ex-->display 1st 25 prime numbers

SYNTAX:

	initilization;
	while(condition/expression)
	{
	  //block of stat;
	  //incre/decre;
	}

#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 20)
	{
		if (i % 2 == 0)
			printf("%d\t", i);
		i++;
	}
}

Armstrong number( 0 to 999)

153
1*1*1 +  5*5*5 + 3*3*3 
1+125+27
153

370
371
407
0
1




#include<stdio.h>
int main()
{
	int num, rem, sum = 0, orgnum;
	printf("enter number\n");
	scanf("%d", &num);
	orgnum = num;
	while (num != 0)
	{
		rem = num % 10;//3 5 1
		num = num / 10;//num=15 1 0
		sum = sum + rem * rem * rem;//27+125+1
	}
	if (sum == orgnum)
		printf("%d is armstrong", orgnum);
	else
		printf("%d is not armstrong", orgnum);

}

#include<stdio.h>
int main()
{
	int num, rem, sum = 0, orgnum;
	printf("enter number\n");
	scanf("%d", &num);
	orgnum = num;
	 for(;num != 0;)
	{
		rem = num % 10;
		num = num / 10;
		sum = sum + rem * rem * rem;
	}
	if (sum == orgnum)
		printf("%d is armstrong", orgnum);
	else
		printf("%d is not armstrong", orgnum);

}

-===========================================================
//accept a number from the user and display whether that number is prime number 
or not
the number which is only divisible by 1 and itself is called as prime number

5 --->2 3 4
6-->2 3 4 5

#include<stdio.h>
int main()
{
	int num, i = 2;
	printf("enter number\n");
	scanf("%d", &num);//6

	while (i <num) // i<=num-1
	{
		if (num % i == 0)
			break;
		i++;
	}
	if (i == num)
		printf("prime");
	else
		printf("not prime");
}

#include<stdio.h>
int main()
{
	int num, i;
	printf("enter number\n");
	scanf("%d", &num);//6
	for(i=2;i < num;i++)
	{
		if (num % i == 0)
			break;
	
	}
	if (i == num)
		printf("prime");
	else
		printf("not prime");
}
======================================================
n=?//n=8
0 1 1 2 3 5 8 13  -----------

#include<stdio.h>
int main()
{
	int n,i=3;
	int n1=0,n2=1,n3;
	printf("enter no of terms\n");
	scanf("%d",&n);//8
	printf("%d %d\t",n1,n2);//0 1 
	while(i<=n)
	{
		n3=n1+n2;//1
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
		i++;
	}
}

do-while loop in C
The do-while loop continues until a given condition satisfies. It is also called post tested loop. It is used when it is necessary to execute the loop at least once (mostly menu driven programs).

The syntax of do-while loop in c language is given below:
  
initilization;
do
{
	//block of statements;
	//incre/decre;
}while(condition);

#include<stdio.h>
//wap to add numbers untill the user enters 0 using do-while loop
int main()
{
	int num, sum = 0;
	do
	{
		printf("enter number\n");
		scanf("%d", &num);
		sum = sum + num;
	} while (num != 0);
	printf("summation=%d", sum);
}

============================================================================
Nested loop
one loop is a part of another loop is called as nested loop. Nesting of loops is the feature in C that allows the looping of statements inside another loop. 

Any number of loops can be defined inside another loop, i.e., there is no restriction for defining any number of loops. The nesting level can be defined at n times. You can define any type of loop inside another loop

Nested for loop
one for loop is a part of another for loop is called as nested for loop
- - - - - - - - - - - - - - - ------------------------------------------------
Working of nested for loop
For one value of outer for(row) loop,inner for loop (col) executes completely.

#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=3;row++)
	{
		for(col=1;col<=3;col++)
		{
			printf("%d%d\t",row,col);//11 12 13
									 //21 22 23
									//31 32 33
		}
		printf("\n");
	}
	
}
============================================================
* * *
* * *
* * *

#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=3;row++)
	{
		for(col=1;col<=3;col++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	
}
============================================================

5*1=5
|
|
5*10=50
******************
6*1=6
|
|
6*10=60
*****************
10*1=10
|
|
10*10=100
*****************

#include<stdio.h>
int main()
{
	int i,j;
	for (i=5;i<=10;i++)
	{
		for(j=1;j<=10;j++)

		{
			printf("%d * %d = %d\n",i,j,(i*j));
			//inner for loop will execute no of rows * col times
			//60 times
		}
		printf("\n-------------------------------------------\n");
		//outer for loop will execute no of rows times
		//6 times
	}
	- 
}
#include<stdio.h>
/*

*
**
***
****

*/






int main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	
}

-----------------------------------------------------------
1
12
123
1234
12345

int main()
{
	int row, col;
	for (row = 1; row <= 5; row++)
	{
		for (col = 1; col <= row; col++)
		{
			printf("%d\t", col);
		}
		printf("\n");
	}
}

=========================================================
1
22
333
4444
55555

#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d\t",row);
		}
		printf("\n");
	}
	
}
			OR


#include<stdio.h>

int main()
{
	int row, col,num=1;
	for (row = 1; row <= 5; row++)
	{
		for (col = 1; col <= row; col++)
		{
			printf("%d\t",num);
		}
		num++;
		printf("\n");
	}
}


==============================================================

FLOYD'S TRIANGLE
1
2 3
4 5 6
7 8 9 10

int main()
{
	int row, col,num=1;
	for (row = 1; row <= 4; row++)
	{
		for (col = 1; col <= row; col++)
		{
			printf("%d\t", num);
			num++;
		}
		printf("\n");
	}
}
===============================================================
===============================================
#include<stdio.h>
/*
A
BB
CCC
DDDD
EEEEE
*/
int main()
{
	int row,col;
	char ch='A';
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c",ch);
			
		}
		ch++;
		printf("\n");
	}
}
==============================================
A
BC
DEF
GHIJ
KLMNO
int main()
{
	int row,col;
	char ch='A';
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c",ch);
			ch++;
			
		}
		printf("\n");
	}}
----------------------------------------------------------------

*****
****
***
**
*
int main()
{
	int row,col;
	for(row=5;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf("*\t");
			
		}
		printf("\n");
	}
}
==================================================================

AAAAA
BBBB
CCC
DD
E

int main()
{
	int row,col;
	char ch='A';
	for(row=5;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c\t",ch);
			
		}
		ch++;
		printf("\n");}}
=================================================================
ABCDE
FGHI
JKL
MN
O

int main()
{
	int row,col;
	char ch='A';
	for(row=5;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c\t",ch);
				ch++;
			
		}
	
		printf("\n");}}

=================================================================
1
10
101
1010
10101

int main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d\t",col%2);
			
		}
		printf("\n");
	}
	
}
============================================================
//break-->takes the control to the next row
//continue-->takes the control to the next col
int main()
{
	int row,col;
	for(row=1;row<=3;row++)
	{
		for(col=1;col<=3;col++)
		{
			if(row==col)
			break;
			printf("%d%d\t",row,col);//21 31 32
		}

		printf("\n");
	}
}

//break-->takes the control to the next row
//continue-->takes the control to the next col and skips the satisfied iteration
int main()
{
	int row,col;
	for(row=1;row<=3;row++)
	{
		for(col=1;col<=3;col++)
		{
			if(row==col)
			continue;
			printf("%d%d\t",row,col);//12 13 21 23 31 32
		}
		printf("\n");
	}
}




int main()
{
	int row,col;
	for(row=1;row<=3;row++)
	{
		for(col=1;col<=3;col++)
		{
			if(col%2==0)
			break;
			printf("%d%d\t",row,col);//11  21 31
		}
		printf("\n");
	}
	
}

int main()
{
	int row,col;
	for(row=1;row<=3;row++)
	{
		for(col=1;col<=3;col++)
		{
			if(col%2==0)
			continue;
			printf("%d%d\t",row,col); //11 13 21 23 31 33
		}
		printf("\n");
	}
	
}
===========================================================================
Function
==>function is a block of statements which does some predefined task,i.e some predefined task is assigned to the function and whenever the function is called,the function has to performed predefined task.
==>A function in C is a set of statements that when called perform some specific task. It is the basic building block of a C program that provides modularity and code reusability.

adv
1)By using functions, we can avoid rewriting same logic/code again and again in a program.
2)We can call C functions any number of times in a program and from any place in a program.
3)Reusability is the main achievement of C functions.
4)readability increases
5)modularity can be achieved

Types of Functions
There are two types of functions in C programming:

Library Functions/predefined function:
==>function whose functionality is already predefined and as a user you cannot change functionality of that function .
==>The predefined functions declared in the C header files such as scanf(), printf()..
==>we need to include headerfile in our program.



Function
==>function is a block of statements which does some predefined task,i.e some predefined task is assigned to the function and whenever the function is called,the function has to performed predefined task.
==>A function in C is a set of statements that when called perform some specific task. It is the basic building block of a C program that provides modularity and code reusability.

adv
1)By using functions, we can avoid rewriting same logic/code again and again in a program.
2)We can call C functions any number of times in a program and from any place in a program.
3)Reusability is the main achievement of C functions.
4)readability increases
5)modularity can be achieved

Types of Functions
There are two types of functions in C programming:

Library Functions/predefined function:
==>function whose functionality is already predefined and as a user you cannot change functionality of that function .
==>The predefined functions declared in the C header files such as scanf(), printf()..
==>we need to include headerfile in our program.

User-defined functions: 
==>function whose functionality is given by programmer

Function Aspects
There are three aspects of a C function.

Function declaration: It tells the compiler about the function name, function signature(no of arguments,sequence of argument,datatype of argument), and return type.

Function call: Function can be called from anywhere in the program. The parameter list must not differ in function calling and function declaration. 

Function definition It contains the actual statements which are to be executed. It is a block of statements where the task/logic of the function is implemented.

C function aspects	Syntax
1	Function declaration		return_type function_name (argument list);
2	Function call--------->	function_name (argument_list);
3	Function definition	return_type function_name (argument list) {function body;}

========================================================================
int main()
{
	int a,b,c,d;
	printf("accept inputs\n");
	int res=scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("no of inputs accepted is %d",res);
}



Different aspects of function calling

A function may or may not accept any argument. It may or may not return any value. Based on these facts, There are four different aspects of function calls.

function without arguments and without return value
function without arguments and with return value
function with arguments and without return value
function with arguments and with return value

=====================================================================
===========
case 1 :  
function with arguments and without return value

#include<stdio.h>
//returntype functionname(datatypes);//function declaration/prototype
void add(int,int);
int main()
{
	int a, b;
	printf("enter value of a and b\n");
	scanf("%d%d", &a, &b);
	add(a, b);//function calling
	printf("\nend of main");	
}
/* returntype functionname(datatype argumentname)
{
}*/
void add(int p, int q)//function defination
{
	int r = p + q;
	printf("result=%d", r);
	
}

=====================================================================

case 2 :  function with arguments and with return value
#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,r;
	printf("enter value of a and b\n");
	scanf("%d%d",&a,&b);
	r=add(a,b);//function calling
	printf("result=%d",r);
	printf("\nend of main()");
}
int add(int a, int b)//function defination
{
	int r=a+b;
	return r;
}


case 3 :  function without arguments and with return value

#include<stdio.h>
int add();
int main()
{	
printf("result=%d",add();//function calling
		printf("\nend of main()");
}
int add(void)//function defination
{
	int p,q,r;
	printf("enter value of p and q\n");
	scanf("%d%d",&p,&q);
	r=p+q;
	return r;
}

case 4 :  function without arguments and without return value

#include<stdio.h>
void add();
int main()
{	
	add();//function calling
}
void add()//function defination
{
	int p,q,r;
	printf("enter value of p and q\n");
	scanf("%d%d",&p,&q);
	r=p+q;
	printf("result=%d",r);
}

-----------------------------------------------------------------------------------------
case 1 :  function with arguments and without return value

#include<stdio.h>
void area_c(int);
int main()
{
	int radius;
	printf("enter radius\n");
	scanf("%d", &radius);
	area_c(radius);

}
void area_c(int r)
{
	float area = 3.142f * r * r;
	printf("area of circle=%f", area);
}


case 2 :  function with arguments and with return value

#include<stdio.h>
float area_c(int);
int main()
{
	int radius;
	float area;
	printf("enter radius\n");
	scanf("%d", &radius);
	area=area_c(radius);
	printf("area=%f", area);
}
float area_c(int r)
{
	float area = 3.142f * r * r;
	return area;
}

case 3 :  function without arguments and with return value


#include<stdio.h>
float area_c();
int main()
{
	float area=area_c();
	printf("area=%f", area);
}
float area_c()
{
	int r;
	printf("enter radius\n");
	scanf("%d", &r);
	float area = 3.142f * r * r;
	return area;
}

case 4 :  function without arguments and without return value
#include<stdio.h>
void area_c();
int main()
{
	area_c();
	
}
void area_c(void)
{
	int r;
	printf("enter radius\n");
	scanf("%d", &r);
	float area = 3.142f * r * r;
	printf("area=%f", area);
}
==================================================================

#include <stdio.h>
int show();
int main()
{   
		int x= show();
		printf("%d",x);

}
int show()
{
	return 100;
}
------------------------------------------------------

#include <stdio.h>
int show();
int main()//calling function
{   
		printf("%d", show());

}
int show()//called function
{
	return 10 ;//control+value is return
	printf("hello");
}

//the statments after return will never get executed
//output-->10
--------------------------------------------------------
#include <stdio.h>
int show();
int main()//calling function
{   
		printf("%d", show());


}
int show()//called function
{
	return 10,20;
}
//only 1 value can be returned from called function to the calling
//in function,value will be stored on stack section which works in LIFO manner
thats why 20 will be returned to the calling function 
-------------------------------------------------------------------



#include <stdio.h>
//wap to print whether the number is even or odd by returning value 1 and 0 respectively
#include<stdio.h>
int show(int);
int main()//calling function
{ 
	int number;
	printf("enter number\n");
	scanf("%d",&number);
	int x=show(number);
	(x==1)?printf("even"):printf("odd");
	
}
int show(int num)
{
return	(num%2==0)?  1: 0;
}

-------------------------------------------------------
Call by value in C
In call by value method, the value of the actual parameters is copied into the formal parameters. In other words, In call by value, different memory is allocated for actual and formal parameters since the value of the actual parameter is copied into the formal parameter.
The actual parameter is the argument which is used in the function call whereas formal parameter is the argument which is used in the function definition.

Limitations of pass by value

1)changes made to the actual argument does not reflect on formal argument and viceversa
#include <stdio.h>
void swap(int,int);
void main()
{
	int a=10,b=20;
	printf("before calling swap()\n");
	printf("value of a and b is %d %d\n",a,b);
	swap(a,b);//actual argument	
	printf("after calling swap()\n");
	printf("value of a and b is %d %d\n",a,b);
}
void swap(int p,int q)//formal argument
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	printf("after swapping\n");
	printf("value of p and q is %d %d\n",p,q);
	return p,q;
	
}

2)only 1 value can be returned from called function to the calling fun

To remove limitations of pass by value,pass by address is used..

Call by address in C
In call by address, the address of the variable is passed into the function call as the actual parameter.
The value of the actual parameters can be modified by changing the formal parameters since the address of the actual parameters is passed.
In call by address, the memory allocation is similar for both formal parameters and actual parameters. All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.

Difference between call by value and call by address in c

1	A copy of the value is passed into the function.
	An address of variable is passed into the function
2	Changes made inside the function is limited to the function only. The values of the actual parameters do not change by changing the formal parameters.	
Changes made inside the function validate outside of the function also. The values of the actual parameters do change by changing the formal parameters.
3	Actual and formal arguments are created at the different memory location	
Actual and formal arguments are created at the same memory location

---------------------------------------------------------
Pass by address

#include <stdio.h>
void swap(int*,int*);
void main()
{
	int a=10,b=20;
	printf("before swapping\n");
	printf("value of a and b is %d %d\n",a,b);
	swap(&a,&b);	
	printf("after swapping\n");
	printf("value of a and b is %d %d\n",a,b);
}
void swap(int* p,int* q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("after swapping\n");
	printf("value of *p and *q is %d %d\n",*p,*q);
}
---------------------------------------------
#include <stdio.h>
void square(int);
void main()
{
	int a=10;
	square(a);
	printf("square value of a is %d",a);
}
void square(int p)
{
	
	p=p*p;

	
}
======================================
#include <stdio.h>
void square(int*);
void main()
{
	int a=10;
	square(&a);
	printf("square value of a is %d",a);
}
void square(int* p)
{
	*p=*p * *p;
	
}
---------------------------
#include<stdio.h>
void area_r(int len,int bre,int * a);
void  peri_r(int len,int bre,int * p);

int main()
{
	int len=3,bre=3;
	int area,peri;
	 area_r(len,bre,&area);
	printf("area of rec is %d",area);
	 peri_r(len,bre,&peri);
	printf("perimeter of rec is %d",peri);
}
void area_r(int len,int bre,int * a)
{
	*a=len*bre;
}
void  peri_r(int len,int bre,int * p)
{
	*p=2*(len+bre);
}

POINTERS

1)pointer is a variable which stores the address of another variable.
2)size of every type of pointer on 16 bit is 2 bytes and on 32 bit is 4 bytes and
on 64 bit is 8 bytes..
3)type of pointer and type of variable should be same.
4)dereferncing operator(*) return the value of a variable pointed by pointer

1)
int x=10;
x-->10-->int
&x-->1000--->int*

char y='A';
y-->A-->char
&y-->2000--->char*

double num=1.1;
num-->1.1--->double
&num--->3000--->double*

2)
int num;//declaration of a variable in which value is stored
int* num;////declaration of a pointer variable in which address is stored

int ptr;////declaration of a variable in which value is stored
int * ptr; //declaration of a pointer variable in which address is stored

-----------------------------------------------------------------------------
Integer Pointer
--------------
int a=10;
//a--->10-->int
//&a-->1000-->int*
int* b =  &a;//1000-->int*

OR
int a=10; 
int * b;
b=&a;


a=10   ------->
&a=1000------->
b=1000------>
&b=2000-------
*b=10-->dereferencing operator/indirection operator-->
return the value of a variable pointed by pointer


a==*b==10
*b=5;
a=? //a=5

a=123
*b=? //*b=123

&a==b==1000
----------------------------------------------------------------
Character Pointer
--------------
char a='x';
//a--->x-->char
//&a-->1000-->char*
char* b=&a;//1000-->char*

a=x ------->
&a=1000----->
b=1000---->
&b=2000-->
*b=x-->dereferencing operator-->return the value of a variable pointed by pointer


a==*b==X
&a==b==1000


========================================================================================
Pointer to Pointer
A pointer to pointer is a variable use to store the address of another pointer. Such pointer is known as a double pointer (pointer to pointer). The first pointer is used to store the address of a variable whereas the second pointer is used to store the address of the first pointer. 
#include<stdio.h>  
void main ()  
{  
    int a = 10;  
    int *p;  
    int **pp;   
    p = &a; // pointer p is pointing to the address of a  
    pp = &p; // pointer pp is a double pointer pointing to the address of pointer p  
    printf("address of a: %d\n",p); // Address of a will be printed   
    printf("value stored at p: %d\n",*p); // value stored at the address contained by p i.e. 10 will be printed  
    printf("value stored at pp: %d\n",**pp); // value stored at the address contained by the pointer stored at pp  
}  
===========================================================================
Array
Array is a finite(countable) set of homogenous elements in which the elements are stored in a contignous/linear manner.

Syntax for declaration of an array:
datatype arrayname[size];
int a[5];//a is an array allocating memory for 5 integer elements

different ways of declaring and initilizing 1d(linear/1row-many col) array
1)
int marks[5];
printf("%d",sizeof(marks));//20 bytes
printf("%d",sizeof(marks[0]));//4 bytes

2)
int a[5]={1,2,3,4,5};
printf("%d",sizeof(a));//5*4=20 bytes
if size of array is N then array index will go till N-1
printf("%d",a[0]);//1
printf("%d",&a[0]);//100

3)
const int a[5]={1,2,3,4,30};
int x=a[0]*5;//x=5-->allowed
a[0]=10;//error

4)
int a[5]={1,2};//partial initilization of an array
printf("%d %d %d",a[2],a[3],a[4]);//000

5)	int b[]={1,3,6,8};
	//16 bytes memory allocation will takes place
	//1 3 6 8

6)
	int size=5
	int a[size];
	//error

7) int a[4]={1,67,34,55,33};//error
----------------------------------------------------------------------------------------
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter elements\n");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=4;i++)
	a[i]=a[i]*a[i];
	printf("display elements\n");
	for(i=0;i<=4;i++)
	printf("%d\t",a[i]);
}

#include<stdio.h>
//accept 5 elements
//summation of 5 elements
//display average
int main()
{
	int a[5],i,sum=0;
	float avg;
	printf("enter elements\n");
 	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);

	for(i=0;i<=4;i++)
	sum=sum + a[i];

	avg=(float)sum/5;
	printf("average=%f",avg);
}

progno 3
wap to copy the elements of one array into another array
//declare 2 array
//accept elements for 1 array
//copy
//display the copied elements

#include<stdio.h>
int main()
{
	int m[5]={1,2,3,4,5};
	int i,a[5];
	for(i=0;i<5;i++)
	a[i]=m[i];
	printf("display elements\n");
	for(i=0;i<=4;i++)
	printf("%d\t",a[i]);
	
}

progno 4
wap to display maximum number in an array
#include<stdio.h>
int main()
{
    int a[5],i,max;
    printf("Enter elements in array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }//23 4 61 6 7


	 max=a[0];
    for(i=1; i<5; i++)
    {         
        if(a[i]>max)
        max=a[i];
    }
   	printf("max of array is : %d",max);
	 
}

prog 5
wap to display minimum number in an array


h.w
accept elements of the array and store all the even numbers in the
second array
 2 3 4 5 6 7
#include<stdio.h>
int main()
{
	int a[6],i,b[6],j;
	printf("enter elements\n");
	for(i=0;i<=5;i++)
	scanf("%d",&a[i]);//2 3 4 5 6 7
	for(i=0,j=0;i<=5;i++,j++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			printf("%d\t",b[j]);
		}
	}

}
---------------------------------------

Name of the array itself is a constant pointer pointing to base address of an array

int a[5]={1,2,3,4,5};
a[0]-->1--->int
&a[0]-->100-->int*

ADDRESS
1)SUBSCRIPT NOTATION(&ARRAYNAME[INDEX])
&a[0]-->100
&a[1]-->104
&a[4]-->116

2)POINTER NOTATION (ARRAYNAME/POINTERNAME + INDEX)
(a+0)-->100    (0+a)
(a+1)-->104    (1+a)
(a+2)--->108   (2+a)
(a+3)-->112    (3+a)
(a+4)-->116    (4+a)


&a[0]==(a+0)==(0+a)==a---------->100
&a[4]==(a+4)==(4+a)------------->116
&a[i]==(a+i)==(i+a)------------------------->ADDRESS

VALUE
1)SUBSCRIPT NOTATION(ARRAYNAME[INDEX])
a[0]-->1  0[a]
a[1]-->2  1[a]
a[4]-->5  4[a]

2)POINTER NOTATION *(ARRAYNAME/POINTERNAME + INDEX)
*(a+0)-->*100 --> 1      *(0+a)
*(a+1)-->*104--->2       *(1+a)
*(a+2)--->*108-->3       *(2+a)
*(a+3)-->*112-->4       *(3+a)

 
a[0]==0[a]==*(a+0)==*(0+a)==*a---------->1
a[4]==*(a+4)==4[a]==*(4+a)------------->5
a[i]==*(a+i)==*(i+a)==i[a]---------------->VALUE

#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	float avg;
	printf("enter elements\n");
	for(i=0;i<=4;i++)
	scanf("%d",(a+i));//&a[i]
	for(i=0;i<=4;i++)
	a[i]=*(a+i) *  *(i+a);
	printf("display elements\n");
	for(i=0;i<=4;i++)
	printf("%d\t",i[a]);
}
c .w
solve above program using pointer notation







+---------------------------------------

Name of the array itself is a constant pointer pointing to base address of an array

int a[5]={1,2,3,4,5};
a[0]-->1--->int
&a[0]-->100-->int*

ADDRESS
1)SUBSCRIPT NOTATION(&ARRAYNAME[INDEX])
&a[0]-->100
&a[1]-->104
&a[4]-->116

2)POINTER NOTATION (ARRAYNAME/POINTERNAME + INDEX)
(a+0)-->100    (0+a)
(a+1)-->104    (1+a)
(a+2)--->108   (2+a)
(a+3)-->112    (3+a)
(a+4)-->116    (4+a)


&a[0]==(a+0)==(0+a)==a---------->100
&a[4]==(a+4)==(4+a)------------->116
&a[i]==(a+i)==(i+a)------------------------->ADDRESS

VALUE
1)SUBSCRIPT NOTATION(ARRAYNAME[INDEX])
a[0]-->1  0[a]
a[1]-->2  1[a]
a[4]-->5  4[a]

2)POINTER NOTATION *(ARRAYNAME/POINTERNAME + INDEX)
*(a+0)-->*100 --> 1      *(0+a)
*(a+1)-->*104--->2       *(1+a)
*(a+2)--->*108-->3       *(2+a)
*(a+3)-->*112-->4       *(3+a)

 
a[0]==0[a]==*(a+0)==*(0+a)==*a---------->1
a[4]==*(a+4)==4[a]==*(4+a)------------->5
a[i]==*(a+i)==*(i+a)==i[a]---------------->VALUE

#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	float avg;
	printf("enter elements\n");
	for(i=0;i<=4;i++)
	scanf("%d",(a+i));//&a[i]
	for(i=0;i<=4;i++)
	a[i]=*(a+i) *  *(i+a);
	printf("display elements\n");
	for(i=0;i<=4;i++)
	printf("%d\t",i[a]);
}
c .w
solve above program using pointer notation

POINTER ARITHMETIC OPERATIONS
The following operations allowed on pointer
1)Incrementing a pointer
2)decrementing a pointer
3)adding integer to a pointer
4)subtracting integer from a pointer

#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	//a++;//a=a+1 //a=100+1 
	int* b=a;//(a+0),(0+a),&a[0]
	b++;//b=b+1 //b=100+1
	printf("%d\n",*b);//2
	b--;//b=b-1 //b=104-1 
	printf("%d\n",*b);//1
	b=b+3; //b=100+3 
	printf("%d\n",*b);
	b=b-3;//b=112-3 
	printf("%d",*b);

}

5)comparison of two pointers
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int* b=a+4;
	int*c =&a[4];
	if(b==c)
	printf("both pointer pointing to same loc1\n");
	if(a==b)
	printf("both pointer pointing to same loc2\n");
	if(*b==*c)
	printf("both pointer containing same value1\n");
	if(*b==*a+4)
	printf("equal");
	
}


6)Assigning one pointer into another pointer
int a[5]={1,2,3};
int*b=a;

7)subtraction of two pointers
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int* b=(a+4);
	printf("%d",b-a);
	//116-100
	//16 bytes
	//16/4-->4 no of elements
	//how many elements b pointer is apart from a pointer

}

The following operations are not allowed on pointers
1)division of two pointers
2)multiplication of two pointers
3)addition of two pointers
4)multiplying pointer with constant ex (a*4)
5)dividing pointer with constant ex (a/4)

-----------------------------------------------
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *b=&a[1];
	b++;
	printf("%d%d",a[1],b[1]);
}



	


===================================================


==================================================================
STRING
when group of character is stored in an  array  ,such array is called as string
in string ,'\0'(null character) is appended by compiler at the end

ASCII value of '\0' is 0

char a[5]="pune";

if size of the string is N then max no of characters i can store in string is 
N-1
char a[4]="pune";//error
char a[5]="pune";//allowed


#include<stdio.h>
int main()
{
	//name of the string itself is a
	//contant pointer pointing to
	//base address of an array
	char a[5]={"pune"};
	//a[0]-->p-->char
	//&a[0]-->100-->char*
	
---------------------------------------------
#include<stdio.h>
int main()
{
	char a[5]={"pune"};
	char* b=a;//100-->char*
	a++;//error--->constant pointer
	b++;//allowed-->nonconstant pointer
	
}

#include<stdio.h>
int main()
{
	char a[5]={"pune"};
	char* b=a;//100-->char*
	printf("%c",b[1]);//u
	printf("%c",*(b+3)+1);//e+1-->f
	printf("%d%c",3[b],b[3]);//101 e
	printf("%c",*(a+2)+9/2);//n+4---->r
}



#include<stdio.h>
int main()
{
	char a[5]={"pune"};
	char* b=a;//(a+0),(0+a),&a[0]
	b++;//b=101--->b[0]-->u   //b[1]=n
	printf("%c",b[1]);//n
}


-----------------------------------------------------
char a[5]={"pune"};
char* b=a;

a[0]==b[0]==*a==*b==*(a+0)==*(0+a)==*(0+b)==*(b+0)==0[a]==0[b]========>p
a[2]==b[2]==*(a+2)==*(2+a)==*(2+b)==*(b+2)==2[a]==2[b]========>n

&a[0]==&b[0]==a==b==(a+0)==(0+a)==(0+b)==(b+0)========>100
&a[2]==&b[2]==(a+2)==(2+a)==(2+b)==(b+2)========>102

----------------------------------------------------------------
How to accept/display a word ?
ans) by using %s 

%s will accept or print only 1 word
%s will terminate when space is encountered
#include<stdio.h>
int main()
{
	char a[15];
	printf("accept a word from the user\n");//pune goa
	scanf("%s",&a[0]);//(a+0),(0+a),a
	printf("string is %s",&a[0]);//(a+0),(0+a),a
   pune
	
}




#include<stdio.h>
int main()
{
	char a[5];
	printf("accept a word from the user\n");//pune
	scanf("%s",(a+0));// (0+a) ,a ,&a[0]
	printf("%s\n",(a+0));//(a+0) (0+a) a ,&a[0]-->pune
	printf("%s\n",(a+1));// (1+a) ,&a[1]--->une
	printf("%s\n",(a+2));// (2+a) ,&a[2]-->ne
	printf("%s\n",(a+3));// (3+a) ,&a[3]-->e
	
}



#include<stdio.h>
int main()
{
	char a[12]="hello world";
	char* b= &a[3];//a=100  b=103
	printf("%s\n",&a[2]);//llo world
	printf("%sn",(a+3));//lo world
	printf("%c\n",b[0]);//l
	printf("%s\n",(b+1));//o world
	printf("%s\n",(b+3));//world
	printf("%s\n",&b[2]);// world
	printf("%d\n",a[0]);//104
	printf("%s\n",(a+1+1));//(a+2) //llo world
	printf("%s\n",(a+9/2));//o world
	
}
------------------------------------------
q)how to accept/display a group of words including space?

#include<stdio.h>
int main()
{
	char a[20];
	gets(a);//will accept multiword from user including space
	puts(a);//will display multiword  including space
	
}


gets() will terminate when enter key is encounter
-----------------------------------------------------------------
string handling functions
All string handling functions are predefined functions
All string handling functions are stored in string.h


1)strlen()-->count the no of characters in a string excluding \0

int strlen(stringname);
//function declaration of strlen()
int strlen(char*);
int strlen(char[]);


#include<stdio.h>
#include<string.h>
int main()
{
    
	char a[10];//pointer notation -->char* == subscript notation char[]
	int x;
	printf("accept string\n");//pune\0
	scanf("%s",a);
	x=strlen(a);
	printf("size of string is %d\n",sizeof(a));//10 bytes
	printf("strlen of string is %d\n",x);//4
    
}

#include<stdio.h>
#include<string.h>
int main()
{
    
	char a[]="";
	printf("size of string is %d\n",sizeof(a));//1
	printf("strlen of string is %d\n",strlen(a));//0
}
#include<stdio.h>
#include<string.h>
int main()
{
    
	char a[]="A";
	printf("size of string is %d\n",sizeof(a));//2
	printf("strlen of string is %d\n",strlen(a));//1
   

}
#include<stdio.h>
#include<string.h>
int main()
{
    
	char a[100]="A";
	printf("size of string is %d\n",sizeof(a));//100
	printf("strlen of string is %d\n",strlen(a));//1
}

#include<stdio.h>
#include<string.h>
int main()
{
    
	char a[]="ABCD\0B\0C\0";
	printf("size of string is %d\n",sizeof(a));//9
	printf("strlen of string is %d\n",strlen(a));//4
	printf("%s",a);//ABCD
}



imp**
write a userdefined function to count length of the string without 
using strlen()

#include<stdio.h>
int ustrlen(char*);
int main()
{
	int len;
	char a[10];//char*
	printf("accept string\n");
	scanf("%s", a);//HELLO
	len=ustrlen(a);
	printf("length=%d", len);
}
int ustrlen(char* b)
{
	int len = 0;
	while (*b != '\0')
	{
		len++;
		b++;
	}
	return len;
}
========================================================================

#include<stdio.h>
int ustrlen(char[]);
int main()
{
	int len;
	char a[10];//char*
	printf("accept string\n");
	scanf("%s", a);//HELLO
	len=ustrlen(a);
	printf("length=%d", len);
}
int ustrlen(char b[])
{
	int len = 0,i=0;
	while (b[i] != '\0')
	{
		len++;
	    i++;
	}
	return len;
}

===============================================
------------------------------------------------------
//strcpy()-->copy source string content into target string
//strcpy(targetstring,source string);

#include<stdio.h>
#include<string.h>
int main()
{
    
	char a[5]="pune";
	char b[5];
	//b=a;//using assignment operator address is getting copied
	strcpy(b,a);
	printf("target string is %s",b);//pune
}

#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char a[13],b[13];
	printf("accept string\n");
	scanf("%s",a);//hi
	strcpy(b,a);
	printf("target string is %s",b);
	
}


--------------------------------------------------------
wap to copy 1 string into another w/o using strcpy()
#include<stdio.h>
void ustrcpy(char*,char*);
int main()
{
	char a[5]="pune";
	char b[5];
	ustrcpy(b,a);
	printf("target string is %s",b);//pune
	
}
void ustrcpy(char* q,char* p )
{
	while(*p!='\0')
	{
		*q=*p;
		p++;
		q++;
	}
	*q='\0';
}
======================================================================
-----------------------------------------------------------------

strrev()-->reverses the string
strrev(stringname);
#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[6] = "hello";
	strrev(a);
	printf("%s", a);//olleh
}
======================================================
write a program to display reverse string w/o using strrev()
#include<stdio.h>
#include<string.h>
int main()
{
	int y = 0;
	char a[3] = "hi";
	char c[3];
	int x=strlen(a) - 1;//x=1
	while (x>=0)
	{
		c[y]=a[x];
		x--;//-1
		y++;//2

	}
	c[y] = '\0';
	printf("reverse string is %s", c);
	
}

--------------------------------------------------------
strcat-->concatenate source string at the end of target string
strcat(targetstring,sourcestring);
#include<stdio.h>
int main()
{
	char str[] = "students";
	char ttr[] = "hello";
	strcat(ttr, str);//hellostudents\0
	printf("concatenate string is %s", ttr);
}

wap to append 1 string into another string
#include<stdio.h>
void strcatu(char*,char[]);
int main()
{
	char str[] = "hi";
	char ttr[] = "bye";
	strcatu(ttr, str);
	printf("concatenate string is %s", ttr);
}
void strcatu(char* t,char* s)
{
	while(*t!='\0')
	{
		t++;
	}
	while(*s!='\0')
	{
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
}

---------------------------------------------------------
strcmp()
int strcmp(string1,string2);
compare two strings character by character and return 1,-1,0  on finding
1st non matching character

#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = "apple";
	char b[] = "appy";
	char c[] = "appam";
	char d[] = "apple";
	int x, y, z;
	x = strcmp(a, b);
	printf("%d", x);//-1
	y = strcmp(a, c);
	printf("%d", y);//1
	z = strcmp(a, d);
	printf("%d", z);//str1==str2 return 0
}
//a p p l e
//a p p y

//l <  y
//str1 < str2
//strcmp return -1


//a p p l e
//a p p a m
//l > a
//str1>str2
//1
=======================================================

============================================

//accept a string from the user and display whether the string is palindrom or not?
//using string handling function

#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	printf("accept string");
	scanf("%s", a);
	strcpy(b, a);
	strrev(a);
	if (strcmp(a, b) == 0)
		printf("palindrom");
	else
		printf("not palindrom");
}



ACCEPT 1 STATEMENT FROM THE USER AND DISPLAY NO OF CHARACTERS,NO OF VOWELS,
NO OF SPACES,NO OF WORDS
input-------------------> infotech null stop pune
int main()
{
	int i, vowel = 0, space = 0, cnt = 0;
	char a[25];
	printf("accept multistring\n");
	gets(a);//infotech null stop pune\0
	for (i = 0;a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			vowel++;
		if (a[i] == 32) //' '
			space++;
		
		cnt++;
	}
	printf("no of vowels=%d\n", vowel);
	printf("no of characters=%d\n", cnt);
	printf("no of words=%d\n", space + 1);
	printf("no of space=%d\n", space);
}



--------------------------------------------------------------------

Structure

1)structure is a collection of heterogenous datatype in which
elements can be stored in a contignous manner

//declaration of structure
struct Student
{
	//members of the structure
	int rollno;
	char name[10];
	char grade;
};


2)during declaration of structure,memory is not allocated to the members
of the structure.

3)memory is allocated at the time of creation of structure variable

int a;

//syntax for creation of structure variable
struct structure_name structure_variablename;
struct employee  a;//memory gets allocated for members of the structure

how many bytes?
summation of  datatypes of all members of the structure
	struct employee e1;
	//type of structurevariable e1 is struct structurename
	printf("%d",sizeof(e1));//15 bytes
	printf("%d",sizeof(struct employee));//15 bytes


//sizeof(e1)==sizeof(struct employee)
=======================================================================

int a[5];
int a;
char a[5];
int a[3][2];
//declaration of structure
struct employee
{
	int id;//members of structure
	float sal;
	char name[10];
};

struct book
{
	int bid;
	char authorname[10];
	float price;
};

=====================================================
During declaration of structure, memory for members of the structure is not allocated therefore
we cannot initlialize members of the structure during declaration
#include<stdio.h>
struct employee
{
	int id=1;//members of structure
	float sal;
	char name[10];
};
int main()
{
	
}
//error
====================================================================



rules
structurevariable .
pointer->
use of & in scanf() in structure is mandatory
[].
()->

wap to store record of 1 emp inside structure

#include<stdio.h>
struct employee
{
	int id;
	float sal;
	char name[10];
};
int main()
{
	struct employee e1,e2={102,60000.00,"rohan"},e3;
	printf("accept data for employee no e1\n");
	scanf("%d%f%s",&e1.id,&e1.sal,&e1.name);
	printf("%d %f %s\n",e1.id,e1.sal,e1.name);
	e3=e2;//entire structure get copied into another structure
	//only if both structure variable should be of same type
	printf("%d %f %s",e3.id,e3.sal,e3.name);
	
	
}

Array of structure
To hold number of records of same type,array of structure is used.

#include<stdio.h>
struct employee
{
	int id;
	float sal;
};
int main()
{
	int a[3];//a is an array containing 3 elements of type integer
	struct employee e[3];//e is an array containing 3 structure of type employee
	int i;
	printf("accept details\n");
	for (i = 0; i <= 2; i++)
	{
		scanf("%d%f", &e[i].id, &e[i].sal);
	}
	printf("display details\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%d %f\n", e[i].id, e[i].sal);
	}
	//printf("%d", sizeof(e));//24 bytes
	//printf("%d", sizeof(e[0]));//8 bytes
	
}
==============================================================
we cannot declare function inside structure declaration
#include<stdio.h>
struct employee
{
	int id;
	float sal;
	void accept();//error
};
int main()
{
}

===================================================================

static 
keyword is static
1)The variable declared with static keyword is called as static variable
2)static variable can be declared globally as well as locally
3)initial value is 0
4)stored on datasection

#include <stdio.h>
static int y;//global static variable
void main()
{
    static int x;//local static variable
	printf("%d %d",x,y);
	show();
	
}
void show()
{
	printf("%d %d",x,y);//x is not accessible(local)
}
//scope of x variable is within the block /within the function
//scope of y variable is thru out the program
//lifetime of static variable x,y is thru out the program

imp******
Difference between local variable and static variable
local variable
1)the variable declared within the paraenthesis of a function or a block is called as local variable
2)stored on stack section
3)inital value is garbage
4)lifetime is within the block/within the function




5)
#include <stdio.h>
void show();
void main()
{
   
	show();
	show();
	show();
}
void show()
{
	int x=0;
	printf("%d\t",x);//000
	x++;//1
}
whenever function is called,new memory is always created for local varaible
6)whenever function is called,local variable is reinitialized

static variable
1)The variable declared with static keyword is called as static variable.
2)stored on data section
3)inital value is zero
4)lifetime is through out the program
5)
#include <stdio.h>
void show();
void main()
{
   
	show();
	show();
	show();
}
void show()
{
	static int x;
	printf("%d\t",x);//012
	x++;//3
}
whenever function is called,new memory is not created for static varaible
6)whenever function is called,static variable is not reinitialized


-----------------------------
#include <stdio.h>
static int y=10;//global static variable
void main()
{
    static int y=20;//local static variable
	printf("%d",y);//20
}
//local variable is having high priority over global variable
-----------------------------------------------------
====================================================

Dynamic memory allocation
memory allocated at compile time leads to either memory wastage or memory required.
for proper memory management go 4 DMA.
DMA allows us to allocate memory dynamically(runtime) on heap section
for allocating memory dynamically two functions should be used
1)malloc()
2)calloc()

declared in stdlib.h

void pointer-->void*
void pointer is a generic pointer which can store or can return the
address of any type of variable.
#include<stdio.h>
int main()
{
	float a=10;
	void* b=&a;//1000 
}


printf("%d",sizeof(void*));//4 bytes on 32 bit and 8 bytes on 64 bits

****void is a return type and void * is a datatype.

#include<stdio.h>
int main()
{
        show();
        
}
void* show()//show() can return the address of any  type of variable
{
        int a=10;
        return &a;
}

malloc()
malloc() is used to allocate memory dynamically on heap section..
syntax..

datatype * pointername=void* malloc(n * sizeof(datatype));

n-->no of elements to be accepted at runtime

   		     =void* malloc(5 * sizeof(int));
        int* ptr     =(int*) malloc(20);
        	     =return base address of an array-->100-->int*


#include<stdio.h>
#include<stdlib.h>
int main()
{
        int* ptr;
        int n,i;
        printf("enter no of elements\n");
        scanf("%d",&n);
        ptr=(int*) malloc(n*sizeof(int));
        printf("accept elements\n");
        for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);//(ptr+i),(i+ptr)
        printf("display elements\n");
        for(i=0;i<n;i++)
        printf("%d\t",ptr[i]);//*(ptr+i)
        free(ptr);//to deallocate the memory on heap section which is allocated by malloc/calloc()
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
        char* ptr;
        int n,i;
        printf("enter no of characters in ur name\n");
        scanf("%d",&n);//4
        ptr=(char*) malloc((n*sizeof(char))+1);
        printf("accept name\n");
        scanf("%s",&ptr[0]);//(ptr+0),(0+ptr) neha\0
        printf("display name\n");
        printf("%s",&ptr[0]);//(ptr+0),(0+ptr)
        free(ptr);//to deallocate the memory
 
}
========================================================
2D ARRAY
//name of 2d array itself is a constant pointer pointing to
//base address of an array

syntax:
datatype arrayname[row][col];

int a[3][3]={1,2,3,4,5,6,7,8,9};
//no of elements=row*col-->3*3-->9 elements
printf("%d",sizeof(a));//9*4-->36 bytes
printf("%d",sizeof(a[0][0]));//4 bytes


ADDRESS
1)SUBSCRIPT NOTATION(&arrayname[row][col]);

&a[0][0]-->100
&a[0][1]-->104
&a[1][1]-->116
&a[2][2]--->132


2)POINTER NOTATION --->*(arrayname/pointername +row)+col;
*(a+0)+0-->100
*(a+0)+1-->104
*(a+1)+0 -->112
*(a+1)+1 --->116
*(a+2)+2-->132

&a[0][0]===*(a+0)+0 ------------->100
&a[1][2]===*(a+1)+2 ------------->120
&a[i][j]===*(a+i)+j-------------->address

VALUE
1)SUBSCRIPT NOTATION(arrayname[row][col]);

a[0][0]-->1
a[0][1]-->2
a[1][1]-->5
a[2][2]--->9


2)POINTER NOTATION --->*(*(arrayname/pointername +row)+col);
*(*(a+0)+0)-->*100-->1

*(*(a+0)+1)-->*104-->2

*(*(a+2)+2)-->*132-->9


a[0][0]===*(*(a+0)+0) ------------->1
a[i][j]===*(*(a+i)+j)-------------->value


why 2d array?
50 students 
5 marks each

1)250 variable

2)create one dimesional array that can store 250 marks

3)create 50 one dimensional array that can store 5 marks of each student 


feasible solution is 2darray
int marks[50][5];



various ways of declaring and initilizing 2d array
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//123
	//456
	//789

	int a[3][3]= { {1,2},{4,5},{7} };
	//120
	//450
	//700
	//partial initilization of an array


	int a[3][3] = { 1,2,4,5,7 };
	//124
	//570
	//000

	
	int a[][2] = { 1,2,3,4,5 };
	//12
	//34
	//50

	int a[3][] = { 1,2,3,4,5,6 };//error 
in 2d array col size is mandatory

------------------------------------------------------------
#include<stdio.h>
int main(){
	int a[3][3];int i, j;
	printf("enter elements\n");
	for(i=0;i<=2;i++)
	{
		for (j = 0; j <= 2; j++)
		{
			scanf("%d", *(a + i) + j);//&a[i][j]
		}
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			a[i][j] = *(*(a+i)+j) * a[i][j];
		}
	}
	printf("display elements\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d\t", *(*(a + i) + j));//a[i][j]
		}
		printf("\n");
	}
}

//wap to store temperature of 2 cities of a week and display the temperature
#include<stdio.h>int main()
{
	int temperature[2][7];
	int i, j;
	for(i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			printf("city = %d , Day = %d\n", i + 1, j + 1);
			scanf("%d", &temperature[i][j]);//*(temperature+i)+j
		}}
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			printf("city = %d , Day = %d = %d\n", i + 1, j + 1,temperature[i][j]);      //*(*(temperature+i)+j)
			
		}
		printf("\n*****************************************\n");
	}}

wap to add 2 matrix and store the result in another matrix
#include<stdio.h>
int main(){
	int a[3][3],b[3][3]={1,1,1,1,1,1}, i, j,c[3][3];
	printf("enter elements\n");
	for(i=0;i<=2;i++)
	{
		for (j = 0; j <= 2; j++)
		{
			scanf("%d", *(a + i) + j);//&a[i][j]
		}
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			c[i][j] = *(*(a+i)+j) + b[i][j];
		}
	}printf("display elements\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d\t", *(*(c + i) + j));//c[i][j]
		}
		printf("\n");
	}
}

c.w

wap to accept elements of matrix 3*3 and display average of all elements of array plus
count no of elements present in 2d array
#include<stdio.h>int main(){
	int a[3][3] ,i, j,sum=0,counter=0;
	float avg;
	printf("enter elements\n");
	for(i=0;i<=2;i++)
	{
		for (j = 0; j <= 2; j++)
		{
			scanf("%d", *(a + i) + j);//&a[i][j]
			counter++;
		}}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			sum=sum+a[i][j];
		}
	}
	avg=(float)sum/9;
	printf("average=%f\n",av	g);
	printf("no of elements=%d",counter);
}



wap to accept elements of matrix 3*3 and display max element in 2d array
#include<stdio.h>
	int main(){
	int a[3][3] ,i, j,max;
	printf("enter elements\n");
	for(i=0;i<=2;i++)
	{
		for (j = 0; j <= 2; j++)
		{
			scanf("%d", *(a + i) + j);//&a[i][j]
			
		}}
		max=*(*(a+0)+0);
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	printf("maximum element=%d",max);
}


c.w
wap to accept elements of matrix 3*3 and display min element in 2d array
using only pointer notation



Introduction to C++



C++ was invented by Bjarne Stroustrup in 1979 at Bell lab.
initially he called this lang as, c with classes,later in 1983 the name was changed to c++.


==>C++ is a general purpose/multipurpose,high level,compiler based and object oriented programming language.

==>What is general purpose?
purpose means usage
by using c++ we can design different types of s/ws


Types of programming language
1. Low-level programming language
Low-level language is machine-dependent (0s and 1s) programming language. The processor runs low- level programs directly without the need of a compiler or interpreter, so the programs written in low-level language can be run very fast.


2. High-level programming language (HLL) -It is designed for developing user-friendly software programs and websites.
This programming language requires a compiler or interpreter to translate the program into machine language (execute the program).
Example: Python, Java, JavaScript, PHP, C#, C,C++, etc.
A high-level language is further divided into two parts -
	a)Procedural Oriented programming language
	b)Object-Oriented Programming language


ques)which s/w application we can create using c++?
==>using c++ , we can design operating system(dos,window,unix)
==>using c++,we can design editors(notepad,wordpad,editplus)
==>using c++,we can design commercial application(related to money like (bank program,hotel managment program,supermarket program)
In supermarket,bill should be generated,billing program is designed using c++.Bank transactions application is designed using c++.
==>using c++,we are also able to design database(oracle is designed by c and c++)
==>using c++,we can also design translators(compiler,interpreter,assembler)
compiler and interpreter are used to convert high level lang to machine code.
assembler is used to convert low level lang to machine code.
In c++ we are using compiler as a translator,thats why c++ is called as compiler based programming lang.
==>using c++,we can design PC and mobile games. ex:snake game,mario etc.
=========================================================
Software is a collection of programs. /it is a digitized automated process
program is a set of instructions

===============================================================================
Object oriented programming
==>C++ is an extension of C programming
==>learn limitation and adv of c, how it is solved in c++?

Function oriented programming lang/Procedural Language:

==>Total program is divided into small programs called as functions. 
Advantages are:
easy to identify errors
modularity
reusability(write once use many times)

Function is a small program which is ued to do a particular job.


Entire c program is collection of functions thats why c++ is called as function oriented programming lang.
procedural lang means all data stored at one place
all data accessible to all function
data is not secured
===============================================

problem with function
==>when program is big ,when data is global then to identify  which variable is accesed by which function  is 
very difficult.problem is when data is global ,any function can access it . so data is not secured because data is freely moving around the function.
==>In c programming lang, data and function is seperately stored and global data is accessible to every function.
but in oop they bind variable and function in single unit called as object. when it make private it is accessible only within that funtion.
==>it is difficult to map real world entities into system design.it is difficult to bind data to the functionality of the system because its functionality is considered seperately
==>debugging a structured program is difficult and time consuming process.since data is shared over the entire program,different functions may be accessing it.to exactly find whuch function is causing the error is not easy.



Ex:
In a class several students are there,every student is having its own data.one student data doesnt belong to another student data.

stu1 obj
id ,name,fees----->attributes
To access this variables we have to use function,this function is able to access only student1 data
stu2 obj
id ,name,fees----->attributes,to access this variables we have to use function,this function is able to access only student2 data

i.e  data is seperated into no of blocks called object called as object1,object 2.
object1 contains first student data,object2 contains 2nd student data.
total program is divided into several objects. thatwhy c++ is called as object oriented programming structure.

ex:supemarket bill 
ITEM		QTY		PRICE		AMOUNT
A			10		10			100
B			20		20			200

object1 contains A item details only. object2 contains B item details only.

in oop function and data both are link with one another.obj is having variables,these variables are accessible only within the fun associated with that object called as data hiding.
===================================================================================
object oriented programming features

1)class-->extension of c structure
structure is collection of  heterogenous datatype. structure allows us to store different types of variables at one place under one name.due to structure ,it is very easy to construct object oriented programming.
In oop will going to use class but that class derived/extension of c structure.

==>we can able to declared both primitive and derived datatype at one place using structure.
ex:
I want to store student related data at one place ..
 struct stu
{
int id;primitaive
int marks[6];//derived;
};
structure is constructed based on the user requirement  thats  why structure is called as user defined datatyes...

 struct stu
{
int id;primitaive
int marks[6];//derived;
}s1,s2;//structure variable stored on stack.

here  s1 stores 1 student data which is called as 1 object,now it is called object oriented .
structure are the foundations to create class in c++.

********disadvantage with structure*********
In c lang structure data is by default public.structure can be accessed from anywhere within the program. 
now to avoid this they have introduced class.

In c++ also, we are having structure.

Whats the difference between structure in C and structure in C++?
In C ,inside the structure we can declare only variables(member structure) . while in C++,we can declare member structure +member function

**In c++ also structure data is public.that means anyone can access data from anywhere,not secured.
that why they have introduced class in c++.
==========================================
In c++,the private data shld be accessed only with the member function of the same class.
struct  student
{
private/protected/public   datatype
datamembers
memberfunctions;
};
class student
{
private/protected/public   datatype
datamembers
memberfunctions;
};
using c++ structure ,we cannot define complex programs.But it is possible with the class concepts.

2)class uses the concept of inheritance but structure in c++ never uses the concept of inheritance

3)if we dont specify access specifier to a data member of a class by default all the members become private
3)in c++ structure by default all the members are public. by default structure data is public,class data is private. 
====================================================================================
when it is private what will happen?
class student
{
int id;//data members
public:
void get()
{
cout<<id;
}
}
get() is the member of the class thats why it is called as member function.
with the help of member function of a class we can access private data of a class.this data cannot be accessible from outside the class called as
data hiding. mostly achieve using private access specifier.
data hiding means insulating the data from external access. outsiders cannot access the data.only member function can access the data. 
ex:mobile ph

**class is a collection of data members and member function both are associated together into a single unit called as class is called encapsulation
encapsulation is a process of binding the data under member function together into a single unit  called class.

class provides data hiding,encapsulation(binding of data and function into a single unit called as class)

====================================================> In class, to access the data member first memory should be allocated,for this the object shld be created.

OBJECT

==>In structure,structure variable should be created to access the structure members.
==>In class,class variables are called as object.
object means it is a variable of type class.

class stu
{
};
stu s;//object  (memory allocation takes place)
==>this obj is created from this class, that why  class is called as blueprint(original copy) to construct the object(xerox copy). thatswhy
to create object we need class,thats  why class is a blueprint and object is the instance of the class.

==>object is the physical representation of a class.when object is created then only memory allocation takes place. class never allocates memory i.e logical representation.
==================================================
Difference between C structure and C ++ structure

1)collection of variables                     collection of variables and function
2)structure members are public       structure members are 											  											private,protected,public
-------------------------------------------------------------------------------
similarities between  C++ structure and class
1)userdefined                          				  userdefined
2)collection of variables & functions   		collection of 	variables & functions
3)members are private,protected,public		members are 																							private,protected,public
-------------------------------------------------------------------		
Differences between  C	++ structure and class
1)by default members are public 		by default members	are private
2) structure cannot be inherited		class can be inherited
3)used to build simple program			uses to build complex program,big project
not used in bank prog,reservation
============================================================================
class:
1)it is a userdefined datatypes because we r constructing a class based on primitive and derived datatype as per user requrimemt

2)collection of datamembers and member functions
3)it is a container because it contains members.
4)class provides the concept of encapsulation(binding of data memebrs and member function in a single unit),provides the concept of data hiding with private access specifier.
5)class is a blueprint to constructs the objects i.e it is a plan before constructing objectts
paper plan(class)--------->  real building(object)
6)class is a logical copy to create objects thats why class never occupies memory.

syntax:
class classname//class is keyword
{
access specifier://it specifies how it is going to access in our program
datamember;
member function;
};


1)private: whenever datamembers and membar functions are private, they cannot be accessed directly using objects.
class A
{
int a; //int a=100;//not allowed ,direct initilization not allowed
void get()
{
a=100;
cout<<a;//allowed
}//private data can be accessed within member function of same class
}
void main()
{
	obj;
obj.a=100;//not allowed whenever datamembers and member functions are private cannot be accessed directly using objects.
obj.get();//not allowed whenever datamembers and member functions are private cannot be accessed directly using objects.
   //. is called membership operator
} 


Therefore it is better to use one public member
class A
{
 int a; //int a=100;//not allowed ,direct initilization not allowed
public void get()
{
a=100;
cout<<a;//allowed
}
}
void main()
{
	obj;
obj.a=100;//not allowed whenever datamembers and member functions are private cannot be accessed directly using objects.
obj.get();// allowed 
   //. is called membership operator
} 

keypoint: when all the members are private,it is useless because to access the members,we have to declared object,where the object is generally declred and where members are called i.e from the main(),and main() is outside the class.thumb rule is private members are not visible outside the class.
called as datahiding...declared one public()

========================================================================================
class student
{
private:
int id;
char name;
float fee;
public:
void get()//inline function
{
cout<<"enter id and fee";

cin>>id>>fee;
cout<<"id = "<<id<<endl;
}
};
void main()
{

}




class student
{
private:
int id;
char name;
float fee;
public:
void get();
};
void student::get()//not inline ::scope operator
{
cout<<"enter id and fee";

cin>>id>>fee;
cout<<"id = "<<id<<endl;
cout<<"fee = "<<fee<<endl;
}
 
void main()
{
student stu;//mem allocated
stu.get();

}

=========================================================================
OBJECT
To access class members,we should define objects because when class is declared memory is not allocated,when object is defined then only memory is allocated.

ex: int a,b;
int is logical copy occupies no memory
a,b is physical copy ,memory gets allocated

ex:student stu;
stu.get();
stu.put();
thru object we can access class members...

Object is :
1) a variable of type class.
2)an instance/xerox copy of a class
3)it is physical representation of a class.
==========================================================================
Difference between procedural programming and object-oriented programming

1)In procedural programming, the program is divided into small parts called functions.	
In object-oriented programming, the program is divided into small parts called objects.

2)It is less secure than OOPs. 
Data hiding is possible in object-oriented programming . So, it is more secure than procedural programming.

3)There is no access specifier in procedural programming.
  Object-oriented programming has access specifiers like private, public, protected, etc.

4)In procedural programming, data moves freely within the system from one function to another.	
In OOP, objects can move and communicate with each other via member functions.

5)There is no code reusability present in procedural programming.
	It offers code reusability by using the feature of inheritance.
===============================================================================================
C++ Features

Popular
C++ can be the base language for many other programming languages that supports the feature of object-oriented programming. 

 Compiler based
C++ is a compiler-based programming language, which means no C++ program can be executed without compilation. C++ compiler is easily available, and it requires very little space for storage. First, we need to compile our program using a compiler, and then we can execute our program.

Machine Independent

Platform:
Platform consists of processor/cpu and operating system.

Platform Dependent ?
The code which can only be run on same platform on which it was compiled. Compiled code cannot run on any other platforms.such language is called as platform dependent .
ex: C,C++

Here, same machine code which is compiled on windows,cannot be run on Linux or MAC OS.
To run the code on MAC OS ,first we will have to compile in MAC OS.
so such languages do not support code portability.


A C++ executable is not platform-independent (compiled programs on Linux won’t run on Windows), however, they are machine-independent.  Suppose you have written a piece of code that can run on Linux/Windows/Mac OSx which makes the C++ Machine Independent but the executable file of the C++ cannot run on different operating systems.



Rich Library
C++ provides a lot of inbuilt functions that make the development fast. Following are the libraries used in C++ programming are:

<iostream>
<cmath>
<cstdlib>
<fstream>

 Memory Management
C++ provides very efficient management techniques. The various memory management operators help save the memory and improve the program's efficiency. These operators allocate and deallocate memory at run time. Some common memory management operators available C++ are new, delete etc.

Object-Oriented
In C++, object-oriented concepts like data hiding, encapsulation, and data abstraction can easily be implemented using keyword class, private, public, and protected access specifiers. Object-oriented makes development and maintenance easier.

====================================================================
Difference between C and C++

C was developed by Dennis Ritchie between the year 1969 and 1973 at AT&T Bell Labs.	
C++ was developed by Bjarne Stroustrup in 1979.

C does no support polymorphism, encapsulation, and inheritance which means that C does not support object oriented programming.	
C++ supports polymorphism, encapsulation, and inheritance because it is an object oriented programming language.

C supports procedural programming.	 
C++ supports object oriented programming paradigms.

Data and functions are separated in C because it is a procedural programming language.	
Data and functions are encapsulated together in form of an object in C++.

C does not support data hiding so not secured.	
C++ supports data hiding with the help of private access specifier,secured.

Functions in C are not defined inside structures.	
Functions can be used inside a structure in C++.

C does not support inheritance.	
C++ supports inheritance.

Instead of focusing on data, C focuses on functions.	
C++ focuses on data instead of focusing on method or procedure.

C provides malloc() and calloc() functions for dynamic memory allocation, and free() for memory de-allocation.	
C++ provides new operator for memory allocation and delete operator for memory de-allocation.

Direct support for exception handling is not supported by C.	
Exception handling is supported by C++.

scanf() and printf() functions are used for input/output in C.	
cin and cout are used for input/output in C++.

C structures don’t have access modifiers.	
C ++ structures have access modifiers.

C does not support reference variables.
C++ supports reference variables.
========================================================================
Types of Variables
There are three types of variables based on the scope of variables in C++
Local Variables
Instance Variables
Static Variables

local variable
the variable declared within the parenthesis of any function or any block is 
called as local variable.
These variables are created when entered into the block or the function is called and destroyed after exiting from the block or when the call returns from the function.
The scope of these variables exists only within the block in which the variable is declared. i.e. we can access this variable only within that block.
1)local variable cannot be declared globally 
2)Initialization of Local Variable is Mandatory.
3)scope and lifetime is within the block/within the function
4)storage is stack section

lifetime means how long the variable exists in the memory
scope means how long the variable or value of that variable can be accessed
in local variable lifetime depends on scope of variable

#include<stdio.h>
int main()
{
	int a=10;
	 printf("%d",a);//10
	 {
		 int a=100;
		 printf("%d",a);//100
	 }
	 printf("%d",a);//10
}

global variable
Declaring global variables: Global variables are usually declared outside of all of the functions and blocks, at the top of the program. They can be accessed from any portion of the program.
variable declared outside the function/block is called as global variable
initial value is 0
storage is data section
lifetime-->thru out the program
scope-->thru out the program

#include <iostream>
using namespace std;
void fun();
int a=10;
int main()
{
    cout<<"Hello World";
    fun();
}
void fun()
{

    cout<<a;
}
====================================================
Datatypes in c++

All variables use data type during declaration to restrict the type of data to be stored. Therefore, we can say that data types are used to tell the variables the type of data they can store. 
Whenever a variable is defined in C++, the compiler allocates some memory for that variable based on the data type with which it is declared. Every data type requires a different amount of memory. 

C++ supports the following data types:

Primary or Built-in or Fundamental data type:
These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc. 
Integer: The keyword used for integer data types is int. Integers typically require 4 bytes of memory space and range from -2147483648 to 2147483647.  
Character: Character data type is used for storing characters. The keyword used for the character data type is char. Characters typically require 1 byte of memory space and range from 0 to 255.  
Boolean: Boolean data type is used for storing Boolean or logical values. A Boolean variable can store either true or false. The keyword used for the Boolean data type is bool. 
Floating Point: Floating Point data type is used for storing single-precision floating-point values or decimal values. The keyword used for the floating-point data type is float. Float variables typically require 4 bytes of memory space. 
Double Floating Point: Double Floating Point data type is used for storing double-precision floating-point values or decimal values. The keyword used for the double floating-point data type is double. Double variables typically require 8 bytes of memory space. 
============================================================================
// C Program to implement Boolean data type
#include <stdbool.h>
int main()
{
      // Boolean data types declared
    bool a = true;
    bool b = false;
    printf("True : %d\n", a);
    printf("False : %d", b);
}
===========================================================================================
C++ I/O operation is using the stream concept. Stream is the sequence of bytes or flow of data. It makes the performance fast.
If bytes flow from main memory to device like printer, display screen, or a network connection, etc, this is called as output operation.
If bytes flow from device like printer, display screen, or a network connection, etc to main memory, this is called as input operation.

Header files available in C++ for Input/Output operations are: 
iostream: iostream stands for standard input-output stream. This header file contains definitions of objects like cin, cout, cerr, etc.


Different streams are used to represent different kinds of data flow.
==>istream is the class representing i/p stream,ostream is the class representing the o/p stream..to achiever the console input/output operations ,objects of these stream classes are used.
==>to manage input output operations predefined obj cin,cout..

Standard output stream (cout): Usually the standard output device is the display screen. The C++ cout statement is the instance of the ostream class. It is used to produce output on the standard output device which is usually the display screen. The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).
==>ostream class availabe in iostream.h thats why we have to include this headerfile


standard input stream (cin): Usually the input device in a computer is the keyboard. C++ cin statement is the instance of the class istream and is used to read input from the standard input device which is usually a keyboard. 
The extraction operator(>>) is used along with the object cin for reading inputs. The extraction operator extracts the data from the object cin which is entered using the keyboard.

#include <iostream>
using namespace std;
 
int main()
{
    int age;
 
    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: " << age;
 
    return 0;
}

Un-buffered standard error stream (cerr): The C++ cerr is the standard error stream that is used to output the errors. This is also an instance of the iostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error message immediately. It does not have any buffer to store the error message and display it later.

// C++ program to illustrate std::cerr 
  
#include <iostream> 
using namespace std; 
int main() 
{ 
  
    // This will print "Welcome to GfG" 
    // in the error window 
    cerr << "Welcome to GfG! :: cerr"; 
  
    // This will print "Welcome to GfG" 
    // in the output window 
    cout << "Welcome to GfG! :: cout"; 
    return 0; 
} 
In the above program the Output of Line 11 will display an error window as:
RunTime Error in CPP code:

Welcome to GfG! :: cerr
==========================================================================
\n-->back\ character   endl-->manipulator
takes 1 byte                   no byte
==============================================================================
Constants:

  const keywords is used to define the constant value that cannot change during program execution. It means once we declare a variable as the constant in a program, the variable's value will be fixed and never be changed. If we try to change the value of the const type variable, it shows an error message in the program.

Use const keywords with different parameters:

Use const variable
Use const with pointers
Use const pointer with variables
Use const with function arguments
Use const with class member functions
Use const with class data members
Use const with class objects

1. Const variable
It is a const variable used to define the variable values that never be changed during the execution of a program. And if we try to modify the value, it throws an error.

Syntax

const data_type variable_name;   
Example: Program to use the const keyword in C++

Let's create a program to demonstrate the use of the const keyword in the C++ programming language.

#include <iostream>  
#include <conio.h>  
using namespace std;  
int main ()  
{  
// declare the value of the const  
const int num = 25;  
num = num + 10;  
return 0;  
}  

Note: While the declaration of the const variable in the C++ programming, we need to assign the value of the defined variables at the same time; else, it shows the compile-time error.
Note:Constants cannot appear on LHS of assignment operator(=)

use of const:
In C, a variable cannot be used to declare the size of an array. The size has to be defined using #define. Whereas,in c++,the size of an array can be specified using a const variable.
ex:
const int SIZE=10;
char arr[SIZE];//valid in c++ but invalid in c


=========================================================================
The const keyword can be used in pointer declarations,to make the pointer or the data to which the pointer is pointing to 
or both as constant.

1) Constant pointer to an integer
To create a const pointer, we need to use the const keyword before the pointer's name. We cannot change the address of the const pointer after its initialization, which means the pointer will always point to the same address once the pointer is initialized as the const pointer.

Example: Program to demonstrate the constant pointer using the const keyword

#include <iostream>  
using namespace std;  
int main ()  
{  
// declaration of the integer variables  
int x = 10, y = 20;  
// use const keyword to make constant pointer  
int* const ptr = &x; //  const integer ptr variable point address to the variable x  
  
// ptr = &y; // now ptr cannot changed their address  
*ptr = 15; // ptr can only change the value  
cout << " The value of x: " << x << endl;  
cout << " The value of ptr: " << *ptr << endl;  
return 0;  
}   
Output

The value of x: 15
The value of ptr: 15
In the above program, pointer ptr pointing to the address of int variable 'x' and ptr variable cannot be changed their address once it initialized, but the pointer ptr can change the value of x.

2. Pointer to a constant integer
It means the pointer points to the value of a const variable that cannot change.

Declaration of the pointer to the constant variable:
const int* x;   
Here, x is a pointer that point to a const integer type variable, and we can declare a pointer to the constant variable as,

char const* y;  
In this case, y is a pointer to point a char type const variable.

Example: Program to use the const keyword with a pointer to constant variable

#include <iostream>  
using namespace std;  
int main ()  
{  
// declare integer variable  
int x = 7, y = 10;  
  const int *ptr = &x; // here x become constant variable  
cout << " \n The initial value of ptr:" << *ptr;  
cout << " \n The value of x: " <<x;  
  
// *ptr = 15; It is invalid; we cannot directly assign a value to the ptr variable  
ptr = &y; //  here ptr variable pointing to the non const address 'y'  
  
cout << " \n The value of y: " <<y;  
cout << " \n The value of ptr:" << *ptr;   
return 0;  
}  

The initial value of ptr: 7
The value of x: 7
The value of y: 10
The value of ptr: 10
In the above program, pointer ptr points to the const int (x) variable, and the value of the int (x) variable can never change.

3)Constant pointer to a Constant Integer

int num1=10,num2=20;
const int *const ptr=&num1;
//ptr is a constant pointer to a constant integer

In this case,neither the address in the pointer be changed nor the contents at that address can be modified using that
pointer.

ptr=&num2;//not allowed
(*ptr)++;//not allowed
*ptr=20;//not allowed


Constant Objects

==>To create constant object use const keyword.

==>When we create an object using the const keyword, the value of data members can never change till the life of the object in a program. The const objects are also known as the read-only objects.

==>constant objects invokes only constant member function(use default constructor). But a non constant object can invoke both i.e constant  as well as non constant function.

Syntax
const class_name obj_name;  
ex: const Complex c1(1,2);



Example: Let's create a program to use the constant objects in the C++ programming language.

#include <iostream>  
using namespace std;  
class ABC  
{  
public:  
int A;    
ABC ()  
{  
A = 10; 
}  
};  
int main ()  
{  
const ABC obj;  
cout << " The value of A: " << obj.A << endl;  
// obj.A = 20; // It returns a compile time error  
return 0;  
}  
Output

The value of A: 10
In the above program, we assign the value of A is 10, the compiler prints "The value of A: 10", and when we assign the value of A to 20, the object of the class returns the compile time error in the program.
=================================================================================================
 Constant Member function 

==>To make a member function constant,use const keyword. 
==>We can create a constant member function of a class by adding the const keyword after the name of the member function.
Syntax

return_type mem_fun() const  
{  
}   
In the above syntax, mem_fun() is a member function of a class, and the const keyword is used after the name of the member function to make it constant.

==>Those functions that do not alter the values of the data members, or the functions that are 'read only' can be made constant.

==>If a function is declared as const and the implementation of that function tries to change the object by changing the value of any of its members,the compiler flags an error.

Example: Program to use the const keyword with the member function of class
class ABC  
{  
 
public:  
int A;  
void fun () const  
{  
 A = 10; // it shows compile time error  
}  
};  
  
int main ()  
{  
    ABC obj;  
    obj.fun();  
    return 0;  
}  
Output
The above code throws a compilation error because the fun() function is a const member function of class ABC, and we are trying to assign a value to its data member 'x' that returns an error.

===================================================================
// Constant member function defined outside the class
#include <iostream>
using namespace std;
 
class Demo {
    int x;
 
public:
    void set_data(int);
    int get_data() const;
};
 void Demo::set_data(int a) 
{
 x = a;
 }
int Demo::get_data() const 
{
 return x; 
}
main()
{
    Demo d;
    d.set_data(10);
    cout << d.get_data();
 
    return 0;
}

Output
10

==================================================================================
// C++ program to demonstrate that const functions can be  called by non const objects
 
#include <iostream>
using namespace std;
 
class Test {
    int value;
 public:
    Test(int v = 0)
 { value = v; 
}
     int getValue() const
 { return value; 
}
};
 
int main()
{
    Test t(20);
    cout << t.getValue();
    return 0;
}
Output
20
================================================================
// C++ program that demonstrate that non-const functions can not be called by const objects
 #include <iostream>
using namespace std;
 class Test {
    int value;
 
public:
    Test(int v = 0) { value = v; }
 
    // non const member function
    int getValue() { return value; }
};
 int main()
{
    // const object
    const Test t;
    cout << t.getValue();
    return 0;
}
//ERROR
=====================================================================
// Demonstration of constant object show that constant object can only call const member function
 
#include <iostream>
using namespace std;
class Demo {
    int value;
 
public:
    Demo(int v = 0) { value = v; }
    void showMessage()
    {
        cout << "Hello World  Inside showMessage() Function";
    }
     // const member function
    void display() const
    {
        cout << "Hello world ";
    }
};
int main()
{
    
    const Demo d1;
     d1.showMessage();
    d1.display();

}
================================================================
Constant function Arguments
We can declare the function arguments as the constant argument using the const keyword. And if the value of function arguments is declared const, it does not allow changing its value.

Syntax

return_type fun_name (const int x)  
{  
}   
The fun_name() function contains a const argument whose value can never be changed once it defines in the program.

Example: Let's consider an example to use the const keyword with function arguments in the C++ programming language.

#include <iostream>  
using namespace std;  
int Test (const int num)  
{  
// if we change the value of the const argument, it throws an error.  
// num = num + 10;  
cout << " The value of num: " << num << endl;  
return 0;  
}  
int main ()  
{  
// call function  
Test(5);  
}  
Output

The value of num: 5
In the above program, the num is a constant argument, and we cannot update the num value. If we update the value of the num variable, it returns the compile-time error.

================================================================================

FAQ on constant object:
Q1. Can const objects of a class call non-const member functions?
Answer:
No,an object declared as const cannot be modified and hence, can invoke only const member functions as these functions ensure not to modify the object.

Q2. Can non-const objects of a class call const member function?
Answer:
When a function is declared as const, it can be called on any type of object.
=============================================================================

imp:
Note: A constant member function can be overloaded with a function of same name.
ex:
void func() const;
void func();

class temp
{
public:
	void show();
	void show() const;
};
void temp::show()
{
	cout<<"in non constant show";
}
void temp::show()const
{
	cout<<"in  constant show";
}
int main()
{
	 temp t;
	t.show();
}

In this case, constness of the object will determoine which functions should  be invoked.



===============================================================================



Constructor:

Sequence after creation of object
1)memory  allocated by the compiler 
2)constructor invocation by compiler
3)memory initialization by constructor

==>Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of newly created objects.
==>The constructor in C++ has the same name as the class. It constructs the values i.e. provides data for the object which is why it is known as constructor.
==>Constructor do not return value, hence they do not have a return type not even void.
==>==>Constructor cannot be constant member function.
 

The prototype of the constructor looks like 
     <class-name> (list-of-parameters);

Constructor can be defined inside the class declaration or outside the class declaration
a.    Syntax for defining the constructor within the class

        <class-name>(list-of-parameters)
        {
                  //constructor definition
        }

b.    Syntax for defining the constructor outside the class

        <class-name>: :<class-name>(list-of-parameters)
        {
                //constructor definition
        }

 Types of Constructors
Default Constructors: 
==>The constructor which doesn’t take any argument. It has no parameters. It is also called as no argument constructor.
==>If constructor is not defined in the source code by the programmer, then the compiler defined the default constructor implicitly during compilation and initilizes data members of class to garbage values.
==>There can be only one no argument(default) constructor per class.



#include<iostream>
using namespace std;
class MyDate
{
	int dd,mm,yy;
public:
h	MyDate();
	void display();
	MyDate(int,int,int);
};
void MyDate::display()
{
	cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
MyDate::MyDate()
{
	cout<<"in default constructor of mydate()\n";
	dd=19;
	mm=3;
	yy=24;
}
MyDate::MyDate(int d,int m,int y)
{
	cout<<"in par constructor of mydate class\n";
	dd=d;
	mm=m;
	yy=y;
}
int main()
{
	MyDate d1;
	d1.display();
	MyDate d2(20,3,24);
	d2.display();
}

======================================================
#include<iostream>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;
    public:
    student()
    {
        cout<<"Enter the RollNo:";
        cin>>rno;
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Fee:";   
        cin>>fee;
    }   
      void display()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
};
 int main()
{
    student s;  //constructor gets called automatically when we create the object of the class
    s.display();
    return 0;
}
====================================================================================
2. Parameterized Constructors: 

==>A constructor with parameters is called as parametrized constructor.
 ==> It is used to provide different values to distinct objects.
==>If Parametrized constructor is not defined in the source code by the programmer, then the compiler cannot defined the default copy of Parametrized constructor implicitly during compilation.
==>Constructors can be overloaded with different signatures.
Note: when the parameterized constructor is defined and no default constructor is defined explicitly, the compiler will not implicitly call the default constructor and hence creating a simple object as
Complex c;
Will flash an error

class student
{
    int rno;
    char name[50];
    double fee;
 
      public:
    student(int,char[],double);
    void display();
     
};
 
student::student(int no,char n[],double f)
{
    rno=no;
    strcpy(name,n);
    fee=f;
}   
 
void student::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
     
int main()
{
    student s(1001,"Ram",10000);
    s.display();
    return 0;
}

---------------------------------------------------------------------------------------

Excercise 1:
#include <iostream>
using namespace std;
 class Point {
    Point() { cout << "Constructor called"; }
};
int main()
{
    Point t1;
    return 0;
}

Excercise 2:
#include<iostream>
using namespace std;
class Point {
public:
    Point() { cout << "Constructor called"; }
};
int main()
{
   Point t1, *t2;
   return 0;
}



**************************************************************************
This Keyword

Each object gets its own copy of data members and all objects share a single copy of member functions.
Then now question is that if only one copy of each member function exists and is used by multiple objects, how are the proper data members are accessed and updated?
The compiler supplies an implicit pointer along with the names of the functions as 'this'.

==>whenever an object invokes member function,the address of that object is passed implicitly to the function as a hidden parameter . this pointer holds the address of the current object that invokes the fuction.
==>It is a constant pointer. The type of this pointer for the object cdate d1 will  be
cdate * const this; //it is a constant pointer to cdate object.
==>This pointer is used to retrieve objects address. In c to find out variable address,we use & symbol.in c++,to know current object address, this pointer is used.

==>this pointer is use to distinguish our data members from local variables when both are declared with the same name.To identify datamembers this pointer is used.
==>every non static members function of c++ is having one hidden parameter called as this. static members function never contains this.


Let's see the example of this keyword in C++ that refers to the fields of current class.
#include<iostream>
using namespace std;
class test
{
int a,b;
public:
void show()
{
a=10;
b=20;
cout<<"obj add"<<this<<endl;//print current class obj adddress
cout<<"a" <<this->a<<endl;
cout<<"b"<<this->b<<endl;
}
};
int main()
{
test t;
cout<<&t<<endl;
t.show();
}
========================

#include<iostream>
using namespace std;
class test
{
int a,b;
public:
void show(int a,int b)
{
	this->a=a;
	(*this).b=b;
//a=a;//this->a //(*this).a=a;(pointer to member)
//b=b;//this->b//(*this).b=b;

}
void display()
{
cout<<a<<b;
}
};
int main()
{
test t;
t.show(10,20);
t.display();
}

-----------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
	void show();
	date(int,int,int);
	date();
};
date::date()
{
	this->dd=this->mm=this->yy=0;
}
 date::date(int dd,int mm,int yy)
{
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
}
 void date::show()
 {
	 cout<<"date is "<<this->dd<<"/"<<this->mm<<"/"<<yy<<endl;
 }
 int main()
{
	date d1(1,1,1);
	d1.show();
	date d2(2,2,2);
	d2.show();
}
=================================================================










STATIC  VARIABLE
==>sometimes only one copy of a variable is required between all the objects of the same class,rather than having each object maintaining its own copy.in such case,that data members is declared as static.only one copy of static variable is created on data section and that copy is shared between all the object of the same class.Therefore static variable is called as class variable.
==>static data members are not part of the object,they are stored seperately.
==>Variable declared with static keyword are called as static variable.
==> Static Variable stored on data section
==>changes to the static variable affects all the instance of the same class.
==>It is initialized before any object of this class is created, even before the main starts.
==>Static members are only declared in a class declaration, not defined. They must be explicitly defined outside the class using the scope resolution operator.

#include<iostream>
using namespace std;
class Demo
{
	int a;
public:
	static int cnt;
public:
	Demo()
	{
		a=10;
		cnt++;
	}
	Demo(int a)
	{
		this->a=a;
		cnt++;
	}
};
//datatype classname::static variable nam=value;
//int Demo::cnt;//memory allocation takes place
int main()
{
		Demo d;
		Demo d1(10);
		cout<<"no of obj created is "<<Demo::cnt;
}

Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call. This is useful for i application where the previous state of function needs to be stored. 
#include <iostream>
using namespace std;
 void demo()
{
    static int count = 0;
    cout << count << " ";
     count++;
}
 int main()
{
    for (int i = 0; i < 5; i++)
        demo();
    return 0;
}

==>static variable is used to count the number of object created.

STATIC FUNCTION
1)function declare with static keyword is called as static function
2)static function is invoked by class name
3)syntax:
 classname::function name();
Memory efficient: Now we don't need to create instance for accessing the static members, so it saves memory.
4)This pointer is not passed to the static function.therefore static mem fun cannot access non static data member.
5)static function access only static data but a non static function can access both static as well as non static

Accessing static data member
i)if the static data member is public in the class then it can be accessed outside the class using classname::staticmembers;
2)if it is a private variable then it can be accessed either through non static member function and static member function.

=============================================================================
The reason we need Static member function:
1)Static members are used to store information that is shared by all objects in a class. 
2)keep track of the quantity of newly generated objects of a specific class type using a static data member as a counter. 

==================================================================================
Ex:
It is used to refer the common property of all objects such as rateOfInterest in case of Account, companyName in case of Employee etc.


#include <iostream>  
using namespace std;  
#include<string.h>
class Account {  
   public:  
       int accno;     
       char name[10];  
       static float rateOfInterest;   
       Account(int accno, char* name)   
        {    
             this->accno = accno;    
           strcpy(this->name,name);   
        }    
       void display()    
        {    
            cout<<accno<<"   "<<name<<"   "<<rateOfInterest<<endl;   
        }    
};  
float Account::rateOfInterest=6.6;  
int main() {  
Account a1(201, "Sanjay"); 
    Account a2(202, "Nakul");  
    a1.display();    
    a2.display();    
    return 0;  
} 

===========================================================================================
C++ static field example: Counting Objects

#include <iostream>  
using namespace std;  
class complex
{
	int real,img;
	public:	static int cnt;
	public:
		complex()
		{
			cout<<"default is invoked\n";
			real=5;
			img=5;
			cnt++;
		}
		complex(int real,int img)
		{
			cout<<"parametrized is invoked\n";
			this->real=real;
			this->img=img;
			cnt++;	
		}
		static int getcnt()
		{
			return cnt;
		}
};
//datatype classname::staticvar_name=value;
int complex::cnt=0;//memory alloaction takes place
int main()
{
	complex c1;
	complex c2(10,10);
	cout<<"no of obj created is   "<<complex::getcnt();
	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
	cout<<complex::cnt;//possible only if data member is public
}
 ================================================
Excercise 1:
#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:static const int cnt;
	private:static const int cnt1;
	public:
		complex()
		{
			cout<<"default is invoked\n";
			real=5;
			img=5;
		//	cnt++;//not allowed
		}
		static int getcnt()
		{
			return cnt1;
		}
};
const int complex::cnt=5;//memory alloaction takes place
const int complex::cnt1=10;
int main()
{
	complex c1;
	cout<<"no of obj created is   "<<complex::getcnt();
	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
	cout<<complex::cnt;
	//cout<<complex::cnt1;

}

Excercise 2:
#include <iostream>
using namespace std;

class Test
{
	static int x;
public:
	Test() { x++; }
	static int getX() {return x;}
};
int Test::x;
int main()
{
	cout << Test::getX() << " ";
}

===================================================================
Excercise 3:
#include <iostream>
using namespace std;
 
class Player
{
private:
    int id;
    static int next_id;
public:
    int getID() { return id; }
    Player()  {  id = next_id++; }
};
int Player::next_id = 1;
 
int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.getID() << " ";
  cout << p2.getID() << " ";
  cout << p3.getID();
  return 0;
}

#include<iostream>
using namespace std;
 
class Player
{
private:
    int id;
public:  static int next_id;
public:
    int getID()
	{
		return id; 
	}
    Player() 
	{ 
		id = next_id++;
	}
};
int Player::next_id = 1;
 
int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.next_id  << " ";
  cout << p2.next_id  << " ";
  cout << p3.next_id ;
}



Excercise 4:
Which of the following is true?
a)Static methods cannot be overloaded.
b)Static data members can only be accessed by static methods.
c)Non-static data members can be accessed by static methods.
d)Static methods can only access static members (data and methods)

=============================================================================
Some interesting facts about static member functions in C++

1)Keyword virtual cannot be used with static member functions
2)static member functions cannot have the same name as a non static function that has same argument types within the class.
3)A static member function can not be declared with const.
#include<iostream>
class Test {      
   static void fun() const 
   { // compiler error
     return;
   }
};
  int main()
{
   
}

4)'this' keyword is unavailable for static member functions
#include <iostream>
using namespace std;

class Test
{
     int x;
public:
	Test() {
	    x=10; }
	static int getX() 
	{
	    return this->x;
	}
	 
};
int Test::x;
int main()
{
	cout << Test::getX() << " ";
}

==========================================




Excercise 4:

#include<iostream>
using namespace std;
class temp
{
	public:int z;
	static int y;
public:
	temp();
	void show();
	void display();
};
int x;
int temp::y;
void temp::show()
{
	y++;
}
temp::temp()
{
	int z=200;
	x=100;
	cout<<"value of z is "<<z<<endl;
}
void temp::display()
{
	cout<<"value of x is "<<x<<endl;
	cout<<"value of y is  "<<y<<endl;
}
int main()
{
	temp t;
	t.show();
	t.show();
	t.display();
	cout<<t.z;
}

Excercise 5:

#include<iostream>
using namespace std;
class item
{
public:
	static int x;
	int number;
public:
	void getdata(int a)
	{
		number=a;
		number++;
		x++;
	}
	void getcount()
	{
		x=10;
		cout<<"value is "<<x<<endl;
	}
	void getcount_1()
	{
		x++;
		cout<<"value is  "<<number<<endl;
		cout<<"value is "<<x<<endl;
	}
};
int number=9;
int item::x;
int main()
{
	item a;
	a.getcount();
	a.getdata(100);
	a.getcount_1();
	cout<<number<<endl;
	cout<<a.number;
}
==============================================================
Default Arguments
==>A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. 

==>During the calling of function, the values are copied from left to right.

#include <iostream>  
using namespace std;  
 void add(int=1,int=2,int=3,int=4);
int main() 
{
	add();
	add(10);
	add(10,20);
	add(10,20,30);  
    add(10,20,30,40);
    return 0;  
} 
void add(int a,int b,int c,int d)
{
	cout<<a+b+c+d<<endl;
 } 


#include <iostream>
using namespace std;
void display(char = '*', int = 39);
int main() {
    

    cout << "No argument passed: ";
    display(); 
    
    cout << "First argument passed: ";
    display('#'); 
    
    cout << "Both arguments passed: ";
    display('$', 50); 

    return 0;
}
void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}



#include<iostream>
using namespace std;
void func(int a, bool flag = true)
{
		if (flag == true ) 
		{
			cout<< "Flag is true. a = " << a;
      	        }
		else
		{
			cout<< "Flag is false. a = " << a;
        	}
}
int main()
{
	func(200, false);
}







Keypoints:Default arguments are different from constant arguments as constant arguments can’t be changed whereas default arguments can be overwritten if required.



==============================================
If we are defining the default arguments in the function definition instead of the function prototype, then the function must be defined before the function call.

#include <iostream>
using namespace std;

int sum(int x, int y, int z = 5, int w = 10) 
{
    return (x + y + z + w);
}
int main()
{
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 25, 30) << endl;
   
}

=======================================================
points to remember

1)Once we provide a default value for a parameter, all subsequent parameters must also have default values. For example,
// Invalid
void add(int a, int b = 3, int c, int d);

// Invalid
void add(int a, int b = 3, int c, int d = 4);

// Valid
void add(int a, int c, int b = 3, int d = 4);

2)Default values shld be given from trailing ends.i.e from right to left
void add(int a,int b=3,int c=3,int d=4);//valid compulsary we have to pass 1 argument from function call
void add(int a=4,int b=3,int c=3,int d);//invalid
void add(int a=1,int b,int c=3,int d=4);//invalid

===========================================================================================
Advantages of Default Arguments:

Default arguments are useful when we want to increase the capabilities of an existing function as we can do it just by adding another default argument to the function.
It helps in reducing the size of a program.
It provides a simple and effective programming approach.

=========================================================================
Function Overloading

==>In C++, We can have more than one constructor in a class with same name, as long as each has a different list of signatures.This concept is known as Constructor Overloading 
==>Two or more function having same function name but different signatures is called as function overloading.
==> In Function Overloading Function name should be the same and the arguments should be different. 
==>The criteria to overload a constructor is to differ the number of arguments or the type of arguments. We dont consider return type as a criteria to overload a constructor.

Why Function Overloading?
Suppose you have to perform addition of the given numbers but there can be any number of arguments, if you write the function such as a(int,int) for two parameters, and b(int,int,int) for three parameters then it may be difficult for you to understand the behavior of the function because its name differs.
 
The parameters should follow any one or more than one of the following conditions for Function overloading:

1)Parameters should have a different type
add(int a, int b)
add(double a, double b)

#include <iostream>
using namespace std;
 void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
 int main()
{
    add(10, 2);
    add(5.3, 6.2);
 }

2)Parameters should have a different number 
add(int a, int b)
add(int a, int b, int c)

#include <iostream>
using namespace std;
 void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 void add(int a, int b, int c)
{
    cout << endl << "sum = " << (a + b + c);
}
int main()
{
    add(10, 2);
    add(5, 6, 4);
  }

3)Parameters should have a different sequence of parameters.
add(int a, double b)
add(double a, int b)

#include<iostream>
using namespace std;
 void add(int a, double b)
{
    cout<<"sum = "<<(a+b);
} 
 void  add(double a, int b)
{
    cout<<endl<<"sum = "<<(a+b);
} 
 int main()
{
    add(10,2.5);
    add(5.5,6);
 }

------------------------------------
How does Function Overloading work?
Exact match:- (Function name and Parameter)
If a not exact match is found:–
               ->Char are promoted to an int.

               ->Float is promoted to double

If no match is found:
               ->C++ tries to find a match through the standard conversion.

ELSE ERROR

===============================================================
Passing and Returning Objects in C++
In C++ we can pass class’s objects as arguments and also return them from a function the same way we pass and return other variables.

Passing an Object as argument
To pass an object as an argument we write the object name as the argument while calling the function the same way we do it for other variables.
Syntax:  
function_name(object_name);

Returning Object as argument
Syntax: 
object = return object_name;



#include<iostream>
using namespace std;
class temp
{
	 int a;
public:
	void get();
	temp add(temp & b1) //This function will take object as arguments and  return object
	{
		temp aobj3;
		aobj3.a= this->a +   b1.a;
		return aobj3;
	}
	void show()
	{
		cout<<"value is   "<<a;
	}
};
void temp:: get()
	{
		cin>>this->a;
	}
int main()
{
	temp aobj1,aobj2;
	aobj1.get();
	aobj2.get();
	temp aobj4=aobj1.add(aobj2);
	aobj4.show();
}

Exercise 1:
Which of the following is true about this pointer?
(A) It is passed as a hidden argument to all function calls
(B) It is passed as a hidden argument to all non-static function calls
(C) It is passed as a hidden argument to all static functions
(D) None of the above

Answer: (B)

===========================================================================================
Array of Objects

==>In C++, an array of objects is a collection of objects of the same class type that are stored in contiguous memory locations. Since each item in the array is an instance of the class, each one's member variables can have unique value. This makes it possible to manage and handles numerous objects by storing them in a single data structure and giving them similar properties and behaviours.

syntax:
classname arrayname[arraysize];

==>classname is the name of the class that the objects belong to
==>arrayname is the name of the array of objects
==>arraysize is the number of objects in the array .

Example:
Storing more than one Employee data. Let’s assume there is an array of objects for storing 30 employee's data.

#include<iostream>
using namespace std;
class Employee
{
  int id;
  char name[30];
  public:
    void getdata();
    void putdata();
};
void Employee::getdata()
{
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
}
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}
int main()
{
  // This is an array of objects having maximum limit of 30 Employees
  Employee emp[30];
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    emp[i].getdata();
   
  cout << "Employee Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    emp[i].putdata();
}

#include<iostream>
using namespace std;
class Employee
{
  int id;
  char name[30];
  public:
    void getdata();
    void putdata();
};
void Employee::getdata()
{
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
}
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}
int main()
{
  // This is an array of objects having maximum limit of 30 Employees
  Employee emp[30];
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    (emp+i)->getdata();
   
  cout << "Employee Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    (emp+i)->putdata();



	
	getchar();
	getchar();
    return 0; 
    return 0;
}







	
	











Advantages of Array of Objects: 

==>The array of objects represent storing multiple objects in a single name.
==>In an array of objects, the data can be accessed randomly by using the index number.
==>Reduce the time and memory by storing the data in a single variable.

#include<iostream>
using namespace std;
class item
{
  char name[30];
  int price;
  public:
  void getItem();
  void printItem();
};
 void item::getitem()
{
  cout << "Item Name = ";
  cin >> name;
  cout << "Price = ";
  cin >> price;   
}
 void item ::printitem()
{
  cout << "Name : " << name <<
          "\n";
  cout << "Price : " << price <<
          "\n";
}
 const int size = 3;
 int main()
{
  item t[size];
  for(int i = 0; i < size; i++)
  {
    cout << "Item  : " <<     (i + 1) << "\n";
    t[i].getitem();
  }
  for(int i = 0; i < size; i++)
  {
    cout << "Item Details : " <<
             (i + 1) << "\n";
    t[i].printitem();
  }
}

================================================================

Memory Managment in c++:

What is Memory Management?
Memory management is a process of managing computer memory, assigning the memory space to the programs to improve the overall system performance.

Why is memory management required?
As we know that arrays store the homogeneous data, so most of the time, memory is allocated to the array at the declaration time. Sometimes the situation arises when the exact memory is not determined until runtime. To avoid such a situation, we declare an array with a maximum size, but some memory will be unused. To avoid the wastage of memory, we use the new operator to allocate the memory dynamically at the run time.

==>A typical memory representation of a C++ program consists of the following sections.This would help in understanding the part of the memory where ,which types of variables are stored.

==>Memory is divided into 2 segments
1)code segment:
The code segment where the compiled code of the program resides.It contains set of instructions in a program that
are executed step by step.

2)Data segment: Data segment is divided into three sections
a)stack section:where memory is allocated for local variables.
b)heap section:provides storage for variables that are dynamically allocated memory.
c)data section:provides  the storage for global and static variables.

Memory Management Operators
In C language, we use the malloc() or calloc() functions to allocate the memory dynamically at run time, and free() function is used to deallocate the dynamically allocated memory. C++ also supports these functions, but C++ also defines unary operators such as new and delete to perform the same tasks, i.e., allocating and freeing the memory.

==>Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. Dynamically allocated memory is allocated on Heap
==>The most important use is the flexibility provided to programmers. We are free to allocate and deallocate memory whenever we need it and whenever we don’t need it anymore

Difference between Static Memory Allocation and				 Dynamic Memory Allocation

1	Static Memory Allocation is done before program execution.	Dynamic Memory Allocation is done during program execution.
2	It uses stack for managing the static allocation of memory		It uses heap for managing the dynamic allocation of memory
3	In Static Memory Allocation, there is no memory re-usability	In Dynamic Memory Allocation, there is 															memory re-	usability and memory can 															be freed when not required

4	In static memory allocation, once the memory is allocated, the memory size can not change.	In dynamic memory 								allocation, when memory is allocated  according to programmers req

5	In this memory allocation scheme, execution is faster than dynamic memory allocation.
	In this memory allocationscheme, execution is slower than static memory allocation.

6	In this memory is allocated at compile time.	In this memory is allocated at run time.
7	In this allocated memory remains from start to end of the program.	In this allocated memory can be released at any time during the program.

new and delete operators:

==>You can allocate memory at run time within the heap for the variable of a given type using a special operator in C++ which returns the address of the space allocated. This operator is called new operator.
If you are not in need of dynamically allocated memory anymore, you can use delete operator, which de-allocates memory previously allocated by new operator.

==>In c++,memory is allocated dynamically through the use of new operator and memory is free using delete operator.

// declare an int pointer
int* pointVar;
// dynamically allocate memory using the new keyword 
pointVar = new int;
// assign value to allocated memory
*pointVar = 45;

Here, we have dynamically allocated memory for an int variable using the new operator.
 we have used the pointer pointVar to allocate the memory dynamically on heap section. This is because the new operator returns the address of the memory location implicitly.


delete Operator
Once we no longer need to use a variable that we have declared dynamically, we can deallocate the memory occupied by the variable.
For this, the delete operator is used. It returns the memory to the operating system. This is known as memory deallocation.
 This operator is mainly used either for those pointers which are allocated using a new operator;


The syntax for this operator is
delete pointerVariable;



For example, if we allocate the memory to the pointer using the new operator, and now we want to delete it. To delete the pointer, we use the following statement:

delete p;  

To delete the array, we use the statement as given below:
delete [] p;  

Some important points related to delete operator are:

1)It is either used to delete the array or non-array objects which are allocated by using the new keyword.
2)To delete the array or non-array object, we use delete[] and delete operator, respectively.
3)The new keyword allocated the memory in a heap; therefore, we can say that the delete operator always de-allocates the memory from the heap
4)It does not destroy the pointer, but the value or the memory block, which is pointed by the pointer is destroyed.


Example 1: C++ Dynamic Memory Allocation
#include <iostream>
using namespace std;
int main() {
  // declare an int pointer
  int* pointInt;
  // declare a float pointer
  float* pointFloat;
  // dynamically allocate memory
  pointInt = new int;
  pointFloat = new float;
  // assigning value to the memory
  *pointInt = 45;
  *pointFloat = 45.45f;
  cout << *pointInt << endl;
  cout << *pointFloat << endl;
int *p = new int(45);  
cout<<*p;
  // deallocate the memory
  delete pointInt;
  delete pointFloat;
delete p;
}

Output

45
45.45

Dynamic Memory Allocation for Arrays:

Consider you want to allocate memory for an array of characters, i.e. string of 100 characters. 
char * str=new char[n];
==>The above statement allocates memory for 100 characters on the heap and stores the address of the first memory location in the character pointer str. To allocate memory for more than one character, subscript is used to indicate the size.
==>memory is allocated for more than one character.In order to free all the space that has been allocated,subscript notation is used in delete statement.
delete[] str;

int main()
{
	char * str;
	cin>>n;
	str=new char[n];
	cin>>str;
	cout<<str;
	delete[] str;
}
 
Note: if [] is used with new, it should also be used with delete, otherwise it leads to memory leakage problem i.e only first element whose address is contained in the pointer is de-allocated resulting in the problem of memory leakage.

// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  int* ptr;
    
  // memory allocation of num number of floats
  ptr = new int[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}

===========================================================

//accept no of subjects and name from the user dynamically and accept marks for each subject and display average and name of the student





Default Arguments
==>A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. 

==>During the calling of function, the values are copied from left to right.

#include <iostream>  
using namespace std;  
 void add(int=1,int=2,int=3,int=4);
int main() 
{
	add();
	add(10);
	add(10,20);
	add(10,20,30);  
    add(10,20,30,40);
    return 0;  
} 
void add(int a,int b,int c,int d)
{
	cout<<a+b+c+d<<endl;
 } 


#include <iostream>
using namespace std;
void display(char = '*', int = 39);
int main() {
    

    cout << "No argument passed: ";
    display(); 
    
    cout << "First argument passed: ";
    display('#'); 
    
    cout << "Both arguments passed: ";
    display('$', 50); 

    return 0;
}
void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}



#include<iostream>
using namespace std;
void func(int a, bool flag = true)
{
		if (flag == true ) 
		{
			cout<< "Flag is true. a = " << a;
      	        }
		else
		{
			cout<< "Flag is false. a = " << a;
        	}
}
int main()
{
	func(200, false);
}







Keypoints:Default arguments are different from constant arguments as constant arguments can’t be changed whereas default arguments can be overwritten if required.



==============================================
If we are defining the default arguments in the function definition instead of the function prototype, then the function must be defined before the function call.

#include <iostream>
using namespace std;

int sum(int x, int y, int z = 5, int w = 10) 
{
    return (x + y + z + w);
}
int main()
{
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 25, 30) << endl;
   
}

=======================================================
points to remember

1)Once we provide a default value for a parameter, all subsequent parameters must also have default values. For example,
// Invalid
void add(int a, int b = 3, int c, int d);

// Invalid
void add(int a, int b = 3, int c, int d = 4);

// Valid
void add(int a, int c, int b = 3, int d = 4);

2)Default values shld be given from trailing ends.i.e from right to left
void add(int a,int b=3,int c=3,int d=4);//valid compulsary we have to pass 1 argument from function call
void add(int a=4,int b=3,int c=3,int d);//invalid
void add(int a=1,int b,int c=3,int d=4);//invalid

===========================================================================================
Advantages of Default Arguments:

Default arguments are useful when we want to increase the capabilities of an existing function as we can do it just by adding another default argument to the function.
It helps in reducing the size of a program.
It provides a simple and effective programming approach.

=========================================================================
Function Overloading

==>In C++, We can have more than one constructor in a class with same name, as long as each has a different list of signatures.This concept is known as Constructor Overloading 
==>Two or more function having same function name but different signatures is called as function overloading.
==> In Function Overloading Function name should be the same and the arguments should be different. 
==>The criteria to overload a constructor is to differ the number of arguments or the type of arguments. We dont consider return type as a criteria to overload a constructor.

Why Function Overloading?
Suppose you have to perform addition of the given numbers but there can be any number of arguments, if you write the function such as a(int,int) for two parameters, and b(int,int,int) for three parameters then it may be difficult for you to understand the behavior of the function because its name differs.
 
The parameters should follow any one or more than one of the following conditions for Function overloading:

1)Parameters should have a different type
add(int a, int b)
add(double a, double b)

#include <iostream>
using namespace std;
 void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
 int main()
{
    add(10, 2);
    add(5.3, 6.2);
 }

2)Parameters should have a different number 
add(int a, int b)
add(int a, int b, int c)

#include <iostream>
using namespace std;
 void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 void add(int a, int b, int c)
{
    cout << endl << "sum = " << (a + b + c);
}
int main()
{
    add(10, 2);
    add(5, 6, 4);
  }

3)Parameters should have a different sequence of parameters.
add(int a, double b)
add(double a, int b)

#include<iostream>
using namespace std;
 void add(int a, double b)
{
    cout<<"sum = "<<(a+b);
} 
 void  add(double a, int b)
{
    cout<<endl<<"sum = "<<(a+b);
} 
 int main()
{
    add(10,2.5);
    add(5.5,6);
 }

------------------------------------
How does Function Overloading work?
Exact match:- (Function name and Parameter)
If a not exact match is found:–
               ->Char are promoted to an int.

               ->Float is promoted to double

If no match is found:
               ->C++ tries to find a match through the standard conversion.

ELSE ERROR

===============================================================
Passing and Returning Objects in C++
In C++ we can pass class’s objects as arguments and also return them from a function the same way we pass and return other variables.

Passing an Object as argument
To pass an object as an argument we write the object name as the argument while calling the function the same way we do it for other variables.
Syntax:  
function_name(object_name);

Returning Object as argument
Syntax: 
object = return object_name;



#include<iostream>
using namespace std;
class temp
{
	 int a;
public:
	void get();
	temp add(temp & b1) //This function will take object as arguments and  return object
	{
		temp aobj3;
		aobj3.a= this->a +   b1.a;
		return aobj3;
	}
	void show()
	{
		cout<<"value is   "<<a;
	}
};
void temp:: get()
	{
		cin>>this->a;
	}
int main()
{
	temp aobj1,aobj2;
	aobj1.get();
	aobj2.get();
	temp aobj4=aobj1.add(aobj2);
	aobj4.show();
}

Exercise 1:
Which of the following is true about this pointer?
(A) It is passed as a hidden argument to all function calls
(B) It is passed as a hidden argument to all non-static function calls
(C) It is passed as a hidden argument to all static functions
(D) None of the above

Answer: (B)

===========================================================================================
Array of Objects

==>In C++, an array of objects is a collection of objects of the same class type that are stored in contiguous memory locations. Since each item in the array is an instance of the class, each one's member variables can have unique value. This makes it possible to manage and handles numerous objects by storing them in a single data structure and giving them similar properties and behaviours.

syntax:
classname arrayname[arraysize];

==>classname is the name of the class that the objects belong to
==>arrayname is the name of the array of objects
==>arraysize is the number of objects in the array .

Example:
Storing more than one Employee data. Let’s assume there is an array of objects for storing 30 employee's data.

#include<iostream>
using namespace std;
class Employee
{
  int id;
  char name[30];
  public:
    void getdata();
    void putdata();
};
void Employee::getdata()
{
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
}
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}
int main()
{
  // This is an array of objects having maximum limit of 30 Employees
  Employee emp[30];
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    emp[i].getdata();
   
  cout << "Employee Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    emp[i].putdata();
}

#include<iostream>
using namespace std;
class Employee
{
  int id;
  char name[30];
  public:
    void getdata();
    void putdata();
};
void Employee::getdata()
{
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
}
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}
int main()
{
  // This is an array of objects having maximum limit of 30 Employees
  Employee emp[30];
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    (emp+i)->getdata();
   
  cout << "Employee Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    (emp+i)->putdata();



	
	getchar();
	getchar();
    return 0; 
    return 0;
}







	
	











Advantages of Array of Objects: 

==>The array of objects represent storing multiple objects in a single name.
==>In an array of objects, the data can be accessed randomly by using the index number.
==>Reduce the time and memory by storing the data in a single variable.

#include<iostream>
using namespace std;
class item
{
  char name[30];
  int price;
  public:
  void getItem();
  void printItem();
};
 void item::getitem()
{
  cout << "Item Name = ";
  cin >> name;
  cout << "Price = ";
  cin >> price;   
}
 void item ::printitem()
{
  cout << "Name : " << name <<
          "\n";
  cout << "Price : " << price <<
          "\n";
}
 const int size = 3;
 int main()
{
  item t[size];
  for(int i = 0; i < size; i++)
  {
    cout << "Item  : " <<     (i + 1) << "\n";
    t[i].getitem();
  }
  for(int i = 0; i < size; i++)
  {
    cout << "Item Details : " <<
             (i + 1) << "\n";
    t[i].printitem();
  }
}

================================================================

Memory Managment in c++:

What is Memory Management?
Memory management is a process of managing computer memory, assigning the memory space to the programs to improve the overall system performance.

Why is memory management required?
As we know that arrays store the homogeneous data, so most of the time, memory is allocated to the array at the declaration time. Sometimes the situation arises when the exact memory is not determined until runtime. To avoid such a situation, we declare an array with a maximum size, but some memory will be unused. To avoid the wastage of memory, we use the new operator to allocate the memory dynamically at the run time.

==>A typical memory representation of a C++ program consists of the following sections.This would help in understanding the part of the memory where ,which types of variables are stored.

==>Memory is divided into 2 segments
1)code segment:
The code segment where the compiled code of the program resides.It contains set of instructions in a program that
are executed step by step.

2)Data segment: Data segment is divided into three sections
a)stack section:where memory is allocated for local variables.
b)heap section:provides storage for variables that are dynamically allocated memory.
c)data section:provides  the storage for global and static variables.

Memory Management Operators
In C language, we use the malloc() or calloc() functions to allocate the memory dynamically at run time, and free() function is used to deallocate the dynamically allocated memory. C++ also supports these functions, but C++ also defines unary operators such as new and delete to perform the same tasks, i.e., allocating and freeing the memory.

==>Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. Dynamically allocated memory is allocated on Heap
==>The most important use is the flexibility provided to programmers. We are free to allocate and deallocate memory whenever we need it and whenever we don’t need it anymore

Difference between Static Memory Allocation and				 Dynamic Memory Allocation

1	Static Memory Allocation is done before program execution.	Dynamic Memory Allocation is done during program execution.
2	It uses stack for managing the static allocation of memory		It uses heap for managing the dynamic allocation of memory
3	In Static Memory Allocation, there is no memory re-usability	In Dynamic Memory Allocation, there is 															memory re-	usability and memory can 															be freed when not required

4	In static memory allocation, once the memory is allocated, the memory size can not change.	In dynamic memory 								allocation, when memory is allocated  according to programmers req

5	In this memory allocation scheme, execution is faster than dynamic memory allocation.
	In this memory allocationscheme, execution is slower than static memory allocation.

6	In this memory is allocated at compile time.	In this memory is allocated at run time.
7	In this allocated memory remains from start to end of the program.	In this allocated memory can be released at any time during the program.

new and delete operators:

==>You can allocate memory at run time within the heap for the variable of a given type using a special operator in C++ which returns the address of the space allocated. This operator is called new operator.
If you are not in need of dynamically allocated memory anymore, you can use delete operator, which de-allocates memory previously allocated by new operator.

==>In c++,memory is allocated dynamically through the use of new operator and memory is free using delete operator.

// declare an int pointer
int* pointVar;
// dynamically allocate memory using the new keyword 
pointVar = new int;
// assign value to allocated memory
*pointVar = 45;

Here, we have dynamically allocated memory for an int variable using the new operator.
 we have used the pointer pointVar to allocate the memory dynamically on heap section. This is because the new operator returns the address of the memory location implicitly.


delete Operator
Once we no longer need to use a variable that we have declared dynamically, we can deallocate the memory occupied by the variable.
For this, the delete operator is used. It returns the memory to the operating system. This is known as memory deallocation.
 This operator is mainly used either for those pointers which are allocated using a new operator;


The syntax for this operator is
delete pointerVariable;



For example, if we allocate the memory to the pointer using the new operator, and now we want to delete it. To delete the pointer, we use the following statement:

delete p;  

To delete the array, we use the statement as given below:
delete [] p;  

Some important points related to delete operator are:

1)It is either used to delete the array or non-array objects which are allocated by using the new keyword.
2)To delete the array or non-array object, we use delete[] and delete operator, respectively.
3)The new keyword allocated the memory in a heap; therefore, we can say that the delete operator always de-allocates the memory from the heap
4)It does not destroy the pointer, but the value or the memory block, which is pointed by the pointer is destroyed.


Example 1: C++ Dynamic Memory Allocation
#include <iostream>
using namespace std;
int main() {
  // declare an int pointer
  int* pointInt;
  // declare a float pointer
  float* pointFloat;
  // dynamically allocate memory
  pointInt = new int;
  pointFloat = new float;
  // assigning value to the memory
  *pointInt = 45;
  *pointFloat = 45.45f;
  cout << *pointInt << endl;
  cout << *pointFloat << endl;
int *p = new int(45);  
cout<<*p;
  // deallocate the memory
  delete pointInt;
  delete pointFloat;
delete p;
}

Output

45
45.45

Dynamic Memory Allocation for Arrays:

Consider you want to allocate memory for an array of characters, i.e. string of 100 characters. 
char * str=new char[n];
==>The above statement allocates memory for 100 characters on the heap and stores the address of the first memory location in the character pointer str. To allocate memory for more than one character, subscript is used to indicate the size.
==>memory is allocated for more than one character.In order to free all the space that has been allocated,subscript notation is used in delete statement.
delete[] str;

int main()
{
	char * str;
	cin>>n;
	str=new char[n];
	cin>>str;
	cout<<str;
	delete[] str;
}
 
Note: if [] is used with new, it should also be used with delete, otherwise it leads to memory leakage problem i.e only first element whose address is contained in the pointer is de-allocated resulting in the problem of memory leakage.

// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  int* ptr;
    
  // memory allocation of num number of floats
  ptr = new int[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}

===========================================================

//accept no of subjects and name from the user dynamically and accept marks for each subject and display average and name of the student

===========================================================

//accept no of subjects and name from the user dynamically and accept marks for each subject and display average and name of the student


#include<iostream>
using namespace std;
int main()
{
	int n,m,i,sum=0;
	cout<<"accept no of subjects\n";
	cin>>n;
	cout<<"accept no of character\n";
	cin>>m;
	int * p_marks=new int [n];
	char * p_name=new char[m];
	cout<<"accept marks\n";
	for(i=0;i<n;i++)
	{
		cin>>p_marks[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum + p_marks[i];
	}
	cout<<"accept name\n";
	cin>>p_name;
	float avg=(float)sum/n;
	cout<<"average is  "<<avg;
	cout<<"name is  "<<p_name;
	delete [] p_name;
	delete[] p_marks;
}

#include<iostream> 
using namespace std; 
class complex
{
public:
	static int real,img;
public:
	static void add(complex&,complex&);
	complex()
	{
	}
	complex(int r,int i)
	{
    real=r;
    img=i;
		
	}
	void display()
	{
		cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;
	}
	
};
int complex::real;
int complex::img;
void complex::add(complex& c1,complex& c2)
{
	
	cout<<c1.real + c2.real;
	cout<<c1.img + c2.img;

	}
int main()
{
	complex c1(1,2);
	complex c2(3,4);
	complex::add(c1,c2);


	getchar();
	getchar();
    return 0; 
    return 0;
}


==================================
#include<iostream> 
using namespace std; 
class complex
{
	
	 int real,img;
public:
	 complex add(complex&,complex&,int);
	complex()
	{
		
	}
	complex(int real,int img)
	{
		this->real=real;
		this->img=img;
	}
	void display()
	{
		cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;
	}
	
};

complex complex::add(complex& c1,complex& c2,int num)
{
	complex temp;
	temp.real=c1.real + c2.real+num;
	temp.img=c1.img + c2.img+num;
	return temp;

	}
int main()
{
	int num;
	cout<<"enter num";

	cin>>num;
	complex c3;
	complex c1(1,2);
	complex c2(3,4);
	c3=c3.add(c1,c2,num);
    c3.display();

	getchar();
	getchar();
    return 0; 
    return 0;
}

=======================================================





	
	











============================================================
Object created on heap

The new operator is used to create objects dynamically and the delete operator is used to delete objects dynamically. The dynamic objects can be created with the help of pointers.

Syntax:

ClassName *ptr_obj;              // pointer to object
ptr_obj = new ClassName    // Dynamic object creation

Classname  * pointername=new classname(arguments);

/*#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[20];
	public:
	void display();
	student(int,char *);
};
student::student(int r,char * sptr)
{
	rollno=r;
	strcpy(name,sptr);
}
void student::display()
{
	cout<<"rollno is "<<rollno<<endl;
	cout<<"name = "<<name<<endl;
	cout<<"\n";
}
int main()
{
	student * ptr=new student(1,"rahul");
	ptr->display();
	
}
-----------------------------------------------------------------------------------------------

Need for deletion of the object:
To avoid memory leak as when an object is created dynamically using new, it occupies memory in the Heap Section.

Program 1: Create an object of the class which is created dynamically using the new operator and deleting it explicitly using the delete operator:
// C++ program to implement  dynamic objects 
#include<iostream> 
using namespace std; 
 class Test 
{ 
    int a, b; 
    public: 
           Test() 
        { 
            cout << "Constructor is called" <<  endl; 
            a = 1; 
            b = 2; 
        }; 
        
        // Function to print values 
        // of data members 
        void show() 
        { 
            cout << "a = " <<  
                     a << endl; 
            cout << "b = " <<  
                     b << endl; 
        } 
}; 
int main() 
{ 
 
    Test *ptr;          
     ptr = new Test;   
    ptr->show();      
        
    return 0; 
}
Output
Constructor is called
a = 1
b = 2



// C++ program to create an array of 
// objects 
#include <iostream> 
using namespace std; 
  
// Class 
class Student { 
  
public: 
    // Constructor 
    Student() 
    { 
        cout << "Constructor is called!\n"; 
    } 
  
     
    // Function to display message 
    void write() 
    { 
        cout << "Writing!\n"; 
    } 
};
int main() 
{ 
    // Create an array of the object 
    // dynamically 
    Student* student = new Student[3]; 
  
    // Function Call to write() 
    student[0].write(); 
    student[1].write(); 
    student[2].write(); 
  
        return 0; 
}
Output:
Constructor is called!
Constructor is called!
Constructor is called!
Writing!
Writing!
Writing!



Note:new operator internally invokes the function operator new() which in turn invokes the function malloc()
delete operator internally invokes the function operator delete() which in turn invokes the function free()
malloc and free() can be used in c++.but for the ease of use,new and delete operator are preferred.

The following are the advantages of the new operator over malloc() function:
1)It does not use the sizeof() operator as it automatically computes the size of the data object.
2)It automatically returns the correct data type pointer, so it does not need to use the typecasting.

Differences between the malloc() and new
1)The new operator constructs an object, i.e., it calls the constructor to initialize an object while malloc() function does not call the constructor. The new operator invokes the constructor, and the delete operator invokes the destructor to destroy the object. This is the biggest difference between the malloc() and new.
// C++ program to illustrate malloc()
// and new operator in C++
#include "bits/stdc++.h"
using namespace std;
 
// Class A
class A {
    int a;
 
public:
    int* ptr;
 
    // Constructor of class A
    A()
    {
        cout << "Constructor was Called!"
             << endl;
    }
};
 
// Driver Code
int main()
{
 
    // Create an object of class A
    // using new operator
    A* a = new A;
    cout << "Object of class A was "
         << "created using new operator!"
         << endl;
 
    // Create an object of class A
    // using malloc operator
    A* b = (A*)malloc(sizeof(A));
    cout << "Object of class A was "
         << "created using malloc()!"
         << endl;
 
    return 0;
}
Output
Constructor was Called!
Object of class A was created using new operator!
Object of class A was created using malloc()!
In the above program we can clearly see that while creating object using new operator Default Constructor was called and using malloc function Default Constructor was not called.

2)The new is an operator, while malloc() is a predefined function in the stdlib header file.

3)If the sufficient memory is not available in a heap, then the new operator will throw an exception while the malloc() function returns a NULL pointer.

4In the case of a new operator, we have to use the delete operator to deallocate the memory. But in the case of malloc() function, we have to use the free() function to deallocate the memory.

 
=========================

=======================================================================================
Dynamic initialization of object in C++

==>Dynamic initialization of object refers to initializing the objects at a run time i.e., the initial value of an object is provided during run time.
==>It can be achieved by using constructors and by passing parameters to the constructors.
==>This comes in really handy when there are multiple constructors of the same class with different inputs.
==>Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.

Dynamic Constructor:

The constructor used for allocating the memory at runtime for attribute of an object is known as the dynamic constructor.
The memory is allocated at runtime using a new operator and similarly, memory is deallocated at runtime using the delete operator.

Ex:
// C++ program for dynamic allocation
#include <iostream>
using namespace std;
 class Demo {
    int* ptr;
 public:
~Demo()
{
delete ptr;
}
      Demo()
    {
        // Dynamically initializing ptr using new
        ptr = new int;
        *ptr = 10;
    }
     // Function to display the value of ptr
    void display()
    {
        cout << *ptr << endl;
    }
};
 int main()
{
    Demo obj1;
     obj1.display();
obj1.~Demo();



}

Output
10
In the above example, new is used to dynamically initialize the variable in default constructor and memory is allocated on the heap.
The objects of the class Demo calls the function and it displays the value of dynamically allocated variable i.e ptr.



#include<iostream>
using namespace std;
class string1
{
	int len;
	char *ptr;
public:
	void chardisplay();
	string1();
	string1(char*);
	void stringdisplay();
	string1(char,int);
	string1(int);
};
string1::string1()
{
	len=1;
	ptr=new char[len];//new char[1],new char;
	*ptr='A';
}
void string1::chardisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"character is "<<*ptr<<endl;
}
void string1::stringdisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
string1::string1(char ch,int l)
{
	int i;
	len=l;
	ptr=new char[len+1 ];
	
	for(i=0;i<len;i++)
	{
		ptr[i]=ch;
	}
	ptr[i]='\0';
}
string1::string1(int l)
{
	int i;
	len=l;
	ptr=new char[len+1];
	cout<<"accept string\n";
	cin>>ptr;
	strcpy(ptr,"rohit");

	/*cout<<"accept character by character\n";
	for(i=0;i<len;i++)
	{
		cin>>ptr[i];
	}
	ptr[i]='\0';*/
}
int main()
{
	string1 c1;
	c1.chardisplay();
	string1 c2("rahul");
	c2.stringdisplay();
	string1 c3('*',60);
	c3.stringdisplay();
	string1 c4(5);
	c4.stringdisplay();
}
#include<iostream>
using namespace std;
class temp
{
	int *ptr;
	int size;
public:
	temp();
	void get();
	void show();
	int max();
	int min();
};
temp::temp()
{
	cout<<"how many elements do u want to store\n";
	cin>>size;	
	ptr=new int[size];
}
void temp::get()
{
	cout<<"accept elements\n";
	for(int i=0;i<size;i++)
	cin>>ptr[i];
}
void temp::show()
{
	cout<<"value are\n";
	for(int i=0;i<size;i++)
	cout<<ptr[i]<<"\n";
}
int temp::max()
{
	int m=ptr[0];
	for(int i=1;i<size;i++)
	if(ptr[i]>m)
	m=ptr[i];
	return m;
}
int temp::min()
{
	int m=ptr[0];
	for(int i=1;i<size;i++)
	if(ptr[i]<m)
	m=ptr[i];
	return m;
}
int main()
{
	temp a;
	a.get();
	a.show();
	cout<<"maximum number is "<<a.max()<<endl;
	cout<<"minimum number is "<<a.min()<<endl;
}

 
Destructor

==>Destructor is an instance member function that is invoked automatically whenever an object
is going to be destroyed or explicitly deleted by delete operator.Means,a destructor is 
the last function that is going to be called before an object is destroyed.

==>A destructor is also a special member function like a constructor. 
==>Destructor destroys the class objects created by the constructor. 
==>Destructor has the same name as their class name preceded by a tilde (~) symbol.
==>It is not possible to define more than one destructor hence destructor can not be 
overloaded.
==>Destructor neither requires any argument nor returns any value.
==>It is automatically called when an object goes out of scope. 
==>Destructor release memory space occupied by the objects created by the constructor.
==>In destructor, objects are destroyed in the reverse of an object creation.

====================================================================================
The thing is to be noted here if the object is created by using new or the constructor
uses new to allocate memory that resides in the heap memory or the free store, 
the destructor should use delete to free the memory.   

The syntax for defining the destructor within the class:

~ <class-name>() {
    // some instructions
}
The syntax for defining the destructor outside the class:

<class-name> :: ~<class-name>() {
    // some instructions
}

// C++ program to demonstrate the execution of constructor and destructor
 
#include <iostream>
using namespace std;
 class Test {
public:
    // User-Defined Constructor
    Test() { cout << "\n Constructor executed"; }
 
    // User-Defined Destructor
    ~Test() { cout << "\nDestructor executed"; }
};
main()
{
    Test t;
}
=====================================================================================

// C++ program to demonstrate the execution of constructor and destructor when 
multiple objects are created

 #include <iostream>
using namespace std;
class Test {
public:
     Test() { cout << "\n Constructor executed"; }
 
    ~Test() { cout << "\n Destructor executed"; }
};
 main()
{
    // Create multiple objects of the Test class
    Test t, t1, t2, t3;
}
====================================================================
// C++ program to demonstrate the number of times constructor and destructors are called
 
#include <iostream>
using namespace std;
static int Count = 0;     
class Test {
public:
 
    Test()
    { 
        // Number of times constructor is called
        Count++;
        cout << "No. of Object created: " << Count<< endl;
    }
     ~Test()
    {
         
        cout << "No. of Object destroyed: " << Count << endl;                                  
                      Count--;                                                          
        // Number of times destructor is called
    }
};
int main()
{
    Test t, t1, t2, t3;
}
Output

No. of Object created: 1
No. of Object created: 2
No. of Object created: 3
No. of Object created: 4
No. of Object destroyed: 4
No. of Object destroyed: 3
No. of Object destroyed: 2
No. of Object destroyed: 1
================================================================
//Note: Objects are destroyed in the reverse order of their creation. 

#include <iostream>
using namespace std;
static int Count = 0;     
class Test {
public:
 
    Test()
    { 
    cout<<this<<endl;
         Number of times constructor is called
        Count++;
        cout << "No. of Object created: " << Count<< endl;
    }
     ~Test()
    {
         cout<<this<<endl;
        cout << "No. of Object destroyed: " << Count << endl;                                  
        Count--;
        // Number of times destructor is called
    }
};
int main()
{
    Test t;
    cout<<&t<<endl;
	  Test t1;
	  cout<<&t1<<endl;
	  Test   t2;
	  cout<<&t2<<endl;
}

#include <iostream>
using namespace std;
     
class Test {
	private:
		static int cnt1;
		static int cnt2;
public:
 static int getcnt1()
 {
 	return cnt1;
 }
 static int getcnt2()
 {
 	return cnt2;
 }
    Test()
    { 
    cnt1++;
       cout<<this<<endl;//AAA BBB
       cout<<"constructor is called\n";
    }
     ~Test()
    {
    	cnt2++;
       cout<<"destructor is called\n"; 
	   cout<<this<<endl; //BBB AAA
    }
};
int Test ::cnt1=0;
int Test::cnt2=0;
int main()
{
    Test t;
    cout<<&t<<endl;//AAA
	  Test t1;
    cout<<&t1<<endl;//BBB
   cout<<"no of cons called"<< Test::getcnt1()<<endl;
   cout<<"no of dest called"<< Test::getcnt2()<<endl;


}

===========================================================

#include <iostream>
using namespace std;
     
class Test {
	private:
		static int cnt1;
		static int cnt2;
public:
 static int getcnt1()
 {
 	return cnt1;
 }
 
    Test()
    { 
    cnt1++;
       cout<<this<<endl;//AAA BBB
       cout<<"constructor is called\n";
    }
     ~Test()
    {
    	
       cout<<"destructor is called"<<++cnt2<<endl;; 
	   cout<<this<<endl; //BBB AAA
    }
};
int Test ::cnt1=0;
int Test::cnt2=0;
int main()
{
    Test t;
    cout<<&t<<endl;//AAA
	  Test t1;
    cout<<&t1<<endl;//BBB
   cout<<"no of cons called"<< Test::getcnt1()<<endl;
   

}



==============================================================================



Properties of Destructor
It cannot be declared static or const.
destructor cannot be made private.
========================================================================================
How to call destructors explicitly?
We can call the destructors explicitly using the following statement:

#include <iostream>
using namespace std;
     
class Test {
	
public:
 
 
    Test()
    { 
   
       cout<<"constructor is called\n";
    }
     ~Test()
    {
    	
       cout<<"destructor is called"<<endl;; 
	   
    }
};


int main()
{
    Test t,t1;
   t.~Test();
   t1.~Test();
   

}


========================================================================



When do we need to write a user-defined destructor?
If we do not write our own destructor in class, the compiler creates a default destructor 
for us. The default destructor works fine unless we have dynamically allocated memory or 
pointer in class. When a class contains a pointer to memory allocated in the class,
 we should write a destructor to release memory before the class instance is destroyed. 
This must be done to avoid memory leaks.

Ex:
class cstring
{
	public:
	~cstring()
	{
		if(ptr)
		{
			delete[] ptr;
			ptr=NULL;
		}
	}
};

==>The pointer ptr is checked to confirm that it is not NULL before memory on heap is deleted.

It is not always mandatory to write userdefined destructor in the class.
This function is basically used for cleanup purpose.The destructor implemented to free the 
memory pointed by ptr. otherwise the memory remains allocated even though the pointer data
member pointing to it goes out of scope when the object is destroyed. This is typical problem
of memory leakage.If a class contains a pointer as a datamember , then it is mandatory for
the programmer to implement a destructor.

#include <iostream>
using namespace std;
#include<string.h>
 class String {
public:
    char* s;
    int size;
 public:
    String(char*); // constructor
    ~String(); // destructor
};
 String::String(char* c)
{
    size = strlen(c);
    s = new char[size + 1];
    strcpy(s, c);
}
String::~String() { 
    cout<<"dest called";
    delete[] s;
    cout<<s;
    }
 
int main()
{
    String str("Hello, World!");
}
=======================================================
Scope of an Object

Note: Objects are destroyed in the reverse order of their creation. 

class Test
{
	public:
	Test()
	{
		cout<<"constructor is invoked";
	}
	~Test()
	{
		cout<<"destructor is invoked";
	}
};
Test t1;
int main()
{
	cout<<"main begins";
	Test t2;
	{
		cout<<"block begins"<<endl;
		Test t3;
		cout<<"block ends"<<endl;
	}
	cout<<"main ends"<<endl;
}

The sequence of the constructor calls and the destructor calls of all the objects created is
 determined according to the life of the objets.
output:

constructor is invoked
main begins
constructor is invoked
block begins
constructor is invoked
block ends
destructor is invoked
main ends
destructor is invoked
destructor is invoked
====================================================================================













Copy Constructor

==>A copy constructor is a member function that initializes an object using another object 
of the same class. 
==>In simple terms, a constructor which creates an object by initializing it with an 
object of the same class, which has been created previously is known as a copy constructor.  
==>Copy constructor is used to initialize the members of a newly created object by copying 
the members of an already existing object.
==>Copy Constructor is a special type of member function with the same name as classname.
==>If a copy constructor is not defined in a class, the compiler defines one. 
This compiler defined copy constructor does a member wise copy of the elements i.e 
shallow copy. If the class doesnot have a pointer variable with dynamically allocated memory,
 then there is no need to explicitly defines a copy constructor in the class.

==>But if the class has a pointer variable to which memory is allocated dynamically,
 then the class must implement its own copy constructor. In this case, 
if user doesnot defined its own copy constructor,then the compiler's copy is invoked.
This creates an object as a copy of another object.This shallow copy leads to the 
problem of dangling pointer.
========================================================================================
What is Dangling Pointer and how this situation arises?
==>This problem particularly arises when there are two objects holding the address of a 
common memory location on the heap. 
If one of those object goes out of scope, the destructor is invoked, thus deleting the memory
 that it is pointing to. Now the other object, which is still in scope, but which was also
 pointing to the same memory location, contains the address of the memory , which has been 
freed by the destructor. The pointer holding an address to the memory that has been set free
 is referred to as the dangling pointer.

ex:
 cstring s1("hello");
cstring s2(s1); // to create s2 as a copy of s1
//The implicit copy constructor does a member wise copy of the elements.  
pointer data member of s1 and s2 point to the same memory on heap. If either of the object 
goes out of scope, the destructor is invokes which will free the memory. This lead to 
runtime error when this free memory is accessed.

How Dangling pointer can be avoided?
==>To avoid dangling pointer,it is mandatory to have a copy constructor in a  class which 
contains  a pointer variable.
It allocates seperate memory location on the heap for the object being initialized. 
It also copies the contents of the object that is being copied to the newly allocated memory.
 This is know as deep copying.
==>Copy constructor takes a reference to an object of the same class as an argument.

class cstring
{
	int len;
	char* ptr;
	public:
cstring(const cstring& s)
{
	this->len=len;
	this->ptr=new char[len+1];
	strcpy(this->ptr,s.ptr);
}
};
int main()
{
 cstring s1("hello");
cstring s2(s1); 
}
//for the above statement
==>It is passed by reference because if the object is passed by value, 
a copy is created on the stack. To create this local copy, again copy constructor will get 
call, It will be invoked again and again and so on. 
It will enter into a bad recursive loop.

Types of Copy Constructors

1. Default Copy Constructor:
==>Compiler provides a default copy constructor which does memberwise copying i.e shallow 
copying.

// Implicit copy constructor Calling
#include <iostream>
using namespace std;
 
class Sample {
    int id;
 
public:
    void init(int x) { id = x; }
    void display() { cout << endl << "ID=" << id; }
};
int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();
 
    // Implicit Copy Constructor Calling
    Sample obj2(obj1); 
    obj2.display();
    return 0;
}



2.User defined copy constructor:
The copy constructor can be defined explicitly by the programmer. 
The process of initializing members of an object through a copy constructor is known as copy
initialization.
It is also called member-wise initialization because the copy constructor initializes one 
object with the existing object, both belonging to the same class on a member by member copy
basis.
The copy constructor can be defined explicitly by the programmer. If the programmer does not
define the copy constructor, the compiler does it for us.
Copy constructor takes a reference to an object of the same class as an argument.

Sample(Sample &t)
{
    id=t.id;
}

class date
{
	int dd,mm,yy;
public:
	void show();
	date(int,int,int);
	date(date&);//copy constructor
};
 date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
 void date::show()
 {
	 cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
 }
 date::date(date & d_new)
 {
	 this->dd=d_new.dd;
	 this->mm=d_new.mm;
	 this->yy=d_new.yy;
 }
int main()
{
	date d(8,8,17);
	date d1(d);
	d.show();
	d1.show();
}


Deep copy dynamically allocates the memory for the copy and then copies the actual value, 
both the source and copy have distinct memory locations. In this way, both the source and 
copy are distinct and will not share the same memory location. 
Deep copy requires us to write the user-defined constructor.


#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char *ptr;
public:
	string1(char*);
	void stringdisplay();
	~string1();
	string1(string1&);
};
void string1::stringdisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
string1::~string1()
{
	cout<<"destructor is called\n";
	if(ptr)
	{
		cout<<"destructor is called1\n";
	delete [] ptr;
	}
	cout<<"hello";
}
string1::string1(string1 & c)
{
	this->len=c.len;
	this->ptr=new char[this->len+1];
	strcpy(this->ptr,c.ptr);
}
int main()
{	
	string1 c2("rahul");
	c2.stringdisplay();
	string1 c3(c2);//copy constructor
	c3.stringdisplay();
}
=================================


When is a user-defined copy constructor needed? 
If we don’t define our own copy constructor, the C++ compiler creates a default copy 
constructor for each class which does a member-wise copy between objects. 
The compiler-created copy constructor works fine in general. 
If a class contains one of its data member as a pointer, its is mandatory on programmer's part
 to write user defined copy constructor.
user defined copy constructor should take care of dangling pointer situation.
in user defined copy constructvor, the object should be passed by reference to avoid infinite
 recursion of the copy constructor. 

 
#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char *ptr;
public:
	string1(char*);
	void stringdisplay();
	~string1();
};
void string1::stringdisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
string1::~string1()
{
	cout<<"destructor is called\n";
	if(ptr)
	{
		cout<<"destructor is called1\n";
	delete [] ptr;
	}
	cout<<"hello";
}

int main()
{	
	string1 c2("rahul");
	c2.stringdisplay();
	{	
	string1 c3(c2);//copy constructor
    }
	c2.stringdisplay();
}
========================================================================
Why argument to a copy constructor must be passed as a reference? 
A copy constructor is called when an object is passed by value. Copy constructor itself is a 
function. So if we pass an argument by value in a copy constructor, a call to the copy 
constructor would be made to call the copy constructor which becomes a non-terminating chain
 of calls. Therefore compiler doesn’t allow parameters to be passed by value.
===============================================================================
When is the copy constructor called? 
In C++, a Copy Constructor may be called in the following cases: 

1)When an object of the class is returned by value.
 ==>If a function is returning an object by value,
a)A temporary object is automatically created by invoking the copy constructor,This temporary
 object holds the state of the returned object.
b)Destrutor is invoked for destroying the local object
c)temporary object is returned to the caller function and is assigned memberwise(shallow copy)
 to the object in the caller.
d)after assignment,this temporary object is destroyed.

ex:
cdate func()
{
cdate d(1,1,2001);
return d;
}
int main()
{
cdate d1;
d1=func();
}
//donot return local objects either by referece or pointer as it would lead to unpredictable 
results.

2)When an object of the class is passed (to a function) by value as an argument. 
void func(complex cobj)
{
int x=cobj.getreal();
}
int main()
{
complex c1(1,2);
func(c1);
}
==>If an object is passed by value mechanism,a copy of the object is created by invoking copy
 constructor of the class.
func() is a function to which an object of complex class is passed by value.
In main() call is made to func() by passing c1 by value. cobj is created on stack exactly like
 c1 object by invoking compilers's copy constructor, as there is no user defined copy 
constructor written for complex. When the control returns from func() to main(),cobj is 
destroyed.

To avoid calls to copy constructor and destructor.It is preferred to pass the objects to 
function by reference. This also avoids memory wastage.

3)When an object is constructed based on another object of the same class. 

================================================================
// C++ program to implement the deep copy

#include <iostream>
using namespace std;
class box {
private:
    int length;
    int* breadth;
    int height;
 public:
    box()
    {
        breadth = new int;
    }
    void set_dimension(int len, int brea,
                       int heig)
    {
        length = len;
        *breadth = brea;
        height = heig;
    }
    void show_data()
    {
        cout << " Length = " << length
             << "\n Breadth = " << *breadth
             << "\n Height = " << height
             << endl;
    }
 
    box(box& sample)
    {
        length = sample.length;
        breadth = new int;
        *breadth = *(sample.breadth);
        height = sample.height;
    }
 
    // Destructors
    ~box()
    {
        delete breadth;
    }
};
 
int main()
{
       box first;
    first.set_dimension(12, 14, 16);
     first.show_data();
    box second(first);
 
    second.show_data();
 
    return 0;
}
==================================================================================
Shallow Copy
The default copy constructor can only produce the shallow copy.
A Shallow copy is defined as the process of creating the copy of an object by copying data 
of all the member variables as it is.In shallow copy, the two objects are not independent. 
	In deep copy, the two objects are  independent. 

Deep Copy
Deep copy dynamically allocates the memory for the copy and then copies the actual value, 
both the source and copy have distinct memory locations. In this way, both the source and 
copy are distinct and will not share the same memory location. Deep copy requires us to write
 the user-defined constructor.
=============================================================================


Namespace


==>Namespace provide the space where we can define or declare identifier i.e. variable,  method, classes.
   Namespace are necessary if you want more than one function with the same name. 
   You can declare two different namespaces for these functions and call them by referencing their corresponding namespace. 

==>A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar
   functions, classes, variables etc. with the same name available in different libraries. 

==>The code generally has multiple libraries, and the namespace helps in avoiding the ambiguity that may occur when two identifiers have the same name.

For example, suppose you have two functions named calculate(), and both are performing different tasks. 
One calculate() function is doing the multiplication, and another is doing the addition. 
So in this case, to avoid ambiguity, you will declare both the functions in two different namespaces. 
                                                                                                              These namespaces will differentiate both the functions and also provide information regarding both the functions.

==>The best example of namespace scope is the C++ standard library (std) where all the classes, methods and templates are declared. Hence while writing a C++ program we usually include the directive using namespace std;
==============================================
Defining a Namespace:
A namespace definition begins with the keyword namespace followed by the namespace name as follows:
namespace  namespace_name 
{
    // code declarations i.e. variable  (int a;)
    method (void add();)
    classes ( class student{};)
}
It is to be noted that, there is no semicolon (;) after the closing brace.
Namespace only define them in a global scope.
It is only present in C++ and not in C.
To access a class inside a namespace, you can use namespacename::classname. 
Namespace declarations don’t have access specifiers (Public or Private).

=================================================================

C++ Namespace Example
namespace Data
{
	class Manager
	{
	public:
	void task() {}
	}
};


You can access the class inside the above namespace in two ways:
1)by using :: operator
Data::Manager mgr;

Example:
#include <iostream>
using namespace std;
// first name space
namespace first_space
{
  void func()
  {
     cout << "Inside first_space" << endl;
  }
}
// second name space
namespace second_space
{
  void func()
  {
     cout << "Inside second_space" << endl;
  }
}
 
int main ()
{
       // Calls function from first name space.
      first_space :: func();
    // Calls function from second name space.
      second_space :: func(); 
      return 0;
}

Output
Inside first_space
Inside second_space

=======================================================================
2)By using  "using" directive 
==>You use the "using" directive to import the entire namespace into a program or another namespace. This directive eliminates the need to use the "namespace-name" every time. So it is better to use the "using" if you need several functions or classes from the namespace. Otherwise, if you only need to use it once or twice, "namespace-name" would be a better choice.
==>The using directive is positioned at the top of the program and it allows us to access all the namespace members.

using namespace Data;
Manager mgr;
mgr.task();


Example:
#include <iostream>
using namespace std;
// first name space
namespace first_space
{
int a=10;
  void func()
  {
     cout << "Inside first_space" << endl;
  }
}
 
// second name space
namespace second_space
{
  void func()
  {
     cout << "Inside second_space" << endl;
  }
}
using namespace first_space;
int main ()
{
   // This calls function from first name space.
  func();
cout<<a;
  return 0;
}

Output
Inside first_space
==========================================================
// without using std namespace
std::cout
std::cin
std::endl
std::exception
std::bad_cast

By including the using namespace std; code in our program, we can omit the std:: part for the identifiers defined in the std namespace:

// using std namespace
cout
cin
endl
exception
bad_cast



===========================================================

Nested Namespaces:
Namespaces can be nested where you can define one namespace inside another name space as follows:
SYNTAX:
    namespace namespace_name1 
    {
          // code declarations
          namespace namespace_name2 
          {
             // code declarations
          }
    }

You can access members of nested namespace by using resolution operators as follows:
// to access members of namespace_name2
using namespace namespace_name1::namespace_name2;
// to access members of namespace_name1
using namespace namespace_name1;
 

==>In the above statements if you are using namespace_name1, then it will make elements of namespace_name2 available in the scope.
#include <iostream>
using namespace std;
 
// first name space
namespace first_space
{
  void func()
  {
     cout << "Inside first_space" << endl;
  }
  // second name space
  namespace second_space
  {
     void func()
     {
        cout << "Inside second_space" << endl;
     }
  }
}
using namespace first_space;
int main ()
{
    
      func();
   second_space::func();
      return 0;
}








=========================================================


 #include <iostream>
using namespace std;
 
// Variable created inside namespace
namespace first {
int val = 500;
}
 // Global variable
int val = 100;
int main()
{
    // Local variable
    int val = 200;
 
    // These variables can be accessed from outside the namespace using the scope ::
       cout << first::val << '\n';
 
    return 0;
}

Output
500

===================================================================
 #include <iostream>
using namespace std;

 
// Variable created inside namespace
namespace first {
int val = 500;
}
 // Global variable
int val = 100;
using namespace first;
int main()
{
    // Local variable
    int val = 200;
 
    // These variables can be accessed from outside the namespace using the scope ::
       cout <<first:: val << '\n';
 
    return 0;
}

====================================================
// A C++ program to demonstrate use of class in a namespace
// A C++ program to demonstrate use of class in a namespace
#include<iostream>
using namespace std;
 
namespace ns
{
    // A Class in a namespace
    class A
    {
    public:
        void display()
        {
            cout<<"ns::A::display()"<<endl;;
        }
    };
}
namespace ns1
{
    // A Class in a namespace
    class A
    {
    public:
        void display()
        {
            cout<<"ns1::A::display()"<<endl;;
        }
    };
}
 
int main()
{

    ns1::A obj;
 
    obj.display();
 
    return 0;
}

================================================================
A class can also be declared inside namespace and defined outside namespace using the following syntax: 

   
// A C++ code to demonstrate that we can define
// methods outside namespace.
#include <iostream>
using namespace std;
 
// Creating a namespace
namespace ns {
void display();
class geek {
public:
    void display();
};
} // namespace ns
 
// Defining methods of namespace
void ns::geek::display()
{
    cout << "ns::geek::display()\n";
}
void ns::display() { cout << "ns::display()\n"; }
 
// Driver code
int main()
{
    ns::geek obj;
    ns::display();
    obj.display();
    return 0;
}
Output:

ns::display()
ns::geek::display():
==========================================================
Standard Namespace
The std is a short form of standard, the std namespace contains the built-in classes and declared functions.
You can find all the standard types and functions in the C++ "std" namespace.

#include<iostream>
int main()
{
	std::cout<<"enter no to add";
	int num1,num2;
	std::cin>>num1;
	std::cin>>num2;
	std::cout<<"addition is"<<num1+num2;
}
Here std is used in front of cin and cout along with scope resolution operator, which indicates that the object cin and cout are defined inside the namespace whose name is std.The std is the standard library, and both cin and cout are defined inside this scope.

====================================================================
Advantage
The primary advantage of namespaces is that they resolve any naming conflict. For example, sometimes, you may need more than one function with the same name. And namespaces provide a way to declare such functions without making the compiler ambiguous. 
====================================================================
FAQ::
FAQ::
 #include <iostream>
using namespace std;
namespace ns
{
	void show()
	{
		cout<<"in 1st show\n";
	}
}
namespace ns
{
	void show1()
	{
		cout<<"in 2nd show\n";
	}
}
int main()
{
  ns::show1();
 
    return 0;
}


DIFFERENCE BETWEEN CLASS AND NAMESPACE

namespace A {
int f1();
}
 
namespace A {
int f2();
}
is legal, but: 

   
class A {
    int f1();
};
 
class A { // illegal
    int f2();
};

=======================================================================================
You can have unnamed namespaces but you can’t have a unnamed class.For example: 
 #include <iostream>
using namespace std;
namespace 
{
	void show()
	{
		cout<<"in 1st show\n";
	}
}
namespace 
{
	void show1()
	{
		cout<<"in 2nd show\n";
	}
}
int main()
{
  show();
 
    return 0;
}

   
namespace { // fine
 
// some code....
}
 
class { // illegal
}You can have unnamed namespaces but you can’t have a unnamed class.For example: 

   
namespace { // fine
 
// some code....
}
 
class { // illegal
}
================================================




















Cons of using the whole namespace in C++?
Header1.h :
   
namespace one 
{ 
    /*Function to print name of the namespace*/
    void print() 
    { 
        std :: cout << "This is one" << std :: endl; 
    } 
} 
Header2.h
   
namespace two 
{ 
    /*Function to print name of the namespace*/
    void print() 
    { 
        std :: cout << "This is two" << std :: endl; 
    } 
} 
Source code file
   
/*Including headers*/
#include <iostream> 
#include "Header1.h" 
#include "Header2.h" 
  
/*Using namespaces*/
using namespace std; 
using namespace one; 
using namespace two; 
  
/*Driver code*/
int main() 
{ 
    /*Ambiguity*/
    print(); 
} 

Output:
Error: Call of overloaded print() is ambiguous.
To overcome this situation, we use namespace objects independently through scope resolution operator. 
=======================================================================
 #include <iostream>
using namespace std;
namespace one
{
	void show()
	{
		cout<<"in 1st show\n";
	}
}
namespace two
{
	void show()
	{
		cout<<"in 2nd show\n";
	}
}
using namespace one;
using namespace two;
int main()
{
  show();
 
    return 0;
}
===========================================================================

==> Generic Programming 
  Generic Programming is implemented to increase the efficiency of the code. Generic Programming enables the programmer to write a general algorithm which will work with all data types. It eliminates the need to create different algorithms if the data type is an integer, string or a character. The advantages of Generic Programming are
Code Reusability
Avoid Function Overloading
Once written it can be used for multiple times and cases.

Generics can be implemented in C++ using Templates.

Templates

==>A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types. For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter. 

==>  It allows you to define the generic classes and generic functions and thus provides support for generic programming. Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for a variety of data types.

==>How Do Templates Work?
Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type-checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class. 

=========================================================================
Templates can be represented in two ways:

Function template 
==>We can define a template for a function. For example, if we have an add() function, we can create versions of the add function for adding the int, float or double type values.
==>We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray(). 
==>Function Template is used to write generic functions that can be used with different datatypes.The method of Generic Programming is implemented to increase the efficiency of the code.
==>The types of parameters passed to it during its call decide the actual data types which the function will operate upon. Generic functions are like 'write once use multiple times'.
For example, Quick sorting algorithm is implemented using a generic function, it can be implemented to an array of integers or array of floats.
==>This generality of coding reduces the programmers efforts of writing multiple  function definitions having the same implementation or algorithm for different datatypes that might be passed to it. This saves time,disk space,and efforts to rewrite the source code.
==>==>Function templates are special functions that can operate with generic types. This allows creating a function template whose functionality can be adapted to more than one type without repeating the entire code for each type.

A Generic function is created by using the keyword template. The template defines what function will do.

Syntax of Function Template

template < class Ttype> 
ret_type func_name(parameter_list)  
{  
    // body of function.  
}  
Where Ttype: It is a placeholder name for a data type used by the function and this list is called as template parameter list and it cannot be empty. It is used within the function definition. It is only a placeholder that the compiler will automatically replace this placeholder with the actual data type.

#include <iostream>  
using namespace std;  
template<class T> 
T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
int main()  
{  
  int i =2;  
  int j =3;  
  float m = 2.3;  
  float n = 1.2;  
  cout<<"Addition of i and j is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of m and n is :"<<add(m,n);  
  return 0;  
}
  Addition of i and j is :5
Addition of m and n is :3.5
In the above example, we create the function template which can perform the addition operation on any type either it can be integer, float or double.
===================================================================

#include<iostream>
using namespace std;
template <class T>
void swap1(T &x, T &y)
{
   T temp;
   temp=x;
   x=y;
   y=temp;
}
 int main()
{
    
    int a=10,b=20;
char x='A',y='B';
    swap1(a,b);
	cout<<a<<b<<endl;
swap1(x,y);
cout<<x<<y;
 
}
==============================================================
Function Templates with Multiple Parameters
We can use more than one generic type in the template function by using the comma to separate the list.

Syntax
 template<class T1, class T2,.....>  
return_type function_name (arguments of type T1, T2....)  
{  
    // body of function.  
}  
In the above syntax, we have seen that the template function can accept any number of arguments of a different type.


#include <iostream>  
using namespace std;  
template<class X,class Y> 
void fun(X a,Y b)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
    std::cout << "Value of b is : " <<b<< std::endl;  
}  
  
int main()  
{  
   fun(15,12.3);  
   
   return 0;  
}  
Output:

Value of a is : 15
Value of b is : 12.3
In the above example, we use two generic types in the template function, i.e., X and Y.
============================================================================
#include <iostream> 
using namespace std; 
template <class T ,class Y> 
T myMax(T x, Y y)
{
    return (x > y) ? x : y;
}
 
int main()
{
    
    cout << myMax(3, 'a') << endl;
   
    cout << myMax<double>(3,4 ) << endl;
   
    cout << myMax('g', 'e') << endl;
 
    return 0;
}
========================================================================
Overloading a Function Template
We can overload the generic function means that the overloaded template functions can differ in the parameter list.


#include <iostream>  
using namespace std;  
template<class X> 
void fun(X a)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
}  
template<class X,class Y> 
void fun(X b ,Y c)  
{  
    std::cout << "Value of b is : " <<b<< std::endl;  
    std::cout << "Value of c is : " <<c<< std::endl;  
}  
int main()  
{  
   fun(10);  
   fun(20,30.5);  
   return 0;  
}  
Output:

Value of a is : 10
Value of b is : 20
Value of c is : 30.5
In the above example, template of fun() function is overloaded.
=========================================================================
A program to display the name and the eno of the employee by using multitpLe parameter in the function template.

#include <iostream>  
using namespace std;  
template<class t1,class t2>
void display(t1 * x, t2 y)
{  

cout<<"name is "<<x;
cout<<"eno or salary is "<<y;
}
int main()
{
int a;
	display(&a,1);
	display("suresh",2);
}
===========================================================

#include <iostream>  
using namespace std;  
template<class t1,class t2>
void display(t1 * x, t2 y)
{  

cout<<"name is "<<x<<endl;;
cout<<"eno or salary is "<<y<<endl;
}
int main()
{
int a;
	display(&a,1);
	display("suresh",5678.89);
}
=========================================================================
CLASS TEMPLATE

Class Template can also be defined similarly to the Function Template. When a class uses the concept of Template, then the class is known as generic class.

Syntax
template<class Ttype>  
class class_name  
{  
  .  
  .  
}  
Ttype is a placeholder name which will be determined when the class is instantiated. We can define more than one generic data type using a comma-separated list. The Ttype can be used inside the class body.

Now, we create an instance of a class

class_name<type> ob;  
where class_name: It is the name of the class.
type: It is the type of the data that the class is operating on.

ob: It is the name of the object.

Let's see a simple example:

#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1 ;  
    T num2 ;  
    void add()  
    {  
        std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
    }  
      
};  
  
int main()  
{  
    A<int> d;  
    d.add();  
    return 0;  
}  
Output:

Addition of num1 and num2 : 11
In the above example, we create a template for class A. Inside the main() method, we create the instance of class A named as, 'd'.

CLASS TEMPLATE WITH MULTIPLE PARAMETERS
We can use more than one generic data type in a class template, and each generic data type is separated by the comma.

Syntax
template<class T1, class T2, ......>   
class class_name  
{  
   // Body of the class.  
}  
Let's see a simple example when class template contains two generic data types.

#include <iostream>  
     using namespace std;  
     template<class T1, class T2>  
    class A   
    {  
         T1 a;  
         T2 b;  
         public:  
        A(T1 x,T2 y)  
       {  
           a = x;  
           b = y;  
        }  
           void display()  
          {  
                 std::cout << "Values of a and b are : " << a<<" ,"<<b<<std::endl;  
           }  
      };  
  
      int main()  
     {  
           A<int,float> d(5,6.5);  
           d.display();  
           return 0;  
     }  
Output:

Values of a and b are : 5,6.5
=========================================================================
#include <iostream>  
     using namespace std;  
     template<class T>
    class A   
    {  
	public:
         T a, b;  
         public:  
        void display(T,T);
};
  template<class T>

          void A<T>:: display(T a ,T b)  
          {  
                 std::cout << "Values of a and b are : " << a<<" ,"<<b<<std::endl;  
           }  
   
  
      int main()  
     {  
           A<int> d;  
           d.display(5,6);  
		A<char> d1;  
           d1.display('a','b');
           return 0;  
     } 


========================================================================
The template can contain multiple arguments, and we can also use the non-type arguments In addition to the type T argument, we can also use other types of arguments such as strings, function names, constant expression and built-in types. Let' s see the following example:

template<class T, int size>  
class array  
{  
        T arr[size];           // automatic array initialization.  
};  
In the above case, the nontype template argument is size and therefore, template supplies the size of the array as an argument.

Arguments are specified when the objects of a class are created:

array<int, 15> t1;                        // array of 15 integers.  
array<float, 10> t2;                    // array of 10 floats.   
array<char, 4> t3;                      // array of 4 chars.                
Let's see a simple example of nontype template arguments.

#include <iostream>  
using namespace std;  
template<class T, int size>  
class A   
{  
    public:  
    T arr[size];  
    void insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            arr[j] = i;  
            i++;  
        }  
    }  
      
    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            std::cout << arr[i] << " ";  
        }  
    }  
};  
int main()  
{  
    A<int,10> t1;  
    t1.insert();  
    t1.display();  
    return 0;  
}  
Output:

1 2 3 4 5 6 7 8 9 10
In the above example, the class template is created which contains the nontype template argument, i.e., size. It is specified when the object of class 'A' is created.

=========================================
Default parameters for templates in C++: Like function default arguments, templates can also have default arguments. For example, in the following program, the second parameter U has the default value as char.
   
#include <iostream>  
using namespace std;
template<class T, class U = char>   
  class A 
{ 
public: 
    T x; 
    U y;
	void add()
	{
		cin>>x>>y;
		cout<<x+y<<endl;
	 } 
}; 
  
int main() 
{ 
    A<int> a;
	a.add(); 
    A<int, int> b; 
   b.add(); 
    return 0; 
} 
======================================================
The task is to implement some important functions of stack like pop(), push(), display(), topElement(), isEmpty(), isFull() using class template in C++. Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. For example, a software company may need sort() for different data types. Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.

C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by the keyword ‘class’.

Illustration:


Consider an example of plates stacked over one another in the canteen. The plate which is at the top is the first one to be removed, i.e. the plate which has been placed at the bottommost position remains in the stack for the longest period of time. So, it can be simply seen to follow LIFO(Last In First Out)/FILO(First In Last Out) order.

Example:

C++14
   
// C++ Program to Implement stack using Class Templates
 
// Including input output libraries
#include <iostream>
// Header File including all string functions
#include <string>
 
using namespace std;
 
#define SIZE 5
 
template <class T> 
class Stack {

public:
     Stack();
    void push(T k);
 
       T pop();
 
    // To print top element in stack using peek() method
    T topElement();
 
       // To check whether stack is full using isFull() method
    bool isFull();
 
    // To check whether stack is empty using isEmpty() method
    bool isEmpty();
 
private:
    // Taking data member top
    int top;
     // Initialising stack(array) of given size
    T st[SIZE];
};
 
template <class T> 
Stack<T>::Stack()
 { top = -1; }
 
template <class T> 
void Stack<T>::push(T k)
{
 
    // Checking whether stack is completely filled
    if (isFull()) {
        // Display message when no elements can be pushed
        // into it
        cout << "Stack is full\n";
    }
 
    // Inserted element
    cout << "Inserted element " << k << endl;
 
  
    top = top + 1;
 
    // Now, adding element to stack
    st[top] = k;
}
 

// To check if the stack is empty
template <class T>
 bool Stack<T>::isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
 
// To check if the stack is full or not
template <class T>
 bool Stack<T>::isFull()
{
    // Till top in inside the stack
    if (top == (SIZE - 1))
        return 1;
    else
 
        // As top can not exceeds th size
        return 0;
}
 

template <class T> T Stack<T>::pop()
{
    // Initialising a variable to store popped element
    T popped_element = st[top];
 
    // Decreasing the top as
    // element is getting out from the stack
    top--;
 
    // Returning the element/s that is/are popped
    return popped_element;
}
 
template <class T> 
T Stack<T>::topElement()
{
    // Initialising a variable to store top element
    T top_element = st[top];
 
    // Returning the top element
    return top_element;
}
 
int main()
{
 
    Stack<int> integer_stack;
    Stack<string> string_stack;
    integer_stack.push(2);
    integer_stack.push(54);
    integer_stack.push(255);
 
     string_stack.push("Welcome");
    string_stack.push("to");
    string_stack.push("cpp");
 
       cout << integer_stack.pop() << " is removed from stack"
         << endl;
 
    
    cout << string_stack.pop() << " is removed from stack "
         << endl;
 
       cout << "Top element is " << integer_stack.topElement()
         << endl;
 
    // Print and display the top element in string stack
    cout << "Top element is " << string_stack.topElement()
         << endl;
 
    return 0;
}===========================================================================

#include <iostream>
using namespace std;
int main() {

  int numbers[5];
  cout << "Enter 5 numbers: " << endl;
 //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];// cin >> *(numbers+i);
  }
  cout << "The numbers are: ";
  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";//  cout <<*(numbers+i);
  }

  return 0;
}

==================================================
//The C++ Program to Illustrate How to Find the Size of an Array

#include <iostream> 
using namespace std; 
  int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5 }; 
     // Size of one element of an array 
    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl; 
  
    // Size of array 'arr' 
    cout << "Size of arr: " << sizeof(arr) << endl; 
  
    // Length of an array 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Length of an array: " << n << endl; 
  
    return 0; 
}
================================================================
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // Defining an array 
    int arr[] = { 1, 2, 3, 4 }; 
  
    // Define a pointer 
    int* ptr = arr; 
  
    // Printing address of the arrary using array name 
    cout << "Memory address of arr: " << &arr[0] << endl; 
  
    // Printing address of the array using ptr 
    cout << "Memory address of arr: " << ptr << endl; 
  
    return 0; 
}
=======================================================
// C++ Program to Illustrate that Array Name is a Pointer 
// that Points to First Element of the Array 
#include <iostream> 
using namespace std; 
 

// C++ Program to Print Array Elements without Indexing 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    // Define an array 
    int arr[] = { 11, 22, 33, 44 }; 
  
    // Print elements of an array 
    cout << "first element: " << *arr << endl; 
    cout << "Second element: " << *(arr + 1) << endl; 
    cout << "Third element: " << *(arr + 2) << endl; 
    cout << "fourth element: " << *(arr + 3) << endl; 
  
    return 0; 
}

======================================================
// c++ program to illustrate the two dimensional array 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // Declaring 2D array 
    int arr[4][4]; 
  
    // Initialize 2D array using loop 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
         cin >>   *(*(arr+i)+j) ;
        } 
    } 
  
    // Printing the element of 2D array 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            cout << *(*(arr+i)+j)  << " \t"; 
        } 
        cout << endl; 
    } 
  
    return 0; 
}
===========================================================
//Array of Integer pointers
#include <iostream>  
using namespace std;  
int main()  
{ 
    int ptr1[5]; // integer array declaration  
    int *ptr2[5]; // integer array of pointer declaration  
    cout << "Enter five numbers :" <<endl;  
    for(int i=0;i<5;i++)  
    {  
        cin >> ptr1[i];  
    }  
    for(int i=0;i<5;i++)  
    {  
        ptr2[i]=&ptr1[i];   
    }    
  cout << "The values are" << endl; 
    for(int i=0;i<5;i++)  
    {  
        cout << *ptr2[i] << endl;  
    }
	
    } 
=================================================================
Array of Pointer to Strings

==>An array of pointers to strings is a data structure that holds multiple pointers, each pointing to a string. It allows you to store and manipulate a collection of strings in memory.
==>An array of pointer to strings is an array of character pointers that holds the address of the first character of a string or we can say the base address of a string.

The following are the differences between an array of pointers to string and two-dimensional array of characters:
==>An array of pointers to string is more efficient than the two-dimensional array of characters in case of memory consumption because an array of pointer to strings consumes less memory than the two-dimensional array of characters to store the strings.
==>In an array of pointers, the manipulation of strings is comparatively easier than in the case of 2d array. We can also easily change the position of the strings by using the pointers.






#include <iostream>  
using namespace std;  


#include <iostream>  
using namespace std;  
int main()  
{  
  char names[5][8] = {"rohan","geeta","rahul","rohit","rachana"};  
    for(int i=0;i<=5;i++)  
    { 
		 cout << names[i] << endl; 
		 cout<< *names[i]<<endl;
		 cout<<*(names+1)+0<<endl;
    }
    cout<<"---------------------------------------";
    for(int i=0;i<=5;i++)  
    { 
        for(int j=0;j<=5;j++)
        {
            cout<< names[i][j];
        }
        cout<<endl;
    }
    cout<<"======================================="<<endl;
    for(int i=0;i<=5;i++)  
    { 
        for(int j=0;j<=5;j++)
        {
            cout<<*(names+i)+j<<endl;
        }
        cout<<endl;
    }
    
    cout<<sizeof(names); 
}  

==========================================
#include <iostream>  
using namespace std;  
int main()  
{  
  char *names[5] = {"rohan","ram","rahul","rohit","rachanahhhhhhhhhhhhhhhhhhhhhhhh"};  
for(int i=0;i<=5;i++)  
    { 
		int j=0; 
        cout << names[i] << endl; 
	 cout << (names+i) << endl; 
	  cout << *(names+i) << endl;
		   		   cout << *(*(names+i)+j);
		   cout<<endl;
    }  
    cout<<sizeof(names); 
}  
======================================================================
operator overloading

Suppose there is a need to add two complex numbers, a function Add() can be written in the class and used as follows:
c3=c1.Add(c2);// c1,c2,c3 are the objects of complex class

==>However, it would be more natural if it is written as c1+c2.But the + operator in c++ works only for numeric built-in datatypes and c1 and c2 are user defined datatypes.As compiler doesot know the behaviour of any operator with UDTs ,if an operator is used with them,compiler gives an error.
==>To overcome such problems,c++ provides the feature of operator overloading. The '+' operator can be overloaded for a class and how to add objects can be specified.This bringd UDTs closer to built-in types.

==>operator overloading gives additional meaning to the existing operator like +,-,*,/ etc. Giving additional meaning doesnot mean a radical change,but an extension in the default behaviour of the operator. operator overloading helps the compiler to perform this type of operation when it is applied on UDTs. With the help of operator oerloading one can use the existing operators on UDTs. 

==>By using operator overloading we can add 2 userdefined datatypes also.we are giving extra task to an existing operator.
it gives additional meaning to the existing operator.this features makes UDTs more natural and close to built in datatypes.

==>the main idea behind “Operator overloading” is to use C++ operators with class variables or class objects. Redefining the meaning of operators really does not change their original meaning; instead, they have been given additional meaning along with their existing ones.

==>operator keyword is used to implement operator overloading.overloaded operators are implemented as function.An overloaded operator is called an operator function. An operator function is declared with the keyword operator preceding the operator.
ex:to overload the addition operator,a function called operator+ can be defined and implemented.


syntax:
returntype operator symbol(arg-list)
{
}
 
return_type class_name  : : operator op(argument_list)  
{  
     // body of the function.  
}  
Where the return type is the type of value returned by the function.

class_name is the name of the class.

operator op is an operator function where op is the operator being overloaded, and the operator is the keyword.


Rules and Regulations
========================================================================================
1)New operators cannot be defined or invented ..extending the meaning of the operators doesnot mean giving new meaning to the operators.
2)one cannot change the precedence or associativity of the operators.
3)one cannot change the arity of the operator.
4)we cannot overload membership operator(.),scope resolution operator(::),ternary operator,sizeof operator.
5) For operator overloading to work, at least one of the operands must be a user-defined class object.
================================================
#include<iostream>
using namespace std;
class complex
{
	int real,img;

public:
	complex();
	complex(int,int);
	void display();
	complex operator+(complex&);
	complex operator-(complex&);
	complex operator-();
	
	
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}
complex complex::operator+(complex & c)
{
	complex temp;
	temp.real=this->real + c.real;
	temp.img=this->img + c.img;
	return temp;
}
complex complex::operator-(complex & c)
{
	complex temp;
	temp.real=this->real - c.real;
	temp.img=this->img -c.img;
	return temp;
}
complex complex::operator-()
{
	complex temp;
	temp.real=(this->real * -1);
	temp.img=-this->img;
	return temp;
}
 
int main()
{
	/*complex c1(1,2);
	complex c2(3,4);
	complex c3=c1+c2;//c3=c1.operator+(c2)
	c3.display();*/
/*	complex c1(3,4);
	complex c2(4,5);
	complex c3=c1-c2;//c3=c1.operator-(c2)
	c3.display();*/

	complex c1(5,6);
	complex c2=-c1;//c2=c1.operator-()
	c2.display();
	
}

=====================================
#include<iostream>
using namespace std;
class complex
{
	int real,img;

public:
	complex();
	complex(int,int);
	void display();
	void operator-();
	
	
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}

void complex::operator-()
{
	
	real=(this->real * -1);
	img=-this->img;
	
}
 
int main()
{
	complex c1(5,6);
	-c1;//c1.operator-()
	c1.display();
	
}









=======================================================
#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	complex(int,int);
	void display();
	
	
	complex operator++();
	 complex operator++(int);
	 complex();
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}

complex complex::operator++()//pre
{
	++this->real;//this->real=this->real + 1
	++this->img;
	return (*this);
}
complex complex::operator++(int)
{
	complex temp= (*this);
	++this->real;
	++this->img;
	return temp;
}
int main()
{
	complex c1(1,2);
	complex c2=++c1;//c2=c1.operator++()
	c1.display();
	c2.display();

	complex c3(4,2);
	complex c4=c3++;//c4=c3.operator++(0);
	c3.display();
	c4.display();

}

==================================================

//overloading of decrement operator
#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	complex(int,int);
	void display();
	
	complex operator-();
	complex operator--();
	 complex operator--(int);
	 complex();
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}

complex complex::operator--()//pre
{
	--this->real;//this->real=this->real + 1
	--this->img;
	return (*this);
}
complex complex::operator--(int)
{
	complex temp= (*this);
	--this->real;
	--this->img;
	return temp;
}
int main()
{
	complex c1(1,2);
	complex c2=--c1;//c2=c1.operator--()
	c1.display();
	c2.display();

	/*complex c1(1,2);
	complex c2=c1--;//c2=c1.operator--(0);
	c1.display();
	c2.display();*/

}
//OVERLOADING OF = OPERATOR

==>one object can be assigned to another object provided the type of both the objects is same.
when object assignment is done,assignment operator function is called.

==>ex:
cstring s1("info");
cstring s2("tech");
s1=s2;//s1.operator=(s2) //memberwise copy

==>compiler provides a default implementation of the assignment operator for any class which performs memberwise copy of the data members. this mechanism of performing memberwise copy of the contents of the objects is called as shallow copying.
==>while performing memberwise copy,the address in the pointer data member of one object is copied into the pointer data member of another object.This means both the objects point to same memory location.it could lead to following problems:
1)Memory leakage:
2)Dangling pointer:

Therefore for classes with a pointer data member ex: class cstring,shallow copying technique cannot be used.
==>inorder to handle such memory related problems,the assignment operator needs to be overloaded.this enables deep copying
=========================================================================
==>user defined overloaded assignment operator function for the class cstring should take care of memory leakage and dangling pointer problems.steps involved in overloading the assignment operator are as follows:
1)The old buffer is deleted. ex:if object s2 is assigned to s1, first the buffer pointed by s1 is deleted.This prevents memory leakage problem.
2)Enough new memory is allocated on heap for s1.The new memory is equal to the size of buffer pointed by s2.
3)The string is copied to the newly alloacted memory .The string of s2 is copied to the newly allocated memory.
step2 and step 3 prevent the problem of dangling pointer.

==>call s1=s2 is resolved as s1.operator=(s2).
s1 is an implicit parameter which is the string to be modified. s2 is passed by reference to avoid copy constructor call.

==>
ex:
cstring s1("info");
cstring s2("tech");
s1=s2;//calls assignment operator
cstring s3=s1;//calls copy constructor

==>If a class contains atleast one data member as a pointer then to avoid memory  related problems in the applications it is necessary for the programmer to implement the following:
1)userdefined copy constructor
2)userdefined destructor
3)userdefined assignment operator


#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
		void display();
		string1(char*);
		void operator=(string1&);
		string1(string1&)
		{
			cout<<"copy constructor is called";
		}
		~string1()
		{
			
			cout<<"destrutor is called"<<this<<endl;
			if(ptr)
			delete[] ptr;
		}
		

};
void string1::operator=(string1& s)
{
	cout<<"assignment is called\n";
	delete[] ptr;
	len=s.len;
	ptr=new char[len+1];
	strcpy(ptr,s.ptr);
}
void string1::display()
{
	cout<<"length is "<<len<<endl;
 	cout<<"string is "<<ptr<<endl;
 	
}
string1::string1(char * sptr)
{
cout<<this<<endl;
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
	

int main()
{


	string1 s1("abc");
	string1 s2("xyz");
//	s2=s1;//s2.operator=(s1)
//	s2.display();
	
//	string1 s4(s1);//give call to copy constructor
//	s4.display();
	
	s2=s1;//s2.operator=(s1)
	s2.display();
	s1.display();
	
}








============================================================================
When is the copy constructor called? 
In C++, a Copy Constructor may be called in the following cases: 

1)When an object of the class is returned by value.
 ==>If a function is returning an object by value,
a)A temporary object is automatically created by invoking the copy constructor,This temporary
 object holds the state of the returned object.
b)Destrutor is invoked for destroying the local object
c)temporary object is returned to the caller function and is assigned memberwise(shallow copy)
 to the object in the caller.
d)after assignment,this temporary object is destroyed.

#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
		void display();
		string1(char*);
		string1 operator=(string1&);
		string1(string1&)
		{
			cout<<"copy constructor is called";
		}
		~string1()
		{
			
			cout<<"destrutor is called"<<this<<endl;
		}
		
};
string1 string1::operator=(string1& s)
{
	cout<<"assignment is called\n";
	len=s.len;
	delete[] ptr;
	ptr=new char[len+1];
	strcpy(ptr,s.ptr);
	return (*this);
}
void string1::display()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
	cout<<this<<endl;
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}	

int main()
{


	string1 s1("abc");
	string1 s2("xyz");
	//string1 s3=s1;//s2.operator=(s1)
	s1=s2;
	

}==================================================================================



Object oriented concepts:

Data hiding:

==>hiding  of the data
==>our internal data should not go outside directly i..e outside person should not access our internal data directly.i.e we should hide our data..
==> to check ur mail. by typing www.gmail.com,ur inbox mailbox wont get open.compulsory u have to provide username and password,ur gmail data is not coming outside directly,we have to do some sort of validation. after validation that data is going to come.
==>ex:ICICI bank account
our main data should not  go directly. some sort of authentication is required then only  the data should go is called data hiding.

class Account
{
	private :
	double bal; //by implementing this bal variable as a private , we can implement data hiding
				//I want check account balance then how I will check, If u want to balance information then I will call getBal().
public:
double getBalance()
{
	//validation;
	if(valid)
	return balance;

}
//user has to call public method, within the method ,we have to perform validation,if validation succed,then only 	we can be able to provide our data.

Advantage:
whereever hiding is there, the biggest advantage is security
======================================================================
Abstraction:


Abstraction means not complete,partially implemented, not completely provided class.
hiding internal implementation,just highlight the set of services what we are offering.
these are the set of services what I m going to offer,but how we internally implemented, plz dont ask due to security reason.
If I am exposing my internal code to any person then where is security to my code.thats why hide the internal code.

ex:If we go to At,swipe the card,enter pinnumber,which operation u want to do(withdraw,),
in this process we dont know which code is executing.
If u click withdraw button,internally how this functionality is implemented,which sql query is executing,where the database server is locating ,all this information bank people will never highlited.
bank people thru ATM gui screen,they are going to highlight the set of services what they are offering.

Ex: I want to develop java application,several services are available(withdraw,deposit),
A gui base .net application want to communicate with our java application. from.net application we have to call withdraw(), in the middle i will expose all my set of services, called as interface.
.net person has to call withdraw(),internally how this functionality is implemented we will never going to expose. because of this abstraction/interface concept two different application can communicate with each other without hightlighting our internal application. 

ADVANTAGE:
1)security because outsider dont have idea ,internally how it is implemented

2)Enhancement:suppose withdraw() is implemented using java, I want to replace with .net functionality,internally I made changes,but gui screen is same.
without affecting enduser ,we can perform any changes in our internal code.

3)Maintainablity and modularity of the application improves because we are  hiding our internal implementation.



===============================================================
Encapsulation:

capsule: whatever the medicine require to cure cold,that medicine is going to be encapsulated. its going to be grouped into this capsule. capsule is nothing but unit, all the required things are grouped
into 1 capsule. in the same way.

ex:for every student some data members and functions are der,
the process of encapsulating or grouping of data members and corresponding behaviour into a single unit. that unit itself is called as class


int age;
int rollno;
int marks;
	+

read()
write()

student related data + behaviour

Every c++ class is an example of encapsulation.


==>if any component follows data hiding and abstraction, that component is said to be encapsulated component.
Encapsulation=data hiding + Abstraction

class Account
{
	private:
	double balance;
	public:
	public double getBal()	
	{
		//validate
		return balance;
		public void setBalance(double amt)
		{
			balance=balance + amt;
		}
	}

i will never highlight this functionalities  to outside person directly, I will provide GUI screen to the user. in that balance enq. whenever user click bal enquiry ,functionality will get executed.but enduser dont know,internally which code is executed.
==================================
======================================================================

Friend Class and Function in C++

==>
Data hiding is a fundamental concept of object-oriented programming. It restricts the access of private members from outside of the class.
Similarly, protected members can only be accessed by derived classes and are inaccessible from outside. For example,
However, there is a feature in C++ called friend functions that break this rule and allow us to access member functions from outside the class.

A friend class can access private and protected members of other classes in which it is declared as a friend. 
It is sometimes useful to allow a particular class to access private and protected members of other classes. 

We can declare a friend class in C++ by using the friend keyword.

class Demo //Base class
{
	//Demo1 is a friend class of Demo
	friend class Demo1;
}
class Demo1 // friend class
{
//statements;
}

Syntax:
friend class class_name;    // declared in the base class

========================================================


// C++ Program to demonstrate the functioning of a friend class
#include <iostream>
using namespace std;
 class Demo {
private:
    int private_variable;
 protected:
    int protected_variable;
 
public:
    Demo()
    {
        private_variable = 10;
        protected_variable = 99;
    }
     // friend class declaration
    friend class F;
};
 // Here, class F is declared as a friend inside class Demo. Therefore,
// F is a friend of class Demo. Class F can access the private members of class Demo.
class F {
public:
    void display(Demo& t)
    {
        cout << "The value of Private Variable = "<< t.private_variable << endl;
        cout << "The value of Protected Variable = "<< t.protected_variable;
    }
};
int main()
{
    Demo g;
    F fri;
    fri.display(g);
    return 0;
}

Output
The value of Private Variable = 10
The value of Protected Variable = 99

Note: We can declare friend class or function anywhere in the base class body whether its private, protected or public block. It works all the same.
=====================================================================================
Friend Function




==>Like a friend class, a friend function can be granted special access to private and protected members of a class in C++. They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.
If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.

Friend function has the priviliges to access all private and protedcted members of the class.


A friend function can be:
A global function:
friend return_type function_name (arguments);    // for a global function
A member function of another class
friend return_type class_name::function_name (arguments);    // for a member function of another class
===================================================================
1. Global Function as Friend Function
We can declare any global function as a friend function. The following example demonstrates how to declare a global function as a friend function in C++:

Example:

   
// C++ program to create a global function as a friend
// function of some class
#include <iostream>
using namespace std;
 
class base {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }
     
      // friend function declaration
    friend void friendFunction(base& obj);
};
 
 
// friend function definition
void friendFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}
 
// driver code
int main()
{
    base object1;
    friendFunction(object1);
 
    return 0;
}

Output
Private Variable: 10
Protected Variable: 99
In the above example, we have used a global function as a friend function. In the next example, we will use a member function of another class as a friend function.

==============================================================================================
2	Member Function of Another Class as Friend Function
We can also declare a member function of another class as a friend function in C++. The following example demonstrates how to use a member function of another class as a friend function in C++:

Example:

C++
   
// C++ program to create a member function of another class
// as a friend function
#include <iostream>
using namespace std;
 
class base; // forward definition needed
// another class in which function is declared
class anotherClass {
public:
    void memberFunction(base& obj);
};
 
// base class for which friend is declared
class base {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend function declaration
    friend void anotherClass::memberFunction(base&);
};
 
// friend function definition
void anotherClass::memberFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}
 
// driver code
int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);
 
    return 0;
}

Output
Private Variable: 10
Protected Variable: 99
Note: The order in which we define the friend function of another class is important and should be taken care of. We always have to define both the classes before the function definition. Thats why we have used out of class member function definition.
======================================================================

Features of Friend Functions
 A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.

A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.

The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.

A friend function who is global fun cannot be called using the object name and dot operator. However, it may accept the object as an argument whose value it wants to access.
A friend function can be declared in any section of the class i.e. public or private or protected.
=======================================================
Advantages of Friend Functions
A friend function is able to access members without the need of inheriting the class.
The friend function acts as a bridge between two classes by accessing their private data.
It can be declared either in the public or private or protected part of the class.

Disadvantages of Friend Functions
                                    Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
Friend functions cannot do any run-time polymorphism 

Important Points About Friend Functions and Classes
Friends should be used only for limited purposes. Too many functions or external classes are declared as friends of a class with protected or private data access lessens the value of encapsulation of separate classes in object-oriented programming.
Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
Friendship is not inherited. 



======================================================================================
Example :
#include <iostream>    
using namespace std;    
class Box    
{    
    private:    
        int length;    
    public:    
        Box(){
length=0;  }    
        friend int printLength(Box); //friend function    
};    
int printLength(Box b)    
{    
   b.length += 10;    
    return b.length;    
}    
int main()    
{    
    Box b;    
    cout<<"Length of box: "<< printLength(b)<<endl;    
    return 0;    
}    
Output:

Length of box: 10  
=============================================================

==================================================================================
C++ Program to swap two members using Friend Function

Approach: 
Create a class Swap, declare three variables in it, i.e., a, b, and temp and create a constructor for inputs. Declare a friend function in it. Define the friend function outside the class scope by taking arguments as call by reference to pass the copy of Swap Object. Perform the swap operation with Swap variables.

   
// C++ Program to swap two numbers using friend function
#include <iostream>
 using namespace std;
 class Swap {
 
    // Declare the variables of Swap Class
    int temp, a, b;
 
public:
 
    // Define the parameterized constructor, for inputs
    Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
 
    // Declare the friend function to swap, take arguments  as call by reference
    friend void swap1(Swap&);
};
 
// Define the swap function outside class scope
void swap1(Swap& s1)
{
    // Call by reference is used to passed object copy to
    // the function
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
 
    // Swap operations with Swap Class variables
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
 
// Driver Code
int main()
{
      Swap s(4, 6);
    swap1(s);
    return 0;
}

Output: 
Before Swapping: 4 6
After Swapping: 6 4


========================================================
Approach 2:
Approach: 
Create a class Swap, declare one variable in it, i.e., num and create a constructor for inputs. Declare a friend function in it. Define the friend function outside the class scope by taking arguments as call by reference to pass the copy of Swap Object. Perform the swap operation.

   
//C++ Program to swap data members of two objects of a class using friend function.
#include <iostream> 
   
using namespace std; 
   
class Swap { 
   
    // Declare the variable of Swap Class 
    int num;
   
public: 
   
    // Define the parameterized constructor, for input. 
    Swap(int num) 
    { 
        this->num = num; 
    } 
   
    // Declare the friend function to swap, take arguments  
    // as call by reference 
    friend void swap(Swap&, Swap&); 
}; 
   
// Define the swap function outside class scope 
void swap(Swap& s1, Swap& s2) 
{ 
    // declare a temporary variable.
    int temp;
    // Call by reference is used to passed object copy to 
    // the function 
    cout << "\nBefore Swapping: " << s1.num << " " << s2.num; 
   
    // Swap operations with objects of class Swap
    temp = s1.num; 
    s1.num = s2.num; 
    s2.num = temp; 
    cout << "\nAfter Swapping: " << s1.num << " " << s2.num; 
} 
   
// Driver Code 
int main() 
{ 
    // Declare and Initialize the objects of Swap class
    Swap s1(6), s2(10); 
    swap(s1,s2); 
    return 0; 
} 
===================================================================
 difference between Static Function and Friend Function:


Static Function: It is basically a member function that can be called even when the object of the class is not initialized. These functions are associated with any object and are used to maintain a single copy of the class member function across different objects of the class. This function is denoted by using the static keyword.

Friend Function: It is basically a function that is especially required for accessing non-public members of the class. It has the right to access all private and protected members of the class. It usually provides some additional functionality that is not normally used by class and allows sharing class information by non-member function.

1)It is a member function of a class that is called even when the object of the class is not initialized.	
A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. 
2)In this, it cannot access any variable of its class except for static variables.
In this, it can access private and public members of the class.
3)It is denoted by placing a static keyword before the function name.
It is denoted by placing a friend keyword before the function name.
4)It can have access to members of one class.  
It can have access to members of several classes.  
5)It cannot be used when one needs to overload operators.  
It can be used when one needs to overload operations because overloading operators can only be done through friends or non-static members.  
======================================================================================


#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	complex();
	complex(int,int);
	void display();
	complex operator+(int);
	friend complex operator+(int,complex&);
};
complex::complex()
{}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}
complex complex::operator+(int num)
{
	complex temp;
	temp.real=real + num;
	temp.img=this->img + num;
	return temp;
}
complex operator+(int num,complex& c)
{
	complex temp;
	temp.real=c.real + num;
	temp.img=c.img + num;
	return temp;
}
int main()
{
/*	complex c1(1,2);
	complex c2=c1 + 5;//c2=c1.operator+(int)
	c2.display();//6+7i*/
	
	complex c1(1,2);
	complex c2=5+c1;// c2=5.operator+(c1) =====> c2=operator+(5,c1)            
	c2.display();
}
=========================================================================
//overloading of == operator
// C++ Program to overload == operator 
#include<iostream> 
#include<string> 
using namespace std; 
  
class Car{ 
  private: 
    string name; 
    int cost; 
 
   public: 
        Car(string n, int c){ 
            name=n; 
            cost=c; 
        } 
        bool operator == (const Car &c){ 
            if (name == c.name && cost == c.cost) 
                return true; 
            return false; 
        } 
}; 
int main(){ 
    Car car1 ("Santro",500000); 
    Car car2 ("Safari",1000000); 
    if (car1 == car2) //car1.operator==(car2)
        cout<<"Equivalent"<<endl; 
    else
        cout<<"Not Equivalent"<<endl; 
}
====================================================================
//overloading of insertion and extraction operator
In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input. 

1) cout is an object of ostream class and cin is an object of istream class 
2) These operators must be overloaded as a global function. And if we want to allow them to access private data members of the class, we must make them friend. 
Why these operators must be overloaded as global? 
In operator overloading, if an operator is overloaded as a member, then it must be a member of the object on the left side of the operator. For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes). To make this statement compile, we must overload ‘+’ in a class of ‘ob1’ or make ‘+’ a global function. 
The operators ‘<<‘ and ‘>>’ are called like ‘cout << ob1’ and ‘cin >> ob1’. So if we want to make them a member method, then they must be made members of ostream and istream classes, which is not a good option most of the time. Therefore, these operators are overloaded as global functions with two parameters, cout and object of user-defined class.
Following is a complete C++ program to demonstrate overloading of <> operators.
 

#include <iostream>
using namespace std;
 
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend void operator << (ostream &out, const Complex &c);
    friend void operator >> (istream &in,  Complex &c);
};
 
void operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out  <<"+"<< c.imag <<"i"<< endl;
   
}
 
void operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    
}
 
int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   return 0;
}
==============================================================================
#include<iostream>
using namespace std;
class Date1
{
      int day;
      int month;
      int year;
      public:
             Date1(int d,int m,int y)
             {
                   day=d;
                   month=m;
                   year=y;
             }
             
              void operator-(int);
              void operator+(int);
             void display()
             {
                  cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
             }
};
void Date1:: operator-( int y)
{
     day= day-y;
    month=month-3;
year=year-6;
 cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
}
void Date1:: operator+(int y)
{
     day= day+y;
    month=month+3;
year=year+6;
 cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
}
int main()
{
    int dd,mm,yy;
    cout<<"Enter Day:";
    cin>>dd;
    cout<<"Enter Month:";
    cin>>mm;
    cout<<"Enter Year:";
    cin>>yy;
    
    Date1 d1(dd,mm,yy);
    d1-1;//d1=d1.operator-(int)
   	d1+2;
   
    return 0;
}
======================================================
#include<iostream>
using namespace std;
class time
{
      int hr;
      int min;
      int sec;
      public:
             time(int h,int m,int s)
             {
                   hr=h;
                   min=m;
                   sec=s;
             }
             
              time& operator-(int);
              time& operator+(int);
             void display()
             {
                  cout<<"time:"<<hr<<":"<<min<<":"<<sec<<endl;
             }
};
time& time::operator-(int y)
{
     hr= hr-y;
     min= min-y;
     sec= sec-y;
     return (*this);
}
time& time::operator+(int y)
{
     hr= hr+y;
     min= min+y;
     sec= sec+y;
     return (*this);
}
int main()
{
    int hr,min,sec;
    cout<<"Enter hr:";
    cin>>hr;
    cout<<"Enter Min:";
    cin>>min;
    cout<<"Enter sec:";
    cin>>sec;
    
    time t(hr,min,sec);
    t=t-1;
    t.display();
    
    return 0;
}
=============================================================
nline Function

==>we can use several methods to optimize the code and enhance a program’s performance. For example, in the C language, the Macro function is used to reduce the program’s execution time. Since C++ is an extension of C, it also provides a function called the inline function, which can speed up a program by reducing the execution time. 
==>C++ provides inline functions to reduce the function call overhead. An inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.

==>Syntax:

inline return-type function-name(parameters)
{
    // function code
}  

==>Remember, inlining is only a request to the compiler, not a command. The compiler can ignore the request for inlining. 

==>The compiler may not perform inlining in such circumstances as: 
If a function contains a loop. (for, while and do-while) 
If a function is recursive. 
If a function contains a switch or goto statement. 

Why Inline Functions are Used?
1)When the program executes the function call instruction the CPU stores the memory address of the instruction following the function call, copies the arguments of the function on the stack, and finally transfers control to the specified function. The CPU then executes the function code, stores the function return value in a predefined memory location/register, and returns control to the calling function. This can become overhead if the execution time of the function is less than the switching time from the caller function to called function (callee). 

For functions that are large and/or perform complex tasks, the overhead of the function call is usually insignificant compared to the amount of time the function takes to run. However, for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function’s code. This overhead occurs for small functions because the execution time of a small function is less than the switching time.

==>When a function is invoked, it expands in line and is known as an inline function. When an inline function is invoked, its entire body of code is added or replaced at the inline function call location. At compile time, the C++ compiler makes this substitution.

2)The main use of the inline function in C++ is to save memory space. Whenever the function is called, then it takes a lot of time to execute the tasks, such as moving to the calling function. If the length of the function is small, then the substantial amount of execution time is spent in such overheads, and sometimes time taken required for moving to the calling function will be greater than the time taken required to execute that function.

The solution to this problem is to use macro definitions known as macros. The preprocessor macros are widely used in C, but the major drawback with the macros is that these are not normal functions which means the error checking process will not be done during the compilation.

C++ has provided one solution to this problem. In the case of function calling, the time for calling such small functions is huge, so to overcome such a problem, a new concept was introduced known as an inline function. When the function is encountered inside the main() method, it is expanded with its definition thus saving time.

Inline functions Advantages: 
Function call overhead doesn’t occur. 
It also saves the overhead of push/pop variables on the stack when a function is called. 
It also saves the overhead of a return call from a function. 
enhance the execution time and speed of your program.
The compilation speed of the program gets increased since the inline functions prevent function call overhead. 


Inline function Disadvantages: 
1)If you use too many inline functions then the size of the binary executable file will be large, because of the duplication of the same code. 
2)The inline function may increase compile time overhead if someone changes the code inside the inline function then all the calling location has to be recompiled because the compiler would be required to replace all the code once again to reflect the changes, otherwise it will continue with old functionality. 

#include <iostream>
using namespace std;
inline int cube(int s) { return s * s * s; }
int main()
{
    cout << "The cube of 3 is: " << cube(3) << "\n";
    return 0;
}

Output
The cube of 3 is: 27

========================================
==>If you need to explicitly declare an inline function in the class then just declare the function inside the class and define it outside the class using the inline keyword. 


For Example: 

class S
{
public:
    int square(int s); // declare the function
};

inline int S::square(int s) // use inline prefix
{
}

=================================================================
// C++ Program to demonstrate inline functions and classes
#include <iostream>
 
using namespace std;
 
class operation {
    int a, b, add, sub, mul;
    float div;
 
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation ::get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}
 
inline void operation ::sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << a + b << "\n";
}
 
inline void operation ::difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}
 
inline void operation ::product()
{
    mul = a * b;
    cout << "Product of two numbers: " << a * b << "\n";
}
 
inline void operation ::division()
{
    div = a / b;
    cout << "Division of two numbers: " << a / b << "\n";
}
 
int main()
{
    cout << "Program using inline function\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}
Output:

Enter first value: 45
Enter second value: 15
Addition of two numbers: 60
Difference of two numbers: 30
Product of two numbers: 675
Division of two numbers: 3 
=======================================================================
What is wrong with the macro? 
There are some problems with the use of macros in C++. 
Macro cannot access private members of the class.
the major drawback with the macros is that these are not normal functions which means the error checking process will not be done during the compilation.
One other thing is that the macros are managed by the preprocessor and inline functions are managed by the C++ compiler. 

===========================================================================



=============================================================================


FAQ

Difference between Inline and Macro in C++

Macro : It is also called preprocessors directive. The macros are defined by the #define keyword. Before the program compilation, the preprocessor examines the program whenever the preprocessor detects the macros then preprocessor replaces the macro by the macro definition. Syntax of Macro:
#define MACRO_NAME Macro_definition 
Example of Macro:
 
#include <iostream> 
using namespace std; 
  
// macro with parameter 
#define MAXIMUM(a, b) (a > b) ? a : b 
  
// Main function for the program 
int main() 
{ 
    cout << "Max (100, 1000):"; 
    int k = MAXIMUM(100, 1000); 
    cout << k << endl; 
  
    cout << "Max (20, 0):"; 
    int k1 = MAXIMUM(20, 0); 
    cout << k1; 
  
    return 0; 
} 
Output:
Max (100, 1000):1000
Max (20, 0):20 

	Inline	Macro
1.	An inline function is defined by the inline keyword.	Whereas the macros are defined by the #define keyword.
2.	Through inline function, the class data members can be accessed.	Whereas macro can’t access the class data members.
3.	In the case of inline function, the program can be easily debugged.	Whereas in the case of macros, the program can’t be easily debugged.
4.	In C++, inline may be defined either inside the class or outside the class.	Whereas the macro is all the time defined at the beginning of the program.
5Inline functions are expanded by the compiler.Macros are expanded by the preprocessor.

==========================================================================================
Inline Function vrs Normal Function  

1	It is expanded inline when it is invoked. 	It is a function that provides modularity to the program.  
2.	It is basically a function that is used when functions are small and called very often.  	It is basically a group of statements that performs a particular task.  It is used when functions are big.
3.	It requires ‘inline‘ keyword in its declaration.  	It does not require any keyword in its declaration.  
4.	It generally executes much faster as compared to normal functions.  	It generally executes slower than inline function for small size function.  
5.	The compiler always places a copy of the code of that function at each point where the function is called at compile time. 	It does not provide such a type of functionality.  
6.	Too many inline functions affect file size after compilation as it duplicates the same code.  	Too many normal functions do not affect file size after compilation. 
================================================================
Exception Handling

==>An exception is an unexpected problem that arises during the execution of a program our program terminates suddenly with some errors/issues. Exception occurs during the running of the program (runtime).
==>In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is called exception handling.
Exception handling is a manner to handle the runtime error, we carry out exception handling, so, the normal flow of the program may be maintained even after runtime errors. 


====================================================================================
Why do we need Exception Handling in C++?
The following are the main advantages of exception handling over traditional error handling:

1)Separation of Error Handling Code from Normal Code: There are always if-else conditions to handle errors in traditional error handling codes. These conditions and the code to handle errors get mixed up with the normal flow. This makes the code less readable and maintainable. With try/catch blocks, the code for error handling becomes separate from the normal flow.

2)Grouping of Error Types: In C++, both basic types and objects can be thrown as exceptions. 



4)The Exception Handling mechanism offers a way to transfer control from one part of a program to another, This makes it clean to separate the mistake handling code from the code written to address the real functionality of the program.thats why detecting of errors becomes very easy

5)Exception Handling in C++ is a process to handle runtime errors. We perform exception handling so the normal flow of the application can be maintained even after runtime errors.
====================================================================================
==========================================================================
Syntax of try-catch in C++
try {         
     // Code that might throw an exception
     throw SomeExceptionType("Error message");
 } 
catch( ExceptionName e1 )  {   
     // catch block catches the exception that is thrown from try block
 } 
1. try in C++
The try keyword represents a block of code that may throw an exception placed inside the try block. It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.

2. catch in C++
The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.

3. throw in C++
An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.

Note: Multiple catch statements can be used to catch different type of exceptions thrown by try block.
==========================================================================================
// C++ program to show what happens  
// when division by zero is done  
// and exceptions are not handled 
#include <iostream> 
using namespace std; 
  
// Driver code 
int main()  
{ 
  int numerator = 5; 
  int denominator = 0; 
    
  int ans = numerator/denominator; 
    
  // The result will not be displayed  
  cout << ans << endl; 
    
  return 0; 
    
} 
The above program will show an abnormal behavior
===============================================================================
// C++ program to handle  
// divide by zero exception 
#include <iostream> 
using namespace std; 
  
 
int main()  
{ 
  int numerator = 5; 
  int denominator = 0; 
  int result; 
    
  try
  { 
    if(denominator == 0) 
    { 
      throw denominator; 
    } 
    result = numerator / denominator; 

  cout << "Division Result is: " << result;
}
  catch(int ex) 
  { 
    cout << "Exception: Divide by zero not allowed :" <<  
             ex << endl; 
  } 
   
    
  return 0; 
}

Output
Exception: Divide by zero not allowed :0
Division Result is: 4197440

Example 2: Below is the C++ program to input an age integer if the age is less than 18 then return NO, but if the age is greater than or equal to 18 then return Yes:

   
// C++ program to input an age integer  
// if the age is less than 18 then  
// return NO, but if the age is greater 
// than or equal to 18 then return Yes 
#include <iostream> 
using namespace std; 
  
// Driver code 
int main()  
{ 
  try 
  { 
    int age = 10; 
    if (age >= 18)  
    { 
      cout << "YES, you are old enough."; 
    }  
    else 
    { 
      throw (age); 
    } 
  } 
  catch (int num)  
  { 
    cout << "No, You must be at least 18 years old" << 
             endl; 
    cout << "Age is: " << num;   
  } 
  return 0; 
}

Output
No, You must be at least 18 years old
Age is: 10

C++ Standard Exceptions
==>C++ defines a set of standard exceptions defined in <exception> which can be used in the programs. These exceptions are arranged in the parent-child class hierarchy. 
==>==>In C++, exception is an event or object which is thrown at runtime. All exceptions are derived from std::exception class. It is a runtime error which can be handled. If we don't handle the exception, it prints exception message and terminates the program.


Below is the table listing the standard exceptions with description:
Exception	Description
1.	std::exception	An exception and parent class of all the standard C++ exceptions.
2.	std::bad_alloc	This exception can be thrown by new.
3.	std::bad_cast	This exception can be thrown by dynamic_cast.
4.	std::bad_typeid	This can be thrown by type id.
5.	std::overflow_error	This is thrown if a mathematical overflow occurs.
==========================================================================================
New Exception in C++
The customized exceptions can be defined by inheriting and overriding exception class functionality.

Syntax:

 use std::exception
==============================================================
Rethrowing an Exception:

In C++, try/catch blocks can be nested. Also, an exception can be re-thrown using “throw; “. 
Explain the concept of Rethrowing exceptions?
A rethrowing exception is a term used when we throw the exception again from one catch block to another. The exception is thrown towards another outside catch block.

Example:

C++
   
#include <iostream> 
using namespace std; 
  
void help() 
{ 
    try { 
        throw 10; 
    } 
    catch (...) { 
        cout << "First throw called\n"; 
        throw 0; 
    } 
} 
  
int main() 
{ 
  
    try { 
        help(); 
    } 
    catch (int x) { 
        cout << "Rethrowing throw called\n"; 
    } 
  cout<<"end\n";
    return 0; 
}


=====================================================

Example

The following program shows try/catch blocks nesting.

CPP
   
// C++ program to demonstrate try/catch blocks can be nested
// in C++
 
#include <iostream>
using namespace std;
 
int main()
{
 
    // nesting of try/catch
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw 0: // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }
    return 0;
}

Output
Handle Partially Handle remaining 
A function can also re-throw a function using the same “throw; ” syntax. A function can handle a part and ask the caller to handle the remaining.
=================================================================

imp
When an exception is thrown, all objects created inside the enclosing try block are destroyed before the control is transferred to the catch block.

Example

The following program demonstrates the above property.

CPP
   
// C++ program to demonstrate
 
#include <iostream>
using namespace std;
 
// Define a class named Test
class Test {
public:
    // Constructor of Test
    Test() { cout << "Constructor of Test " << endl; }
    // Destructor of Test
    ~Test() { cout << "Destructor of Test " << endl; }
};
 
int main()
{
    try {
        // Create an object of class Test
        Test t1;
 
        // Throw an integer exception with value 10
        throw 10;
    }
    catch (int i) {
        // Catch and handle the integer exception
        cout << "Caught " << i << endl;
    }
}

Output
Constructor of Test 
Destructor of Test 
Caught 10
======================================================================






   // C++ program to demonstate the use of try,catch and throw
// in exception handling.
 
#include <iostream>
using namespace std;
 
int main()
{
    int x = -1;
 
    // Some code
    cout << "Before try \n";
 
    // try block
    try {
        cout << "Inside try \n";
        if (x < 0) {
            // throwing an exception
            throw x;
            cout << "After throw (Never executed) \n";
        }
    }
 
    // catch block
    catch (int x) {
        cout << "Exception Caught \n";
    }
 
    cout << "After catch (Will be executed) \n";
    return 0;
}
======================================================================
Properties of Exception Handling in C++
Property 1
There is a special catch block called the ‘catch-all’ block, written as catch(…), that can be used to catch all types of exceptions.

Example

In the following program, an int is thrown as an exception, but there is no catch block for int, so the catch(…) block will be executed. 

CPP
   
// C++ program to demonstate the use of catch all
// in exception handling.
 
#include <iostream>
using namespace std;
 
int main()
{
    // try block
    try {
 
        // throw
        throw 10;
    }
 
    // catch block
    catch (char* excp) {
        cout << "Caught " << excp;
    }
 
    // catch all
    catch (...) {
        cout << "Default Exception\n";
    }
    return 0;
}

Output
Default Exception

Property 2
Implicit type conversion doesn’t happen for primitive types.

Example

In the following program, ‘a’ is not implicitly converted to int. 

CPP
   
//// C++ program to demonstate property 2: Implicit type
/// conversion doesn't happen for primitive types.
// in exception handling.
 
#include <iostream>
using namespace std;
 
int main()
{
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "Caught " << x;
    }
    catch (...) {
        cout << "Default Exception\n";
    }
    return 0;
}

Output
Default Exception

Output: 

Default Exception
Property 3
If an exception is thrown and not caught anywhere, the program terminates abnormally.

Example

In the following program, a char is thrown, but there is no catch block to catch the char. 

CPP
   
// C++ program to demonstate property 3: If an exception is
// thrown and not caught anywhere, the program terminates
// abnormally in exception handling.
 
#include <iostream>
using namespace std;
 
int main()
{
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "Caught ";
    }
    return 0;
}

==============================


 
====================================================================================
   
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    try { 
        throw 10; 
    } 
    catch (...) { 
        cout << "default exception \n"; 
    } 
    catch (int param) { 
        cout << "integer exception \n"; 
    } 
  
    return 0; 
}
Output:

An error will be raised
Explanation: The default catch block should be the last catch block or else other catch blocks will never be reached.
==========================================================

The new exception can be defined by overriding and inheriting exception class functionality.

C++ user-defined exception example
Let's see the simple example of user-defined exception in which std::exception class is used to define the exception.
#include <iostream>  
#include <exception>  
using namespace std;  
class MyException : public exception{  
    public:  
        const char * what() const throw()  
        {  
            return "Attempted to divide by zero!\n";  
        }  
};  
int main()  
{  
    try  
    {  
        int x, y;  
        cout << "Enter the two numbers : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            MyException z;  
            throw z;  
        }  
        else  
        {  
            cout << "x / y = " << x/y << endl;  
        }  
    }  
    catch(exception& e)  
    {  
        cout << e.what();  
    }  
}  
Output:

Enter the two numbers :
10
2
x / y = 5  
Output:

Enter the two numbers :
10
0
Attempted to divide by zero!
-->
Note: In above example what() is a public method provided by the exception class. It is used to return the cause of an exception.

Manipulators in C++ 

Manipulator are used in c++ for formatting output.
Manipulators specifically designed to be used in conjunction with the insertion (<<) and extraction (>>) operators on stream objects.
To access manipulators, the file iomanip.h should be included in the program.
 
The iostream.h and iomanip.h header file has several pre-defined manipulators.

There are 2 types of manipulators
1)Manipulator operator
Manipulators without arguments

C++ manipulator endl function is used to insert a new line character
Working of endl manipulator is similar to '\n' character in C++. It prints the output of the following statement in the next line.
#include <iostream>     // std::cout, std::end  
using namespace std;  
  
int main () {  
  
  int a=100;  
  double b=3.14;  
  
  cout << a;  
  cout << endl;              // manipulator inserted alone  
  cout << b << endl << a*b;  // manipulator in concatenated insertion  

}  
==========================================

2)Manipulator Function
manipulator are used to change the output results.
1)setw-->in c when we used \t we get spaces. but my req is to perform formated output.
here setw means set width,here it will allocate specify number of spaces on the screen and it is going to print text from right to left.
printf() ,cout --->print output from left to right
setw print output from right to left

cout<<"1\n10\n100\n";
output is 1
		1 0
		1 0 0
result     3  0 0

our requirement is  
		1 
	1	0
1	0	0
result 111

print matter from right to left go for setw.

cout<< setw(5)<<1<<endl;//5 means no of spaces
leave 5 space
    1
cout<<setw(5)<<10<<endl;
   10
cout<<setw(5)<<100
  100
//easy to calculate bill
====================================
setfill()-->fill space with some symbol;
cout<<setfill('*');
cout<<setw(5)<<1<<endl
//****1

setfill works with setw.  when setw is der then only setfill is implemented.

===================================================
cout<<setfill('*');
cout<<setw(5)<<1<<endl
cout<<setfill('*');
cout<<setw(5)<<10<<endl
cout<<setfill(' ');//when we dont want * symbol.setfill continue untill we write setfill(' ')
cout<<setw(5)<<100<<endl

output ****1
	      ***10
		  100
================
setprecision()

cout<<22/7.0;
//3.142758
here  we give priority 1 or 2 decimal no,truncate the remaining decimal points
for this setprecision () is used to indicate no of decimal places in floating values.

cout<<setprecision(2)<<22/7.0;//no of decimal
//3.1
setprecision() will not work for integer data

cout<<setprecision(2)<<124;//not work for integer will print as it is.

==================================================
setbase() -- use to set the base value.

 65  is decimal no ,I want to print octal no ,..65 octal number is 
cout<<setbase(8)<<65; // 65/8-->8 1  //8/8 --->1 0
//1  0 1 is the octal value for 65

cout<<setbase(16)<<65; //65/16-->4 1 // 
//4 1 is hexa decimal format of 65

I want to print 101 in decimal no
cout<<setbase(10)<<0101;
//  65------->octal no is converted into decimal

cout<<setbase(10)<<0x41;//convert hexa into decimal no
//65

==>to convert the number system from 1 format to another use setbase()
========================================================================
#include<iostream>
using namespace std;
 
int main() 
 
{ 
      char name[125]; 
      cout << "Enter your name" << endl; 
  
      cin.getline(name,125); 
 
      cout << name << endl; 
       
      return 0;
}

=======================================================
set ios flags:

ios flag is used to set diff types of flags in our program.
ex: setw is repesent from  l to r
name is repesent from r to l

ex:i want to maintain name from l to r with mainitaing equal space
cout<<setw(10)<<setiosflags(ios::l)<<"rama";
==========================================
i want to use setiosflag with numbers system
#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;
 
 
int main() 
 
{ 
cout<<setiosflags(ios::oct)<<65 ; //101 ------>65 octal no----->convert dec to octal
cout<<setiosflags(ios::hex)<<65 ; //4 1 ---------->65 hexa number
cout<<setiosflags(ios::dec)<<0101 ;//65 -------->--->octal to dec


}
===========================================
setios flag for sign representation---> when u want to display + sign before any positive number
use showpos flag
cout<<setiosflags(ios::showpos)<<100;//+100
cout<<setiosflags(ios::showpos)<<-100;//-100

//work only for positive no

====================================================
======================================================
suppose there is big floating no,i want to display in scientific notataion
cout<<2434.122233444;
cout<<setioflags(ios::scientific)<<234.12345; // to convert floating into scientific
called as manipulator used to format the cout results.
==========================================================================================================



=========================================================================================
Math library functions

C++ being a superset of C, supports a large number of useful mathematical functions. These functions are available in standard C++ to support various mathematical calculations.

Instead of focusing on implementation, these functions can be directly used to simplify code and programs. In order to use these functions you need to include a header file- <math.h> or <cmath>.

sqrt()	This function takes a number as an argument and returns its square root value. The number can not be a negative value.
Consider a argument 'arg' :
square_root of a number=√arg  
Syntax
Syntax would be :

double sqrt(double arg);  
float sqrt(float arg);    
double sqrt(integral arg);  

// CPP Program to demonstrate errors in double sqrt()
#include <cmath>
#include <iostream>
using namespace std;
 

int main()
{
    double answer;
    answer = sqrt(10);
    cout << "Square root of " << " is " << answer;
     return 0;
}

If we pass a negative value in the argument domain error occurs and the output will be the Square root of -a, which is -nan.
==============================================================================================
int abs(int)	This function takes an integer number as an argument and returns its absolute value. It means the output will always be positive regardless of the sign of the input.

// CPP program to illustrate
// abs() function
#include <math.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    int val1, val2;
 
    /// finding absolute value using
    /// abs() function.
    val1 = abs(0.6);
    val2 = abs(-43);
 
    cout << "abs= " << val1 << "\n";
    cout << "abs(-43) = " << val2 << "\n";
    return 0;
}

double pow(double, double)	This function takes one argument as base and another as exponent.
Consider a base 'b' and exponent 'e'.
Power=be
Syntax
Its syntax would be :

double pow(double b, double e);  
float pow(float b, float e);  

#include <iostream>  
#include<cmath>  
using namespace std;  
int main()  
{  
int base=4;  
  int exponent=2;  
  int power=pow(base,exponent);  
  std::cout << "Power of a given number is :" <<power;  
  return 0;  
}  
Output:

Power of a given number is :16
=============================================================
C++ Math ceil()
It rounds the value to the nearest integer which is not less than the given value.

For example :
ceil(8.1)=9.0;  
ceil(-8.8)=-8.0;  

Syntax
Suppose a number is 'x'. Syntax would be:
double ceil(double x);  
Parameter
x : It is the value that rounds to the nearest integer.
Return value
It returns the smallest integer value not less than x.

Example 1
Let's see a simple example by considering the positive value of x.

#include <iostream>  
#include<cmath>  
using namespace std;  
int main()  
{  
  float x=9.2;  
  std::cout << "Initial value of x is :"<<x;  
  cout<<'\n';  
  cout<<"final value of x is :"<<ceil(x);  
  return 0;  
}  
Output:

Initial value of x is :9.2
final value of x is :10   
Example 2
Let's see a simple example by considering the negative value of x.

#include <iostream>  
#include<cmath>  
using namespace std;  
int main()  
{  
  float x=-2.2;  
  std::cout << "Initial value of x is :"<<x;  
  cout<<'\n';  
  cout<<"final value of x is :"<<ceil(x);  
  return 0;  
}  
Output:

Initial value of x is :-2.2
final value of x is :-2   


C++ Math floor()
It rounds the value to the nearest integer which is not greater than the given value.

For example:

floor(8.2)=8.0;  
floor(-8.8)=-9.0;  
Syntax
Suppose a number is 'x'. Syntax would be :

double floor(double x);  
Parameter
x : It is the value that rounds to the nearest integer.

Return value
It returns the value that round to the nearest integer not greater than x.

AD
Example 1
Let's see a simple example by considering a positive value.

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{  
 float x=7.8;  
 std::cout << "Initial value of x is : " << x<<std::endl;  
cout<<"Now, the value of x is :"<<floor(x);  
 return 0;  
}  
Output:

Initial value of x is : 7.8
Now, the value of x is :7   
Example 2
Let's see a simple example by considering a negative value.

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{  
 float x=-10.2;  
 std::cout << "Initial value of x is : " << x<<std::endl;  
cout<<"Now, the value of x is :"<<floor(x);  
 return 0;  
}  
Output:

Initial value of x is : -10.2
Now, the value of x is :-11  

C++ Math round()
This function is used to round off the given value which can be either float or double.

For example:

round(5.8)= 6;  
round(-1.1)= -1;  
Syntax
Suppose a number is 'x'. Syntax would be:

return_type round(data_type x);  
Parameter
x : The value which can be either float or double.

Return value
It returns the rounded value of x. The return type of the value can be float, double or long double.

AD
Example 1
Let's see a simple example when the value of x is positive

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{  
    float x=8.3;  
    std::cout << "The value of x is : " <<x<< std::endl;  
    cout<<"Rounded value of x is : "<<round(x);  
    return 0;  
}  
Output:

The value of x is : 8.3
Rounded value of x is : 8   
Example 2
Let's see a simple example when the value of x is negative.

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{  
    double x=-9.9;  
    std::cout << "The value of x is : " <<x<< std::endl;  
    cout<<"Rounded value of x is : "<<round(x);  
    return 0;  
}  
Output:

The value of x is : -9.9
Rounded value of x is : -10


// C++ program to illustrate some of the
// above mentioned functions
 
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    double x = 2.3;
    cout << "Sine value of x=2.3 : " << sin(x) << endl;
    cout << "Cosine value of x=2.3 : " << cos(x) << endl;
    cout << "Tangent value of x=2.3 : " << tan(x) << endl;
 
    double y = 0.25;
    cout << "Square root value of y=0.25 : " << sqrt(y)
         << endl;
 
    int z = -10;
    cout << "Absolute value of z=-10 : " << abs(z) << endl;
    cout << "Power value: x^y = (2.3^0.25) : " << pow(x, y)
         << endl;
 
    
    x = 4.56;
    cout << "Floor value of x=4.56 is : " << floor(x)
         << endl;
 
 
 
    y = 12.3;
    cout << "Ceiling value of y=12.3 : " << ceil(y) << endl;
 
  
    y = 100.0;
    // Natural base with 'e'
    cout << "Log value of y=100.0 is : " << log(y) << endl;
 
    return 0;
}
=================================
  

Enumeration in c++

What Is C++ Enum?

==>Enum, which is also known as enumeration, is a user-defined data type that enables you to create a new data type that has a fixed range of possible values, and the variable can select one value from the set of values. For example, suppose you are the owner of an ice cream shop, and you sell a limited range of ice cream flavors. So you want the customers to select only from that collection of ice creams in your shop. This becomes an enumeration with ice cream as the name of enumeration and different flavors of ice creams as its elements.

==>Enumeration (Enumerated type) is a user-defined data type that can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.

Syntax:

enum enumerated-type-name
{
    value1, value2, value3…..valueN
};

enum Iceccream
{
	vanilla,stawberry,mango
};
Each of these elements has values starting from 0, like vanilla is 0, stawberry is 1, etc. The default values mentioned can be altered during the declaration of the enum in C++.

For Example: If a gender variable is created with the value male or female. If any other value is assigned other than male or female then it is not appropriate. In this situation, one can declare the enumerated type in which only male and female values are assigned.
============================================================================
Declaration
To declare an enum variable, write the name of the enumeration along with the enum variable.

enum Iceccream
{
	vanilla,stawberry,mango
};
int main()
{
	Icecream i;
}
Here i is the enum variable.
===========================================================
Example:

//first_enum is the enumerated-type-name
enum first_enum{value1=1, value2=10, value3};

In this case, 
first_enum e;
e=value3;
cout<<e;

Output:
11
=========================================================
// C++ Program to Demonstrate the Functioning of Enumerators 
// with an example of Gender 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Defining enum Gender 
    enum Gender { Male, Female }; 
  
    // Creating Gender type variable 
    Gender gender = Male; 
  
    switch (gender) { 
    case Male: 
        cout << "Gender is Male"; 
        break; 
    case Female: 
        cout << "Gender is Female"; 
        break; 
    default: 
        cout << "Value can be Male or Female"; 
    } 
    return 0; 
}
=====================================================================
// C++ Program to Demonstrate the Functioning of Enumerators 
// with an Example of Year 
#include <bits/stdc++.h> 
using namespace std; 
  
// Defining enum Year 
enum year { 
    Jan, 
    Feb, 
    Mar, 
    Apr, 
    May, 
    Jun, 
    Jul, 
    Aug, 
    Sep, 
    Oct, 
    Nov, 
    Dec 
}; 
  
// Driver Code 
int main() 
{ 
    int i; 
  
    // Traversing the year enum 
    for (i = Jan; i <= Dec; i++) 
        cout << i << " "; 
  
    return 0; 
}

Output: 
0 1 2 3 4 5 6 7 8 9 10 11
==============================================================
Points to remember for C++ Enum
enum improves type safety
enum can be easily used in switch
enum can be traversed
The C++ enum constants are  final implicitly.

If we assign a float value to a character value, then the compiler generates an error. In the same way, if we try to assign any other value to the enumerated data types, the compiler generates an error.


#include <iostream>  
using namespace std;  
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };  
int main()  
{  
    week day;  
    day = Friday;  
    cout << "Day: " << day+1<<endl;  
    return 0;  
} 
=======================================
   #include <iostream>
using namespace std;

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() 
{
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes.";   
    return 0;
}
Output

Size of enum variable 4 bytes.
It's because the size of an integer is 4 bytes.; 

Why enums are used in C++ programming?

Enums are used to give names to constants, which makes the code easier to read and maintain.
Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

1)Enums or enumerations are generally used when you expect the variable to select one value from the possible set of values
2)Enums are strongly typed, which means that the compiler will catch any errors at compile time rather than at runtime. ...
3)readable: Enums provide a more readable way to define a fixed set of values. ...
4)extensible: Enums can be extended to add new values.
5)Enums are used when we know all possible values at compile time, such as choices on a menu, rounding modes
=====================================================================

==============================
All the enum elements or constants should have a unique scope. It means that an element cannot be a part of two different enums in the same program as it will fail during compilation. Here’s an example:

Example:


enum Cars{Mahindra, Jeep, BMW};

enum Luxury_Cars{BMW, Ferrari, Mercedes_Benz};

int main(){

    return 0;

}

==========================================================
=================================================================




TypeCasting operators in c++

==Typecast is basically a type conversion i.e conversion from one type to another datatype.

Typeconversion  in c++ is divided into 2 types
1)implicit type cconersion: compiler implicitly does typecasting.
'A'+10--One or another will be implicitly get typecasted by compiler implicitly.

Type promotions:
bool->char->int->long
float->double

ex:int a=10;
char b='A';
int c=a+b;

-==>can result in loss of information.

2)Explicit typeconversion is of 2 types:

why typecasting is required or explicit conversion when compiler does implicit typecasting?

==>float a=2.0;
int b=2;
int c=3;
int d=a+b;//2.0+2==>4
float e=c/b; //3/2===>1.0
cout<<d;//4
cout<<e;//1.0
//not precise

-==>can result in loss of information.


1)C-style typecast===>traditional typecasting used in c lang.
ex: char a='A';
(int)a;

(int)2.5==>2


ex:int b=2;
int c=3;
float e=(float)c/b;
cout<<e;



2)using casting operators:
Casting Operators===>Casting operators are used for type casting in C++.C++ supports four types of casts:

static_cast
dynamic_cast
const_cast
reinterpret_cast



STATIC_CAST
The static_cast operator is the most commonly used casting operator in C++. It performs compile-time type conversion .. It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions.
==>The static_cast operator performs a nonpolymorphic cast. 


Syntax of static_cast
static_cast <new_type> (expression);
where,

expression: Data to be converted.
new_type: Desired type of expression
The return value of static_cast will be of new_type.
===================================================================================================
//why static_cast is used?
//IMPLICIT CONVERSIONS BETWEEN TYPES
==>when implicit type conversion happens ,its better to use static_cast rather than relying on implicit conversions.

#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    float f = 3.5;
     // Implicit type case
    // float to int
    int a = f;
    cout << "The Value of a: " << a;
 
    // using static_cast for float to int
    int b = static_cast<int>(f);
    cout << "\nThe Value of b: " << b;
}

Output
The Value of a: 3
The Value of b: 3
========================================================
//prevents dangerous casts -more restrictive.

==>integer pointer will think,I have 4 bytes in memory and I can modified this 4 bytes in the memory.
assigned 10 as 00 00 00 11. it will lead to runtime error.
beacause it expect that if u r having int pointer ,u can modify 4 bytes.


// C++ Program to demonstrate 
// static_cast char* to int*
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
  int a = 10;
  char c = 'a';
 
  
  int* q = (int*)&c;//allowed
	*q1=10;   // Pass at compile time, may fail at run time
  int* p = static_cast<int*>(&c);//compile time error

  return 0;
}

Output

error: invalid 'static_cast' from type 'int*' to type 'char*'
Explanation: This means that even if you think you can somehow typecast a particular object pointer into another but it’s illegal, the static_cast will not allow you to do this.
====================================================================

void pointer

In C++, a void pointer is a pointer that is declared using the ‘void‘ keyword (void*). It is different from regular pointers it is used to point to data of no specified data type. It can point to any type of data so it is also called a “Generic Pointer“. 

Syntax of Void Pointer in C++
void* ptr_name;
As the type of data the void pointer is pointing to is unknown, we cannot dereference a void pointer.
// C++ Program to demonstrate the declaration and use of a 
// void pointer 
  
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int a = 10; 
  
    // void pointer holds address of int 'a' 
    void* myptr = &a; 
    // printing the value of a and adress of a stored in 
    // myptr 
    cout << "The value of a is: " << a << endl; 
    cout << "The Adress of a is  " << myptr << endl; 
}

USAGE:

The concept of a generic pointer means a pointer that can be used to point to data of any data type. This is helpful in situations where you need a single pointer that can handle different data types dynamically.

// C++ Program to demonstrate the use of void pointer 
// to hold the address of any type-castable type 
  
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // Initializing multiple variables of different data 
    // type 
    int n = 10; 
    float f = 25.25; 
    char c = '$'; 
  
    // Initializing a void pointer 
    void* ptr; 
  
    ptr = &n; // pointing to int 
    cout << "The value of n " << n << endl; 
    cout << "The Adress of n " << ptr << endl; 
  
    ptr = &f; // pointing to float 
    cout << "The value of n " << f << endl; 
    cout << "The Adress of n " << ptr << endl; 
  
    ptr = &c; // pointing to char 
    cout << "The value of n " << c << endl; 
    cout << "The Adress of n " << ptr << endl; 
}

Output
The value of n 10
The Adress of n 0x7ffe05023434
The value of n 25.25
The Adress of n 0x7ffe05023430
The value of n $
The Adress of n 0x7ffe0502342f
Explanation: In the above Code, We declared a void pointer as the variable name “ptr” which acts as a generic pointer or void pointer. This pointer stores multiple datatype addresses like int, char and float. We Typecasted the void pointer to any data type (float, char, int). Hence Void Pointer allows us to change the addresses for different memory addresses of different data types.

//The below program demonstrate the use of void pointer to dynamically allocate memory for any data type.
#include <iostream> 
using namespace std; 
  
int main() 
{ 
   int n = 10; 
  
    void* voidPtr; 
  
    voidPtr = &n; // pointing to int 
  
    // Type casting the void pointer to int* for usage 
    int* intPtr = static_cast<int*>(voidPtr); 
  
    // Assign a value to the allocated memory 
    *intPtr = 42; 
  
    // Print the value from the allocated memory 
    cout << "Value from allocated memory: " << *intPtr 
         << endl; 
  
    
  
    return 0; 
}


============================================================================
4)static_cast to Cast ‘to and from’ Void Pointer
static_cast operator allows casting from any pointer type to void pointer and vice versa.

Example:

C++
   
// C++ program to demonstrate 
// static_cast to cast 'to and  from' the void pointer
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
  int i = 10;
  void* v = static_cast<void*>(&i);
  int* ip = static_cast<int*>(v);
  cout << *ip;
  return 0;
}

Output
10
============================================================
Dynamic Typecasting:

RTTI:
==>RunTime type Identification.
==>provide a standard way for a program to determone the type of object at runtime
==>RTTI supports dynamic cast operator ,


==>The dynamic_cast operator is mainly used to perform downcasting (converting a pointer/reference of a base class to a derived class). It ensures type safety by performing a runtime check to verify the validity of the conversion.

==>Syntax of dynamic_cast
dynamic_cast <new_type> (expression);
==> dynamic_cast is a runtime cast operator used to perform conversion of one type variable to another only on class pointers and references. It means it checks the valid casting of the variables at the run time

#include <iostream> 
using namespace std; 
  
// Base Class 
class Animal { 
public: 
    virtual void speak() 
    { 
        cout << "Animal speaks." << endl; 
    } 
}; 
  
// Derived Class 
class Dog : public Animal { 
public: 
    void speak() 
    { 
        cout << "Dog barks." << endl; 
    } 
}; 
  
// Derived Class 
class Cat : public Animal { 
public: 
    void speak() 
    { 
        cout << "Cat meows." << endl; 
    } 
}; 
  
int main() 
{ 
    // base class pointer to derived class object 
    Animal* animalPtr = new Dog(); 
  
    // downcasting 
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr); 
  
    // checking if the typecasting is successfull 
    if (dogPtr) { 
        dogPtr->speak(); 
    } 
    else { 
        cout << "Failed to cast to Dog." << endl; 
    } 
   
    
    return 0; 
}
Output
Dog barks.
=============================================================

class Base
{
} 
class Cat:public class Animal
{
}
class Dog:public class Animal
{
}

Base * bp1=new cat()//allowed
Base* bp2=new Dog();//allowed
Dog * pd=dynamic_cast<Dog*>(bp1);
Cat*  pd1=dynamic_cast<Dog*>(bp2);


==>dynamic_cast <new type>(Expression)
==>Involves a runtime type check
==>base class has to be polymorphic
==>on success returns a value of new_type
==>on failure it return null pointer
===================================================
===============================================================
3. const_cast
==>The const_cast operator is used to modify the const or volatile qualifier of a variable. It allows programmers to temporarily remove the constancy of an object and make modifications.
==>The const_cast is used to change or manipulate the const behavior of the source pointer. It means we can perform the const in two ways: setting a const pointer to a non-const pointer or deleting or removing the const from a const pointer.

1//PASSING CONST DATA TO A FUNCTION THAT DOESNOT RECEIVE CONST
#include <iostream>  
using namespace std;  
  
// define a function  
int disp(int *pt)  
{  
    return (*pt * 10);  
}  
  
int main ()  
{  
    // declare a const variable  
     int num = 50;  
    const int * const pt = &num; // get the address of num  
      
    // use const_cast to chnage the constness of the source pointer  
    int *ptr = const_cast <int *> (pt);  
    cout << " The value of ptr cast: " << disp(ptr);  
    return 0;  
       
}  




2//CHANGE NON CONST CLASS MEMBERS INSIDE A CONST MEMBER FUNCTION
class A
{
	int x;
	public :
	void f(int i)const
	{
		//this->x=i;//Error
		this-> x=const_cast<A*>(this)->x=i;
	}
};
//inside const member function,this pointer is treated as  const pointer to const obj of type A .we need to cast away constness of this pointer. type of this pointer is same as that of class.

class A
{
int x;
public:
void f(int i)const
{
//this->x=i;
const_cast<A*>(this)->x=i;
}
void print()
{
cout<<"x="<<x;
}
};
int main()
{
A a;
a.f(10);
a.print();
}

// C++ program to illustrate the const_cast 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    const int number = 5; 
    // Pointer to a const int 
    const int* ptr = &number; 
  
    // int* nonConstPtr = ptr; if we use this 
    // instead of without using const_cast 
    // we will get error of invalid conversion 
    int* nonConstPtr = const_cast<int*>(ptr); 
    *nonConstPtr = 10; 
  
    cout << "Modified number: " << *nonConstPtr; 
  
    return 0; 
}

Output
Modified number: 10
In the above example, we have modified the value of the const type pointer by changing its qualifier from const to non-const and then printing the modified value.

==================================================================================================
reinterpret_cast

The reinterpret_cast operator is used to convert the pointer to any other type of pointer. It does not perform any check whether the pointer converted is of the same type or not.

Syntax of reinterpret_cast
reinterpret_cast <new_type> (expression);



Note: const_cast and reinterpret_cast are generally not reccommended as they vulnerable to different kinds of errors.

The reinterpret_cast type casting is used to cast a pointer to any other type of pointer whether the given pointer belongs to each other or not. It means it does not check whether the pointer or the data pointed to by the pointer is the same or not. And it also cast a pointer to an integer type or vice versa.

Syntax of the reinterpret_cast type

reinterpret_cast <type> expression;  
Program to use the Reinterpret Cast in C++

Let's write a program to demonstrate the conversion of a pointer using the reinterpret in C++ language.

#include <iostream>  
using namespace std;  
  
int main ()  
{  
    // declaration of the pointer variables  
    int *pt = new int (65);  
      
    // use reinterpre_cast operator to type cast the pointer variables  
    char *ch = reinterpret_cast <char *> (pt);  
      
    cout << " The value of pt: " << pt << endl;  
    cout << " The value of ch: " << ch << endl;  
      
    // get value of the defined variable using pointer  
    cout << " The value of *ptr: " << *pt << endl;  
    cout << " The value of *ch: " << *ch << endl;  
    return 0;  
      
}  
Output:

The value of pt: 0x5cfed0
The value of ch: A
The value of *ptr: 65
The value of *ch: A

=========================================================================
typedef keyword in C++ is used for aliasing existing data types, user-defined data
 types, and pointers to a more meaningful name. Typedefs allow you to give
  descriptive names to standard data types, which can also help you self-document 
  your code. Mostly typedefs are used for aliasing, only if the predefined name is 
  too long or complex to write again and again.  The unnecessary use of typedef is 
  generally not a good practice.

Syntax:

typedef <current_name> <new_name>

*/


Applications of typedef in C++

    typedef in C++ can be used for aliasing predefined data types with long names.
    It can be used with STL data structures like Vectors, Strings, Maps, etc.
    typedef can be used with arrays as well.
    We can use typedef with normal pointers 

/*#include <iostream> 
using namespace std; 
  
int main() 
{ 
    
    
   typedef int p; 
  p a=10;
    
  
    cout << "a is: " << a<< "\n"; 
    
    return 0; 
}*/

/*#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int a = 10; 
    int b = 20; 
    // iPtr can now be used to create new pointers of type 
    // int 
    typedef int* iPtr; 
  
    iPtr pointer_to_a = &a; 
    iPtr pointer_to_b = &b; 
  
    cout << "a is: " << *pointer_to_a << "\n"; 
    cout << "b is: " << *pointer_to_b << "\n"; 
  
    return 0; 
}*/

#include <iostream> 
using namespace std; 
 class emp 
{
 	int id;
 	public:
 		void show()
 		{
 			cout<<"in show";
		 }
};
int main() 
{ 
	typedef emp e;
	e obj;
	obj.show(); 


}



Generic Pointer
Generic pointer is that pointer which will hold the address of base class object or it can hold the address of derived class object.

Polymorphism

polymorphism is made up of 2 words poly means many and morphism means forms, so polymorphism means many forms.
it means identically " one name " named methods(member functions) that have different behaiour means one methodss have multiple forms.
Same message is pass to inherited classes and this classes will respond to the same message in different ways by  is called as polymorphism


Binding is the process of associating a function call to an object.
Different types of polymorphism are as follows
1)compile time polymorphism:
When binding occurs at compile time,it is known as compile time binding. All the methods are called on object at compile time. In compile-time polymorphism, the compiler determines which function or operation to call based on the number, types, and order of arguments. 
This kind of polymorphism is implemented using function overloading and operator overloading.such polymorphism is called as early binding or static binding because an object is bound to its function call at compile time.
==>At compile time,compiler will check the type of pointer rather than the type of data.



2)Runtime polymorphism:
When the binding process occurs at runtime ,it is called as runtime binding.
In order to invoke the appropriate function of the derived class,the compiler needs to bind that function call to the correct function defination.The decision of which function to be invoked is taken at a later stage(at runtime). Hence this feature is referred to as runtime binding.The generic pointer is capable of pointing to any object at runtime. hence it can invoke any function dynamically depending on the type of the object that it is pointing to . In run-time polymorphism, the decision of which function to call is determined at runtime based on the actual object type rather than the reference or pointer type. It is also known as Dynamic Polymorphism
Run Time Polymorphism can be exhibited by:

Method Overriding using Virtual Functions
Method Overriding
Method overriding refers to the process of creating a new definition of a function in a derived class that is already defined inside its base class. Some rules that must be followed while overriding a method are:
Method names must be the same.
Method parameters must be the same.

Virtual Function
Virtual Function is a member function that is declared as virtual in the base class and it can be overridden in the derived classes that inherit the base class.

Difference Between Compile Time And Run Time Polymorphism
Compile-Time Polymorphism and Run-Time Polymorphism

1)It is also called Static Polymorphism.	
It is also known as Dynamic Polymorphism.
2)In compile-time polymorphism, the compiler determines which function or operation to call based on the number, types, and order of arguments.	
In run-time polymorphism, the decision of which function to call is determined at runtime based on the actual object type rather than the reference or pointer type.
3)The function to be invoked is known at the compile time.	
The function to be invoked is known at the run time.
4)Compile-time Polymorphism can be exhibited by: Function Overloading and Operator Overloading
Run-time Polymorphism can be exhibited by Function Overriding.
5)Faster execution rate.
Comparatively slower execution rate.
6)Inheritance in not involved.	
Involves inheritance.
=============================================
Virtual Function
==>Polymorphism provides a way for the derived class to give its own defination of a method that has already been defined by the base class.This process is called as method overriding.To implement late binding, the function is declared with the keyword virtual in the base class.
==>To implement late binding, the function is declared with the keyword virtual in the base class. usually, when there is a possibility that a function in the base class may be overridden in the derived class this function is marked as virtual.
The function in the derived class is overridden with same signature and return type.
==>Polymorphism relies on runtime binding.To achieve runtime binding virtual keyword should be used.virtual keyword will tell the compiler to do binding at runtime and not at compile time.
==>It tells the compiler to perform late binding where the compiler matches the object with the right called function and executes it during the runtime. This technique falls under Runtime Polymorphism.

1)virtual function is a member function that can be redefined for the derived classes.
2)The function in the base class,which are overridden  in the subsequent derived classes, are also considered virtual by the compiler.virtual function is redefined in all the derived classes even if the virtual keyword is not written.
3)constructors can not be made Virtual Function
4)destructor can be made Virtual Function
5)virtual keyword should not be written in definition

**At runtime binding the compiler will check the type of data rather than the type of pointer.According to the type of data the compiler will invoke the function of that class.
**The idea is that virtual functions are called according to the type of the object instance pointed to or referenced, not according to the type of the pointer or reference.
In other words, virtual functions are resolved late, at runtime.

================================================================================================
==>A base class pointer can point to derived class object without needing a cast. This is termed as up-casting. Derived object can be assigned to base object without any cast but the reverse is not true.

Compile time binding
Employee * ptr,e1;
Salesperson sp1;
ptr=&e1;
ptr=&sp1;
ptr->computesalary();

==>Compiler tries to find computesalary() in Employee class and not in Salesperson (though ptr is pointing to sp1  object of Salesperson class).The reason is that the compiler selects the member function according to the type of pointer rather than the type of object being pointed to. The compiler tries to govern the method invocation using compiletime or static type binding of the generic pointer, which is of type Employee .
==>so, the above call to computesalary() is resolved by the compiler as Employee::computesalary(), even when the pointer is actually pointing to Salesperson object.
==>If the  Employee class doesnot have computesalary() . This results in a compile-time error as computesalary() is not a member of the class Employee.

Need of Type-Casting

Inorder to invoke the function by the type of the object whose address it is holding, there is a need to typecast the generic pointer to the required type. It typecast the generic pointer ptr to salesperson classtype.Then the computesalary() of salesperson class is invoked. so, depending on which computesalary() to call,employee pointer is typecasted to the particular datatype.
Employee* ptr;
switch(ptr)
{
	case 1:(wageemployee*) ptr->computesalary();
	case 2:(salesperson*) ptr->computesalary();
}

Drawbacks of Typecasting
1)If a new category of employee named clerk is added in the hieracrchy,changes have to be made in the above source code by adding a new case where the generic pointer can be typecast to the category clerk.It becomes practically infeasible from the maintenance point of view to alter the source code every time the application is extended to add a new category of employees.

2)The function that is invoked need not be an overriden function. After the generic pointer is typecast to any derived class type,it always invokes the function of that derived class irrespective of the contents of the pointer.

To resolve these problems,virtual function are used.

==>C++ supports polymorphism by allowing member functions defined in baseclass to be overridden. When these functions are made virtual in the base class and are invoked using generic pointer, then dynamic datatypes of thos pointer is checked i.e the type of the object it points to at runtime.

==>If the function is non virtual,static type of pointer is checked and accordingly the member function of the baseclass is invoked

Points on virtual function:
1)keyword virtual can be used only in context with overriden function.That is ,if computesalary() is not declared in the class Employee, then the compilee will flash an error.
computesalry() is not the member of the class Employee
2)Specific functions of the derived class cannot be called using generic pointer.
ptr->somespecificfunction()
somespecificfunction() is a specific function of salesperson class. Since this function is non virtual, compile time binding will takes place. static type of the pointer will be considered by the compiler to resolve this call.Since this function is not present in the baseclass,compiler will give error.

3)Virtual functions must be non static member functions of the class since the virtual function mechanism relies on the specific object to determine which implementation of the function should be called. This is not possible for static function because they donot work with objects of the class and hence they cannot be declared as virtual.
#include<iostream>
using namespace std;
class demo
{
	public:
		 static void show()
		{
			cout<<"in base";
		}
};
class demo1 : public demo
{
	public:
		 static void show()
		{
			cout<<"in derived";
		}
};
int main()
{
	demo * ptr=new demo1();
	ptr->show();
	
}

4)Virtual functions cannot be friend function.Friend function are not members of the base class and hence cannot be inherited or overrided.
5)Functions that are overriden in the derived class are declared as virtual in the base class. since the base class pointer is used to invoke the appropriate function at runtime.
6)Constructors cannot be made virtual .When an object of a derived class is created, base class constructor should be called first.But if th base class constructor is made virtual, the derived class constructor wil be directly called and the base class members will not be initialized. Therefore forseeing the problem,compiler doesnot allow virtaul constructors.
7)If a function is declared as virtual in the base class then,it will be treated as virtual in derived class even if the keyword virtual is not used.

=======================================================================================
Pure virtual function
1)A function without executable code is called as Pure virtual function.declared by using a specifier(=0) in the declaration of a virtual member function in the class declaration
2) Pure virtual function is represented by(=0) in the function declaration and not in the definition
ex:virtual float computesalary()=0;
3)A class contains atleast 1 pure virtual function than that class is called as abstact class
4)if any class contain all the pure virtual function then that class is calles as pure abstract  class
5)we can not create object of an abstract class
6)however we can create pointer  of an abstract class.
7)if any base class contains pure virtual function then the pure virtual function has to be overrided in the derived class and give the implementation according to the requirements
8)Abstract class supports runtime polymorphism.
9)if Pure virtual function is not overrided in the derived class than the derived class should be declared as abstract.
10)If a class is too generic to define its object then the class is made abstract.so the sole purpose of abstract classes is to provide a baseclass for other classes.
11)An abstract class can have constructors. 

Sometimes implementation of all functions cannot be provided in a base class because we don’t know the implementation. Such a class is called an abstract class.For example, let Shape be a base class. We cannot provide the implementation of function draw() in Shape, but we know every derived class must have an implementation of draw().other methods can be pure virtual function or virtual function or concrete funtion.
ex: shape is a base class which is abstract.several other classes like circle,rectangle can be derived from it. The common attributes and behaviour of all shapes are bundled together in shape class. draw() and area() are the two common behaviours of all the above mentioned shapes.
==>A shape hierarchy may define abstract class that requires programmers using it to provide their own implementation of the class by creating a derived class. This hierarchy is easily extensible.

ex:
In class Employee,computesalary() was added to implement runtime polymorphism.
float computesalary()
{
	return 0.0f;
}
Actually this implementation is unnecessary and does not ake any sense. This function is never called ,but its existence in the class Employee is necessary to enable polymorphism.
==>If a virtual function doesnot contain any meaningful code or if it has been added merly to ahieve dynamic binding,then it is made pure virtual funtion.

Why Destructorcan be made virtual?
class A
{
	public :
	virtual ~A()
	{
		cout<<"In A's Destructor";
	}
};
class B :public A
{
	public :
	~B()
	{
		cout<<"In B's Destructor";
	}
};
int main()
{
A * aptr=new B();
delete aptr;
}

==If a base class pointer points to a derived object created on heap and the memory is freed by delete with base pointer the base class destructor is called.The deried class destructor is not invoked at all. To resole this problem,the base class destructor is made virtual.
ex:
Class A is a base class and B is derived from A. The destructor is made virtual in class A and an object of class B is created on heap using new and the address is stored in the base class A pointer i.e aptr.For the statement delete aptr, the destructor for the derived class is invoked first.
==If the destructor is not made virtual, the base class destructor is called directly without the derived class destructor being called first. This leads to memory related problems.
===================================



==================================================================

Similarities between virtual function and pure virtual function
1)These are the concepts of Run-time polymorphism.
2)These functions can’t be static.
3)constructor cannot be pure/virtual fun
4)destructor can be pure/virtual
5)can be override

Difference between virtual function and pure virtual function in C++

1)A virtual function is a member function of base class which can be redefined by derived class.	
A pure virtual function is a member function of base class whose only declaration is provided in base class and should be defined in derived class otherwise derived class also becomes abstract.


2)Classes having virtual functions are not abstract.
Base class containing pure virtual function becomes abstract.

3)Syntax:
 
virtual<func_type><func_name>() 
{ 
    // code 
} 
Syntax:
 
virtual<func_type><func_name>() 
    = 0; 

4)Definition is given in base class.	
No definition is given in base class.

5)Base class having virtual function can be instantiated i.e. its object can be made.
	Base class having pure virtual function becomes abstract i.e. it cannot be instantiated.

6)If derived class do not redefine virtual function of base class, then it does not affect compilation.	
If derived class do not redefine virtual function of base class, then no compilation error but derived class also becomes abstract just like the base class.

7)All derived class may or may not redefine virtual function of base class.
All derived class must redefine pure virtual function of base class otherwise derived class also becomes abstract just like base class.
=============================================================================
FAQ:What happens when a virtual function is called inside a non-virtual function in C++

#include <iostream>
using namespace std;
 class Base
{
public:
    void print()
    {
        cout << "Base class print function \n";
    }
    void invoke()
    {
        cout << "Base class invoke function \n";
        this -> print();
    }
};
 
class Derived: public Base
{
public:
    void print()
    {
        cout << "Derived class print function \n" ;
    }
    void invoke()
    {
        cout << "Derived class invoke function \n";
        this -> print();
    }
};
 
int main()
{
    Base *b = new Derived;
    b -> invoke();
    return 0;
}
Output:

Base class invoke function
Base class print function
Since there is no virtual function, run time polymorphic behavior doesn’t work in the above code. 


#include <iostream>
using namespace std;
 class Base
{
public:
    virtual void print()
    {
        cout << "Base class print function \n";
    }
    void invoke()
    {
        cout << "Base class invoke function \n";
        this -> print();
    }
};
 
class Derived: public Base
{
public:
    void print()
    {
        cout << "Derived class print function \n" ;
    }
    void invoke()
    {
        cout << "Derived class invoke function \n";
        this -> print(); // called under non - virtual function
    }
};
 
int main()
{
    Base *b = new Derived;
    b -> invoke();
    return 0;
}
Output:


Base class invoke function
Derived class print function
So polymorphic behaviour works even when a virtual function is called inside a non-virtual function. The output can be guessed from the fact that the function to be called is decided at run-time using the vptr and vtable.

==========================================================================================

========================================================================================

Types of Classes:

Concrete class:
A class in which all the functionalities of an object are defined is called as concrete class.
 
Abstract class:
A class which contains generic/common features that multiple derived class can share.

pure abstract class:
A class in which all the member functions are pure virtual functions is called as pure abstract class. It is just an interface and cannot be instantiated.

Polymorphic class:
A class that contains at least one virtual function is called as polymorphic class.
=================================================================================

How virtual function works?
class A
{
	//without virtual function
};
class B
{
	//with virtual function
};
int main()
{
	A a;
	B b;
	cout<<"size of object a is "<<sizeof(a);
	cout<<"size of object a is "<<sizeof(b);
}
class B contains a virtual function whereas class A doesnot contain any virtual function. If the size of the objects of both the classes A and B is compared, then size of object b is 8bytes more than the size of object a.The reason is, for every class which contains at least one virtual function, the compiler implicitly adds a virtual pointer.


=======================================================================================
If a class contains a virtual function then the compiler itself does two things.

1)If an object of that class is created then a virtual pointer (VPTR) is inserted as a data member of the class to point to the VTABLE of that class. For each new object created, a new virtual pointer is inserted as a data member of that class.
2)Irrespective of whether the object is created or not, the class contains as a member a static array of function pointers called VTABLE. Cells of this table store the address of each virtual function contained in that class.

Virtual Functions in C++

The most common use of runtime binding  is with base class pointers or references calling derived class functions. This is called runtime polymorphism and is implemented in C++ using virtual functions.
A virtual function is a member function that is declared within a base class with the virtual keyword and is re-defined (Overridden) by a derived class. When a class contains a virtual function, it can be overridden in its derived class and tells the compiler to perform dynamic linkage (or late binding) on the function. Now, the virtual functions are implemented in C++ by using vTable and vPtr.

What is VTable ?
==>VTable is a class specific. It is a static member of the class since all the objects of a class refer to the same virtual table. It contains the addresses of the respective virtual functions of that class. VTable  is a constant array of function pointers which contains pointers to all virtual functions of the class. All the object of a class refer to its own virtual table.
==>If in the derived class,a function that is declared as virtual in the base class is not overridden, then the compiler uses the address of the base class version in the derived class virtual table.


What is Vptr (Virtual Pointer)?

==>Every object of a polymorphic class has a hidden pointer called virtual pointer(vptr). it is a pointer to VTable and is automatically initialized to the starting address of the VTable in the constructor.
==>The virtual pointer or _vptr is a hidden pointer that is added by the compiler as a member of the class to point to the VTable of that class. Every object of a class containing virtual functions, a vptr is added to point to the vTable of that class. It’s important to note that vptr is created only if a class has or inherits a virtual function.
==>The setting up of the VTable for each polymorphic class, initializing the Vptr and inserting the codefor the function call happens automatically, the programmer doesnot have to worry about it.

consider Employee and Salesperson are polymorphic class.

==>when a class containing a virtual function is created or a class is derived from a class that contains virtual functions,compiler creates a unique VTable for that class.In VTable ,the compiler stores the addresses of all virtual functions.Each object contains vptr that points to VTable of that class.
==>The compiler places Vptr as a data member in the class created per object.Vptr is initialized to the starting address of the appropriate VTable.when salesperson object is created,it contains VPtr as one ofits data members which points to the appropriate VTable.

int main()
{
Employee * ptr;
ptr=new Salesperson();
ptr->display();
}

The compiler picks up the Vptr of the object pointed by ptr.Thus instead of calling Employee::display() the compiler generates the code that says the function at Vptr should be called.The fectching of Vptr and the determination of the actual function address occur at runtime,thus late binding is achieved.

// C++ program to show the working of vtable and vptr 
#include <iostream> 
using namespace std; 
#include<iostream>
using namespace std;







// base class 
class Base { 
public: 
    virtual void function1() 
    { 
        cout << "Base function1()" << endl; 
    } 
    virtual void function2() 
    { 
        cout << "Base function2()" << endl; 
    } 
    virtual void function3() 
    { 
        cout << "Base function3()" << endl; 
    } 
   virtual ~Base() 
    {
    	cout <<"in base dest\n";
	}
}; 
  
// class derived from Base 
class Derived1 : public Base { 
public: 
    // overriding function1() 
    void function1() 
    { 
        cout << "Derived1 function1()" << endl; 
    } 
    // not overriding function2() and function3() 
	~Derived1() 
    {
    	cout <<"in Derived1 dest\n";
	}
	
	}; 
  
// class derived from Derived1 
class Derived2 : public Derived1 { 
public: 
    // again overriding function2() 
    void function2() 
    { 
        cout << "Derived2 function2()" << endl; 
    } 
    // not overriding function1() and function3() 
   
~Derived2() 
    {
    	cout <<"in Derived2 dest\n";
	}	
}; 
  
// driver code 
int main() 
{ 
    // defining base class pointers 
    Base* ptr1 = new Base(); 
    Base* ptr2 = new Derived1(); 
    Base* ptr3 = new Derived2(); 
  
    // calling all functions 
    ptr1->function1(); 
    ptr1->function2(); 
    ptr1->function3(); 
    ptr2->function1(); 
    ptr2->function2(); 
    ptr2->function3(); 
    ptr3->function1(); 
    ptr3->function2(); 
    ptr3->function3(); 
  
    // deleting objects 
    delete ptr1; 
    delete ptr2; 
    delete ptr3; 
  
    return 0; 
}

1)A class contains atleast one virtual function,that class is calles as polymorphic class
2)compiler implicitely add a virtual pointer for every polymorphic class i.e vptr
3)vptr is created per object
4)vtable is called as static array of function pointer.
5)vtable is created per class
6)vtable will store the address of all the virtual functions
7)vptr will point to the starting address of the table.








#include<iostream>
#include<string.h>
using namespace std;
class Student{
     int id ;
    char name[10];
    float marks[5];
    float avarage;
    string subName[10] = {"Math", "English", "Science", "History", "Geography"};
    public:
     
     void inputDetails(){
         cout<<"Enter the Id : " <<endl;
         cin>>id;
         cout<<"Enter the Name : "<<endl;
         cin>>name;
         cout<<"Enter the Marks of 5 Subjects" <<endl;
         for(int  i=0 ;i<5 ;i++) {
             
             cout<<"Enter the Marks for Subject : " <<subName[i] <<"=> ";
             cin>>marks[i];
         }
          calculateAvg() ;
     }
     void calculateAvg() {
         float sum = 0.0;
         for(int i=0;i<5;i++) {
             sum += marks[i];
         }
         avarage= sum / 5;
     }
     
     
     //void Details
     void displayDetails() {
         cout<<"Student ID : "<<id <<endl;
         cout<<"Student Name : "<<name<<endl;
         cout<<"Average Marks of : "<<name<< " is " <<avarage <<endl <<endl;
     }
};
int main() {
    int numStudent;
    cout<<"Enter the Number of Student : " <<endl;
     cin>>numStudent;
     
     Student* student= new Student[numStudent];
     
     for(int i=0;i<numStudent ; i++) {
         student[i].inputDetails();
     }
     
     for(int i=0;i<numStudent ;i++) {
         student[i].displayDetails();
     }
     
}

Inheritance:
 
==>Inheritance is one of the most important features of Object-Oriented Programming. 
==>The capability of a class to derive properties and characteristics from another class is called Inheritance. 
==>Inheritance is a feature or a process in which, new classes are created from the existing classes. 
==>The new class created is called "derived class" or "child class" and the existing class is known as the "base class” or “parent class”. 
The derived class now is said to be inherited from the base class.
 
==>When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class it may add new features to its own. These new features in the derived class will not affect the base class.The derived class is the specialized class for the base class.
 
==>It not only helps to reuse the old code but adds in extending the functionality. i.e Reusability + Extensibility
Reusability:
Once a class is written and tested,it can be further used for creating new classes. These derived classes not only inherit the features of their base class,
but also have their own individualist features. 
it means that if the derived class wants to use its base class properties,it can do so because those properties are also available to the derived class by the virtue of inheritance.
Now you can reuse the members of your parent class. So, there is no need to define the member again. So less code is required in the class.
 
Extensibility:
It is the mechanism of being able to derive classes from existing classes that provides extensibility of adding and removing classes in a hierarchy 
as and when required.Any changes to data or functionalities contained within a base class are immediately inherited by all derived classes.
 
==>each child has "is a " relationship with its parent.
 
==>Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
==>Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass.
 
Syntax: 
 
class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
access-specifier  — either of private, public or protected. If neither is specified, PRIVATE is taken as default
 
There are three Access specifiers in C++. These are:
 
Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members.
 
Note: If we do not specify any access modifiers for the members inside the class, then by default the access modifier for the members will be Private.
 
==========================================================================
 
public – members are accessible from outside the class, and members can be accessed from anywhere. The data members and member functions declared as public can be accessed by other classes and functions too.The public members of a class can be accessed from anywhere in the program using the dot operator with the object of that class. 
 
// C++ program to demonstrate public access modifier
 
#include<iostream>
using namespace std;
class Circle
{
    public: 
        double radius;
         
        double  compute_area()
        {
            return 3.14*radius*radius;
        }
     
};
 int main()
{
    Circle obj;
     
    // accessing public datamember outside class
    obj.radius = 5.5;
      cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area();
    return 0;
}
Output: 
 
Radius is: 5.5
Area is: 94.985
In the above program, the data member radius is declared as public so it could be accessed outside the class and thus was allowed access from inside main(). 
 
===========================================================================private – members cannot be accessed (or viewed) from outside the class, i.e members are private to that class only.
The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any 
object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of the class.
 
// C++ program to demonstrate private access modifier
 
#include<iostream>
using namespace std;
 
class Circle
{   
    // private data member
    private: 
        double radius;
      
    // public member function    
    public:    
        double  compute_area()
        {   // member function can access private 
            // data member radius
            return 3.14*radius*radius;
        }
    };
 int main()
{   
       Circle obj;
       obj.radius = 1.5;
     
    cout << "Area is:" << obj.compute_area();
    return 0;
}
The output of the above program is a compile time error because we are not allowed to access the private data members of a class directly from outside the class.
 Yet an access to obj.radius is attempted, but radius being a private data member, we obtained the above compilation error. 
 
However, we can access the private data members of a class indirectly using the public member functions of the class. 
===========================================================================
How to make a Private Member Inheritable
The private member is not inheritable. If we modify the visibility mode by making it public, but this takes away the advantage of data hiding.
C++ introduces a third visibility modifier, i.e., protected. The member which is declared as protected will be accessible to all the member functions within the class as well as the class immediately derived from it.
 
protected – members cannot be accessed from outside the class, but, they can be accessed in inherited classes or derived classes. 
The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. 
The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well.
 
// C++ program to demonstrate protected access modifier
#include <iostream>
using namespace std;
 class Parent
{   
    protected:
    int id_protected;
  };
class Child : public Parent
{
    public:
    void setId(int id)
    { 
        // Child class is able to access the inherited protected data members of base class
             id_protected = id;
      }
       void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};
 int main() {
     
    Child obj1;
  // member function of the derived class can access the protected data members of the base class
  obj1.setId(81);
    obj1.displayId();
Parent p1;
   // p1.id_protected=10;
  // p1.show();
 
 
}
Output: 
 
id_protected is: 81
=============================================================================================
Note:
When derived class obj is created memory is allocated for base class datamembers as well as for derived class data members. 
Through derived class obj, we can access base class members except private as well as derived class members.
 
#include <bits/stdc++.h>
using namespace std;
class Parent {
public:
    int id_p;
    void set_display1()
   {
            
}
 
protected:
int id_pro;
 
};
class Child : public Parent {
public:
    int id_c;
   void set_display()
    {
            id_pro=10;
            cout<<id_pro;
}
};
 int main()
{
    Child obj1;
     // An object of class child has all data members and member functions of class parent
    obj1.id_c = 7;
    obj1.id_p = 91;
   // obj1.id_pro=7;//ERROR
   //THRU DERIVED CLASS OBJ WE CAN ACCESS BASE CVLASS AS WELL AS DERIVED CLASS DATAS MEMBERS
    cout << "Child id is: " << obj1.id_c << '\n';
    cout << "Parent id is: " << obj1.id_p << '\n';
    obj1.set_display1();
    obj1.set_display();
    cout<<sizeof(obj1);
}
 
==============================================================
Note 2:
When base class obj is created memory is allocated for base class datamembers only. Through base class obj, we can access base class members only ,we cannot access derived class members.
 
#include <bits/stdc++.h>
using namespace std;
class Parent {
public:
    int id_p;
};
class Child : public Parent {
public:
    int id_c;
    void display()
    {
        }
 
};
 int main()
{
    Parent obj1;
 
    // An object of class child has all data members and member functions of class parent
   // obj1.id_c = 7;//error
    obj1.id_p = 91;
   // cout << "Child id is: " << obj1.id_c << '\n';//error
    cout << "Parent id is: " << obj1.id_p << '\n';
    cout<<sizeof(obj1);
 //obj1.display();
}
 
==============================================================================================
Modes of Inheritance: There are 3 modes of inheritance.
 
Modes of inheritance specifies the way in which a class is derived. It tells about the access rights given to the derived class to access its base class attributes and functions. These mode are:
 
private(default)
public
protected
 
ex:
class derived_class_name :: visibility-mode base_class_name  
{  
    // body of the derived class.  
}  
Where,
derived_class_name: It is the name of the derived class.
visibility mode: The visibility mode specifies whether the features of the base class are publicly , protected inherited or privately inherited. It can be public or private.
 
Example:
1. class ABC : private XYZ              //private derivation
            {                }
2. class ABC : public XYZ              //public derivation
            {               }
3. class ABC : protected XYZ              //protected derivation
            {              }
4. class ABC: XYZ                            //private derivation by default
{            }
 
=======================================================================
Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of 
the base class will become protected in the derived class.
 
1. C++ public Inheritance
In this example, public inheritance is demonstrated. Since private and protected members will not be directly accessed from main( ) 
so we have to create functions name getPVT( ) to access the private variable and getProt( ) to access the protected variable from the inherited class.
 
Example:
// C++ program to demonstrate the working of public  inheritance 
#include <iostream> 
using namespace std; 
  class Base { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
 public: 
    int pub = 3; 
  
 // function to access private member 
    int getPVT() { return pvt; } 
}; 
  
class PublicDerived : public Base { 
public: 
    // function to access protected member from Base 
    int getProt() { return prot; } 
}; 
 int main() 
{ 
    PublicDerived object1; 
    cout << "Private = " << object1.getPVT() << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    cout << "Public = " << object1.pub << endl; 
    return 0; 
}
Output
Private = 1
Protected = 2
Public = 3
==================================================================
Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
We know that protected members can only be accessed from the Derived class. These members cannot be directly accessed from outside the class. So we cannot use getPVT() from ProtectedDerived.This is also why we need to create getPub() function in the Derived class in order to access the pub variable.
 
Example:
 
 
// C++ program to demonstrate the working  of protected inheritance 
#include <iostream> 
using namespace std; 
  
class Base { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
  public: 
    int pub = 3; 
  
    // function to access private member 
    int getPVT() { return pvt; } 
}; 
  
class ProtectedDerived : protected Base { 
public: 
    // function to access protected member from Base 
    int getProt() { return prot; } 
  
    // function to access public member from Base 
    int getPub() { return pub; } 
}; 
  
int main() 
{ 
    ProtectedDerived object1; 
    cout << "Private cannot be accessed." << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    cout << "Public = " << object1.getPub() << endl;
//        cout<<object1.getPVT() ;
//cout<<object1.pub;
    return 0; 
}
============================================================================
 
Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
Note: The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed.
#include <iostream> 
using namespace std; 
  
class Base { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
public: 
    int pub = 3; 
  // function to access private member 
    int getPVT() { return pvt; } 
   // int getPub() { return pub; } 
}; 
 class PrivateDerived : private Base { 
public: 
    // function to access protected member from Base 
    int getProt() 
{
//prot=10;
 return prot; 
} 
    
}; 
  
int main() 
{ 
    PrivateDerived object1; 
    cout << "Private cannot be accessed." << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    //cout << "Public = " << object1.getPub() << endl; 
    return 0; 
}
 
===================================================================================================
When the base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class. Therefore, the public members of the base class are not accessible by the objects of the derived class only by the member functions of the derived class.
 
ex:
 
 
#include<iostream>
using namespace std;
class A
{
int c;
public:
int a;
protected:
int b;
public:
void display()
{
cout<<"in display of A\n";
}
};
class B:private A
{
public:
int c;
public:
void show()
{
    display();//allowed
cout<<a<<b;
}
};
class C:private B
{
public:
void show()
{
   // display(); not allowed
//cout<< a<<b; not allowed
cout<<c;
}
};
int main()
{
B bobj;
bobj.show();
//        bobj.display(); not allowed
}
In the above example, class A is privately inherited. Therefore, the display() function of class 'A' cannot be accessed by the object of class B. It can only be accessed by the member function of class B.
=========================================================================
 
====================================================================================
When the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.
 
#include<iostream>
using namespace std;
class A
{
int c;
public:
int a;
protected:
int b;
public:
void display()
{
cout<<"in display of A\n";
}
 
};
class B:public A
{
public:
public:
void show()
{
    display();
cout<<a<<b;
}
};
class C:public B
{
public:
void show()
{
cout<< a<<b;
}
};
int main()
{
B bobj;
bobj.show();
bobj.display();
}
=====================================================================
When the base class is protectedly inherited by the derived class, the public members of the base class are not accessible by the objects of the derived class 
(because public members of base class becomes protected in derived class and protected datamember cannot be accessed outside the class) only by the member functions of the derived class.
#include<iostream>
using namespace std;
class A
{
int c;
public:
int a;
protected:
int b;
protected:
void display()
{
cout<<"in display of A\n";
}
 
};
class B:protected A
{
public:
int d;
public:
void show()
{
            B bobj;
bobj.display();
cout<<a<<b;
 
}
};
 
int main()
{
    B bobj;
    //bobj.display();
}
 
==================================================================================
Types Of Inheritance
C++ supports five types of inheritance:
 
Single inheritance
Multiple inheritance
Hierarchical inheritance
Multilevel inheritance
Hybrid inheritance
 
C++ Single Inheritance
Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.
 
#include <iostream>  
using namespace std;  
 class Account {  
   protected:  
   float bonus = 2000;   
 };  
   class Programmer: public Account {  
    
   float monthly_salary = 5000;  
public: 
   void CalculateSalary()
   {
       cout<<"Total Salary: "<<monthly_salary+bonus<<endl;    
   }
   };       
int main() {  
     Programmer p1;  
     p1.CalculateSalary();
        
    return 0;  
}  
=========================================================================
While creating an object of the derived class, the base class constructor is called first and then the derived class constructor is called. The base class constructor is responsible for initializing the inherited data members and the derived class constructor is responsible for initializing data members of derived class.
 
The member initializer list is used to indicate which base class constructor to call in the derived class constructor.otherwise , the no argument constructor of base class is used.
 
Derived object has two parts: a base part and a derived part.
The base part of derived object is constructed first. then the derived part is constructed. therefore the constructor calls are in the order of base->derived.
==========================================================
 
Why the base class’s constructor is called on creating an object of derived class?
 
 What happens when a class is inherited from other? The data members and member functions of base class comes automatically in derived class based on the access specifier but the definition of these members exists in base class only. So when we create an object of derived class, all of the members of derived class must be initialized but the inherited members in derived class can only be initialized by the base class’s constructor as the definition of these members exists in base class only. This is why the constructor of base class is called first to initialize all the inherited members. 
 
 
 
/*#include<iostream>
using namespace std;
class A
{
int a;
public:
A();
    void display();
 };
A::A()
{
cout<<"in default of A\n";
a=10;
}
void A::display()
{
cout<<a<<endl;
}
class B:public A
{
int b;
public:
B();
void display();
};
B::B()
{
cout<<"in default of B\n";
b=20;
}
void B::display()
{
A::display();
cout<<b<<endl;
}
int main()
{
B bobj;
bobj.display();
}
==========================================================
#include<iostream>
using namespace std;
class A
{
int a;
public:
A(int);
    void display();
 };
A::A(int p)
{
cout<<"in para of A\n";
a=p;
}
void A::display()
{
cout<<a<<endl;
}
class B:public A
{
int b;
public:
B(int,int);
void display();
};
B::B(int p,int q):A(p)//base class initilization list
{
cout<<"in para of B\n";
b=q;
}
void B::display()
{
A::display();
cout<<b<<endl;
}
int main()
{
B bobj(10,20);
bobj.display();
}
===========================================================
Important Points: 
 
Whenever the derived class’s default constructor is called, the base class’s default constructor is called automatically.
To call the parameterized constructor of base class inside the parameterized constructor of sub class, we have to mention it explicitly.The parameterized constructor of base class cannot be called in default constructor of sub class, it should be called in the parameterized constructor of sub class.
=============================================================================================
Multilevel Inheritance
 
Multilevel Inheritance in C++ is the process of deriving a class from another derived class. When one class inherits another class it is further inherited by another class. It is known as multi-level inheritance.
 
For example, if we take Grandfather as a base class then Father is the derived class that has features of Grandfather and then Child is the also derived class that is derived from the sub-class Father which inherits all the features of Father.
class A // base class
{
    ...........
};
class B : access_specifier A // derived class
{
    ...........
} ;
class C : access_specifier B // derived from derived class B
{
    ...........
} ;
 
// C++ program to implement constructor in multilevel   Inheritance 
#include<iostream> 
using namespace std; 
  
// Base class 
class A 
{ 
    public: 
        A() 
        { 
            cout << "Base class A constructor \n"; 
        } 
}; 
  
// Derived class B 
class B: public A 
{ 
    public: 
        B() 
        { 
            cout << "Class B constructor \n"; 
        } 
}; 
  
// Derived class C 
class C: public B 
{ 
    public: 
        C() 
        { 
            cout << "Class C constructor \n"; 
              
        } 
}; 
  
// Driver code 
int main() 
{ 
    C obj; 
    return 0; 
}
 
==================================================================
class employee
{
int id;
public:
employee();
employee(int);
     void display();
 int findsalary()
{
return 0;
}
};
employee::employee()
{
cout<<"in default of emp\n";
id=0;
}
employee::employee(int i)
{
cout<<"in para of emp\n";
id=i;
}
void employee::display()
{
 
cout<<"id of an emp is "<<id<<endl;
}
 
class wageemployee:public employee
{
int hrs,rate;
public:
wageemployee();
wageemployee(int,int,int);
 void display();
int findsalary();
};
wageemployee::wageemployee()
{
cout<<"in default of wage\n";
hrs=0;
rate=0;
}
wageemployee::wageemployee(int i,int h,int r)
:employee(i)
{
cout<<"in para of wage\n";
hrs=h;
rate=r;
}
int wageemployee::findsalary()
{
return hrs * rate;
}
void wageemployee::display()
{
employee::display();
cout<<hrs<<endl;
cout<<rate<<endl;
}
class salesmanager:public wageemployee
{
int sales,comm;
public:
salesmanager();
salesmanager(int,int,int,int,int);
void display();
int findsalary();
void show();
};
salesmanager::salesmanager()
{
cout<<"in default of sales\n";
sales=comm=0;
}
salesmanager::salesmanager(int i,int h,int r,int s,
int c):wageemployee(i,h,r)
{
cout<<"in para of sales\n";
sales=s;
comm=c;
}
void salesmanager::display()
{
wageemployee::display();
cout<<"sales of an emp is "<<sales<<endl;
cout<<"comm of an emp is  "<<comm<<endl;
}
int salesmanager::findsalary()
{
return wageemployee::findsalary()  + sales * comm;
}
void salesmanager::show()
{
cout<<"in show fun\n";
}
int main()
{
salesmanager *ptr=new salesmanager();
cout<<"salary is "<<ptr->findsalary();
ptr->display();
 
}
=================================================================
============================================================================================
Function Overriding
1)two or more function having same function name and same signature and same return type is called as function overriding
2)overrided function  must be present in inherited classes i.e scopes are different
==============================================================
Multiple Inheritance in C++:
 
1 Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes. 
2  The constructors of inherited classes are called in the same order in which they are inherited.
==>The list of base classes mentioned in the derived class declaration must be seperated by commas and each of the base classes should use its own specifier . If the class specifier is not specified, default is private.
==>The order in which base class constructors are invoked is the same as the  order in which they appear in the derived class constructor's member initialization list.
 
Syntax:
 
class A
{ 
... .. ... 
};
class B
{
... .. ...
};
class C: public A,public B
{
... ... ...
};
=======================================================================
#include<iostream>
using namespace std;
 
class A
{
public:
  A()  { cout << "A's constructor called" << endl; }
  ~A()  { cout << "A's constructor called" << endl; }
};
 
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }
  ~B()  { cout << "B's constructor called" << endl; }
};
 
class C: public B, public A  
{
public:
  C()  { cout << "C's constructor called" << endl; }
  ~C()  { cout << "C's constructor called" << endl; }
  
};
 
int main()
{
    C c;
    return 0;
}
 
Output:
 
B's constructor called
A's constructor called
C's constructor called
The destructors are called in reverse order of constructors.
=======================================================================
 
Ambiguity Problem in Multiple Inheritance
In Multiple Inheritance, when a single class is derived from two or more base or parent classes. So, it might be possible that both the parent class have the same named member functions, and it shows ambiguity when the child class object invokes one of the same-named member functions. Hence, we can say, the C++ compiler is confused in selecting the member function of a class for the execution of a program.
ex:
Base classes can contain a function with the same name,signature and returntype.
class A
{ 
func()
 
};
class C
{
... .. ...
};
class B: public A,public B
{
 
};
B bobj
bobj.func();
 
==>Here,the function call is ambiguous and doesnot compile,because it is not clear whether it refers to A::func() or C::func().This ambiguity can be resolved by any one of the following 2 ways.
1)Making the call explicit by resolving the function call with the classname i.e specifying either  bobj.A::func() or bobj.c::func()
2)overriding the func() in class B . then the statement bobj.func() will call func() of class B and the call will not be ambiguous.
 
#include <iostream>  
using namespace std;  
  
// create class A  
class A  
{  
    public:   
    void show()  
    {  
        cout << " It is the member function of class A " << endl;  
    }  
 };   
   
 // create class B  
 class B  
{  
    public:   
    void show()  
    {  
        cout << " It is the member function of class B " << endl;  
    }  
 };  
  // create a child class to inherit the member function of class A and class B  
 class child: public A, public B  
 {  
    public:  
        void disp()  
        {  
            cout << " It is the member function of the child class " << endl;  
         }  
 };  
   int main ()  
 {  
    // create an object of the child class to access the member function  
    child ch;  
    ch.show(); // It causes ambiguity   
    ch.disp();  
    return 0;  
 }  
==================================================================
 
 
 
Diamond Inheritance:
In diamond inheritance,one child has two parents and both the parents share a common parent. When in a hierarchy, a class is derived from two classes and both the classes are derived from a common base class,it is termed as diamond inheritance.
 
The diamond problem The diamond problem occurs when two superclasses of a class have a common base class. 
 
#include<iostream>
using namespace std;
class Person {
   // Data members of person 
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
};
 
class Faculty : public Person {
   // data members of Faculty
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : public Person {
   // data members of Student
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  {
    TA ta1(30);
}
Person::Person(int ) called
Faculty::Faculty(int ) called
Person::Person(int ) called
Student::Student(int ) called
TA::TA(int ) called
In the above program, constructor of ‘Person’ is called two times. Destructor of ‘Person’ will also be called two times when object ‘ta1’ is destructed. So object ‘ta1’ has two copies of all members of ‘Person’, this causes ambiguities. The solution to this problem is ‘virtual’ keyword. We make the classes ‘Faculty’ and ‘Student’ as virtual base classes to avoid two copies of ‘Person’ in ‘TA’ class.
==========================================================================================
#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};
 
class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : virtual public Person {
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  {
    TA ta1(30);
}
Output:
 
Person::Person() called
Faculty::Faculty(int ) called
Student::Student(int ) called
TA::TA(int ) called
In the above program, constructor of ‘Person’ is called once. One important thing to note in the above output is, the default constructor of ‘Person’ is called.When we use ‘virtual’ keyword, the default constructor of grandparent class is called by default even if the parent classes explicitly call parameterized constructor.
=======================================================================================
How to call the parameterized constructor of the ‘Person’ class?
 
The constructor has to be called in ‘TA’ class.
 
For example, see the following program. 
 
   
#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};
 
class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : virtual public Person {
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x), Person(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  {
    TA ta1(30);
}
Output:
 
Person::Person(int ) called
Faculty::Faculty(int ) called
Student::Student(int ) called
TA::TA(int ) called
In general, it is not allowed to call the grandparent’s constructor directly, it has to be called through parent class. It is allowed only when ‘virtual’ keyword is used.
=====================================================================================
FAQ:
class S: public A1, virtual A2
{
….
};                                                                                            
 
Here,
A2(): virtual base constructor
A1(): base constructor
S(): derived constructor
 
Example 1: Below is the C++ program to show the concept of Constructor in Multiple Inheritance.
 
 
// C++ program to implement
// constructor in multiple 
// inheritance
#include<iostream>
using namespace std;
class A1
{
  public:
  A1()
  {
    cout << "Constructor of the base class A1 \n";
  }
 
};
 
class A2
{
  public:
  A2()
  {
    cout << "Constructor of the base class A2 \n";
  }
 
};
 
class S: public A1, virtual A2
{
  public:
  S(): A1(), A2()
  {
    cout << "Constructor of the derived class S \n";
  }
};
 
// Driver code
int main()
{
  S obj;
  return 0;
}
Output
Constructor of the base class A2 
Constructor of the base class A1 
Constructor of the derived class S 
====================================================================
 
FAQ ON MULTIPLE INHERITANCE:
 
1)
#include<iostream> 
   
using namespace std; 
class Base1 { 
 public: 
     Base1() 
     { cout << " Base1's constructor called" << endl;  } 
}; 
   
class Base2 { 
 public: 
     Base2() 
     { cout << "Base2's constructor called" << endl;  } 
}; 
   
class Derived: public Base1, public Base2 { 
   public: 
     Derived() 
     {  cout << "Derived's constructor called" << endl;  } 
}; 
   
int main() 
{ 
   Derived d; 
   return 0; 
} 
(A) Compiler Dependent
 
 
(B) Base1′s constructor called
Base2′s constructor called
Derived’s constructor called
 
 
(C) Base2′s constructor called
Base1′s constructor called
Derived’s constructor called
 
 
(D) Compiler Error
 
 
Answer: (B)
 
Explanation: When a class inherits from multiple classes, constructors of base classes are called in the same order as they are specified in inheritance.
===================================================================================================
2)
#include <iostream>   
using namespace std; 
  
class Base1 { 
 public: 
     ~Base1()  { cout << " Base1's destructor" << endl; } 
}; 
    
class Base2 { 
 public: 
     ~Base2()  { cout << " Base2's destructor" << endl; } 
}; 
    
class Derived: public Base1, public Base2 { 
   public: 
     ~Derived()  { cout << " Derived's destructor" << endl; } 
}; 
    
int main() 
{ 
   Derived d; 
   return 0; 
} 
(A)
Base1's destructor
Base2's destructor
Derived's destructor
(B)
Derived's destructor
Base2's destructor
Base1's destructor
(C)
Derived's destructor
(D) Compiler Dependent
 
Answer: (B)
 
Explanation: Destructors are always called in reverse order of constructors.
==================================================================================
3)
 
 
#include<iostream> 
   
using namespace std; 
class P { 
public: 
   void print()  { cout <<" Inside P"; } 
}; 
   
class Q : public P { 
public: 
   void print() { cout <<" Inside Q"; } 
}; 
   
class R: public Q { }; 
   
int main(void) 
{ 
  R r;  
  r.print(); 
  return 0; 
} 
(A) Inside P
(B) Inside Q
(C) Compiler Error: Ambiguous call to print()
 
 
Answer: (B)
 
Explanation: The print function is not present in class R. So it is looked up in the inheritance hierarchy. print() is present in both classes P and Q, which of them should be called? The idea is, if there is multilevel inheritance, then function is linearly searched up in the inheritance hierarchy until a matching function is found.
======================================================================================
 
 
 
 
Virtual base class in C++
 
Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances. 
 
Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is inherited by two other classes B and C. Both these class are inherited into another in a new class D
 
data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error. 
 
Example: To show the need of Virtual Base Class in C++ 
#include <iostream> 
using namespace std; 
  
class A { 
public: 
    void show() 
    { 
        cout << "Hello form A \n"; 
    } 
}; 
  
class B : public A { 
}; 
  
class C : public A { 
}; 
  
class D : public B, public C { 
}; 
  
int main() 
{ 
    D object; 
    object.show(); 
} 
Compile Errors:
 
prog.cpp: In function 'int main()':
prog.cpp:29:9: error: request for member 'show' is ambiguous
  object.show();
         ^
prog.cpp:8:8: note: candidates are: void A::show()
   void show()
        ^
prog.cpp:8:8: note:                 void A::show()
How to resolve this issue? 
To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as : 
 
Syntax for Virtual Base Classes:
 
Syntax 1:
class B : virtual public A 
{
};
Syntax 2:
class C : public virtual A
{
};
Note: 
virtual can be written before or after the public. Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class. Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base. 
 
 
 
 
#include <iostream> 
using namespace std; 
  
class A { 
public: 
    int a; 
    A() // constructor 
    { 
        a = 10; 
    } 
}; 
  
class B : public virtual A { 
}; 
  
class C : public virtual A { 
}; 
  
class D : public B, public C { 
}; 
  
int main() 
{ 
    D object; // object creation of class d 
    cout << "a = " << object.a << endl; 
  
    return 0; 
} 
Output
a = 10
Explanation :
To solve this ambiguity we will make class “A” as a virtual base class. To make a virtual base class “virtual” keyword is used.
 
When one class is made virtual then only one copy of its data member and member function is passed to the classes inheriting it. So in our example when we will make class “A” a virtual class then only one copy of the data member and member function will be passed to the classes “B” and “C” which will be shared between all classes. This will help to solve the ambiguity.
 
When a class is specified as a virtual base class, it prevents duplication of its data members. Only one copy of its data members is shared by all the base classes that use the virtual base class.
If a virtual base class is not used, all the derived classes will get duplicated data members. In this case, the compiler cannot decide which one to execute.
 
NOTE:
In this case, we are using a virtual base class in C++, so only one copy of data from Class A was inherited to Class D; hence, the compiler will be able to print the output.
When we mention the base class as virtual, we avoid the situation of duplication and let the derived classes get only one copy of the data.
 
There are a few details that one needs to remember.
 
1)Virtual base classes are always created before non-virtual base classes. This ensures all bases are created before their derived classes.
2)Note that classes B and C still have calls to class A, but they are simply ignored when creating an object of class D. If we are creating an object of class B or C, then the constructor of A will be called.
3)If a class inherits one or more classes with virtual parents, the most derived class is responsible for constructing the virtual base class. Here, class D is responsible for creating class A object.
========================================================================================
 
book:
problem 1:
If the base class contain a function with same name then while calling this function in the derived class or through an object of derived class, the compiler flashes an error of ambiguous call.
 
problem 2:
data duplication occurs when the derived class has multiple copies of the same base class.
 
==>To avoid 2 major problems in case of diamond inheritance,c++ introduces a concept of a virtual base class. A virtual base class is a class that is virtually present in its derived classes(i.e in the form of pointer). 
==>A base class is made virtual by placing the keyword virtual before its name in the derived class declaration.
==Virtual base classes offer a way to save spacce and aoid ambiguities in class hierarchies that use diamond inheritance.
==>When a base class is specified as virtual,it can act as an indirect base class more than once without duplicating its data members.A single copy of its data members is shared by all the base classes that use it as virtual base.
 
Employee:  id
Manager:petrolallow,foodallow,virtual base pointer
Salesperson:sales,comm,virtual base pointer
Salesmanager:petrolallow,foodallow,virtual base pointer + sales,comm,virtual base pointer
 
class Salesperson:virtual public Employee
{}
 
class Manager:virtual public Employee
{}
 
Class Employee becomes a virtual base class.The data members of the virtual base class are not directly present in the derived class. Instead, the derived class Salesperson and Manager acquire a pointer each. This pointer is called virtual base pointer.It causes the size of their objects to increase by 4 bytes each. This virtual base pointer points to common data members of the virtual base class.
 
Constructors in multiple inheritance:
 
If the virtual base class has constructors, then the most derived class constructor is responsible for initializing the virtual base class.
==>Employee is the virtual base class.The most derived class constructor is responsible for invoking the Employee constructor.
ex:SalesManager constructor must be as follow:
SalesManager::SalesManager(--):Employee(--),Salesperson(-),Manager(-)
{
}
 
Now on instantiating an object sm1 of class Salesmanager
1)memory is alloacted for the salesmanager object
2)constructor of the class  salesmanager is invoked
3)constructor of the class  Employee is invoked and executed directly
4)constructor of the class that appears first when the  salesmanager class is derived(i.e salesperson) is invoked and executed.
5)constructor of the class that appears next  is invoked and executed
6)constructor of the class  salesmanager is executed.
 
==>As Employee class is made a virtual base class, the code that was written previously for accept(),where the compiler was giving error as ambiguous call for the statement Employee:accept() will work fine.
=====================================================================================
 

Inheritance:
 
==>Inheritance is one of the most important features of Object-Oriented Programming. 
==>The capability of a class to derive properties and characteristics from another class is called Inheritance. 
==>Inheritance is a feature or a process in which, new classes are created from the existing classes. 
==>The new class created is called "derived class" or "child class" and the existing class is known as the "base class” or “parent class”. 
The derived class now is said to be inherited from the base class.
 
==>When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class it may add new features to its own. These new features in the derived class will not affect the base class.The derived class is the specialized class for the base class.
 
==>It not only helps to reuse the old code but adds in extending the functionality. i.e Reusability + Extensibility
Reusability:
Once a class is written and tested,it can be further used for creating new classes. These derived classes not only inherit the features of their base class,
but also have their own individualist features. 
it means that if the derived class wants to use its base class properties,it can do so because those properties are also available to the derived class by the virtue of inheritance.
Now you can reuse the members of your parent class. So, there is no need to define the member again. So less code is required in the class.
 
Extensibility:
It is the mechanism of being able to derive classes from existing classes that provides extensibility of adding and removing classes in a hierarchy 
as and when required.Any changes to data or functionalities contained within a base class are immediately inherited by all derived classes.
 
==>each child has "is a " relationship with its parent.
 
==>Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
==>Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass.
 
Syntax: 
 
class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
access-specifier  — either of private, public or protected. If neither is specified, PRIVATE is taken as default
 
There are three Access specifiers in C++. These are:
 
Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members.
 
Note: If we do not specify any access modifiers for the members inside the class, then by default the access modifier for the members will be Private.
 
==========================================================================
 
public – members are accessible from outside the class, and members can be accessed from anywhere. The data members and member functions declared as public can be accessed by other classes and functions too.The public members of a class can be accessed from anywhere in the program using the dot operator with the object of that class. 
 
// C++ program to demonstrate public access modifier
 
#include<iostream>
using namespace std;
class Circle
{
    public: 
        double radius;
         
        double  compute_area()
        {
            return 3.14*radius*radius;
        }
     
};
 int main()
{
    Circle obj;
     
    // accessing public datamember outside class
    obj.radius = 5.5;
      cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area();
    return 0;
}
Output: 
 
Radius is: 5.5
Area is: 94.985
In the above program, the data member radius is declared as public so it could be accessed outside the class and thus was allowed access from inside main(). 
 
===========================================================================private – members cannot be accessed (or viewed) from outside the class, i.e members are private to that class only.
The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any 
object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of the class.
 
// C++ program to demonstrate private access modifier
 
#include<iostream>
using namespace std;
 
class Circle
{   
    // private data member
    private: 
        double radius;
      
    // public member function    
    public:    
        double  compute_area()
        {   // member function can access private 
            // data member radius
            return 3.14*radius*radius;
        }
    };
 int main()
{   
       Circle obj;
       obj.radius = 1.5;
     
    cout << "Area is:" << obj.compute_area();
    return 0;
}
The output of the above program is a compile time error because we are not allowed to access the private data members of a class directly from outside the class.
 Yet an access to obj.radius is attempted, but radius being a private data member, we obtained the above compilation error. 
 
However, we can access the private data members of a class indirectly using the public member functions of the class. 
===========================================================================
How to make a Private Member Inheritable
The private member is not inheritable. If we modify the visibility mode by making it public, but this takes away the advantage of data hiding.
C++ introduces a third visibility modifier, i.e., protected. The member which is declared as protected will be accessible to all the member functions within the class as well as the class immediately derived from it.
 
protected – members cannot be accessed from outside the class, but, they can be accessed in inherited classes or derived classes. 
The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. 
The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well.
 
// C++ program to demonstrate protected access modifier
#include <iostream>
using namespace std;
 class Parent
{   
    protected:
    int id_protected;
  };
class Child : public Parent
{
    public:
    void setId(int id)
    { 
        // Child class is able to access the inherited protected data members of base class
             id_protected = id;
      }
       void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};
 int main() {
     
    Child obj1;
  // member function of the derived class can access the protected data members of the base class
  obj1.setId(81);
    obj1.displayId();
Parent p1;
   // p1.id_protected=10;
  // p1.show();
 
 
}
Output: 
 
id_protected is: 81
=============================================================================================
Note:
When derived class obj is created memory is allocated for base class datamembers as well as for derived class data members. 
Through derived class obj, we can access base class members except private as well as derived class members.
 
#include <bits/stdc++.h>
using namespace std;
class Parent {
public:
    int id_p;
    void set_display1()
   {
            
}
 
protected:
int id_pro;
 
};
class Child : public Parent {
public:
    int id_c;
   void set_display()
    {
            id_pro=10;
            cout<<id_pro;
}
};
 int main()
{
    Child obj1;
     // An object of class child has all data members and member functions of class parent
    obj1.id_c = 7;
    obj1.id_p = 91;
   // obj1.id_pro=7;//ERROR
   //THRU DERIVED CLASS OBJ WE CAN ACCESS BASE CVLASS AS WELL AS DERIVED CLASS DATAS MEMBERS
    cout << "Child id is: " << obj1.id_c << '\n';
    cout << "Parent id is: " << obj1.id_p << '\n';
    obj1.set_display1();
    obj1.set_display();
    cout<<sizeof(obj1);
}
 
==============================================================
Note 2:
When base class obj is created memory is allocated for base class datamembers only. Through base class obj, we can access base class members only ,we cannot access derived class members.
 
#include <bits/stdc++.h>
using namespace std;
class Parent {
public:
    int id_p;
};
class Child : public Parent {
public:
    int id_c;
    void display()
    {
        }
 
};
 int main()
{
    Parent obj1;
 
    // An object of class child has all data members and member functions of class parent
   // obj1.id_c = 7;//error
    obj1.id_p = 91;
   // cout << "Child id is: " << obj1.id_c << '\n';//error
    cout << "Parent id is: " << obj1.id_p << '\n';
    cout<<sizeof(obj1);
 //obj1.display();
}
 
==============================================================================================
Modes of Inheritance: There are 3 modes of inheritance.
 
Modes of inheritance specifies the way in which a class is derived. It tells about the access rights given to the derived class to access its base class attributes and functions. These mode are:
 
private(default)
public
protected
 
ex:
class derived_class_name :: visibility-mode base_class_name  
{  
    // body of the derived class.  
}  
Where,
derived_class_name: It is the name of the derived class.
visibility mode: The visibility mode specifies whether the features of the base class are publicly , protected inherited or privately inherited. It can be public or private.
 
Example:
1. class ABC : private XYZ              //private derivation
            {                }
2. class ABC : public XYZ              //public derivation
            {               }
3. class ABC : protected XYZ              //protected derivation
            {              }
4. class ABC: XYZ                            //private derivation by default
{            }
 
=======================================================================
Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of 
the base class will become protected in the derived class.
 
1. C++ public Inheritance
In this example, public inheritance is demonstrated. Since private and protected members will not be directly accessed from main( ) 
so we have to create functions name getPVT( ) to access the private variable and getProt( ) to access the protected variable from the inherited class.
 
Example:
// C++ program to demonstrate the working of public  inheritance 
#include <iostream> 
using namespace std; 
  class Base { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
 public: 
    int pub = 3; 
  
 // function to access private member 
    int getPVT() { return pvt; } 
}; 
  
class PublicDerived : public Base { 
public: 
    // function to access protected member from Base 
    int getProt() { return prot; } 
}; 
 int main() 
{ 
    PublicDerived object1; 
    cout << "Private = " << object1.getPVT() << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    cout << "Public = " << object1.pub << endl; 
    return 0; 
}
Output
Private = 1
Protected = 2
Public = 3
==================================================================
Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
We know that protected members can only be accessed from the Derived class. These members cannot be directly accessed from outside the class. So we cannot use getPVT() from ProtectedDerived.This is also why we need to create getPub() function in the Derived class in order to access the pub variable.
 
Example:
 
 
// C++ program to demonstrate the working  of protected inheritance 
#include <iostream> 
using namespace std; 
  
class Base { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
  public: 
    int pub = 3; 
  
    // function to access private member 
    int getPVT() { return pvt; } 
}; 
  
class ProtectedDerived : protected Base { 
public: 
    // function to access protected member from Base 
    int getProt() { return prot; } 
  
    // function to access public member from Base 
    int getPub() { return pub; } 
}; 
  
int main() 
{ 
    ProtectedDerived object1; 
    cout << "Private cannot be accessed." << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    cout << "Public = " << object1.getPub() << endl;
//        cout<<object1.getPVT() ;
//cout<<object1.pub;
    return 0; 
}
============================================================================
 
Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
Note: The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed.
#include <iostream> 
using namespace std; 
  
class Base { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
public: 
    int pub = 3; 
  // function to access private member 
    int getPVT() { return pvt; } 
   // int getPub() { return pub; } 
}; 
 class PrivateDerived : private Base { 
public: 
    // function to access protected member from Base 
    int getProt() 
{
//prot=10;
 return prot; 
} 
    
}; 
  
int main() 
{ 
    PrivateDerived object1; 
    cout << "Private cannot be accessed." << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    //cout << "Public = " << object1.getPub() << endl; 
    return 0; 
}
 
===================================================================================================
When the base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class. Therefore, the public members of the base class are not accessible by the objects of the derived class only by the member functions of the derived class.
 
ex:
 
 
#include<iostream>
using namespace std;
class A
{
int c;
public:
int a;
protected:
int b;
public:
void display()
{
cout<<"in display of A\n";
}
};
class B:private A
{
public:
int c;
public:
void show()
{
    display();//allowed
cout<<a<<b;
}
};
class C:private B
{
public:
void show()
{
   // display(); not allowed
//cout<< a<<b; not allowed
cout<<c;
}
};
int main()
{
B bobj;
bobj.show();
//        bobj.display(); not allowed
}
In the above example, class A is privately inherited. Therefore, the display() function of class 'A' cannot be accessed by the object of class B. It can only be accessed by the member function of class B.
=========================================================================
 
====================================================================================
When the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.
 
#include<iostream>
using namespace std;
class A
{
int c;
public:
int a;
protected:
int b;
public:
void display()
{
cout<<"in display of A\n";
}
 
};
class B:public A
{
public:
public:
void show()
{
    display();
cout<<a<<b;
}
};
class C:public B
{
public:
void show()
{
cout<< a<<b;
}
};
int main()
{
B bobj;
bobj.show();
bobj.display();
}
=====================================================================
When the base class is protectedly inherited by the derived class, the public members of the base class are not accessible by the objects of the derived class 
(because public members of base class becomes protected in derived class and protected datamember cannot be accessed outside the class) only by the member functions of the derived class.
#include<iostream>
using namespace std;
class A
{
int c;
public:
int a;
protected:
int b;
protected:
void display()
{
cout<<"in display of A\n";
}
 
};
class B:protected A
{
public:
int d;
public:
void show()
{
            B bobj;
bobj.display();
cout<<a<<b;
 
}
};
 
int main()
{
    B bobj;
    //bobj.display();
}
 
==================================================================================
Types Of Inheritance
C++ supports five types of inheritance:
 
Single inheritance
Multiple inheritance
Hierarchical inheritance
Multilevel inheritance
Hybrid inheritance
 
C++ Single Inheritance
Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.
 
#include <iostream>  
using namespace std;  
 class Account {  
   protected:  
   float bonus = 2000;   
 };  
   class Programmer: public Account {  
    
   float monthly_salary = 5000;  
public: 
   void CalculateSalary()
   {
       cout<<"Total Salary: "<<monthly_salary+bonus<<endl;    
   }
   };       
int main() {  
     Programmer p1;  
     p1.CalculateSalary();
        
    return 0;  
}  
=========================================================================
While creating an object of the derived class, the base class constructor is called first and then the derived class constructor is called. The base class constructor is responsible for initializing the inherited data members and the derived class constructor is responsible for initializing data members of derived class.
 
The member initializer list is used to indicate which base class constructor to call in the derived class constructor.otherwise , the no argument constructor of base class is used.
 
Derived object has two parts: a base part and a derived part.
The base part of derived object is constructed first. then the derived part is constructed. therefore the constructor calls are in the order of base->derived.
==========================================================
 
Why the base class’s constructor is called on creating an object of derived class?
 
 What happens when a class is inherited from other? The data members and member functions of base class comes automatically in derived class based on the access specifier but the definition of these members exists in base class only. So when we create an object of derived class, all of the members of derived class must be initialized but the inherited members in derived class can only be initialized by the base class’s constructor as the definition of these members exists in base class only. This is why the constructor of base class is called first to initialize all the inherited members. 
 
 
 
/*#include<iostream>
using namespace std;
class A
{
int a;
public:
A();
    void display();
 };
A::A()
{
cout<<"in default of A\n";
a=10;
}
void A::display()
{
cout<<a<<endl;
}
class B:public A
{
int b;
public:
B();
void display();
};
B::B()
{
cout<<"in default of B\n";
b=20;
}
void B::display()
{
A::display();
cout<<b<<endl;
}
int main()
{
B bobj;
bobj.display();
}
==========================================================
#include<iostream>
using namespace std;
class A
{
int a;
public:
A(int);
    void display();
 };
A::A(int p)
{
cout<<"in para of A\n";
a=p;
}
void A::display()
{
cout<<a<<endl;
}
class B:public A
{
int b;
public:
B(int,int);
void display();
};
B::B(int p,int q):A(p)//base class initilization list
{
cout<<"in para of B\n";
b=q;
}
void B::display()
{
A::display();
cout<<b<<endl;
}
int main()
{
B bobj(10,20);
bobj.display();
}
===========================================================
Important Points: 
 
Whenever the derived class’s default constructor is called, the base class’s default constructor is called automatically.
To call the parameterized constructor of base class inside the parameterized constructor of sub class, we have to mention it explicitly.The parameterized constructor of base class cannot be called in default constructor of sub class, it should be called in the parameterized constructor of sub class.
=============================================================================================
Multilevel Inheritance
 
Multilevel Inheritance in C++ is the process of deriving a class from another derived class. When one class inherits another class it is further inherited by another class. It is known as multi-level inheritance.
 
For example, if we take Grandfather as a base class then Father is the derived class that has features of Grandfather and then Child is the also derived class that is derived from the sub-class Father which inherits all the features of Father.
class A // base class
{
    ...........
};
class B : access_specifier A // derived class
{
    ...........
} ;
class C : access_specifier B // derived from derived class B
{
    ...........
} ;
 
// C++ program to implement constructor in multilevel   Inheritance 
#include<iostream> 
using namespace std; 
  
// Base class 
class A 
{ 
    public: 
        A() 
        { 
            cout << "Base class A constructor \n"; 
        } 
}; 
  
// Derived class B 
class B: public A 
{ 
    public: 
        B() 
        { 
            cout << "Class B constructor \n"; 
        } 
}; 
  
// Derived class C 
class C: public B 
{ 
    public: 
        C() 
        { 
            cout << "Class C constructor \n"; 
              
        } 
}; 
  
// Driver code 
int main() 
{ 
    C obj; 
    return 0; 
}
 
==================================================================
class employee
{
int id;
public:
employee();
employee(int);
     void display();
 int findsalary()
{
return 0;
}
};
employee::employee()
{
cout<<"in default of emp\n";
id=0;
}
employee::employee(int i)
{
cout<<"in para of emp\n";
id=i;
}
void employee::display()
{
 
cout<<"id of an emp is "<<id<<endl;
}
 
class wageemployee:public employee
{
int hrs,rate;
public:
wageemployee();
wageemployee(int,int,int);
 void display();
int findsalary();
};
wageemployee::wageemployee()
{
cout<<"in default of wage\n";
hrs=0;
rate=0;
}
wageemployee::wageemployee(int i,int h,int r)
:employee(i)
{
cout<<"in para of wage\n";
hrs=h;
rate=r;
}
int wageemployee::findsalary()
{
return hrs * rate;
}
void wageemployee::display()
{
employee::display();
cout<<hrs<<endl;
cout<<rate<<endl;
}
class salesmanager:public wageemployee
{
int sales,comm;
public:
salesmanager();
salesmanager(int,int,int,int,int);
void display();
int findsalary();
void show();
};
salesmanager::salesmanager()
{
cout<<"in default of sales\n";
sales=comm=0;
}
salesmanager::salesmanager(int i,int h,int r,int s,
int c):wageemployee(i,h,r)
{
cout<<"in para of sales\n";
sales=s;
comm=c;
}
void salesmanager::display()
{
wageemployee::display();
cout<<"sales of an emp is "<<sales<<endl;
cout<<"comm of an emp is  "<<comm<<endl;
}
int salesmanager::findsalary()
{
return wageemployee::findsalary()  + sales * comm;
}
void salesmanager::show()
{
cout<<"in show fun\n";
}
int main()
{
salesmanager *ptr=new salesmanager();
cout<<"salary is "<<ptr->findsalary();
ptr->display();
 
}
=================================================================
============================================================================================
Function Overriding
1)two or more function having same function name and same signature and same return type is called as function overriding
2)overrided function  must be present in inherited classes i.e scopes are different
==============================================================
Multiple Inheritance in C++:
 
1 Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes. 
2  The constructors of inherited classes are called in the same order in which they are inherited.
==>The list of base classes mentioned in the derived class declaration must be seperated by commas and each of the base classes should use its own specifier . If the class specifier is not specified, default is private.
==>The order in which base class constructors are invoked is the same as the  order in which they appear in the derived class constructor's member initialization list.
 
Syntax:
 
class A
{ 
... .. ... 
};
class B
{
... .. ...
};
class C: public A,public B
{
... ... ...
};
=======================================================================
#include<iostream>
using namespace std;
 
class A
{
public:
  A()  { cout << "A's constructor called" << endl; }
  ~A()  { cout << "A's constructor called" << endl; }
};
 
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }
  ~B()  { cout << "B's constructor called" << endl; }
};
 
class C: public B, public A  
{
public:
  C()  { cout << "C's constructor called" << endl; }
  ~C()  { cout << "C's constructor called" << endl; }
  
};
 
int main()
{
    C c;
    return 0;
}
 
Output:
 
B's constructor called
A's constructor called
C's constructor called
The destructors are called in reverse order of constructors.
=======================================================================
 
Ambiguity Problem in Multiple Inheritance
In Multiple Inheritance, when a single class is derived from two or more base or parent classes. So, it might be possible that both the parent class have the same named member functions, and it shows ambiguity when the child class object invokes one of the same-named member functions. Hence, we can say, the C++ compiler is confused in selecting the member function of a class for the execution of a program.
ex:
Base classes can contain a function with the same name,signature and returntype.
class A
{ 
func()
 
};
class C
{
... .. ...
};
class B: public A,public B
{
 
};
B bobj
bobj.func();
 
==>Here,the function call is ambiguous and doesnot compile,because it is not clear whether it refers to A::func() or C::func().This ambiguity can be resolved by any one of the following 2 ways.
1)Making the call explicit by resolving the function call with the classname i.e specifying either  bobj.A::func() or bobj.c::func()
2)overriding the func() in class B . then the statement bobj.func() will call func() of class B and the call will not be ambiguous.
 
#include <iostream>  
using namespace std;  
  
// create class A  
class A  
{  
    public:   
    void show()  
    {  
        cout << " It is the member function of class A " << endl;  
    }  
 };   
   
 // create class B  
 class B  
{  
    public:   
    void show()  
    {  
        cout << " It is the member function of class B " << endl;  
    }  
 };  
  // create a child class to inherit the member function of class A and class B  
 class child: public A, public B  
 {  
    public:  
        void disp()  
        {  
            cout << " It is the member function of the child class " << endl;  
         }  
 };  
   int main ()  
 {  
    // create an object of the child class to access the member function  
    child ch;  
    ch.show(); // It causes ambiguity   
    ch.disp();  
    return 0;  
 }  
==================================================================
 
 
 
Diamond Inheritance:
In diamond inheritance,one child has two parents and both the parents share a common parent. When in a hierarchy, a class is derived from two classes and both the classes are derived from a common base class,it is termed as diamond inheritance.
 
The diamond problem The diamond problem occurs when two superclasses of a class have a common base class. 
 
#include<iostream>
using namespace std;
class Person {
   // Data members of person 
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
};
 
class Faculty : public Person {
   // data members of Faculty
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : public Person {
   // data members of Student
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  {
    TA ta1(30);
}
Person::Person(int ) called
Faculty::Faculty(int ) called
Person::Person(int ) called
Student::Student(int ) called
TA::TA(int ) called
In the above program, constructor of ‘Person’ is called two times. Destructor of ‘Person’ will also be called two times when object ‘ta1’ is destructed. So object ‘ta1’ has two copies of all members of ‘Person’, this causes ambiguities. The solution to this problem is ‘virtual’ keyword. We make the classes ‘Faculty’ and ‘Student’ as virtual base classes to avoid two copies of ‘Person’ in ‘TA’ class.
==========================================================================================
#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};
 
class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : virtual public Person {
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  {
    TA ta1(30);
}
Output:
 
Person::Person() called
Faculty::Faculty(int ) called
Student::Student(int ) called
TA::TA(int ) called
In the above program, constructor of ‘Person’ is called once. One important thing to note in the above output is, the default constructor of ‘Person’ is called.When we use ‘virtual’ keyword, the default constructor of grandparent class is called by default even if the parent classes explicitly call parameterized constructor.
=======================================================================================
How to call the parameterized constructor of the ‘Person’ class?
 
The constructor has to be called in ‘TA’ class.
 
For example, see the following program. 
 
   
#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};
 
class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : virtual public Person {
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x), Person(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  {
    TA ta1(30);
}
Output:
 
Person::Person(int ) called
Faculty::Faculty(int ) called
Student::Student(int ) called
TA::TA(int ) called
In general, it is not allowed to call the grandparent’s constructor directly, it has to be called through parent class. It is allowed only when ‘virtual’ keyword is used.
=====================================================================================
FAQ:
class S: public A1, virtual A2
{
….
};                                                                                            
 
Here,
A2(): virtual base constructor
A1(): base constructor
S(): derived constructor
 
Example 1: Below is the C++ program to show the concept of Constructor in Multiple Inheritance.
 
 
// C++ program to implement
// constructor in multiple 
// inheritance
#include<iostream>
using namespace std;
class A1
{
  public:
  A1()
  {
    cout << "Constructor of the base class A1 \n";
  }
 
};
 
class A2
{
  public:
  A2()
  {
    cout << "Constructor of the base class A2 \n";
  }
 
};
 
class S: public A1, virtual A2
{
  public:
  S(): A1(), A2()
  {
    cout << "Constructor of the derived class S \n";
  }
};
 
// Driver code
int main()
{
  S obj;
  return 0;
}
Output
Constructor of the base class A2 
Constructor of the base class A1 
Constructor of the derived class S 
====================================================================
 
FAQ ON MULTIPLE INHERITANCE:
 
1)
#include<iostream> 
   
using namespace std; 
class Base1 { 
 public: 
     Base1() 
     { cout << " Base1's constructor called" << endl;  } 
}; 
   
class Base2 { 
 public: 
     Base2() 
     { cout << "Base2's constructor called" << endl;  } 
}; 
   
class Derived: public Base1, public Base2 { 
   public: 
     Derived() 
     {  cout << "Derived's constructor called" << endl;  } 
}; 
   
int main() 
{ 
   Derived d; 
   return 0; 
} 
(A) Compiler Dependent
 
 
(B) Base1′s constructor called
Base2′s constructor called
Derived’s constructor called
 
 
(C) Base2′s constructor called
Base1′s constructor called
Derived’s constructor called
 
 
(D) Compiler Error
 
 
Answer: (B)
 
Explanation: When a class inherits from multiple classes, constructors of base classes are called in the same order as they are specified in inheritance.
===================================================================================================
2)
#include <iostream>   
using namespace std; 
  
class Base1 { 
 public: 
     ~Base1()  { cout << " Base1's destructor" << endl; } 
}; 
    
class Base2 { 
 public: 
     ~Base2()  { cout << " Base2's destructor" << endl; } 
}; 
    
class Derived: public Base1, public Base2 { 
   public: 
     ~Derived()  { cout << " Derived's destructor" << endl; } 
}; 
    
int main() 
{ 
   Derived d; 
   return 0; 
} 
(A)
Base1's destructor
Base2's destructor
Derived's destructor
(B)
Derived's destructor
Base2's destructor
Base1's destructor
(C)
Derived's destructor
(D) Compiler Dependent
 
Answer: (B)
 
Explanation: Destructors are always called in reverse order of constructors.
==================================================================================
3)
 
 
#include<iostream> 
   
using namespace std; 
class P { 
public: 
   void print()  { cout <<" Inside P"; } 
}; 
   
class Q : public P { 
public: 
   void print() { cout <<" Inside Q"; } 
}; 
   
class R: public Q { }; 
   
int main(void) 
{ 
  R r;  
  r.print(); 
  return 0; 
} 
(A) Inside P
(B) Inside Q
(C) Compiler Error: Ambiguous call to print()
 
 
Answer: (B)
 
Explanation: The print function is not present in class R. So it is looked up in the inheritance hierarchy. print() is present in both classes P and Q, which of them should be called? The idea is, if there is multilevel inheritance, then function is linearly searched up in the inheritance hierarchy until a matching function is found.
======================================================================================
 
 
 
 
Virtual base class in C++
 
Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances. 
 
Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is inherited by two other classes B and C. Both these class are inherited into another in a new class D
 
data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error. 
 
Example: To show the need of Virtual Base Class in C++ 
#include <iostream> 
using namespace std; 
  
class A { 
public: 
    void show() 
    { 
        cout << "Hello form A \n"; 
    } 
}; 
  
class B : public A { 
}; 
  
class C : public A { 
}; 
  
class D : public B, public C { 
}; 
  
int main() 
{ 
    D object; 
    object.show(); 
} 
Compile Errors:
 
prog.cpp: In function 'int main()':
prog.cpp:29:9: error: request for member 'show' is ambiguous
  object.show();
         ^
prog.cpp:8:8: note: candidates are: void A::show()
   void show()
        ^
prog.cpp:8:8: note:                 void A::show()
How to resolve this issue? 
To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as : 
 
Syntax for Virtual Base Classes:
 
Syntax 1:
class B : virtual public A 
{
};
Syntax 2:
class C : public virtual A
{
};
Note: 
virtual can be written before or after the public. Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class. Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base. 
 
 
 
 
#include <iostream> 
using namespace std; 
  
class A { 
public: 
    int a; 
    A() // constructor 
    { 
        a = 10; 
    } 
}; 
  
class B : public virtual A { 
}; 
  
class C : public virtual A { 
}; 
  
class D : public B, public C { 
}; 
  
int main() 
{ 
    D object; // object creation of class d 
    cout << "a = " << object.a << endl; 
  
    return 0; 
} 
Output
a = 10
Explanation :
To solve this ambiguity we will make class “A” as a virtual base class. To make a virtual base class “virtual” keyword is used.
 
When one class is made virtual then only one copy of its data member and member function is passed to the classes inheriting it. So in our example when we will make class “A” a virtual class then only one copy of the data member and member function will be passed to the classes “B” and “C” which will be shared between all classes. This will help to solve the ambiguity.
 
When a class is specified as a virtual base class, it prevents duplication of its data members. Only one copy of its data members is shared by all the base classes that use the virtual base class.
If a virtual base class is not used, all the derived classes will get duplicated data members. In this case, the compiler cannot decide which one to execute.
 
NOTE:
In this case, we are using a virtual base class in C++, so only one copy of data from Class A was inherited to Class D; hence, the compiler will be able to print the output.
When we mention the base class as virtual, we avoid the situation of duplication and let the derived classes get only one copy of the data.
 
There are a few details that one needs to remember.
 
1)Virtual base classes are always created before non-virtual base classes. This ensures all bases are created before their derived classes.
2)Note that classes B and C still have calls to class A, but they are simply ignored when creating an object of class D. If we are creating an object of class B or C, then the constructor of A will be called.
3)If a class inherits one or more classes with virtual parents, the most derived class is responsible for constructing the virtual base class. Here, class D is responsible for creating class A object.
========================================================================================
 
book:
problem 1:
If the base class contain a function with same name then while calling this function in the derived class or through an object of derived class, the compiler flashes an error of ambiguous call.
 
problem 2:
data duplication occurs when the derived class has multiple copies of the same base class.
 
==>To avoid 2 major problems in case of diamond inheritance,c++ introduces a concept of a virtual base class. A virtual base class is a class that is virtually present in its derived classes(i.e in the form of pointer). 
==>A base class is made virtual by placing the keyword virtual before its name in the derived class declaration.
==Virtual base classes offer a way to save spacce and aoid ambiguities in class hierarchies that use diamond inheritance.
==>When a base class is specified as virtual,it can act as an indirect base class more than once without duplicating its data members.A single copy of its data members is shared by all the base classes that use it as virtual base.
 
Employee:  id
Manager:petrolallow,foodallow,virtual base pointer
Salesperson:sales,comm,virtual base pointer
Salesmanager:petrolallow,foodallow,virtual base pointer + sales,comm,virtual base pointer
 
class Salesperson:virtual public Employee
{}
 
class Manager:virtual public Employee
{}
 
Class Employee becomes a virtual base class.The data members of the virtual base class are not directly present in the derived class. Instead, the derived class Salesperson and Manager acquire a pointer each. This pointer is called virtual base pointer.It causes the size of their objects to increase by 4 bytes each. This virtual base pointer points to common data members of the virtual base class.
 
Constructors in multiple inheritance:
 
If the virtual base class has constructors, then the most derived class constructor is responsible for initializing the virtual base class.
==>Employee is the virtual base class.The most derived class constructor is responsible for invoking the Employee constructor.
ex:SalesManager constructor must be as follow:
SalesManager::SalesManager(--):Employee(--),Salesperson(-),Manager(-)
{
}
 
Now on instantiating an object sm1 of class Salesmanager
1)memory is alloacted for the salesmanager object
2)constructor of the class  salesmanager is invoked
3)constructor of the class  Employee is invoked and executed directly
4)constructor of the class that appears first when the  salesmanager class is derived(i.e salesperson) is invoked and executed.
5)constructor of the class that appears next  is invoked and executed
6)constructor of the class  salesmanager is executed.
 
==>As Employee class is made a virtual base class, the code that was written previously for accept(),where the compiler was giving error as ambiguous call for the statement Employee:accept() will work fine.
=====================================================================================
 
//arrdemo
#include<stdio.h>
using namespace std;



void main()
{
	int a;

	for(a=0;0;a++);
	{
		if(a<5)
		{
			printf("\n%d",a);
		}
		a++;
	}
	
	printf("\n%d",a);
		

}
void main1()
{
	int i;
	int arr[5]={10,20,30,40,50};

	//int brr[]; not allowed

	for (i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n\n");
}


#include<iostream>
using namespace std;

class Complex
{
	int real;
	int imag;

public :

	Complex()//default constructor
	{
		//cout <<"\n default constructor";

		this->real=0;
		this->imag=0;
	}
	Complex(int r,int i)////parametrised constructor
	{
	//cout <<"\n  parametrised constructor with two arguments";
		this->real=r;
		this->imag=i;
	}
	Complex(int a)//parametrised constructor
	{
		//cout <<"\n  parametrised constructor with one arguments";
		this->real=a;
		this->imag=a;
	}
	void setReal(int r)
	{
		this->real=r;
	
	}
	void setImage(int i)
	{
		this->imag=i;
	
	}
	int getReal()
	{
		return this->real;
	}
	int getImage()
	{
		return this->imag;
	}

	void display()
	{
		cout << "\n"<< this->real<< " + "<< this->imag<<" i";
	}
	~Complex()
	{
		//cout << "\nDestructor called";
	}

	Complex operator++(int a)//post 
	{
		cout << "in post";
		Complex temp;
		temp.real=this->real++;
		temp.imag=this->imag++;
		return temp;
	}
	Complex operator++()//pre
	{
		cout << "in pre";
		Complex temp;
		temp.real=++this->real;
		temp.imag=++this->imag;
		return temp;
	}
};//class Ends here

void main()
{
	Complex c1(10,20);
	c1.display();//10+20

	Complex c2;
	c2=c1++;
	c2.display();//10+20
	c1.display();//11+21

	Complex c3;
	c3=++c1;
	c3.display();//12+22
	c1.display();//12+22
}

void main22()
{
	Complex * ptr;
	ptr = new Complex(10);

	ptr->display();

	delete ptr;
	cout <<"\n\n";
}
void main1()
{
	Complex c1;
	c1.display();

	Complex c2(10,2);
	c2.display();

	Complex c3(5);
	c3.display();
	

	
}


----------------------
#include<iostream>
using namespace std;

class student
{
	int rollno;
	//char name;
	int marks;

public :
/*
	student()//default constructor
	{
		cout <<"\n default constructor";

		this->rollno=6;
		this->marks=20;
	}  */
	student(int r,int i)////parametrised constructor
	{
	cout <<"\n  parametrised constructor with two arguments";
		this->rollno=9;
		this->marks=42
	}
	/*(int a)//parametrised constructor
	{
		cout <<"\n  parametrised constructor with one arguments";
		this->rollno=9;
		this->marks=42
	} */
	void setRollno(int r)
	{
		this->rollno=r;
	
	}
	void setmarks(int i)
	{
		this->marks=i;
	
	}
	int getRollno()
	{
		return this->Rollno;
	}
	int getmarks()
	{
		return this->marks;
	}

	void display()
	{
		cout << "\n"<< this->Rollno<< " + "<< this->marks<<" i";
	}
	~student()
	{
	cout << "\nDestructor called";
	}
};//class Ends here


void main()
{
	student * ptr;
	ptr = new student(10);

	ptr->display();

	delete ptr;
	cout <<"\n\n";
}
void main1()
{
	Complex c1;
	c1.display();

	Complex c2(10,2);
	c2.display();

	Complex c3(5);
	c3.display();
	

	
}
//copy constrctor final 
#include<iostream>
using namespace std;

class Complex
{
	int real;
	int imag;

public :
	/*Complex(Complex& temp)
	{

		this->real=temp.real;
		this->imag=temp.imag;
	}*/

	Complex()//default constructor
	{
		cout <<"\n default constructor";

		this->real=0;
		this->imag=0;
	}
	Complex(int r,int i)////parametrised constructor
	{
	cout <<"\n  parametrised constructor with two arguments";
		this->real=r;
		this->imag=i;
	}

	Complex(int a)//parametrised constructor
	{
		cout <<"\n  parametrised constructor with one arguments";
		this->real=a;
		this->imag=a;
	}
	void setReal(int r)
	{
		this->real=r;
	
	}
	void setImage(int i)
	{
		this->imag=i;
	
	}
	int getReal()
	{
		return this->real;
	}
	int getImage()
	{
		return this->imag;
	}

	void display()
	{
		cout << "\n"<< this->real<< " + "<< this->imag<<" i";
	}
	Complex::~Complex()
	{
	cout << "\nDestructor called";
	}
};//class Ends here


void main()
{
	Complex c2(10,20);
	c2.display();

	Complex c3=c2;
	c3.display();
}
//new delete final


#include<stdio.h>

void main()
{
	int n=3;

	int* ptr=NULL;

	
	printf("enter the number of integrs u wanna store");
	scanf("%d",&n);

	ptr=new int[n];
	printf ("enter %d values",n);
	for(int i=0;i<n;i++)
	{
		
	scanf("%d",&ptr[i]);
	}

	for(int i=0;i<n;i++)
	{
		printf ("\t%d",ptr[i]);
	
	}
	printf ("\n\n");
}

//friend demo final

#include<iostream>
using namespace std;

class Complex
{
	int real;
	int imag;

public :

	Complex()//default constructor
	{
		cout <<"\n default constructor";

		this->real=0;
		this->imag=0;
	}
	Complex(int r,int i)////parametrised constructor
	{
	cout <<"\n  parametrised constructor with two arguments";
		this->real=r;
		this->imag=i;
	}
	Complex(int a)//parametrised constructor
	{
		cout <<"\n  parametrised constructor with one arguments";
		this->real=a;
		this->imag=a;
	}
	void setReal(int r)
	{
		this->real=r;
	
	}
	void setImage(int i)
	{
		this->imag=i;
	
	}
	int getReal()
	{
		return this->real;
	}
	int getImage()
	{
		return this->imag;
	}

	void display()
	{
		cout << "\n"<< this->real<< " + "<< this->imag<<" i";
	}
	~Complex()
	{
		cout << "\nDestructor called";
	}
	friend Complex operator+(int ,Complex );
	friend ostream& operator<<(ostream& ,Complex );
};//class Ends here


void main()
{
	Complex c1(10,20);


	cout << c1;//operator<<(cout,c1).
	Complex c2(100,200);
	cout << c1<<c2;//operator<<(cout,c1)
	Complex c3;
	c3=10+c1;//operator(10,c1)

}//main neds here

ostream& operator<<(ostream& o,Complex c1)
{
	o << "\n"<< c1.real<< " + "<< c1.imag<<" i";
	return o;
}

Complex operator+(int a,Complex c1)
{
	Complex temp;
	temp.real=c1.real+a;
	temp.imag=c1.imag+a;

	return temp;
}

//inharitace final 3765
#include<iostream>
using namespace std;

class Employee
{
	int id;
	char name[20];
	double sal;
public:

	Employee()
	{
		cout <<"\nDefault constructor of Emp ";

		id=101;
		strcpy(this->name,"Not geiven");
		sal=1000.00;
	}
	Employee(int i,char* nm,double s)
	{
		cout <<"\n para constructor of Emp ";

		id=i;
		strcpy(this->name,nm);
		sal=s;
	}
	void setId(int a)
	{
		this->id=a;
	}
	void setName(char* name )
	{
		strcpy(this->name,name);
	}

	void setSal(double s)
	{
		this->sal=s;
	}

	char* getName()
	{
		return this->name;
	}
	int getId()
	{
		return this->id;
	}
	double getSal()
	{
		return this->sal;
	}
	void display()
	{
		cout <<"\n Name is : "<<name;
		cout <<"\n Id is :  "<< id;
		cout <<"\n salary is : "<<sal;

	}
};//class emp ends here

class SaleManager :public  Employee//1st step
{
	double incentive;
	int target;
public:

	SaleManager():Employee()//2nd step
	{
		cout <<"\nDefault constructor of SaleManager "; 
		incentive=-991;
		target=99;
	}
	SaleManager(int i,char* nm,double s,int t,double in)
		:Employee(i,nm,s)//2nd step
	{
		cout <<"\n paramet constructor of SaleManager "; 
		this->target=t;
			this->incentive=in;
	}
	void display()
	{
		Employee::display();//3rd step;
		cout <<"\n incentive is : "<<this->incentive;
		cout <<"\n target is : "<<this->target;
	}
	void setIncentive(double in)
	{
		this->incentive=in;
	}
	void setTarget(int t)
	{
		this->target=t;
	}
	int getTarget()
	{
		return this->target;
	}
	double getIncentive()
	{
		return this->incentive;
	}
};//class SalesManager ends here

class Admin :public Employee
{
	double allowance;

public:
	Admin():Employee()
	{
		this->allowance=10;
	}
	Admin(int myid,char* n,double mysal,double a)
		:Employee(myid,n,mysal)
	{
		this->allowance=a;
	}
	void setallowance(double al)
	{
		this->allowance=al;
	}
	double getallowance()
	{
		return this->allowance;
	}
	void display()
	{
		Employee::display();
		cout <<"\n allownace is : "<<this->allowance;
	}

};

void main()
{
	Employee e1;
	e1.display();
	cout <<"\n";
	Employee e2(101,"Sachin",2000);
	e2.display();
	cout <<"\n\n\n";

	SaleManager s1;
	s1.display();
	cout <<"\n";

	SaleManager s2(1911,"Virat",23000,788,666);
	s2.display();


	cout <<"\n\n\n";

	Admin a1;
	a1.display();
	cout <<"\n";
	Admin a2(1199,"Ashwin",12000,444);
	a2.display();
	cout <<"\n\n\n";
}
//malloc final
#include <stdio.h>
#include <stdlib.h>
void storeValues(int*  ,int );
void printValues(int * ,int);
void main()
{
	

	int * ptr;
	int n,i;
	
	printf("Enter the number of int u wann store");
	scanf("%d",&n);
	
	ptr=(int*)malloc(sizeof(int)*n);
	//allocations

	storeValues(ptr,n);
	printValues(ptr,n);
	printf("\n\n");
}
void storeValues(int* ptr ,int size)
{
	int i;
	printf("please Enter %d Values",size);
	for (i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
		//storage
	}
}

void printValues(int * ptr ,int size)
{
	int i;
	printf("the array values are:\n");
	for (i=0;i<size;i++)
	{
		printf("\n%d",ptr[i]);
		//accessing 
	}
}

//polymorphism

#include<iostream>
using namespace std;

class Employee
{
	int id;
	char name[20];
	double sal;
public:

	Employee()
	{
		

		id=101;
		strcpy(this->name,"Not geiven");
		sal=1000.00;
	}
	Employee(int i,char* nm,double s)
	{
		

		id=i;
		strcpy(this->name,nm);
		sal=s;
	}
	void setId(int a)
	{
		this->id=a;
	}
	void setName(char* name )
	{
		strcpy(this->name,name);
	}

	void setSal(double s)
	{
		this->sal=s;
	}

	char* getName()
	{
		return this->name;
	}
	int getId()
	{
		return this->id;
	}
	double getSal()
	{
		return this->sal;
	}
	virtual void display()
	{
		cout <<"\n Name is : "<<name;
		cout <<"\n Id is :  "<< id;
		cout <<"\n salary is : "<<sal;

	}
	virtual double calSal()
	{
		return sal;
	}
};//class emp ends here

class SaleManager :public  Employee//1st step
{
	double incentive;
	int target;
public:

	SaleManager():Employee()//2nd step
	{
		
		incentive=-991;
		target=99;
	}
	SaleManager(int i,char* nm,double s,int t,double in)
		:Employee(i,nm,s)//2nd step
	{
		
		this->target=t;
			this->incentive=in;
	}
	void display()
	{
		Employee::display();//3rd step;
		cout <<"\n incentive is : "<<this->incentive;
		cout <<"\n target is : "<<this->target;
	}
	void setIncentive(double in)
	{
		this->incentive=in;
	}
	void setTarget(int t)
	{
		this->target=t;
	}
	int getTarget()
	{
		return this->target;
	}
	double getIncentive()
	{
		return this->incentive;
	}
	double calSal()
	{
		return this->getSal()+incentive;
	}
};//class SalesManager ends here

class Admin :public Employee
{
	double allowance;

public:
	Admin():Employee()
	{
		this->allowance=10;
	}
	Admin(int myid,char* n,double mysal,double a)
		:Employee(myid,n,mysal)
	{
		this->allowance=a;
	}
	void setallowance(double al)
	{
		this->allowance=al;
	}
	double getallowance()
	{
		return this->allowance;
	}
	void display()
	{
		Employee::display();
		cout <<"\n allownace is : "<<this->allowance;
	}
	double calSal()
	{
		return this->getSal()+allowance;
	}
};//class Admin ends here

void main()
{
	Employee * ep;//Generic pointer 
	
	Employee e1(101,"Sachin",20999);//object of Employee
	ep=&e1;
	ep->display();
	cout << "\ncalculated salary of emp is :"<<ep->calSal();
	cout <<"\n\n ";
		
	SaleManager s1(109,"virat",3400,56,666);
	ep=&s1;
	ep->display();
	cout << "\ncalculated salary of salman is :"<<ep->calSal();
	cout <<"\n\n ";

		
	Admin a1(107,"Anil",3333,3400);
	ep=&a1;
	ep->display();
	cout << "calculated salary of admin is :"<<ep->calSal();

	cout <<"\n\n \n\n";

}



























