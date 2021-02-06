#include <iostream>
#include <fstream>
#include "FileStuff.h"

using namespace std;



void myFunction(string* pointer){
    cout << "\nmyFunction: \n" << pointer;
}

class Person{
private:
    string name;
    string gender;
    int age = 0;

public:
    Person(string x, string y, int z){
        name = x;
        gender = y;
        age = z;
    }
    Person() = default;

    const string &getName() const {
        return name;
    }

    void setName(const string &name1) {
        Person::name = name1;
    }

    const string &getGender() const {
        return gender;
    }

    void setGender(const string &gender1) {
        Person::gender = gender1;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age1) {
        Person::age = age1;
    }
};

class Child : public Person{
public:
    Child() : Person() {

    }

    string name;

    void setName1(const string &name1) {
        Child::name = name1;
    }

    const string &getName1() const {
        return name;
    }
};

int main() {
    FileStuff fileStuff;

    fileStuff.createFile();

    fileStuff.readFile("myFile.txt") ;
    cout << endl << "Hello, World!\n";
    cout << "C++ beginner stuff\n\n";

    //string er ikke med stort s som i java
    //int, double, char er som i java
    //boolean hedder bool i c++
    //println hedder cout i c++
    //alle operators (+-*/%) fungerer som i java\n"
    //final keyword i java hedder const i c++
    //cout << er output, cin >> er input, det svarer til system.in i java

    string food = "pizza";
    string &meal = food;
    string* ptr = &food;
    cout << &meal << endl;
    cout << &food << endl;
    cout << *ptr << endl;

    *ptr = "burger";
    cout << *ptr;

    myFunction(ptr);

    Person person1("\nMagnus", "Male", 23);
    cout << person1.getName() << ", " << person1.getGender() << ", " << person1.getAge();

    Child childObj;
    childObj.setName("\nAsger");
    cout << childObj.getName();

    //Lommeregner
    int x,y, sum;
    cout << "\nindtast tal";
    cin >> x;
    cout << "indtast et til tal";
    cin >> y;
    sum = x+y;
    cout << sum;
    return 0;
}




