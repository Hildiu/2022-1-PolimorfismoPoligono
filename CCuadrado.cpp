//
// Created by Maria Hilda Bermejo
//

#include "CCuadrado.h"

CCuadrado::CCuadrado(TipoNumerico lado):CPoligono(lado)
{
}

TipoNumerico CCuadrado::Apotema()
{
  return (m_lado/2.0);
}

TipoNumerico CCuadrado::SemiPerimetro()
{
  return( 2.0*m_lado);
}

