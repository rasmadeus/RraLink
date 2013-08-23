#include "Gain.h"

using namespace rraLink;

#include "Gain_p.h"
GainPrivate::GainPrivate()
{
    k = 1;
    caption = "Gain";
}

Gain::Gain():
    Link(new GainPrivate())
{
}

Gain::Gain(GainPrivate* d_ptr):
    Link(d_ptr)
{
}

double Gain::out(double in)
{
    D(Gain)
    return d->k * in;
}

void Gain::reset()
{
}

double Gain::getK() const
{
    const D(Gain)
    return d->k;
}

void Gain::setK(double k)
{
    D(Gain)
    d->k = k;
}
