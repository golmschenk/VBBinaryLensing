cmake_minimum_required(VERSION 3.19)

project(VBBinaryLensing LANGUAGES CXX)

add_library(VBBinaryLensing SHARED
        VBBinaryLensing/lib/VBBinaryLensingLibrary.cpp VBBinaryLensing/lib/VBBinaryLensingLibrary.h
        VBBinaryLensing/lib/ffi.h
        VBBinaryLensing/lib/ffi.cpp)
