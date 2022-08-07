#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
  char *name;
  char *typedCharacters;
  int chances;

public:
  Player(int);
  ~Player();
  char *getName();
  char *getTypedCharacters();
  bool setTypedCharacters(char);
};

#endif
