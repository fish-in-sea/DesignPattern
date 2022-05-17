#pragma once

#include <common.h>
// 网线
class Adaptee{
    public:
    void specificRequest(){
        LOG(INFO) << "网线"<<endl;
    }
};
class Adapter{
    public:
    virtual void request()=0;
};
class AdapterUsb:public Adapter{
    public:
    AdapterUsb(Adaptee *_net):m_net(_net){};
    void request(){
        cout<<"适配器正在连接";
        m_net->specificRequest();

    };
    virtual ~AdapterUsb(){};
    private:
    Adaptee *m_net;
};


class ComputerUsb{
    public:
    ComputerUsb(Adapter *AdapterUsb):m_AdapterUsb(AdapterUsb)
    {
        cout<<"电脑插上转接口";
        m_AdapterUsb->request();
    };

    private:
    Adapter *m_AdapterUsb;


};