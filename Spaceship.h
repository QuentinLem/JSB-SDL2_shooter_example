#ifndef _SPACESHIP_
#define _SPACESHIP_

#include <string>

class Spaceship {
private:
  int aLife;
  float aPositionX;
  float aPositionY;
  float aAccelaration;

  public:
    void Shoot();
    bool IsAlive();

    int GetLife();
    void SetLife(int lifeValue);
};

#endif
