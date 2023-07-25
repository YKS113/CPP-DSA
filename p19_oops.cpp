/*
1. Object oriented programming-- A type/paradigm of programming, which revolves around objects rather than functions (like in functional programming).
2. Object-- It is an entity which has some state/property and some behaviour (collectively called data members)
E.g. In a mobile game there are two objects- Hero and Villan
Hero has properties like, name,health,level and behaviours like attack and defence
Villain has properties like, name,health,level and behaviours like attack and defence

Implementation--    Class- a user defined data type, serves as template for objects             Object- an instance of it's class  */
/*
#include<iostream>
using namespace std;
class Hero{
    //properties
    int health;
};  //; is imp in this syntax

int main()
{
    Hero h1; //object creation/declaration
    cout<<sizeof(h1)<<endl;
    //sizeof object data structure is equal to total of sizeof of all vars declared for that type of object i.e. inside it's class 
}*/
/*
#include<iostream>
using namespace std;
class Hero{
};
int main()
{
    Hero h1;
    cout<<sizeof(h1)<<endl;
    //gives 1 as op; when class is empty,compiler allocates 1 byte mem to it for identification and tracking purpose
}*/
/*
#include<iostream>
#include "Hero.cpp" //importing  file where class is declared, similar can be done in functional programming also, to import funcns/vars
using namespace std;
int main()
{
    Hero h1;
    cout<<sizeof(h1)<<endl;
}*/
/*
Access modifiers public,private,protected
public-- public data members can be accessed both inside the class and outside(in instances of that class)
*/
/*
#include<iostream>
using namespace std;
class Hero{
    public: //every data member below this declaration will become public
    int health;
    int level;

    private: //data member below this can be accessed only inside class declaration(for use in other data members) and not for objects(& if we try to do so it will give error)
    char name[10]= "abcd";

    void func(){ //note, it can be used directly inside func, because it has global scope inside class declaration
        cout<<"name is"<<level<<endl;
    }
};

int main()
{   
    Hero h1;
    h1.health=100; //dot operator is used to access data members
    h1.level=10;
    cout<<h1.health<<" "<<h1.level<<endl;
}*/
//NOTE- BY DEFAULT DAT MEMBERS ARE PRIVATE i.e. in initial examples, where we did not specify access type, they were automatically considered private

/*getters & setters- private properties can be accessed by objects with the help of some public functions, they are called getters and setters
*/
/*
#include<iostream>
using namespace std;
class Hero{
    int health;
    int level;

    public:
    int getHealth(){
        return health;
    }
    int setLevel(int a){
        level=a;
        return level;
    }
};
int main()
{
    Hero h1;
    cout<<h1.getHealth()<<endl; //will give garbge value
    cout<<h1.setLevel(50)<<endl;
}*/

/*
During creating an object i.e. at Hero h1; statement,a constructor is called by compiler i.e. h1.Hero() this statement is executed, it has no return type, its name is same as that of class name
It is automatically created during class creation,but if we want we can can also create one/many
When we create a constructor by ourselves, the defaultly created constructor is deleted and replaced by the one/many created by user
*/
/*#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    Hero(){        //note, no data type is defined before its declaration, since it doesnt return anything
        cout<<"Constructor called"<<endl;
    }
};
int main()
{
Hero h1;
}*/

//parameterized constucter
/*
#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    // Hero(int health){   //In this eg, both parameter and data member have same name, we use this keyword in such cases
    //     health=health;
    // }
    Hero(int health){
        this->health=health; //this has address of current object, hence, this.health is data member health of object say h1, and another health is input health from parameter

        cout<<"from constructor"<<this<<endl;
    }
};
int main()
{
Hero h1(10);
cout<< &h1<<endl;
}*/

//Copy constructor-- copies one objects data member values into another object
/*#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
};
int main()
{
    Hero h1(70,'C');
    Hero h2(h1);
    cout<<h2.health<<" "<<h2.level<<endl;
    }*/

//we can also write a copy constuctor

#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    Hero(Hero &temp){ //temp is by ref and not by value, if passed by value it will create copy ofobject which will call cpy constructor, which will again create cpy and so on this will create a hell loop
        this->health=temp.health;
        this->level=temp.level;
    }
};
int main()
{
    Hero h1(70,'C');
    Hero h2(h1);
    cout<<h2.health<<" "<<h2.level<<endl;
    }