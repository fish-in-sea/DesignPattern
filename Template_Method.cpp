#include <iostream>
#include "Template_Method.h"
using namespace std;

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

