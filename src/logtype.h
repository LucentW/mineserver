/*
  Copyright (c) 2010, The Mineserver Project
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
  * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
  * Neither the name of the The Mineserver Project nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _LOG_TYPE_H
#define _LOG_TYPE_H

/** 
 * An enumeration of types of log messages..
 *
 * Inspired by syslog.
 */
namespace LogType
{
  enum LogType
  {
<<<<<<< HEAD
    LOG_EMERG,    /** 0 :system is unusable */
    LOG_ALERT,    /** 1 :action must be taken immediately*/ 
    LOG_CRITICAL, /** 2 :critical conditions */
    LOG_ERROR,    /** 3 :error conditions */
    LOG_WARNING,  /** 4 :warning conditions */
    LOG_NOTICE,   /** 5 :normal, but significant, condition */
    LOG_INFO,     /** 6 :informational message */
#ifdef _DEBUG
    LOG_DEBUG,    /** 7 :debug-level message */
#endif
=======
    LOG_EMERG,    /** system is unusable */
    LOG_ALERT,    /** action must be taken immediately*/ 
    LOG_CRITICAL, /** critical conditions */
    LOG_ERROR,    /** error conditions */
    LOG_WARNING,  /** warning conditions */
    LOG_NOTICE,   /** normal, but significant, condition */
    LOG_INFO,     /** informational message */
    LOG_DEBUG,    /** debug-level message */
>>>>>>> upstream/master
  };
};

#endif
