/*
 * GdbHandler.cpp
 *
 *  Created on: 27 Mar 2015
 *      Author: podonoghue
 */

#include "GdbHandler.h"

const char *GdbHandler::getStatusName(GdbTargetStatus status) {
   const char *names[] = {
         "UNKNOWN",
         "NO CONNECTION",
         "RUN",
         "HALT",
         "RESET",
         "WAIT",
         "STOP",
         "VLPR",
         "VLPW",
         "VLPS",
         "LLSxRESET",
         "VLLSxRESET",
         "USER INPUT",
         };

   if (status>=(sizeof(names)/sizeof(names[0]))) {
      return "ILLEGAL";
   }
   return names[status];
}

const char *GdbHandler::getRunStateName(RunState runState) {
   enum RunState {Halted, Stepping, Running, Breaking, UserInput};

   const char *names[] = {
         "Halted",
         "Stepping",
         "Running",
         "Breaking",
         "UserInput",
         };

   if (runState>=(sizeof(names)/sizeof(names[0]))) {
      return "Illegal";
   }
   return names[runState];
}




