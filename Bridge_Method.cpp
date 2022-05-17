#include <iostream>
#include <Bridge_Method.h>
#include <common.h>

/**
 * @description: 桥
 * 接模式：将抽象部分与实现部分分离，使它们都可以独立变换。
以下情形考虑使用桥接模式：
当一个对象有多个变化因素的时候，考虑依赖于抽象的实现，而不是具体的实现。
当多个变化因素在多个对象间共享时，考虑将这部分变化的部分抽象出来再聚合/合成进来。
当一个对象的多个变化因素可以动态变化的时候*
 * @param {int} argc
 * @param {char**} argv
 * @return {*}
 * 
 */

int main(int argc, char** argv){

    App *gameApp=new GameApp();
    App *translationApp=new Translation();
    MobliePhone *mobileXiaomiPhone=new XiaomiPhone();
    MobliePhone *mobileHuaweiPhone=new HuaweiPhone();
    
    mobileXiaomiPhone->runApp(gameApp);
    mobileHuaweiPhone->runApp(translationApp);

    return 0;
}