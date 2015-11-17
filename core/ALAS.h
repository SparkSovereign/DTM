//ALAS - Abstract Linear Algebra Strategy
//Initialize by calling an "init" method on a subclass.
#include "ALAM.h" //matrix
#include "ALAV.h" //vector
#include "ALAN.h" //number

class ALAS {
public:
  static ALAS* getInstance() { return instance; }

  virtual void MVmultiply(ALAM&,ALAV&,ALAM&) = 0;
  virtual void MVmultiplyIP(ALAM&,ALAV&) = 0; //in place
  virtual void VVinner(ALAV&,ALAV&,ALAN&) = 0;
  virtual void VVouter(ALAV&,ALAV&,ALAM&) = 0;
  virtual void Vexponent(ALAV&,ALAN&,ALAV&) = 0; //v2 = n1^(v1)
  virtual void VexponentIP(ALAV&,ALAN&) = 0;
private:
  static ALAS* instance;
};
