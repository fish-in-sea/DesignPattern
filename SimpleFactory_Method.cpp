#include <common.h>
#include <SimpleFactory_Method.h>

/**
 * @description: 简单工厂模式（Simple Factory Pattern）属于类的创新型模式，
 * 又叫静态工厂方法模式（Static FactoryMethod Pattern）,
 * 是通过专门定义一个类来负责创建其他类的实例，被创建的实例通常都具有共同的父类。
 * @param {*}
 * @return {*}
 */

int main(int argc, char** argv){

    LOG(WARNING) << "Sample factory"<<endl;

    shapeFactory*Factory=new shapeFactory();
    Factory->Creat("Rect");
    Shape*rect=Factory->Creat("Rect");
    rect->showName();

    return 0;
}