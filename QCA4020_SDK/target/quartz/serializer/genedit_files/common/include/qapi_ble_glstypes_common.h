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

#ifndef __QAPI_BLE_GLSTYPES_COMMON_H__
#define __QAPI_BLE_GLSTYPES_COMMON_H__
#include "qsCommon.h"
#include "qapi_ble.h"
#include "qapi_ble_glstypes.h"
#include "qapi_ble_bttypes_common.h"
#include "qapi_ble_gatttype_common.h"

/* Packed structure minimum size macros. */
#define QAPI_BLE_GLS_TIME_OFFSET_T_MIN_PACKED_SIZE                                                      (2)
#define QAPI_BLE_GLS_CONCENTRATION_T_MIN_PACKED_SIZE                                                    (3)
#define QAPI_BLE_GLS_SENSOR_STATUS_ANNUNCIATION_T_MIN_PACKED_SIZE                                       (2)
#define QAPI_BLE_GLS_GLUCOSE_MEASUREMENT_CONTEXT_HEADER_T_MIN_PACKED_SIZE                               (3)
#define QAPI_BLE_GLS_CONTEXT_EXTENDED_FLAGS_T_MIN_PACKED_SIZE                                           (1)
#define QAPI_BLE_GLS_CONTEXT_CARBOHYDRATE_T_MIN_PACKED_SIZE                                             (3)
#define QAPI_BLE_GLS_CONTEXT_MEAL_T_MIN_PACKED_SIZE                                                     (1)
#define QAPI_BLE_GLS_HEALTH_TESTER_T_MIN_PACKED_SIZE                                                    (1)
#define QAPI_BLE_GLS_CONTEXT_EXERCISE_T_MIN_PACKED_SIZE                                                 (3)
#define QAPI_BLE_GLS_CONTEXT_MEDICATION_T_MIN_PACKED_SIZE                                               (3)
#define QAPI_BLE_GLS_CONTEXT_HBA1C_T_MIN_PACKED_SIZE                                                    (2)
#define QAPI_BLE_GLS_SEQUENCE_NUMBER_RANGE_T_MIN_PACKED_SIZE                                            (4)
#define QAPI_BLE_GLS_DATE_TIME_RANGE_T_MIN_PACKED_SIZE                                                  (0)
#define QAPI_BLE_GLS_RACP_RESPONSE_CODE_T_MIN_PACKED_SIZE                                               (2)

/* Packed structure size definitions. */
uint32_t CalcPackedSize_qapi_BLE_GLS_Time_Offset_t(qapi_BLE_GLS_Time_Offset_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Concentration_t(qapi_BLE_GLS_Concentration_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Sensor_Status_Annunciation_t(qapi_BLE_GLS_Sensor_Status_Annunciation_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Glucose_Measurement_Context_Header_t(qapi_BLE_GLS_Glucose_Measurement_Context_Header_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Context_Extended_Flags_t(qapi_BLE_GLS_Context_Extended_Flags_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Context_Carbohydrate_t(qapi_BLE_GLS_Context_Carbohydrate_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Context_Meal_t(qapi_BLE_GLS_Context_Meal_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Health_Tester_t(qapi_BLE_GLS_Health_Tester_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Context_Exercise_t(qapi_BLE_GLS_Context_Exercise_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Context_Medication_t(qapi_BLE_GLS_Context_Medication_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Context_HBA1C_t(qapi_BLE_GLS_Context_HBA1C_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Sequence_Number_Range_t(qapi_BLE_GLS_Sequence_Number_Range_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_Date_Time_Range_t(qapi_BLE_GLS_Date_Time_Range_t *Structure);
uint32_t CalcPackedSize_qapi_BLE_GLS_RACP_Response_Code_t(qapi_BLE_GLS_RACP_Response_Code_t *Structure);

/* Pack structure function definitions. */
SerStatus_t PackedWrite_qapi_BLE_GLS_Time_Offset_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Time_Offset_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Concentration_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Concentration_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Sensor_Status_Annunciation_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Sensor_Status_Annunciation_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Glucose_Measurement_Context_Header_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Glucose_Measurement_Context_Header_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Context_Extended_Flags_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Context_Extended_Flags_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Context_Carbohydrate_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Context_Carbohydrate_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Context_Meal_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Context_Meal_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Health_Tester_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Health_Tester_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Context_Exercise_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Context_Exercise_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Context_Medication_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Context_Medication_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Context_HBA1C_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Context_HBA1C_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Sequence_Number_Range_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Sequence_Number_Range_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_Date_Time_Range_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_Date_Time_Range_t *Structure);
SerStatus_t PackedWrite_qapi_BLE_GLS_RACP_Response_Code_t(PackedBuffer_t *Buffer, qapi_BLE_GLS_RACP_Response_Code_t *Structure);

/* Unpack structure function definitions. */
SerStatus_t PackedRead_qapi_BLE_GLS_Time_Offset_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Time_Offset_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Concentration_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Concentration_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Sensor_Status_Annunciation_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Sensor_Status_Annunciation_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Glucose_Measurement_Context_Header_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Glucose_Measurement_Context_Header_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Context_Extended_Flags_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Context_Extended_Flags_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Context_Carbohydrate_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Context_Carbohydrate_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Context_Meal_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Context_Meal_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Health_Tester_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Health_Tester_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Context_Exercise_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Context_Exercise_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Context_Medication_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Context_Medication_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Context_HBA1C_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Context_HBA1C_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Sequence_Number_Range_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Sequence_Number_Range_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_Date_Time_Range_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_Date_Time_Range_t *Structure);
SerStatus_t PackedRead_qapi_BLE_GLS_RACP_Response_Code_t(PackedBuffer_t *Buffer, BufferListEntry_t **BufferList, qapi_BLE_GLS_RACP_Response_Code_t *Structure);

#endif // __QAPI_BLE_GLSTYPES_COMMON_H__
