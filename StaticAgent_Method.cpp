#include "StaticAgent_Method.h"


int main(int argc, char** argv){

    LOG(INFO)<<"Starting static agent"<<endl;
    // 房东的需求
    HostSubject *hosthouser=new HostSubject();
    ProxySubject *proxyhouser=new ProxySubject(hosthouser);
    Client *client=new Client(proxyhouser);
    client->Request();
    return 0;

}
