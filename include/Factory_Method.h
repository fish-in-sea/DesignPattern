#include <common.h>


class Product{
    public:
    virtual void show()=0;
};
class ProductA:public Product{
    public:
    virtual void show(){
        LOG(INFO)<<"Product A"<<endl;
    };
};
class ProductB:public Product{
    public:
    virtual void show(){
        LOG(INFO)<<"Product B"<<endl;
    };
};
class Factory{
    public:
    virtual Product* CreateProduct()=0;
};
class FactoryA:public Factory{
    public:
    Product *CreateProduct(){
        return new ProductA();
    }
};
class FactoryB:public Factory{
    public:
    Product *CreateProduct(){
        return new ProductB();
    }
};
