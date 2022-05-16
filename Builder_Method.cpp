#include <common.h>
#include <Builder_Method.h>

int main(int argc, char** argv){

    LOG(INFO) << "Builder_Method"<<endl;
    Director *director = new Director();
    HouseAbstractBuilder*builder; 
    if(false) builder= new GoodsHouseConcreateBuilder();
    else     builder= new VillasHouseConcreateBuilder();
    director->DirectorHouse(builder);
    house product =builder->getHouse();
    product.ShowComponentsName();

    return 0;
}