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
	
	
	
	
	//vectors
	//vectors are like arrays, but it's hard to change items inside, only the ones at the end
	//they protect you from errors of calling an item beyond the indexes in the list
	//vectors can contain both basic-types as well as user defined types (objects)
	#inluce<vector>
	vector<float> myVector; //declare with vector<type> name
	float f = myVector[2]; //gets 3rd item in vector
	float g = myvector.at(2); //also gets 3rd item in vector
	myVector.push_back(10.5); //adds 10.5 at the end of the vector
	int k = myVector.size(); //stores in k the size of the vector
	myVector.pop_back(); //remove last item
	myVector.resize(100); //sets the size to 100 filling with default values
	myVector.reserve(100); //reserves 100 memory spaces without inputting numbers
	myVector.capacity(); //tells you how much memory the vector has reserved
	myVector.clear(); //clears all items in the vector
	
	//iterating over a std::vector
	//for loop
	for(int i=0;i<myVector.size();++i)
	{
		//stuff
	}
	
	//iterator
	for(Iter it = myVector.begin(); it!=myVec.end(); ++it)
	{
		//stuff
	}
	
	//C++11 auto loop
	for(auto value : vec)
	{
		//stuff using value
	}
	
	
	
	
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
	
	
	
	
	//random number generation
	
	//uniform distribution
	#include <cstdlib>
	float min;
	float max;
	flaot rnd = min + (max-min) * (double)rand()/RAND_MAX; 
	//get a uniformly distributed random numbers between min and max
	
	//normal distribution - C++11
	#include <random>
	std::default_random_engine de(time(0)); //set seed
	std::normal_distribution<float> nd(70,10); //mean, standard deviation
	float random = nd(de);
	
	
	
	
	//pointers and references
	//references
	float x = 2;
	float &z = x;
	//z now also call data stored at address x, without making a copy - you just add a different name to call it by
	
	//pointers
	float *p = x; //pointer to float x - points to the address of the variable x, stored in hexadecimal format
	float y = *p; //dereferencing pointer p - gives you back the value stored at address of x, so value of x
	
	
	
	
	
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
	
	
	
	//defining functions in separate files
	//in order to put your functions in separate files you need a .cpp file which contains it AND a header .h file which declares it
	
	//inside the myFile.h file:
	#ifndef PROGRAMNAME_MYFILES_H
	#define PROGRAMNAMe_MYFILES_H
	void myFunction(variables); //ended with a semicolon ; yuo only declare that the function exist
	#endif //PROGRAMNAMe_MYFILES_H
	
	//then you need to include that header file in both your main.cpp AND your myFile.cpp
	
	//inside the myFile.cpp file:
	#include "myFile.h"
	void myFunction(variables)
	{
		//things that this method does
	}
	
	
	
	
	//"new" keyword
	//you can declare variables with the "new" keyword to store them in long-term memory/heap, when they're no longer needed remember to delete them
	float * yourFloat = new float;
	delete yourFloat;
	//if you don't delete it you will eventually cause a memeory leak which is VERY BAD!
	
	
	
	
	
	//stream states
	//when using a console I/O stream or a file I/O we deal with stream states
	//good - all went well, previous operation succeded, next one may proceed
	//fail - something went wrong, operations before this one may have been ok and might be readable, but this one is bad and no other ones can be good
	//bad - something went wrong, all is lost, nothing survived
	//eof - end of file, you have read the last item from a file
	
	#include <fstream> //to use file stream
	std::ifstream yourInputFile("C://filename.dat");
	std::ofstream yourOutputFile("C://filename2.dat");
	int i;
	while (!yourInputfile.eof) //as long as the file hasn't ended, run the loop
	{
		yourInputFile >> i; //store the read-out in variable i
		yourOutputFile << i << std::endl; //output the read-out into a file
	}
	
	
	
	
	
	
	
	//classes
	
	//create the class OUTSIDE of main (just like methods - better before to not have to pre-declare it)
	class myClass
	{
		public:
			myClass(float x =1/*default value*/) : x(x) {;} //a constructor, put in brackets things to initialise when class is called
			~myClass() {;} //a deconstructor, put in things to happen when class is no longer used, i.e. clear used memory
			int publicData; //some integer to be accessed by anyone
			int function() const; //some function belonging to the public parts of this class
		protected:
			int privateData; //some integer to be accessed only by this class and classess which inherit this class
		private:
			float x;
			int superPrivateData; //this is only available within this class
	};
	
	//a definition for the function inside this class:
	int myClass::function() const 
	{
		return privateData;
	}
	

	
	//you can put a class in a namespace to avoid calling multiple classes the same name
	Namespace MyNamespace
	{
		class myClass //...
	}
	//call it
	MyNamespace::myClass


	
	//you can create objects and access their properties using dot notation:
	myClass object1; //declare a new object called object1 based on class className
	myClass object2;
	object1.publicData = 3;
	int v = object1.function();
	
	//or using pointer notation:
	className * object3 = new className();
	int v = object3->function();
	
	//specify properties for object1
	object1.name = "John";
	object1.length=22.4;
	object1.age=13;
	
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

