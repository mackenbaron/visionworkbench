// __BEGIN_LICENSE__
// 
// Copyright (C) 2006 United States Government as represented by the
// Administrator of the National Aeronautics and Space Administration
// (NASA).  All Rights Reserved.
// 
// Copyright 2006 Carnegie Mellon University. All rights reserved.
// 
// This software is distributed under the NASA Open Source Agreement
// (NOSA), version 1.3.  The NOSA has been approved by the Open Source
// Initiative.  See the file COPYING at the top of the distribution
// directory tree for the complete NOSA document.
// 
// THE SUBJECT SOFTWARE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY OF ANY
// KIND, EITHER EXPRESSED, IMPLIED, OR STATUTORY, INCLUDING, BUT NOT
// LIMITED TO, ANY WARRANTY THAT THE SUBJECT SOFTWARE WILL CONFORM TO
// SPECIFICATIONS, ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
// A PARTICULAR PURPOSE, OR FREEDOM FROM INFRINGEMENT, ANY WARRANTY THAT
// THE SUBJECT SOFTWARE WILL BE ERROR FREE, OR ANY WARRANTY THAT
// DOCUMENTATION, IF PROVIDED, WILL CONFORM TO THE SUBJECT SOFTWARE.
// 
// __END_LICENSE__

/// \file LocalToneMap.h
/// 
/// Tonemapping operators that compute the tonemapping in one small
/// image region at a time. 
///
/// This file implements the following tone mapping operators.
///
/// 
#ifndef __VW_HDR_LOCALTONEMAP_H__
#define __VW_HDR_LOCALTONEMAP_H__

#include <vw/Image/ImageView.h>
#include <vw/Image/PixelTypes.h>

namespace vw { 
namespace hdr {

  ImageView<PixelRGB<double> > ashikhmin_tone_map(ImageView<PixelRGB<double> > hdr_image, 
                                                  double threshold = 0.5);

}} // namespace vw::HDR 

#endif  // __VW_HDR_LOCALTONEMAP_H__
