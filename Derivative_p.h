#ifndef DERIVATIVEPRIVATE_H
#define DERIVATIVEPRIVATE_H

#include "Link_p.h"

namespace rraLink
{

class DerivativePrivate: public LinkPrivate
{
public:
    DerivativePrivate();
    double preValue;
};

}

#endif // DERIVATIVEPRIVATE_H
