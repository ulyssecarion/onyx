#ifndef MOVE_H
#define MOVE_H

#include <stdbool.h>

typedef int Move;

#define MOVE_NO_PIECE 0
#define MOVE_WHITE_PAWN 1
#define MOVE_BLACK_PAWN 2
#define MOVE_WHITE_KNIGHT 3
#define MOVE_BLACK_KNIGHT 4
#define MOVE_WHITE_BISHOP 5
#define MOVE_BLACK_BISHOP 6
#define MOVE_WHITE_ROOK 7
#define MOVE_BLACK_ROOK 8
#define MOVE_WHITE_QUEEN 9
#define MOVE_BLACK_QUEEN 10
#define MOVE_WHITE_KING 11
#define MOVE_BLACK_KING 12

#define MOVE_FLAG_NO_FLAG 0
#define MOVE_FLAG_OO 1
#define MOVE_FLAG_OOO 2
#define MOVE_FLAG_EP 3
#define MOVE_FLAG_PROMO_KNIGHT 4
#define MOVE_FLAG_PROMO_BISHOP 5
#define MOVE_FLAG_PROMO_ROOK 6
#define MOVE_FLAG_PROMO_QUEEN 7

Move new_move(char, char, char, char, char);
char get_from(Move);
char get_to(Move);
char get_piece(Move);
char get_capture(Move);
char get_flag(Move);
bool is_promotion(Move);

#endif