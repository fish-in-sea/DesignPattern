#include<Flyweight_Method.hpp>

int main(int argc, char** argv){

    LOG(INFO) << "FLYweight Method"<<endl;
    PieceBoard pieceBoard("A", "B");
    
    pieceBoard.SetPiece(BLACK,PiecePos(4,5));
    pieceBoard.SetPiece(RED,PiecePos(8,5));
    return 0;
}
