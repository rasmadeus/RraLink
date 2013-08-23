#ifndef LINK_P_H
#define LINK_P_H

#include <string>

namespace rraLink
{

class LinkPrivate
{
public:
    LinkPrivate();
    virtual ~LinkPrivate();
    double step;
    std::string caption;
};

}
#endif // LINK_P_H
