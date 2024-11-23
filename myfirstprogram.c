#include <stdio.h>

int main() {
 printf("Hello World\n");
 int myNum = 15;
 char myLetter = 'T';
 printf("%d\n", myNum);

 //Declare a variable
 int myNumu;

 //Assign a value to the variable
 myNumu = 30;
 printf("%d\n", myNumu);

 printf("My favorite number is: %d\n\n", myNum);

 printf("My number is: %d and my letter is: %c\n", myNum, myLetter);
 //Change Variable Values
 int mNun = 24; //mNun is 24
 mNun = 29; // mNun is now 29

 //Another way this can be implemented bellow
 int mmNum = 20;

 int mmotherNum = 39;
 // Assigning the value of mmothernum (39) to mmnum
 mmNum = mmotherNum;
 printf("%d\n", mmNum);

 //Create a variable and assign the value 15 to it
 int mjNum = 55;

 // Declare a variable without assigning it a value
 int mjotherNum;

 // Assign the value of myNum to myOtherNum
 mjotherNum = mjNum;
 printf("%d\n", mjotherNum);

 int x = 6;
 int y = 7;

 int sum = x + y;
 printf("%d\n", sum);

 //declaring multiple variables
 int b = 9, c = 4, d = 8;
 printf("%d\n", b + c +d);

 int n, m, l;
 n = m = l = 50;
 printf("%d\n", n + m + l);

 /* C Variables must be identified with unique names
 Those unique names are called identifiers
 Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).*/

 //A good variable name
 int minutesPerHour = 60;

 /*The general rules for naming variables are:
  Names can contain letters, digits and underscores
  Names must begin with a letter or an underscore (_)
  Names are case-sensitive (myVar and myvar are different variables)
  Names cannot contain whitespaces or special characters like !, #, %, etc.
  Reserved words (such as int) cannot be used as name*/

  //Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade ='B';

  //Print Variables
  printf("Student id: %d\n", studentID);
  printf("Student Age: %d\n", studentAge);
  printf("Student Fee: %f\n", studentFee);
  printf("Student Grade: %c\n", studentGrade);

  //Calculate the area of a Rectangle
  int length = 4;
  int width =6;
  int area;

  area = length * width;

  printf("Area of the rectangle is: %d\n", area);

  /* Data Type	Size	Description	Example
    int	2 or 4 bytes	Stores whole numbers, without decimals	1
    float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	1.99
    double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	1.99
    char	1 byte	Stores a single character/letter/number, or ASCII values	'A' */


  /* Format Specifier	Data Type	Try it
    %d or %i	int
    %f or %F	float
    %lf	double
    %c	char
    %s	Used for strings (text), which you will learn more about in a later */

    //C Character Data Types
    //The char data type is used to store a single character.
    //The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it

  char myGrade = 'A';
  printf("%c\n", myGrade);

  //Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters. Note that these values are not surrounded by quotes (''), as they are numbers

  char p = 64, q = 65, r = 66;
  printf("%c\n", p);
  printf("%c\n", q);
  printf("%c\n", r);

  //Notes on Characters
  //If you try to store more than a single character, it will only print the last character

  char myText ='Hello';
  printf("%c\n", myText);

  //To store multiple characters (or whole words), use strings

  char myTexts[] = "Hello";
  printf("%s\n", myTexts);

  //Numeric Types
  //Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.

  //int
  int myMun = 1000;
  printf("%d\n", myMun);

  // float
  float myhon = 5.75;
  printf("%f\n", myhon);

  //Double
  double myjon = 98.99;
  printf("%lf\n", myjon);

  /*float vs. double

    The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).

  */

  /*Scientific Numbers
  A floating point number can also be a scientific number with an "e" to indicate the power of 10:
  */
  float f1 = 35e3;
  double d1 = 12e4;

  printf("%f\n", f1);
  printf("%lf\n", d1);

  /*int g = 1;
  for (g <= 12){
    printf("%d\n", g);
    g * 4
  }*/

 return 0;
}
