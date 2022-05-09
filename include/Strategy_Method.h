#pragma once
#include<iostream>
using namespace std;
////
// 创建一伤害
class Hurt{
    public:
    virtual double blood()=0;
}; 
// 两种算法1
class ADCHurt:public Hurt{
    public:
    virtual double blood() override{
        cout << "ADCHurt"<<endl;
        return 1;
    };
};
// 2
class APCHurt:public Hurt{
    public:
    virtual double blood() override{
        cout << "APCHurt"<<endl;
        return 2;
    };
};
// 创建一个角色
class Soldier{
    public:
    Soldier(Hurt*hurt):m_hurt(hurt){

    }
    void attack() {
        m_hurt->blood();
    }

    private:
    Hurt *m_hurt;
};