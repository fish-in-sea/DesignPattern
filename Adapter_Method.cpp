#include <common.h>
#include <Adapter_Method.h>
int main(int argc, char** argv){

    // 创建一个网线
    Adaptee *Net=new Adaptee();
    //创建一个适配器，并且网线端插在适配器上
    Adapter *Adapterusb=new AdapterUsb(Net);
    //电脑usb插上适配器
    ComputerUsb *computerUsb=new ComputerUsb(Adapterusb);
    return 0;
}