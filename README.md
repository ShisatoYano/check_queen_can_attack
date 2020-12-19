# check_queen_can_attack

* Given the position of the queen (qx, qy) and the opponent (ox, oy) on chessboard.  
* Task is to determine whether the queen can attack the opponent or not.  
* If qr = or, it means that both the queen and the opponent are in the same row and the queen can attack the opponent.  
* Similarly, if qc = oc then also the queen can attack the opponent as they both are in the same column.  
* And for diagonals, if abs(qr - or) = abs(qc - oc), queen can attack the opponent diagonally.  
