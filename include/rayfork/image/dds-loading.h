#ifndef RAYFORK_DDS_LOADING_H
#define RAYFORK_DDS_LOADING_H

#include "rayfork/foundation/io.h"
#include "rayfork/image/image.h"

rf_extern rf_int rf_get_dds_image_size(const void* src, rf_int src_size);
rf_extern rf_mipmaps_image rf_load_dds_image_to_buffer(const void* src, rf_int src_size, void* dst, rf_int dst_size);
rf_extern rf_mipmaps_image rf_load_dds_image(const void* src, rf_int src_size, rf_allocator allocator);
rf_extern rf_mipmaps_image rf_load_dds_image_from_file(const char* file, rf_allocator allocator, rf_allocator temp_allocator, rf_io_callbacks* io);

#endif // RAYFORK_DDS_LOADING_H