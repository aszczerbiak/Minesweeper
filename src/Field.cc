#include "Field.h"

Field::Field() :
  _adjacentBombsCount(0),
  _flagCode(FlagCode::Empty),
  _isBomb(false),
  _isKnown(false)
{
  // All the work is done in the initializer.
}

int Field::adjacentBombsCount()
{
  return _adjacentBombsCount;
}

void Field::setAdjacentBombsCount(int adjacentBombsCount)
{
  _adjacentBombsCount = adjacentBombsCount;
}

FlagCode Field::flagCode()
{
  return _flagCode;
}

void Field::setFlagCode(FlagCode flagCode)
{
  _flagCode = flagCode;
}

bool Field::isBomb()
{
  return _isBomb;
}

void Field::setIsBomb(bool isBomb)
{
  _isBomb = isBomb;
}

bool Field::isKnown()
{
  return _isKnown;
}

void Field::setIsKnown(bool isKnown)
{
  _isKnown = isKnown;
}

void Field::clear()
{
  _adjacentBombsCount = 0;
  _flagCode = FlagCode::Empty;
  _isBomb = false;
  _isKnown = false;
}
