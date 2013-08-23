#include "ForcingLink.h"

using namespace rraLink;

#include "ForcingLink_p.h"
ForcingLinkPrivate::ForcingLinkPrivate()
{
    caption = "ForcingLink";
}

double ForcingLinkPrivate::getDerivative(double in)
{
    return derivative.out(in);
}

void ForcingLinkPrivate::reset()
{
    derivative.reset();
}

ForcingLink::ForcingLink():
    TLink(new ForcingLinkPrivate())
{
}

ForcingLink::ForcingLink(ForcingLinkPrivate* d_ptr):
    TLink(d_ptr)
{
}

double ForcingLink::out(double in)
{
    D(ForcingLink)
    return in + d->T * d->getDerivative(in);
}

void ForcingLink::reset()
{
    D(ForcingLink)
    d->reset();
}

void ForcingLink::setStep(double step)
{
    D(ForcingLink)
    d->step = step;
    d->derivative.setStep(step);
}
