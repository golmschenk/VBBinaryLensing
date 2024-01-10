#include "ffi.h"
#include "VBBinaryLensingLibrary.h"

void *create_vbbl() { return new VBBinaryLensing(); }

void destroy_vbbl(void *vbbl) {
    delete static_cast<VBBinaryLensing *>(vbbl);
};

void set_object_coordinates_for_vbbl(void *vbbl, char *coordinates_file, char *directory_for_satellite_tables) {
    static_cast<VBBinaryLensing *>(vbbl)->SetObjectCoordinates(coordinates_file, directory_for_satellite_tables);
};

void compute_parallax_for_vbbl(void *vbbl, double t, double t0, double *Et) {
    static_cast<VBBinaryLensing *>(vbbl)->ComputeParallax(t, t0, Et);
};
