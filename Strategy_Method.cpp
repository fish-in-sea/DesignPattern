#include <iostream>
#include "Strategy_Method.h"
using namespace std;

// 策略者模式
int main(int argc, char **argv){

    // 创建一个带有物理伤害的展示
    Soldier*Arxi=new Soldier(new ADCHurt());
    Arxi->attack();
    delete Arxi;
    return 0;
}

