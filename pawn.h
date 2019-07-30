#ifndef _PAWN_H_
#define _PAWN_H_
#include <vector>
#include "piece.h"

class Pawn : public Piece {
    public:
    Pawn(bool isAlive, int x, int y, std::shared_ptr<Board> gameboard, char chesstype) : 
        Piece{isAlive, x, y, gameboard, chessType} {
            update_movelist();
            update_attacklist();
        }
    void update_movelist() override;
    void update_attacklist() override;
    bool blockCell(int r, int c) override;
};

#endif