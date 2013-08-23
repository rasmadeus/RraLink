#ifndef TKSILINK_H
#define TKSILINK_H

#include "TLink.h"

namespace rraLink
{

class TKsiLinkPrivate;

class TKsiLink : public TLink
{
public:
    TKsiLink();
    double getKsi() const;
    void setKsi(double ksi);
protected:
    TKsiLink(TKsiLinkPrivate* d_ptr);
    DECLARE_PRIVATE(TKsiLink)
};

}

#endif // TKSILINK_H
