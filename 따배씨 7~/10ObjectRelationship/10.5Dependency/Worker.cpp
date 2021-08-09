#pragma once

#include "Timer.h"
#include "Worker.h"

void Worker::doSomething()
    {
        Timer timer;

        //do some work here

        timer.elapsed(); // end timer and report elapsed time
    }