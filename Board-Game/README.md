# Board Game

A program which determines if the winner of a board game is Alie or Bob. 
We are given a predefined board with the pieces in place. 
'A' are Alice's pieces while 'B' are Bob's pieces. '.' is an empty space.
The game is played on a square board with 2N rows and 2N columns.
The entire board is divided into N regions. Region 1 occupies the 4 central cells of the board. 
Each next region contains all cells that are horizontally, vertically
or diagonally adjacent to cells of the immediately previous region and do not belong to any of the previous regions. 
The winner is determined as follows. Consider the lowest numbered region that contains a different number of Alice's and Bob's pieces. The player who has more pieces
in this region is the winner. If all regions contain the same number of Alice's and Bob's pieces, the game ends in a draw. 

