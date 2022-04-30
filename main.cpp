#include <cstring>
#include <iostream>
#include "add.h"
#include "sub.h"




int main()
{
 double num1, num2;
 double result;
 char word[128];
 strcpy(word,"hello");
 std::cout<<"Write two numbers to add and substruct:";
 std::cin>>num1>>num2;
 result=Add(num1, num2);
 std::cout<<num1<<"+"<<num2<<"="<<result<<std::endl;
 result=Sub(num1, num2);
 std::cout<<num1<<"-"<<num2<<"="<<result<<std::endl;


 return 0;
}
