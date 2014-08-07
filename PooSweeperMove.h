// Copyright 2014, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Author: Hannah Bast

#ifndef POOSWEEPERMOVE_H_
#define POOSWEEPERMOVE_H_

#include <stdlib.h>

// A move.
class PooSweeperMove {
 public:
  // The position of the cell to be uncovered next.
  size_t row;
  size_t col;

  // Type of move (reveal or toggle mine mark).
  enum { REVEAL, TOGGLE_MARK } type;
  // enum { REVEAL = 0, TOGGLE_MARK = 1 } type2;
};

#endif  // POOSWEEPERMOVE_H_
