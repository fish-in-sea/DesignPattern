#pragma once
#include<iostream>
using namespace std;
class Library{
    public:
        Library(){};
       
        void run(){
            step1();
            step2();
            step3();
            step4();
        }
        virtual ~Library(){};

        protected:
        inline void step1(){
            cout<<"Library step1"<<endl;
        };
        virtual void step2(){
            cout<<"Library step2"<<endl;
        };
        inline void step3(){
            cout<<"Library step3"<<endl;
        };
        virtual void step4(){
            cout<<"Library step4"<<endl;
        };
};
class Application:public Library{
    public:
        Application(){};

        virtual void step2(){
            cout<<"Application step2"<<endl;
        };

        virtual void step4(){
            cout<<"Application step4"<<endl;
        };
        virtual ~Application(){};
};