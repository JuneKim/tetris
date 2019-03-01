#ifndef _IEVENTLISTENER_H_
#define _IEVENTLISTENER_H_

#include <iostream>

class IEventListener {
    public:
        virtual void update(std::string event) = 0;
};

#endif /* _IEVENTLISTENER_H_ */