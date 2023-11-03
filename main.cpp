#include <iostream>
#include "registry.h"



int main(){
    Registry<int, int> reg1;
    std::cout << "Step1\n";
    reg1.add(1, 10);
    reg1.add(25, 48);
    reg1.add(1, 48);
    reg1.print();

    std::cout << "Step2\n";
    reg1.remove(1);
    reg1.print();


    Registry<std::string, int> reg2;
    std::cout << "Step3\n";
    reg2.add("banana", 10);
    reg2.add("apple", 5);
    reg2.add("banana", 47);
    reg2.print();

    std::cout << "Step4\n";
    reg2.find("banana");
    std::cout << "Step5\n";
    reg2.find("potato");
}