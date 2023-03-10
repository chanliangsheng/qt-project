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

#ifndef _CSEARCHMODIFICATION_H
#define _CSEARCHMODIFICATION_H

#include "CSpecificityRules.h"
#include "mzIMLStructs.h"
#include <vector>
#include <math.h>

class CSearchModification{
public:
  //Constructors & Destructor
  CSearchModification();
  //CSearchModification(const CSearchModification& c);
  //~CSearchModification();

  //Data members
  bool fixedMod;
  double massDelta;
  std::string residues;
  std::vector<CSpecificityRules> specificityRules;
  std::vector<sCvParam> cvParam;

  //operators
  //CSearchModification& operator=(const CSearchModification& c);
  bool operator==(const CSearchModification& c);
  bool operator!=(const CSearchModification& c);

  //Functions
  void clear();
  void writeOut(FILE* f, int tabs = -1);

private:
};

#endif
