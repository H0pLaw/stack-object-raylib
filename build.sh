#!/bin/sh

eval cc sim.cpp $(pkg-config --libs --cflags raylib) -std=c++11 -o Sim
