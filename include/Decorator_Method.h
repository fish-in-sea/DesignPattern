#pragma once
#include "common.h"
using namespace std;

/**
 * @description: 
 * @param {基础的抽象类}
 * @return {*}
 */
class Comonent
{
public:
    Comonent(){};
    virtual void configuration()=0;
    virtual~Comonent(){};
};
class Car:public Comonent
{
public:
    Car(){};
    virtual ~Car(){};

    virtual void configuration()override{
        LOG(INFO)<<"Car"<<endl;
    };
};

class DecoratorCar:public Comonent{
    public:
    DecoratorCar(){}
    DecoratorCar(Comonent*_pCar):m_pCar(_pCar){};
    virtual void configuration()override{
        m_pCar->configuration();
        LOG(INFO) << "DecoratorCar"<<endl;
    };

    virtual ~DecoratorCar(){};
    private:
    Comonent*m_pCar;

};
class DecoratorLED:public DecoratorCar{
    public:
    DecoratorLED(Comonent*_pLED):DecoratorCar(_pLED){};
    virtual ~DecoratorLED(){};

    virtual void configuration(){
        DecoratorCar::configuration();
        LOG(INFO) << "DecoratorLED"<<endl;

    }
    private:
    void AddLED(){
        LOG(INFO) << "installing LED"<<endl;
    };

};
class DecoratorPC:public DecoratorCar{
    public:
    DecoratorPC(Comonent*_pPC):DecoratorCar(_pPC){};
    virtual ~DecoratorPC(){};

    virtual void configuration(){
        DecoratorCar::configuration();
        LOG(INFO) << "DecoratorPC"<<endl;
    }
    private:
    void AddPC(){
        LOG(INFO) << "DecoratorPC"<<endl;
    };

};

class DecoratorABS:public DecoratorCar{
    public:
    DecoratorABS(Comonent*_pABS):DecoratorCar(_pABS){};
    virtual ~DecoratorABS(){};

    virtual void configuration(){
        DecoratorCar::configuration();
        LOG(INFO) << "DecoratorABS"<<endl;
    }
    private:
    void AddABS(){
        LOG(INFO) << "DecoratorABS"<<endl;
    };

};


