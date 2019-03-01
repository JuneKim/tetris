#ifndef _MAINVIEWMODEL_H_
#define _MAINVIEWMODEL_H_

#include "Model.h"

class MainViewModel : public Model {
    public:
        void addSubView(View *v);

};

#endif /* _MAINVIEWMODEL_H_ */