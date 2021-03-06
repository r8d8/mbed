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

#include <string.h>
#include "qapi_ble.h"
#include "qsCommon.h"
#include "qsPack.h"
#include "qapi_ble_atttypes_common.h"
#include "qapi_ble_bttypes_common.h"

uint32_t CalcPackedSize_qapi_BLE_ATT_Authentication_Signature_t(qapi_BLE_ATT_Authentication_Signature_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_AUTHENTICATION_SIGNATURE_T_MIN_PACKED_SIZE;
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_PDU_Header_t(qapi_BLE_ATT_PDU_Header_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_PDU_HEADER_T_MIN_PACKED_SIZE;
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Handle_Range_t(qapi_BLE_ATT_Handle_Range_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_HANDLE_RANGE_T_MIN_PACKED_SIZE;

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->StartingHandle);

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->EndingHandle);
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Error_Response_PDU_t(qapi_BLE_ATT_Error_Response_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_ERROR_RESPONSE_PDU_T_MIN_PACKED_SIZE;

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->AttributeHandleInError);
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Exchange_MTU_Request_PDU_t(qapi_BLE_ATT_Exchange_MTU_Request_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_EXCHANGE_MTU_REQUEST_PDU_T_MIN_PACKED_SIZE;

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->ClientRxMTU);
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Exchange_MTU_Response_PDU_t(qapi_BLE_ATT_Exchange_MTU_Response_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_EXCHANGE_MTU_RESPONSE_PDU_T_MIN_PACKED_SIZE;

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->ServerRxMTU);
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Find_Information_Request_PDU_t(qapi_BLE_ATT_Find_Information_Request_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_FIND_INFORMATION_REQUEST_PDU_T_MIN_PACKED_SIZE;

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->StartingHandle);

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->EndingHandle);
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Read_Request_PDU_t(qapi_BLE_ATT_Read_Request_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_READ_REQUEST_PDU_T_MIN_PACKED_SIZE;

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->AttributeHandle);
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Read_Blob_Request_PDU_t(qapi_BLE_ATT_Read_Blob_Request_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_READ_BLOB_REQUEST_PDU_T_MIN_PACKED_SIZE;

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->AttributeHandle);

        qsResult += CalcPackedSize_16((uint16_t *)&Structure->ValueOffset);
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Read_Multiple_Request_PDU_t(qapi_BLE_ATT_Read_Multiple_Request_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_READ_MULTIPLE_REQUEST_PDU_T_MIN_PACKED_SIZE;

        qsResult += (sizeof(qapi_BLE_NonAlignedWord_t)*(2));
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Write_Response_PDU_t(qapi_BLE_ATT_Write_Response_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_WRITE_RESPONSE_PDU_T_MIN_PACKED_SIZE;
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Execute_Write_Request_PDU_t(qapi_BLE_ATT_Execute_Write_Request_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_EXECUTE_WRITE_REQUEST_PDU_T_MIN_PACKED_SIZE;
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Execute_Write_Response_PDU_t(qapi_BLE_ATT_Execute_Write_Response_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_EXECUTE_WRITE_RESPONSE_PDU_T_MIN_PACKED_SIZE;
    }

    return(qsResult);
}

uint32_t CalcPackedSize_qapi_BLE_ATT_Handle_Value_Confirmation_PDU_t(qapi_BLE_ATT_Handle_Value_Confirmation_PDU_t *Structure)
{
    uint32_t qsResult;

    if(Structure == NULL)
    {
        qsResult = 0;
    }
    else
    {
        qsResult = QAPI_BLE_ATT_HANDLE_VALUE_CONFIRMATION_PDU_T_MIN_PACKED_SIZE;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Authentication_Signature_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Authentication_Signature_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Authentication_Signature_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature0);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature1);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature2);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature3);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature4);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature5);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature6);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature7);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature8);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature9);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature10);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Authentication_Signature11);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_PDU_Header_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_PDU_Header_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_PDU_Header_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Handle_Range_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Handle_Range_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Handle_Range_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->StartingHandle);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->EndingHandle);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Error_Response_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Error_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Error_Response_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->RequestOpCodeInError);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->AttributeHandleInError);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->ErrorCode);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Exchange_MTU_Request_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Exchange_MTU_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Exchange_MTU_Request_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->ClientRxMTU);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Exchange_MTU_Response_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Exchange_MTU_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Exchange_MTU_Response_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->ServerRxMTU);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Find_Information_Request_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Find_Information_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Find_Information_Request_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->StartingHandle);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->EndingHandle);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Read_Request_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Read_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Read_Request_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->AttributeHandle);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Read_Blob_Request_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Read_Blob_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Read_Blob_Request_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->AttributeHandle);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_16(Buffer, (uint16_t *)&Structure->ValueOffset);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Read_Multiple_Request_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Read_Multiple_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Read_Multiple_Request_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
         {
             qsResult = PackedWrite_Array(Buffer, (void *)Structure->SetOfHandles, sizeof(qapi_BLE_NonAlignedWord_t), 2);
         }

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Write_Response_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Write_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Write_Response_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Execute_Write_Request_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Execute_Write_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Execute_Write_Request_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Flags);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Execute_Write_Response_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Execute_Write_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Execute_Write_Response_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedWrite_qapi_BLE_ATT_Handle_Value_Confirmation_PDU_t(PackedBuffer_t *Buffer, qapi_BLE_ATT_Handle_Value_Confirmation_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;

    if(Buffer->Remaining >= CalcPackedSize_qapi_BLE_ATT_Handle_Value_Confirmation_PDU_t(Structure))
    {
        if(Structure != NULL)
        {
         if(qsResult == ssSuccess)
             qsResult = PackedWrite_8(Buffer, (uint8_t *)&Structure->Attribute_OpCode);

        }
    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Authentication_Signature_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Authentication_Signature_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_AUTHENTICATION_SIGNATURE_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature0);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature1);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature2);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature3);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature4);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature5);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature6);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature7);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature8);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature9);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature10);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Authentication_Signature11);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_PDU_Header_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_PDU_Header_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_PDU_HEADER_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Handle_Range_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Handle_Range_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_HANDLE_RANGE_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->StartingHandle);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->EndingHandle);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Error_Response_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Error_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_ERROR_RESPONSE_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->RequestOpCodeInError);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->AttributeHandleInError);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->ErrorCode);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Exchange_MTU_Request_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Exchange_MTU_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_EXCHANGE_MTU_REQUEST_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->ClientRxMTU);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Exchange_MTU_Response_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Exchange_MTU_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_EXCHANGE_MTU_RESPONSE_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->ServerRxMTU);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Find_Information_Request_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Find_Information_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_FIND_INFORMATION_REQUEST_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->StartingHandle);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->EndingHandle);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Read_Request_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Read_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_READ_REQUEST_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->AttributeHandle);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Read_Blob_Request_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Read_Blob_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_READ_BLOB_REQUEST_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->AttributeHandle);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_16(Buffer, BufferList, (uint16_t *)&Structure->ValueOffset);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Read_Multiple_Request_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Read_Multiple_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_READ_MULTIPLE_REQUEST_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
        {
            qsResult = PackedRead_Array(Buffer, BufferList, (void *)Structure->SetOfHandles, sizeof(qapi_BLE_NonAlignedWord_t), 2);
        }

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Write_Response_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Write_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_WRITE_RESPONSE_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Execute_Write_Request_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Execute_Write_Request_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_EXECUTE_WRITE_REQUEST_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Flags);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Execute_Write_Response_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Execute_Write_Response_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_EXECUTE_WRITE_RESPONSE_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}

SerStatus_t PackedRead_qapi_BLE_ATT_Handle_Value_Confirmation_PDU_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_ATT_Handle_Value_Confirmation_PDU_t *Structure)
{
    SerStatus_t qsResult = ssSuccess;
    Boolean_t   qsPointerValid = FALSE;

    UNUSED(qsPointerValid);

    if(Buffer->Remaining >= QAPI_BLE_ATT_HANDLE_VALUE_CONFIRMATION_PDU_T_MIN_PACKED_SIZE)
    {
        if(qsResult == ssSuccess)
            qsResult = PackedRead_8(Buffer, BufferList, (uint8_t *)&Structure->Attribute_OpCode);

    }
    else
    {
        qsResult = ssInvalidLength;
    }

    return(qsResult);
}
