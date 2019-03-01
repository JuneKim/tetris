#include <iostream>
#include <pthread.h>

#include "Game.h"
#include "Debug.h"
#include "StartViewModel.h"
#include "StartView.h"
#include "Controller.h"

using namespace std;

Game *Game::_inst = NULL;

Game::Game() {
    __FUNC_ENTER__
    _pModel = new StartViewModel();
    _pView = new StartView();
    _pController = new Controller();
}

void *Game::viewThreadRun(void *data) {
    __FUNC_ENTER__
    cout << "aaa" << endl;
    View *v = (View *)data;
    v->update("TEST");

    return NULL;
}

int Game::run() {
    __FUNC_ENTER__
    cout << "test~~~~" << endl;
    pthread_create(&_pThread, NULL, Game::viewThreadRun, (void*)_pView);
    // run pthread for view
    // run loop for monitoring event
    return 0;
}

void Game::exit() {
    __FUNC_ENTER__
    // pthread_exit
    // stop monitoring event
}

Game *Game::getInstance() {
    __FUNC_ENTER__
    if (!_inst)
        _inst = new Game(); 
    return _inst;
}