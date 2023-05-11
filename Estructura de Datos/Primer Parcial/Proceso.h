/***********************************************************************
 * Module:  Proceso.h
 * Author:  Fernando
 * Modified: miércoles, 10 de mayo de 2023 8:20:15
 * Purpose: Declaration of the class Proceso
 ***********************************************************************/
#include "Fraccion.h"

#if !defined(__Class_Diagram_1_Proceso_h)
#define __Class_Diagram_1_Proceso_h

class Proceso
{
public:
   virtual float calculo(float obj1, float obj2) = 0;
   virtual Fraccion calculo(Fraccion obj1, Fraccion obj2) = 0;
protected:
private:
};

#endif