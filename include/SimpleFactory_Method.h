#pragma once
#include "common.h"

class Shape{
    public:
    virtual void showName()=0;
};
// 矩形
class Rect:public Shape{
    public:
    virtual void showName(){
         LOG(INFO)<<"Rect"<<endl;
    };
};
class Circle:public Shape{
    public:

    virtual void showName(){
        LOG(INFO)<<"Circle"<<endl;
    };
};
class shapeFactory{
    public:
    Shape *Creat(string name){
        if(name=="Rect") return new Rect();
        else return new Circle();
    }
};