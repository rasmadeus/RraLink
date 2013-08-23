#include "OscillatoryLink.h"

using namespace rraLink;

#include "OscillatoryLink_p.h"
#include "Integrator.h"
OscillatoryLinkPrivate::OscillatoryLinkPrivate()
{
    dy = out = 0;
    caption = "OscillatoryLink";
    firstLink = new Integrator();
    secondLink = new Integrator();
}

double OscillatoryLinkPrivate::getInToSecondIntegrator(double in) const
{
    return (in - out - kFirstDerivative() * dy) / kSecondDerivative();
}

OscillatoryLink::OscillatoryLink():
    TwoLink(new OscillatoryLinkPrivate())
{
}

OscillatoryLink::OscillatoryLink(OscillatoryLinkPrivate* d_ptr):
    TwoLink(d_ptr)
{
}

double OscillatoryLink::out(double in)
{
    D(OscillatoryLink)
    double inToSecondIntegrator = d->getInToSecondIntegrator(in);
    d->dy = d->outSecondLink(inToSecondIntegrator);
    d->out = d->outFirstLink(d->dy);
    return d->out;
}

void OscillatoryLink::reset()
{
    D(OscillatoryLink)
    d->out = 0;
    d->dy = 0;
    TwoLink::reset();
}
