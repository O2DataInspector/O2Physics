// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

///
/// \file   qaPIDTOFEvTime.cxx
/// \author Nicolò Jacazio nicolo.jacazio@cern.ch
/// \brief  Implementation for QA tasks of the TOF PID quantities for the event times
///

#include "Framework/AnalysisTask.h"
#include "Common/TableProducer/PID/pidTOFBase.h"
#include "qaPIDTOF.h"
#include "Framework/runDataProcessing.h"

WorkflowSpec defineDataProcessing(ConfigContext const& cfgc)
{
  return WorkflowSpec{adaptAnalysisTask<tofPidCollisionTimeQa>(cfgc)};
}
