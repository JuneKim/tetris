#include "Model.h"
#include "IEventListener.h"

Model::Model() {
    //_view = new char[width][height];
}

int Model::getView(int& x, int& y, int& width, int& height) {
    x = _x;
    y = _y;
    width = _width;
    height = _height;
    return 0;
}

void Model::notifyEvent() {
    for (std::vector<IEventListener *>::iterator it = _listeners.begin(); it != _listeners.end(); it++) {
        ((IEventListener*)*it)->update("TEST");
    }
}

void Model::subscribeEvent(IEventListener *l) {
    _listeners.push_back(l);
}
void Model::unsubscribeEvent(IEventListener *l) {
    std::vector<IEventListener *>::iterator it;
    for (it = _listeners.begin(); it != _listeners.end(); it++) {
        if (*it == l) {
            _listeners.erase(it);
        }
    }
}
