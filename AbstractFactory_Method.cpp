#include "common.h"
#include <AbstractFactory_Method.h>

/**
 * @description: 
 * 抽象工厂模式是工厂方法模式的升级版本，
 * 工厂方法模式只生产一个等级的产品，而抽象工厂模式可生产多个等级的产品。
 * @param {int} argc
 * @param {char} *
 * @return {*}
 */
int main(int argc, char **argv){
    LOG(INFO) << "Running AbstactFactory::Create"<<endl;
    Factory *factory1=new Factory1();
    ProductA *productA1=factory1->CreateProductA();
    productA1->Show();
    ProductB *productB1=factory1->CreateProductB();
    productB1->Show();

    Factory *factory2=new Factory2();
    ProductA *productA2=factory2->CreateProductA();
    productA2->Show();
    ProductB *productB2=factory2->CreateProductB();
    productB2->Show();



    return  0;
}