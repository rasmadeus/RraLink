#include "AperiodicLink.h"

using namespace rraLink;

#include "AperiodicLink_p.h"
AperiodicLinkPrivate::AperiodicLinkPrivate()
{
    preValue = 0;
    caption = "AperiodicLink";
}

void AperiodicLinkPrivate::reset()
{
    preValue = 0;
    integrator.reset();
}

double AperiodicLinkPrivate::integrate(double in)
{
    double inToIntegrator = (in - preValue) / T;
    preValue = integrator.out(inToIntegrator);
    return preValue;
}

AperiodicLink::AperiodicLink():
    TLink(new AperiodicLinkPrivate())
{
}

AperiodicLink::AperiodicLink(AperiodicLinkPrivate* d_ptr):
    TLink(d_ptr)
{
}

double AperiodicLink::out(double in)
{
    D(AperiodicLink)
    return d->integrate(in);
}

void AperiodicLink::reset()
{
    D(AperiodicLink)
    d->reset();
}
