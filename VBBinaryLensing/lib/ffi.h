#ifndef VBBINARYLENSING_FFI_H
#define VBBINARYLENSING_FFI_H

#ifdef __cplusplus
extern "C" {
#endif
void *create_vbbl();
void destroy_vbbl(void *vbbl);
void set_object_coordinates_for_vbbl(void *vbbl, char *coordinates_file, char *directory_for_satellite_tables);
void compute_parallax_for_vbbl(void *vbbl, double t, double t0, double *Et);
void set_parallax_system_for_vbbl(void *vbbl, int value);
#ifdef __cplusplus
}
#endif

#endif //VBBINARYLENSING_FFI_H
