//
// Created by Maria Hilda Bermejo
//

#include "CHexagono.h"

CHexagono::CHexagono(TipoNumerico lado):CPoligono(lado)
{
}

TipoNumerico CHexagono::Apotema()
{
  return( m_lado*sqrt(3.0)/2.0);
}

TipoNumerico CHexagono::SemiPerimetro()
{
  return(3.0* m_lado);
}


