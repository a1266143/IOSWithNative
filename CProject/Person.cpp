//
//  Person.cpp
//  IOSWithNative
//
//  Created by Stork_lixiaojun on 2021/2/2.
//

#include "Person.hpp"
int lixiaojun::Person::getAge() {
    return mAge;
}

std::string lixiaojun::Person::getName(){
    return mName;
}
lixiaojun::Person::Person(int age, std::string name){
    this->mAge = age;
    this->mName = name;
}

