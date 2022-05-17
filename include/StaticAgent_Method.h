#pragma once
#include <common.h>

class Subject{
    public:
    virtual void request()=0;
};

class ProxySubject:public Subject{
    private:
    void BeforeRequest(){
        LOG(INFO)<<"BeforeRequest need fees"<<std::endl;

    };
    void AfterRequest(){
        LOG(INFO)<<"BeforeRequest need thanks"<<std::endl;
    };
    Subject*m_subject;
    public:

    ProxySubject(Subject*subject):m_subject(subject){};

    void request(){
        LOG(INFO)<<"ProxySubject rents a house"<<std::endl;
        m_subject->request();
    }

};
class HostSubject:public Subject{
   
    public:
    HostSubject(){};
    ~HostSubject(){};

    void request(){
        LOG(INFO)<<"HostSubject rents a house"<<std::endl;
    }

};
class Client{
    private:
    Subject*m_subject;
    public:
    Client(Subject*subject):m_subject(subject){};

    void Request(){
        m_subject->request();
        LOG(INFO)<<"我租到房子了"<<std::endl;
    }
    
};
