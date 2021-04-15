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


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LiteKitYUV420DataStruct.h"

NS_ASSUME_NONNULL_BEGIN

/**
* creat Video superresolution inferencer
*/
@interface LiteKitVideoSuperResolutionor : NSObject

/**
 * @brief initialize and return a instance of video super resolutionor
 *
 * @param error if an error occurs, this param will carry the information
 * @return a instance of gesture detector
 */
+ (instancetype)createVideoSuperResolutionorWithError:(NSError **)error;


/**
 * @brief execute videoSuperSolution
 *
 * @param inputData input data, struct LiteKitYUV420Data
 * @param outputData output data
 * @param error errorcode and error reason
 * @return BOOL YES for succeed，NO for failure
 */
- (BOOL)superResolutionWithInputData:(const LiteKitYUV420Data *)inputData
                          outputData:(LiteKitYUV420Data *)outputData
                               error:(NSError **)error;


/**
 * @brief execute videoSuperSolution
 *
 * @param inputImage input image, UIImage
 * @param error errorcode and error reason
 * @return UIImage image after superresolution
 */
- (UIImage *)superResolutionWithUIImage:(UIImage *)inputImage
                                  scale:(CGFloat)scale
                                  error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
