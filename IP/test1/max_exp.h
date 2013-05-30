#ifndef MAX_EXP_H
#define MAX_EXP_H
#include "dab.h"
#include "foodb.h"
#include "shoppingb.h"
#include "fuelb.h"
#include "fmb.h"
#include "entb.h"
#include "otherb.h"
#include "menu.h"



class max_exp :public foodb,public shoppingb,public fuelb,public otherb,public entb,public fmb
{
  public: float fspent;
   float sspent;
   float fuspent;
   float otspent;
   float espent;
   float fmspent;
   float mexp;
   float total_spent;
   public: max_exp();


};

#endif // MAX_EXP_H
