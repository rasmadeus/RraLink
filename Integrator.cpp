#include "Integrator.h"

using namespace rraLink;

#include "Integrator_p.h"
IntegratorPrivate::IntegratorPrivate()
{
    reset();
    caption = "Integrator";
}

void IntegratorPrivate::reset()
{
    summ = basis = 0;
}

double IntegratorPrivate::getTrapezArea(double basis) const
{
    return 0.5 * (this->basis + basis) * step;
}

Integrator::Integrator():
    Link(new IntegratorPrivate())
{
}

Integrator::Integrator(IntegratorPrivate* d_ptr):
    Link(d_ptr)
{
}

double Integrator::out(double in)
{
    D(Integrator)
    d->summ = d->summ + d->getTrapezArea(in);
    d->basis = in;
    return d->summ;
}

void Integrator::reset()
{
    D(Integrator)
    d->reset();
}
