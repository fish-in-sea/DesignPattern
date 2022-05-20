#pragma once
#include<common.h>

enum PieceColor{
    BLACK, RED
};
struct PiecePos{
    int x=0;int y=0;
    PiecePos(int _x,int _y) : x(_x),y(_y){};
};

class Piece{
    protected:
    PieceColor m_Color;
    public:
    Piece(PieceColor _Color):m_Color(_Color) {};
    virtual ~Piece(){};
    virtual void Draw()=0;
};
class PieceBlacked : public Piece{
    public:
    PieceBlacked(PieceColor _Color):Piece(_Color){};
    void Draw(){
       cout<<"blacked piece"<<endl;
    };
};
class PieceRed : public Piece{
    public:
    PieceRed(PieceColor _Color):Piece(_Color){};
    void Draw(){
       cout<<"Red piece"<<endl;
    };
};
class PieceBoard{
    private:
    vector<PiecePos>m_vecPos;
    Piece *m_BlackPiece;
    Piece *m_RedPiece;
    string m_RedPieceName;
    string m_BlackPieceName;
    public:
    PieceBoard(string black,string red):m_BlackPieceName(black) , m_RedPieceName(red){
        m_BlackPiece=nullptr;
        m_RedPiece=nullptr;
    }
    void SetPiece(PieceColor color, PiecePos pos){
        if(color==BLACK){
            if(m_BlackPiece==nullptr) m_BlackPiece=new PieceBlacked(color);
            cout<<m_BlackPieceName<<pos.x<<" "<<pos.y<<endl;
        }
        else{
            if(m_RedPiece==nullptr) m_RedPiece=new PieceRed(color);
            cout<<m_RedPieceName<<pos.x<<" "<<pos.y<<endl;
        }
    }





};