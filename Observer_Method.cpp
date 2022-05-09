#include <iostream>
#include "Observer_Method.h"
using namespace std;

// 观察者模式
/**
 * @description: 
 * @param {int} argc
 * @param {一个对象的状态发生改变时，
 * 所有依赖于它的对象都得到通知并被自动更新。
 * 如微博中一个明星发了一个消息，所有关注的用户都会看到这条消息。
 * @return {*}
 */
int main(int argc, char **argv){

    View *view1 = new TableView("TableView1");
    View *view2 = new TableView("TableView2");
    View *view3 = new TableView("TableView3");
    View *view4 = new TableView("TableView4");
    
    DataModel *model = new IntData();
    model->addView(view1);
    model->addView(view2);
    model->addView(view3);
    model->addView(view4);

    model->notify();
    cout << "-------------\n" << endl;
    model->removeView(view1);
    model->notify();

}
