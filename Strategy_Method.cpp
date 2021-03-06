#include <iostream>
#include "Strategy_Method.h"
using namespace std;
/**
 * @description: 
 * @param {int} argc
 * @param {在现实生活中，策略模式的例子也非常常见，
 * 例如，中国的所得税，分为企业所得税、外商投资企业或外商企业所得税和个人所得税，
 * 针对于这3种所得税，针对每种，所计算的方式不同，个人所得税有个人所得税的计算方式
 * ，而企业所得税有其对应计算方式。如果不采用策略模式来实现这样一个需求的话，
 * 可能我们会定义一个所得税类，该类有一个属性来标识所得税的类型，
 * 并且有一个计算税收的CalculateTax()方法，在该方法体内需要对税收类型进行判断，通过if-else语句来针对不同的税收类型来计算其所得税。这样的实现确实可以解决这个场景吗，但是这样的设计不利于扩展，如果系统后期需要增加一种所得税时，此时不得不回去修改CalculateTax方法来多添加一个判断语句，这样明白违背了“开放——封闭”原则。} *
 * @return {*}
 */
// 策略者模式
int main(int argc, char **argv){

    // 创建一个带有物理伤害的展示
    Soldier*Arxi=new Soldier(new ADCHurt());
    Arxi->attack();
    delete Arxi;
    return 0;
}

