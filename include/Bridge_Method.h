#pragma once
#include <common.h>

class App{
    public:
    App(){};
    virtual ~App() {};
    virtual void run() = 0;
};
class GameApp : public App{
    public:
    void run() {
        cout<<"Game app"<<endl;
    }
};
class Translation : public App{
    public:
    void run() {
        cout<<"Translation app"<<endl;
    }
};
class MobliePhone {
    public:
    virtual ~MobliePhone() {};
    MobliePhone(){};
    virtual void runApp(App*) = 0;
};
class XiaomiPhone: public MobliePhone {
    void runApp(App*app) {
        cout<<"Xiaomi"<<endl;
        app->run();
    };
};
class HuaweiPhone: public MobliePhone {
    void runApp(App*app) {
        cout<<"HuaweiPhone"<<endl;
        app->run();
    }
};
