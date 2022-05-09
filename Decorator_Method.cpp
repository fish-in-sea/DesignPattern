
/**
 * @description: 
 * @param {装饰者模式，主要的作用解决类的继承太多的问题
 * https://blog.csdn.net/weixin_46168350/article/details/111054323#:~:text=%E5%AE%9A%E4%B9%89,%E8%A3%85%E9%A5%B0%E8%80%85%E6%A8%A1%E5%BC%8F%20%EF%BC%9A%E5%9C%A8%E4%B8%8D%E6%94%B9%E5%8F%98%E5%8E%9F%E7%B1%BB%E6%96%87%E4%BB%B6%E4%BB%A5%E5%8F%8A%E4%B8%8D%E4%BD%BF%E7%94%A8%E7%BB%A7%E6%89%BF%E7%9A%84%E6%83%85%E5%86%B5%E4%B8%8B%EF%BC%8C%E5%8A%A8%E6%80%81%E5%9C%B0%E5%B0%86%E8%B4%A3%E4%BB%BB%E9%99%84%E5%8A%A0%E5%88%B0%E5%AF%B9%E8%B1%A1%E4%B8%8A%EF%BC%8C%E4%BB%8E%E8%80%8C%E5%AE%9E%E7%8E%B0%E5%8A%A8%E6%80%81%E6%8B%93%E5%B1%95%E4%B8%80%E4%B8%AA%E5%AF%B9%E8%B1%A1%E7%9A%84%E5%8A%9F%E8%83%BD%E3%80%82
 * 1.实现一个抽象类--抽象类具体化 比如本文的车
 * 2.实现一个装饰类--抽象的装饰
 * }
 * @return {*}
 */
#include<iostream>
#include<Decorator_Method.h>
#include<glog/logging.h>

using namespace std;

int main(int argc, char **argv){
    LOG(INFO)<<"Running"<<endl;
    Car *car=new Car();
    DecoratorLED *LEDCar=new DecoratorLED(car);
    DecoratorPC *PCCar=new DecoratorPC(LEDCar);
    DecoratorABS *ABS=new DecoratorABS(PCCar);

    ABS->configuration();
    


    return 0;
}
