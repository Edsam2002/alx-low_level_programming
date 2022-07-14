#!/bin/bash
cc -fPIC -c *.c
gcc *.o -shared -o  liball.so
