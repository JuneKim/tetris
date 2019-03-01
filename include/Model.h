#ifndef _MODEL_H_
#define _MODEL_H_

#include <vector>
#include "Point.h"
#include "IEventListener.h"

class Model {
    public:
        Model();
        
        int getView(int& x, int& y, int& width, int& height);
        void notifyEvent();
        void subscribeEvent(IEventListener *l);
        void unsubscribeEvent(IEventListener *l);
    private:
        int _x;
        int _y;
        int _width;
        int _height;
        char **_view;

        std::vector<IEventListener *> _listeners;

        std::vector<Point> changes;
};

#endif /* _MODEL_H_ */