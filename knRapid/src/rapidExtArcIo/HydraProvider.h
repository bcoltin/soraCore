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
#ifndef rapidHydraProvider_h
#define rapidHydraProvider_h

#include "rapidExtArcIo_Export.h"
#include "HydraIo.h"
#include "rapidUtil/Provider_T.h"

#include "rapidExtArcDds/HydraConfig.h"
#include "rapidExtArcDds/HydraConfigSupport.h"
#include "rapidExtArcDds/HydraSample.h"
#include "rapidExtArcDds/HydraSampleSupport.h"

namespace rapid
{
   namespace ext
   {
      namespace arc
      {
         class HydraTopicPairParameters;

         typedef Provider_T <HydraConfig, HydraSample, HydraTopicPairParameters> HydraProviderBase;

         class rapidExtArcIo_Export HydraProvider : public HydraProviderBase 
         {
         public:
            HydraProvider(HydraTopicPairParameters const& params, const std::string& entityName);

         };
      }
   }
}

#endif // rapidHydraProvider_h
