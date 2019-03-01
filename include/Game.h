#ifndef _GAME_H_
#define _GAME_H_

#include <pthread.h>
#include "Model.h"
#include "View.h"
#include "Controller.h"

class Game {
    public:
        static Game* getInstance();
        int run();
        void exit();
        static void *viewThreadRun(void *data);
    private:
        Game();

        static Game *_inst;
        pthread_t _pThread;
        int _pId;

        Model *_pModel;
        View *_pView;
        Controller *_pController;
};

#endif  /* */