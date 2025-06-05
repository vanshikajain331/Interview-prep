#include <iostream>
using namespace std;

//1.Encapsulation(DATA HIDING):Wrapping up data and functions into a single
//unit & restricting direct access to some of obj's components
//Ensures data security by using access specifiers like private,we use getter & setter to control access
class Student{
  private:
     int age;
  public:
      void setAge(int a){
        if(a>0) age=a;
      }
      int getAge(){
        return age;
      }
};

//2.Abstraction(SHOWING ONLY ESSENTIAL DETAILS):Hiding complex implementation and showing only 
//relevant features to the user.
class Car {
    public:
        void startCar() {
            startEngine();
            cout << "Car Started\n";
        }
    
    private:
        void startEngine() {
            cout << "Engine Starting...\n";
        }
};

//3.Inheritance:One class inherits propertioes from another class
class Animal{
    public:
    void eat(){
        cout<<"Eating "<<endl;
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"Brking "<<endl;
    }
};

//4.Polymorphism:many forms;same function name can behave differently depending on the context
/*1. Compile-time Polymorphism
👉 Happens when the program is compiled
👉 Done using Method Overloading (same function name with different parameters)

2. Run-time Polymorphism
👉 Happens when the program is running
👉 Done using Method Overriding with virtual functions and inheritance*/
//Compile time polymorphosm
class Print{
    public:
    void show(int a){
        cout<<"Integer: "<<a<<endl;
    }
    void show(string s){
        cout<<"String: "<<s<<endl;
    }
};

//Run time polymorphism:Run-time polymorphism is achieved using method overriding with virtual functions and inheritance (same name and parameters, but different behavior)."
class Shape{
    public:
    virtual void draw(){
        cout<<"Drawing shape"<<endl;
    }
};
class circle: public Shape{
    public:
    void draw() override{
        cout<<"drawing Circle"<<endl;
    }
};


int main() {
  //1.Encapsulation
  /*Student s;
  s.setAge(21);
  cout<<"Age:" <<s.getAge()<<endl;*/


  //2.Abstraction
/*startcar is the only function accessible from outside the class.
It calls startEngine() (which is private) and then prints "Car Started
This function is hidden from the user. You cannot call it directly using the object.
You create a Car object: c

You call startCar() → this internally calls startEngine(), then prints a msg*/
  Car c;
  c.startCar();
  



  //3.Inheritance
  //d object bnaya class dog ka and class resuse the eat() method from  animal
  /*Dog d;
  d.eat();//eat
  d.bark();//bark*/


  //4.Polymorphism-compile time
  /*Print p;
  p.show(8);
  p.show("Vanshika");
  The function name show is the same
  But once takes an int, the other takes a string
  The compiler decides which one to call based on the arguments
  */

  //Runtime polymorphism:Run-time polymorphism is achieved using method overriding with virtual functions and inheritance (same name and parameters, but different behavior)."
    //Shape* s = new Circle(); // base class pointer → derived class object
    //s->draw();// Circle's draw() is called because draw() is virtual
    //delete s;// good practice to free memory
    
  

  return 0;
  
  
}