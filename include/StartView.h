#ifndef _STARTVIEW_H_
#define _STARTVIEW_H_

#include "View.h"

class StartView : public View{
    public:
        StartView();
        virtual void init(Model *m);
        virtual void updateSubView();
        virtual void pause();
        virtual void update(std::string event);
    private:
        std::string _name;
        bool isStartButton;
};
#endif /* _STARTVIEW_H_ */