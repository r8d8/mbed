/*
 * Copyright (c) 2018 Qualcomm Technologies, Inc.
 * All Rights Reserved.
 */
// Copyright (c) 2018 Qualcomm Technologies, Inc.
// All rights reserved.
// Redistribution and use in source and binary forms, with or without modification, are permitted (subject to the limitations in the disclaimer below) 
// provided that the following conditions are met:
// Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
// Redistributions in binary form must reproduce the above copyright notice, 
// this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
// Neither the name of Qualcomm Technologies, Inc. nor the names of its contributors may be used to endorse or promote products derived 
// from this software without specific prior written permission.
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE. 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, 
// BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, 
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <stdint.h>
#include <string.h>
#include "idlist.h"
#include "qsCommon.h"
#include "qsHost.h"
#include "qsCallback.h"
#include "qapi_zb.h"
#include "qapi_zb_cl_doorlock_common.h"
#include "qapi_zb_cl_doorlock_host_mnl.h"
#include "qapi_zb_cl_doorlock_host_cb.h"
#include "qapi_zb_cl_common.h"

qapi_Status_t Mnl_qapi_ZB_CL_DoorLock_Server_Get_PIN_Code(uint8_t TargetID, qapi_ZB_Cluster_t Cluster, qapi_ZB_CL_DoorLock_PIN_t *PIN)
{
   PackedBuffer_t     qsInputBuffer = { NULL, 0, 0, 0, NULL, NULL };
   PackedBuffer_t     qsOutputBuffer = { NULL, 0, 0, 0, NULL, NULL };
   BufferListEntry_t *qsBufferList = NULL;
   SerStatus_t        qsResult = ssSuccess;
   uint32_t           qsIndex = 0;
   uint16_t           qsSize = 0;
   Boolean_t          qsPointerValid = FALSE;

   UNUSED(qsIndex);
   UNUSED(qsPointerValid);

   /* Return value. */
   qapi_Status_t qsRetVal = 0;

   /* Calculate size of packed function arguments. */
   qsSize = (4 + CalcPackedSize_qapi_ZB_CL_DoorLock_PIN_t((qapi_ZB_CL_DoorLock_PIN_t *)PIN) + (QS_POINTER_HEADER_SIZE * 1));

   if(AllocatePackedBuffer(TargetID, QS_PACKET_E, MODULE_ZB, QAPI_ZB_CL_DOORLOCK_FILE_ID, QAPI_ZB_CL_DOORLOCK_SERVER_GET_PIN_CODE_FUNCTION_ID, &qsInputBuffer, qsSize))
   {
      /* Write arguments packed. */
      if(qsResult == ssSuccess)
         qsResult = PackedWrite_32(&qsInputBuffer, (uint32_t *)&Cluster);

      if(qsResult == ssSuccess)
         qsResult = PackedWrite_PointerHeader(&qsInputBuffer, (void *)PIN);

      if((qsResult == ssSuccess) && (PIN != NULL) && (PIN->PINCode != NULL) && (PIN->PINLength))
      {
         qsResult = PackedWrite_qapi_ZB_CL_DoorLock_PIN_t(&qsInputBuffer, (qapi_ZB_CL_DoorLock_PIN_t *)PIN);
      }

      if(qsResult == ssSuccess)
      {
         /* Send the command. */
         if(SendCommand(&qsInputBuffer, &qsOutputBuffer) == ssSuccess)
         {
            if(qsOutputBuffer.Start != NULL)
            {
               /* Unpack returned values. */
               if(qsResult == ssSuccess)
                  qsResult = PackedRead_32(&qsOutputBuffer, &qsBufferList, (uint32_t *)&qsRetVal);

               if(qsResult == ssSuccess)
                  qsResult = PackedRead_PointerHeader(&qsOutputBuffer, &qsBufferList, &qsPointerValid);

               if((qsResult == ssSuccess) && (qsPointerValid == TRUE))
               {
                  qsResult = PackedRead_8(&qsOutputBuffer, &qsBufferList, (uint8_t *)&PIN->PINLength);

                  if(qsResult == ssSuccess)
                     qsResult = PackedRead_PointerHeader(&qsOutputBuffer, &qsBufferList, &qsPointerValid);

                  if((qsResult == ssSuccess) && (qsPointerValid == TRUE))
                  {
                     qsResult = PackedRead_Array(&qsOutputBuffer, &qsBufferList, (void *)PIN->PINCode, sizeof(uint8_t), PIN->PINLength);
                  }
               }

               /* Set the return value to error if necessary. */
               if(qsResult != ssSuccess)
               {
                  qsRetVal = QAPI_ERROR;
               }
            }
            else
            {
               qsRetVal = QAPI_ERROR;
            }

            /* Free the output buffer. */
            FreePackedBuffer(&qsOutputBuffer);
         }
         else
         {
            qsRetVal = QAPI_ERROR;
         }
      }
      else
      {
         qsRetVal = QAPI_ERROR;
      }

      /* Free the input buffer. */
      FreePackedBuffer(&qsInputBuffer);
   }
   else
   {
      qsRetVal = QAPI_ERR_NO_MEMORY;
   }

   FreeBufferList(&qsBufferList);

   return(qsRetVal);
}
