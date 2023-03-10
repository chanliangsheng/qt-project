/*
Copyright 2020, Michael R. Hoopmann, Institute for Systems Biology
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _CADDITIONALSEARCHPARAMS_H
#define _CADDITIONALSEARCHPARAMS_H

#include "mzIMLStructs.h"
#include <vector>

class CAdditionalSearchParams {
public:

  //Constructors & Destructor
  /*CAdditionalSearchParams();
  CAdditionalSearchParams(const CAdditionalSearchParams& c);
  ~CAdditionalSearchParams();*/

  //Data members
  std::vector<sCvParam> cvParam;
  std::vector<sUserParam> userParam;

  //operators
  //CAdditionalSearchParams& operator=(const CAdditionalSearchParams& c);
  bool operator==(const CAdditionalSearchParams& c);
  bool operator!=(const CAdditionalSearchParams& c);

  //Functions
  void writeOut(FILE* f, int tabs = -1);

private:
};

#endif