#include "Singleton_Method.h"

Singleton *Singleton::m_singleton=nullptr;

int main(int argc, char** argv){

    Singleton *p1=Singleton::getInstance();
    Singleton *p2=Singleton::getInstance();

    if(p1==p2){
        LOG(INFO)<<"p1==p2"<<endl;
    }else{
        LOG(INFO)<<"p1!=p2"<<endl;
    }
    return 0;
}