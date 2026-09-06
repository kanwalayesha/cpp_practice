/* ->
#include<iostream>
Stream: A stream is a sequence or flow of data between a program and a source or destination.
Diamond problem
Imagine we have a parent class called ios. It has two children: istream and ostream. istream is used for input, like cin, and ostream is used for output, like cout. Now imagine we make another class called iostream that has both istream and ostream as parents. The problem is that both parents already have the same parent, ios. So iostream may receive two copies of ios, one through istream and one through ostream. This is like a child getting the same grandparent through two different parents. We don't want two copies of the same grandparent, so C++ uses virtual inheritance. Virtual inheritance tells C++: "Keep only one shared copy of the common parent." That's why we write virtual when istream and ostream inherit from ios.

           
        ios
       /   \
  istream ostream
       \   /
      iostream

Without virtual:
       ↓
   TWO ios copies
       ↓
    Ambiguity

With virtual:
       ↓
   ONE ios copy
       ↓
     Problem solved



class ios {};

class istream : virtual public ios {};

class ostream : virtual public ios {};

class iostream : public ostream, public istream {};
*/ 

#include<iostream> //used for input and output objects cin and cout
using namespace std; //means we can use name for objects and variables from standard library
class ios1{
public:
    int x;
};

//class istream : public ios {};
//class ostream : public ios {};
class istream1 :virtual public ios1 {};
class ostream1 :virtual public ios1 {};


class iostream1 : public istream1, public ostream1 {};

int main() {
    iostream1 obj;

    // obj.x = 10;  // ERROR: ambiguous
   obj.x = 10;  //NO ERROR: ambiguous
   cout<<"Value of x: "<<obj.x<<endl;
return 0;     

}