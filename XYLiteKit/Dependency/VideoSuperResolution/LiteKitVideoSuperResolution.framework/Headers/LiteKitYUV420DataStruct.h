/**
Copyright © 2020 Baidu, Inc. All Rights Reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#ifndef LiteKitYUV420DataStruct_h
#define LiteKitYUV420DataStruct_h

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

///video frame YUV420 data struct
typedef struct {
    // frame width
    int width;
    // frame height
    int height;
    // data light (include Padding)
    int y_stride;
    int u_stride;
    int v_stride;
    //YUVdata
    uint8_t* y_data;
    uint8_t* u_data;
    uint8_t* v_data;
} LiteKitYUV420Data;//video 420 frame data

/**
 *release LiteKitYUVData
 * @param data input data
 */
void releaseYUV420Data(LiteKitYUV420Data *data);

/**
 * copy LiteKitYUVData
 * @param src input data
 * @param dst output data
 */
void copyYUV420Data(const LiteKitYUV420Data *src, LiteKitYUV420Data *dst);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif /* LiteKitYUV420DataStruct_h */
