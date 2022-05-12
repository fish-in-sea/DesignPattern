#include<common.h>
#include<Factory_Method.h>

/**
 * @description: 工厂方法模式，又称工厂模式、多态工厂模式和虚拟构造器模式，
 * 通过定义工厂父类负责定义创建对象的公共接口，
 * 而子类则负责生成具体的对象。
 * @param {int} argc
 * @param {char**} argv
 * @return {*}
 */
int main(int argc, char** argv){
    LOG(INFO)<<"Running FactoryMethod"<<endl;
    Factory *factoryA=new FactoryA();
    Product *productA=factoryA->CreateProduct();
    productA->show();

    Factory *factoryb=new FactoryB();
    Product *productb=factoryb->CreateProduct();
    productb->show();

    return 0;
}