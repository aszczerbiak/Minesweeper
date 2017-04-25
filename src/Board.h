#ifndef BOARD_H
#define BOARD_H

#include "Field.h"
#include <vector>
#include <string>

class Board
{
 public:
  /**
   * Initializes a new instance of the Board class.
   *
   * \param width The width of a board in Field units.
   * \param height The height of a board in Field units.
   *
   * \post A new instance of the Board class is created.
   * It has width and height set to the appropriate values
   * and every Field constituting the board is in clear state
   * (see the Field documentation for more info).
   */
  Board(int width, int height);

 public:
  /**
   * Gets the value of the width of the board.
   *
   * \return the width of the board.
   */
  int width();

  /**
   * Gets the value of the height of the board.
   *
   * \return the height of the board.
   */
  int height();

  std::string peekAtField(int x, int y);

  /**
   * Clears the board by converting each field to a clear one.
   *
   * \post Every Field on the board has been cleared.
   * Please refer to the Field class documentation for more info.
   */
  void clear();

  /**
   * Updates the "adjacent bombs count" for every field in the board.
   *
   * \post Every Field on the board has the _adjacentBombsCount field
   * set to a correct value.
   */
  void calculateAdjacentBombCounts();

  /**
   * Adds mines at random unocuppied locations on the board.
   *
   * \param totalMines the total number of mines to be distributed at distinct
   * random positions on the board.
   *
   * \pre totalMines is in range: 0 < totalMines < (_width * _height).
   * \post The board has totalMines mines placed at random distinct locations,
   * which did not already contain a bomb.
   */
  void addMines(int mines);

  /**
   * Starts a new minesweeper game.
   *
   * The following steps are taken in order to start a new game:
   * - The board is cleared by calling the clear() subroutine
   * - A total of totalMines are put at distinct random locations on the board
   * - For each Field the total number of adjacent fields contaning the bombs
   *   is calculated and the result stored in appropriate field
   *
   * \param totalMines The total number of mines to be put on the board.
   * \post The new game has started, as described in detail above.
   */
  void newGame(int totalMines);

  // Helper functions:
  void print();


 private:
  int _width;
  int _height;
  std::vector< std::vector< Field > > _map;
};



#endif // BOARD_H
