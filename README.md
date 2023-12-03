# cwiczeniaLAB1
C++ program using Classes and Inheritance 

The task given -> English translation

Add a class named Student inheriting from the Person class, containing:
• private attribute: index – of type string;
• a constructor initializing the components of the Student class using the parameterized 
constructor of the base class. The constructor should display information identifying 
from which class the constructor originates;
• a method setIndex(string newIndex) – sets the value of the index field based on the 
passed parameter;
• a method getIndex() – returns the value of the index field;
• a method showInfoStudent() – displays information about the student.
In the main.cpp file, create:
• a static array of static objects of the Student class,
• a dynamic array of static objects of the Student class,
• a static array of dynamic objects of the Student class,
• a dynamic array of dynamic objects of the Student class.
Hint: To initialize data after creating an object, you can use the init method from the 
Person class and then the setIndex method from the Student class.

Task 1.2. Animals
Create a class Animal, containing the following elements:
• private attributes:
  o limbNr – number of limbs,
  o name – name of the animal,
  o protectedAnimal – boolean type, indicating whether the animal is protected;
• a parameterless constructor;
• a parameterized constructor setting all class components, with the parameter for the 
protected attribute having a default value of true;
• add setters for the fields to allow setting the field value with the passed argument 
and getters returning the values of the fields. Name the methods according to the 
following scheme: getAttributeName or setAttributeName;
• a method giveVoice() – displays the string "Chrum, miau, hau, piiiii" on the console;
• a method info() – displays the component data on the console.
Create a class Dog that publicly inherits from the Animal class, containing the 
following elements:
• private attributes:
  o breed – dog breed,
  o levelOfGuideSkills – level of guide skills, an integer in the range <1,10>,
  o levelOfTrackerSkills – level of tracker skills, an integer in the range <1,10>;
• a constructor initializing all components of the Dog class;
• a constructor initializing only the components of the Animal class;
• a parameterless constructor;
• a method setSkillLevel(int type, int value) – sets the level of the selected skill based 
on the provided skill type and its value. The first parameter specifies which skill is 
being set, the second – what the skill value is;
• a method getSkillLevel(int type)– returns the level of the skill whose type is 
provided as an argument. If the level is not set, the method should return 0;
• a method giveVoice() overriding the method from the base class to display 
"Hau, hau" on the console;
• a method info() overriding the method from the base class to display full 
information about the Dog class object.
Create a class Cat inheriting from the Animal class, containing the following elements:
• private attributes:
  o levelOfMouseHunting – level of mouse hunting skills, an integer in the range <1,10>,
  o mice[5] – array storing the number of mice caught over 5 years, divided by years;
• a constructor initializing only the components of the Animal class;
• a parameterless constructor;
• a method initMice, allowing the initialization of the mice array with values;
• a method initCat, allowing the initialization of all components of the Cat class.
• a method setLevelOfMouseHunting(int value) – sets the level of mouse hunting skills;
• a method getLevelOfMouseHunting() – returns the level of mouse hunting skills. If 
the level is not set, it should return 0.
• a method getMice(int index) – returns the number of mice caught in a given year. 
The index is an integer value in the range <1,5>;
• a method giveVoice() overriding the method from the base class to display 
"Miau miau" on the console;
• a method info() overriding the method from the base class to display full 
information about the Cat class object.

Implement the following functions:
• howManyProtectedAnimals, taking an array of Animal class objects and its size as 
arguments. The function should count how many animals are protected and return 
the result;
• howManyTrackerDogs, taking an array of Dog class objects and its size as 
arguments. The function should display all dogs whose tracker level is greater than 
the guide level.
• howManyCats, taking an array of Cat class objects and its size as arguments. The 
function should count, for each cat, the number of mice caught over 5 years and 
display it on the console.
In the main function, test the functionality of the above classes and functions.
