#pragma once
#include <iostream>
#include <list>
#include <memory>
#include <string>
#include <algorithm>
using namespace std;

// class View;

// 观察者
// 观察者必须有更新函数
class View{
    public:
    virtual ~View(){};
    View(){};
    public:
    virtual void update()=0;
    virtual void setViewName(const string& name){};
    virtual const string &name()=0;
};
class TableView : public View{
    public:
    TableView():m_name("unknown"){};
    TableView(const string &name):m_name(name){};
    virtual ~TableView(){};
    public:
    virtual void update(){
        cout << "update data:"<<m_name << endl;
    };
    virtual void setViewName(const string& name){
        m_name=name;
    };
    virtual const string& name(){
        return m_name;
    };
    private:
    string m_name;



};
// 被观察者
// 必须有添加，删除，通知监听者的功能
class DataModel{
    public:
    DataModel(){};
    virtual ~DataModel(){};

    public:
    virtual void addView(View* view)=0;//添加监听者
    virtual void removeView(View* view)=0;//移除监听者
    virtual void notify()=0;//通知监听者
};
class IntData:public DataModel{
    public:
    IntData(){};
    virtual ~IntData(){};
    public:
    virtual void addView(View* view) override {
        shared_ptr<View> tmp(view);
        auto iter=find(m_pViewList.begin(),m_pViewList.end(),tmp);
        if(iter!=m_pViewList.end()){
            m_pViewList.push_front(tmp);
        }
        else{
            cout<<"ViewList is empty for tmp!"<<endl;
        }
    };
    virtual void removeView(View*view){
        auto iter=m_pViewList.begin();
        for(;iter!=m_pViewList.end();++iter){
            if((*iter).get()==view){
                m_pViewList.erase(iter);
                cout << "erase "<< (*iter).get()->name()<<endl;
                return;
            }
        }
    };
    virtual void notify(){
        auto iter=m_pViewList.begin();
        for(;iter!=m_pViewList.end();++iter){
            (*iter).get()->update();
        }
        cout << "notify finished" << endl;
    }

    private:
    list<shared_ptr<View>> m_pViewList;
};
// 