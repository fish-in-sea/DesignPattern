#include <iostream>
#include "Template_Method.h"
using namespace std;
/**
 * @description: 
 * @param {模板方法（Template Method）模式的定义如下：定义一个操作中的算法骨架，
 * 而将算法的一些步骤延迟到子类中，
 * 使得子类可以不改变该算法结构的情况下重定义该算法的某些特定步骤。
 * 它是一种类行为型模式。}
 * @return {*}
 */
// 模板方法
int main(int argc, char **argv){

    cout<<"Running "<< endl;
    #if true
    Library *lib = new Application;
    lib->run();
    delete lib;
    #endif
    #if false
    Library *lib = new Library;
    lib->run();
    delete lib;
    #endif


    return 0;
}

