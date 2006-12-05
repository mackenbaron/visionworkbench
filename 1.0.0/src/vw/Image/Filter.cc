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

/// Filter.cc
/// 
/// Instantiations of certain filter kernel functions.
///
#ifdef _MSC_VER
#pragma warning(disable:4244)
#pragma warning(disable:4267)
#pragma warning(disable:4996)
#endif

#include <vw/Image/Filter.tcc>

namespace vw {

  template void generate_gaussian_kernel<float>( std::vector<float>& kernel, double sigma, int size );
  template void generate_gaussian_kernel<double>( std::vector<double>& kernel, double sigma, int size );

  template void generate_derivative_kernel<float>( std::vector<float>& kernel, int deriv, int size );
  template void generate_derivative_kernel<double>( std::vector<double>& kernel, int deriv, int size );

  template void generate_gaussian_derivative_kernel<float>( ImageView<float>& kernel, double sigma1, int deriv1, double sigma2, int deriv2, double angle, int size );
  template void generate_gaussian_derivative_kernel<double>( ImageView<double>& kernel, double sigma1, int deriv1, double sigma2, int deriv2, double angle, int size );
    
  template void generate_laplacian_of_gaussian_kernel<float>( ImageView<float>& kernel, double sigma, int size );
  template void generate_laplacian_of_gaussian_kernel<double>( ImageView<double>& kernel, double sigma, int size );

} // namespace vw
