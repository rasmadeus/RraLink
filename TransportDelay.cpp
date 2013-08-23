#include "TransportDelay.h"

using namespace rraLink;

#include "TransportDelay_p.h"
TransportDelayPrivate::TransportDelayPrivate()
{
    caption = "TransportDelay";
    time = 0;
}

void TransportDelayPrivate::reset()
{
    time = 0;
    while(!ins.empty()){
        ins.pop();
    }
}

double TransportDelayPrivate::out(double in)
{
    ins.push(in);
    if( T > time || ins.empty() ){
        time += step;
        return 0;
    }
    double result = ins.front();
    ins.pop();
    return result;
}

TransportDelay::TransportDelay():
    TLink(new TransportDelayPrivate())
{
}

TransportDelay::TransportDelay(TransportDelayPrivate* d_ptr):
    TLink(d_ptr)
{
}

double TransportDelay::out(double in)
{
    D(TransportDelay)
    return d->out(in);
}

void TransportDelay::reset()
{
    D(TransportDelay)
    d->reset();
}
