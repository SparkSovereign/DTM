#include "ALAS.h"
#include "ALAV.h"
#include "ALAN.h"

class ALAM {
public:
  virtual void getRow(int,ALAV&) = 0;
  virtual void getCol(int,ALAV&) = 0;
  virtual void mget(int,int,ALAN&) = 0;
  virtual void mset(int,int,ALAN&) = 0;
private:
};
