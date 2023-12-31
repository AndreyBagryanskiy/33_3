#pragma once
#include <vector>
#include <iostream>

template<typename T1, typename T2>
struct Rpair{
public:
    T1 first;
    T2 second;

    Rpair(T1 inFirst, T2 inSecond): first(inFirst), second(inSecond){};
    Rpair(){};
};

template<typename T1, typename T2>
class Registry{
public:
    void add(T1 inFirst, T2 inSecond);
    void remove(T1 inKey);
    void print();
    void find(T1 inKey);
private:
    std::vector<Rpair<T1, T2>> reg;
};

template<typename T1, typename T2>
void Registry<T1, T2>::add(T1 inFirst, T2 inSecond){
    Rpair<T1, T2>* rpair = new Rpair(inFirst, inSecond);
    this->reg.push_back(*rpair);
    delete rpair;
}

template<typename T1, typename T2>
void Registry<T1, T2>::remove(T1 inKey){
    for(auto it = reg.begin(); it != reg.end();){
        if (it->first == inKey){
            it = reg.erase(it);
        }
        else
        {
            ++it;
        }
    }
}

template<typename T1, typename T2>
void Registry<T1, T2>::print(){
    if(reg.empty()){
        std::cout << "The registry is empty!" <<std::endl;
    }else{
        for(int i = 0; i < reg.size(); ++i){
            std::cout << reg[i].first << " " << reg[i].second << std::endl;
        }
    }
}

template<typename T1, typename T2>
void Registry<T1, T2>::find(T1 inKey){
    int count =0;  
    for(auto it = reg.begin(); it != reg.end(); ++it){
        if (it->first == inKey){
           std::cout << it->second << " ";
           ++count;
        }
    }
    if(count == 0) std::cout << "Key is not found!";
    std::cout << std::endl;    
}

