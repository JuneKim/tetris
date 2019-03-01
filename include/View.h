#ifndef _VIEW_H_
#define _VIEW_H_

#include <iostream>
#include "Model.h"
#include "IEventListener.h"

class View : public IEventListener {
    public:
        virtual void init(Model *m) = 0;
        virtual void updateSubView() = 0;
        virtual void pause() = 0;
    
    private:
        Model *_pModel;
        std::vector<View *> _subViews;
};

#endif