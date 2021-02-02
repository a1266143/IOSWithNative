//
//  wrapper.cpp
//  IOSWithNative
//
//  Created by Stork_lixiaojun on 2021/2/2.
//
#include <stdio.h>

extern "C"{
//---------------------从C语言中返回值-----------------------

//------------------基本类型---------------------
int getIntFromC(){
    return 123;
}

double getDoubleFromC(){
    return 0.31415999;
}

float getFloatFromC(){
    return 0.31415f;
}

char* getStringFromC(){
    char* name = new char[1024];
    sprintf(name,"c语言字符串:%s","8888");
    return name;
}

//-------------------引用类型---------------------
//TODO

//----------------------给C语言设置值------------------------
//---------------------设置基本类型-------------------
void setIntValue(int value){
    printf("c-setIntValue=%d\n",value);
}

void setDoubleValue(double value){
    printf("c-setDoubleValue=%f\n",value);
}

void setFloatValue(float value){
    printf("c-setFloatValue=%f\n",value);
}

void setStringValue(const char* value){
    printf("c-setStringValue:%s\n",value);
}
}
