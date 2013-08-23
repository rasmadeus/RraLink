#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "Link.h"

namespace rraLink
{

class IntegratorPrivate;

class Integrator : public Link
{
public:
    Integrator();
    double out(double in);
    void reset();
protected:
    Integrator(IntegratorPrivate* d_ptr);
    DECLARE_PRIVATE(Integrator)
};

}

#endif // INTEGRATOR_H
