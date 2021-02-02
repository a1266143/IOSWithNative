//
//  Person.hpp
//  IOSWithNative
//
//  Created by Stork_lixiaojun on 2021/2/2.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>
namespace lixiaojun{
class Person{
private:
    int mAge;
    std::string mName;
public:
    Person(int age,std::string name);//构造函数
    int getAge();
    std::string getName();
};

}

#endif /* Person_hpp */
