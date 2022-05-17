#pragma once
#include <common.h>
class Singleton{
    private:
        Singleton() {};
        static Singleton *m_singleton;
    public:
    static Singleton *getInstance() { 
        if(m_singleton == NULL) m_singleton=new Singleton();
        return m_singleton;
    }

};