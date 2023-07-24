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
}