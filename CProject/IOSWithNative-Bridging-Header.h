//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

//---------------------从C语言中返回值-----------------------

//------------------基本类型---------------------
int getIntFromC();

double getDoubleFromC();

float getFloatFromC();

char* getStringFromC();

//-------------------引用类型---------------------
//TODO

//----------------------给C语言设置值------------------------
//---------------------设置基本类型-------------------
void setIntValue(int value);

void setDoubleValue(double value);

void setFloatValue(float value);

void setStringValue(const char* value);
