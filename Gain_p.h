#ifndef GAIN_P_H
#define GAIN_P_H

#include "Link_p.h"

namespace rraLink
{

class GainPrivate: public LinkPrivate
{
public:
    GainPrivate();
    double k;
};

}

#endif // GAIN_P_H
