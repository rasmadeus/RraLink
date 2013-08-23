#ifndef T_LIINK_H
#define T_LIINK_H

#include "Link.h"

namespace rraLink
{

class TLinkPrivate;

class TLink: public Link
{
public:
    TLink();
    double getT() const;
    void setT(double T);
protected:
    TLink(TLinkPrivate* d_ptr);
    DECLARE_PRIVATE(TLink)
};

}

#endif // T_LIINK_H
