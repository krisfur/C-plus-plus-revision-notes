//this is a comment
/*
this
is a multiline
comment
*/


//way to include libraries
#include <iostream>
#include <string>

//you cand use namespace std to not have to use std:: every time
//using namespace std
//this is considered bad practice if there are many libaries with the same command

/*basic setup
#include <iostream>
#include <string>

int main()
{
	
	return 0;
}
*/
int main() //all of the program happens in main
{
    std::cout << "Hello, World!" << std::endl; //use std::endl; to end a line
	std::cout << "Hello, World!\n"; //also gives a new line
	
	//you can use setw(int) to set the spacewidth of output
	
	//declaring variables
	int i;
	i=10;
	//or
	int i = 10;
	//or
	int i (10);
	bool really = 1; //0 for false, anything above 0 for true
	
	//input number
	std::cin >> i;
	std::cout << "number is " << i << std::endl;
	
	//inputting strings is a bit more complicated unfortunately
	std::string name;
	geline(std::cin, name);
	std::cout << name;
	//C++ has very weak in-built capabilities of working with strings - a language made for robots
	//fortunately libraries help you go around it like the <string> library
	
	
	//changing datatypes - it's really bad in C++
	//example of changing a string input into int using a library:
	//#include <sstream>
	string mystr ("1204");
	int myint;
	stringstream(mystr) >> myint
	//pain is real
	
	//casting from into to float and such is relatively easy
	int a;
	float b = a;
	//now you have a float b based on value from a
	
	//putting in ints and using them as floats
	int i;
	int j;
	float k = int(i)/j; //C++ style cast
	
	
	
	//maths
	//you will need the <cmath> library
	//if you want to use scientific constants make sure you define it:
	#define _USE_MATH_DEFINES
	#include <cmath>
	double a = 3;
	double b = 4;
	double z = 5;
	double c = a+b;
	double d = z*(a+b); //everything is as simple as you think
	
	b+=3 //changes b to a value b+3
	b-=3 // changes b to a value b-3
	a++ //adds one to a, but does it after thigs such as print
	++a //also adds one to a, but does it before things such as print

	
	//using advanced functions - need to call them from cmath
	double e = std::pow(a,2); //to use powers use pow(number, power)
	double f = std::sqrt(a); //square root is sqrt(number)
	double g = std::cos(30); //using a cosine, same for tan, atan etc.
	double h = std::exp(a); //exponential
	
	//constants
	//M_PI is pi
	//M_E is e
	//so you could use std::pow(M_E,2) instead of std::exp(2)
	//those constants are NOT always there. Newer compilers usually won't have them, in new MinGW you need the #define _USE_MATH_DEFINES statement to enable them
	
	
	
	
	//arrays
	
	//new array
	//structure is: datatype arrayName[number of thing in an array] = {items, in, the, array}
	
	double numbers[]={1,2.4,3.6,7.8};
	//not giving the array size makes an array just the size needed, you can declare an array without doing anything by using:
	//double numbers[];
	
	//you can change a single thing in an array like this:
	numbers[3]=4.5; //ofc we are counting from 0
	
	//accessing array elements:
	std::cout << numbers[3] << std::endl;
	//prints 4.5
	
	//declaring two-dimensional arrays
	//type name[number of rows][number of items in a row/colums];
	double 2dnumbers [][];
	
	//one line initialising:
	double results[2][3]={ {1,2,3}, {4,5,6} }
	
	//accessing items in 2d arrays:
	std::cout << resutls[1][2] << std::endl //prints 3rd element from 2nd row
	//output: 6
	
	
	
	
	//conditionals
	int i = 1;
	int j = 2;
	
	if (i==1) && (i==2)
	{
		std::cout << "Nice!" << std::endl;
	} else if (i>10) || (j<10)
	{
		std::cout << "Kinda" << std::endl;
	} else
	{
		std::cout << "Fail" << std::endl;
	}
	
	
	//loops
	
	//while loop - same as C#
	int i=1;
	while(i<=10) //can use a bool set to 1 or not increment in order to get an infinite loop
	{
		std::cout << i << std::endl;
		i++;
	}
	
	
	//do while - runs the code at least once, until while condition is met, then does other stuff
	int i;
	do 
	{
		std::cout << "Guess a number between 1 and 10: ";
		std:cin >> i
	} while (i==5); //semicolon at the end of the finish condition
	
	
	//for loop - for(initialization; condition to keep going; increase);
	for(int i=1; i<10; i++);
	{
		std::cout << i << std::endl;
	}
	//outputting into an array
	for (int i = 0; i < 10; ++i) 
	{
		r[i] = rand();
		std::cout << r[i] << std::endl; //prints newly updated array every pass
	}
	
	
	//for loop for running through a set of data - like for each loop in C# or for loop in Python
	string str {"Hello!"};
	for (char c : str) //runs the code once for every char in that string, works with arrays as well
	{
		std::cout << "[" << c << "]";
	}

	//switch statements - equivalent of an if statement but takes less space - needs breaks!
	int x = 1;
	switch (x) {
	case 1:
		std::cout << "x is 1";
		break; //you use break since otherwise the default case will still be executed - break makes it so it skips the default case
	case 2:
		std::cout << "x is 2";
		break;
	case 3:
	case 4:
		std::cout << "x is 3 or 4";
		break;
	default:
		std::cout << "value of x unknown";
	}
	
	//functions

	//you put them OUTSIDE of main!
	//put it before main or you will have to declare it before main - can still keep it under it, but need a declaration before
	
	//example of int function:
	int addition (int a, int b)
	{
		int r;
		r=a+b;
		return r;
	}
	//then in main call it like:
	z = addition(5,3);
	std::cout << z << std::endl;
	
	//function of no specific type uses type void
	void printmessage ()
	{
		cout << "I'm a function!";
	}
	//then call it in main
	printmessage();
	
	
	
	
	//classes
	
	//create the class OUTSIDE of main (just like methods - better before to not have to pre-declare it)
	class className
	{
		//properties public or private
		//public can be called from outside the class, private can't and are used for inside calculations and such
		std::string name;
		double length;
		int age;
	}
	//in main call it like this:
	className object1; //declare a new object called object1 based on class className
	className object2;
	
	//specify properties for object1
	object1.name = "John";
	object1.length=22.4;
	object1.age=13;
	
	//same for object 2
	object1.name = "Morgan";
	object1.length=28.9;
	object1.age=19;	
	
	//then you can easily call those properties
	std::cout << "Name of object 1 is: " << object1.name << std::endl;
	std::cout << "Sum of ages of object1 and object2" << object1.age+object2.age << std::endl;

	
	
	//inheritance
	class YourNewClass: public ClassYouWantToInherit
	{
		//put some new properties of this new class here
		//all properties of the inherited class will now also be properties of the new class (unless they are private!)
	}
	
	
	
	
	
	
	return 0;
}

