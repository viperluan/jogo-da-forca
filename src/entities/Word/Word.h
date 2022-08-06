#ifndef WORD_H
#define WORD_H

class Word
{
private:
  char *name;
  char *hint;
  int size;

public:
  Word();
  ~Word();
  char *getName();
  char *getHint();
  int getSize();
  int *charExistsOnPositions();
};

#endif
