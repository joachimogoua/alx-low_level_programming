#!/bin/bash
gcc -c *.c
ar -rv liball.a  *.o
ranlib liball.a

