#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include "Link.h"

namespace rraLink
{

class DerivativePrivate;

class Derivative : public Link
{
public:
    Derivative();
    double out(double in);
    void reset();
protected:
    Derivative(DerivativePrivate* d_ptr);
    DECLARE_PRIVATE(Derivative)
};

}

#endif // DERIVATIVE_H
