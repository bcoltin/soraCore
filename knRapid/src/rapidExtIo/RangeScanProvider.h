/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#ifndef kn_RangeScanProvider_h
#define kn_RangeScanProvider_h

#include "rapidExtIo_Export.h"
#include "RangeScanIo.h"

#include "rapidUtil/Provider_T.h"

#include "rapidExtDds/RangeScanSample.h"
#include "rapidExtDds/RangeScanSampleSupport.h"
#include "rapidExtDds/RangeScanConfig.h"
#include "rapidExtDds/RangeScanConfigSupport.h"

namespace rapid
{
  namespace ext
  {
    class RangeScanTopicPairParameters;
    typedef Provider_T<rapid::ext::RangeScanConfig,
                       rapid::ext::RangeScanSample,
                       RangeScanTopicPairParameters> RangeScanProviderBase;
  
    class rapidExtIo_Export RangeScanProvider : public RangeScanProviderBase
    {
    public:
      RangeScanProvider(RangeScanTopicPairParameters const& params, const std::string& entityName);
      virtual ~RangeScanProvider() throw();
    };
  }
}
#endif // kn_RangeScanProvider_h
