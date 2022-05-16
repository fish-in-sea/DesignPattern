#pragma once
#include <common.h>
#include <list>
#include <string>
// #pragma region 
// 产品应该包含多个部件

class house{
    public:
    void Select(string ComponentsName){
        m_ListComponents.push_back(ComponentsName);
    }
    void ShowComponentsName(){
        LOG(INFO)<<"产品的部件如下："<<endl;
        for(auto iter=m_ListComponents.begin(); iter!=m_ListComponents.end();++iter){
            LOG(INFO)<<*iter<<endl;
        }
    }
   
    private:
    list<string>m_ListComponents;
    

};
// 
class HouseAbstractBuilder{
    public:
    // 
    virtual void Buildwalls()=0;
    virtual void BuildBasics()=0;
    virtual void Buildroof()=0;

    virtual house getHouse()=0;
    
};
class GoodsHouseConcreateBuilder :public HouseAbstractBuilder{

    private:
    house m_house;
    public:
    void Buildwalls() override{
        m_house.Select("商品房的墙");
    }
    void Buildroof() override{
        m_house.Select("商品房的屋顶");
    }
    void BuildBasics() override{
        m_house.Select("商品房的地基");
    }
    house getHouse(){
        return m_house;
    }

};
class VillasHouseConcreateBuilder :public HouseAbstractBuilder{
    private:
    house m_house;
    public:
    void Buildwalls() override{
        m_house.Select("别墅的墙");
    }
    void Buildroof() override{
        m_house.Select("别墅的屋顶");
    }
    void BuildBasics() override{
        m_house.Select("别墅的地基");
    }
    house getHouse(){
        return m_house;
    }

};
class Director{
    public:
    void DirectorHouse(HouseAbstractBuilder* builder){
        builder->BuildBasics();
        builder->Buildwalls();
        builder->Buildroof();
    };
};

