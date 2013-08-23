#ifndef T_KSI_VAR_P_H
#define T_KSI_VAR_P_H

#include "TLink_p.h"

namespace rraLink
{

class TKsiLinkPrivate : public TLinkPrivate
{
public:
    TKsiLinkPrivate();
    double ksi;
};

}

#endif // T_KSI_VAR_P_H
