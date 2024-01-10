cmake_minimum_required(VERSION 3.19)

project(VBBinaryLensing LANGUAGES CXX)

add_library(VBBinaryLensing OBJECT
        VBBinaryLensing/lib/VBBinaryLensingLibrary.cpp VBBinaryLensing/lib/VBBinaryLensingLibrary.h
        VBBinaryLensing/lib/ffi.h VBBinaryLensing/lib/ffi.cpp)
add_library(VBBinaryLensing_shared SHARED $<TARGET_OBJECTS:VBBinaryLensing>)
add_library(VBBinaryLensing_static STATIC $<TARGET_OBJECTS:VBBinaryLensing>)
