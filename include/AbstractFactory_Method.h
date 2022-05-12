#include<common.h>

struct ProductA{
    virtual void Show()=0;
};
struct ProductA1:public ProductA{
    virtual void Show(){
        LOG(INFO)<<"ProductA1"<<endl;
    }
};
struct ProductA2:public ProductA{
    virtual void Show(){
        LOG(INFO)<<"ProductA2"<<endl;
    }
};
struct ProductB{
    virtual void Show()=0;
};
struct ProductB1:public ProductB{
    virtual void Show(){
        LOG(INFO)<<"ProductB1"<<endl;
    }
};
struct ProductB2:public ProductB{
    virtual void Show(){
        LOG(INFO)<<"ProductB2"<<endl;
    }
};


struct Factory{
    virtual ProductA *CreateProductA()=0;
    virtual ProductB *CreateProductB()=0;
};

struct Factory1:public Factory{
    ProductA *CreateProductA(){
        return new ProductA1();
    }
    ProductB *CreateProductB(){
        return new ProductB1();
    }
};
struct Factory2:public Factory{
    ProductA *CreateProductA(){
        return new ProductA2();
    }
    ProductB *CreateProductB(){
        return new ProductB2();
    }
};