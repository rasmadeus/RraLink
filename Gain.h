#ifndef GAIN_H
#define GAIN_H

#include "Link.h"

namespace rraLink
{

class GainPrivate;

class Gain : public Link
{
public:
    Gain();
    double out(double in);
    void reset();
    void setK(double k);
    double getK() const;
protected:
    Gain(GainPrivate* d_ptr);
    DECLARE_PRIVATE(Gain)
};

}

#endif // GAIN_H
