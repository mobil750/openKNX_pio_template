//--------------------Allgemein---------------------------
#define MAIN_OpenKnxId 0xAE
#define MAIN_ApplicationNumber 0x00
#define MAIN_ApplicationVersion 0x06
#define MAIN_OrderNumber "TD-12-mD-S" //may not work with multiple devices on same hardware or app on different hardware

// Offset: 0, Size: 8 Bit (1 Byte), Text: KNX Startverzögerung
#define PARAM_Start_Delay		0x0000
#define GETPARAM_Start_Delay ((uint)((knx.paramByte(PARAM_Start_Delay))))
// Offset: 1, Size: 1 Bit, Text: Datum anzeigen
#define PARAM_show_Date		0x0001
#define GETPARAM_show_Date knx.paramBit(1, 0)
// Offset: 1, BitOffset: 1, Size: 1 Bit, Text: Uhrzeit anzeigen
#define PARAM_show_Time		0x0001
#define GETPARAM_show_Time knx.paramBit(1, 1)
// Offset: 2, Size: 8 Bit (1 Byte), Text: Debug-Level
#define PARAM_Debug_Level		0x0002
#define GETPARAM_Debug_Level ((uint)((knx.paramByte(PARAM_Debug_Level))))
// Offset: 3, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_1_Number_Values		0x0003
#define GETPARAM_Switch_1_Number_Values ((uint)((knx.paramByte(PARAM_Switch_1_Number_Values))))
// Offset: 4, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_2_Number_Values		0x0004
#define GETPARAM_Switch_2_Number_Values ((uint)((knx.paramByte(PARAM_Switch_2_Number_Values))))
// Offset: 5, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_3_Number_Values		0x0005
#define GETPARAM_Switch_3_Number_Values ((uint)((knx.paramByte(PARAM_Switch_3_Number_Values))))
// Offset: 6, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_4_Number_Values		0x0006
#define GETPARAM_Switch_4_Number_Values ((uint)((knx.paramByte(PARAM_Switch_4_Number_Values))))
// Offset: 7, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_5_Number_Values		0x0007
#define GETPARAM_Switch_5_Number_Values ((uint)((knx.paramByte(PARAM_Switch_5_Number_Values))))
// Offset: 8, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_6_Number_Values		0x0008
#define GETPARAM_Switch_6_Number_Values ((uint)((knx.paramByte(PARAM_Switch_6_Number_Values))))
// Offset: 9, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_7_Number_Values		0x0009
#define GETPARAM_Switch_7_Number_Values ((uint)((knx.paramByte(PARAM_Switch_7_Number_Values))))
// Offset: 10, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_8_Number_Values		0x000A
#define GETPARAM_Switch_8_Number_Values ((uint)((knx.paramByte(PARAM_Switch_8_Number_Values))))
// Offset: 11, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_9_Number_Values		0x000B
#define GETPARAM_Switch_9_Number_Values ((uint)((knx.paramByte(PARAM_Switch_9_Number_Values))))
// Offset: 12, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_10_Number_Values		0x000C
#define GETPARAM_Switch_10_Number_Values ((uint)((knx.paramByte(PARAM_Switch_10_Number_Values))))
// Offset: 13, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_11_Number_Values		0x000D
#define GETPARAM_Switch_11_Number_Values ((uint)((knx.paramByte(PARAM_Switch_11_Number_Values))))
// Offset: 14, Size: 8 Bit (1 Byte), Text: Anzahl Werte
#define PARAM_Switch_12_Number_Values		0x000E
#define GETPARAM_Switch_12_Number_Values ((uint)((knx.paramByte(PARAM_Switch_12_Number_Values))))
// Offset: 15, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_1_Value_1		0x000F
#define GETPARAM_Switch_1_Value_1 ((uint)((knx.paramByte(PARAM_Switch_1_Value_1))))
// Offset: 16, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_1_Value_2		0x0010
#define GETPARAM_Switch_1_Value_2 ((uint)((knx.paramByte(PARAM_Switch_1_Value_2))))
// Offset: 17, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_1_Value_3		0x0011
#define GETPARAM_Switch_1_Value_3 ((uint)((knx.paramByte(PARAM_Switch_1_Value_3))))
// Offset: 18, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_1_Value_4		0x0012
#define GETPARAM_Switch_1_Value_4 ((uint)((knx.paramByte(PARAM_Switch_1_Value_4))))
// Offset: 19, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_2_Value_1		0x0013
#define GETPARAM_Switch_2_Value_1 ((uint)((knx.paramByte(PARAM_Switch_2_Value_1))))
// Offset: 20, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_2_Value_2		0x0014
#define GETPARAM_Switch_2_Value_2 ((uint)((knx.paramByte(PARAM_Switch_2_Value_2))))
// Offset: 21, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_2_Value_3		0x0015
#define GETPARAM_Switch_2_Value_3 ((uint)((knx.paramByte(PARAM_Switch_2_Value_3))))
// Offset: 22, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_2_Value_4		0x0016
#define GETPARAM_Switch_2_Value_4 ((uint)((knx.paramByte(PARAM_Switch_2_Value_4))))
// Offset: 23, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_3_Value_1		0x0017
#define GETPARAM_Switch_3_Value_1 ((uint)((knx.paramByte(PARAM_Switch_3_Value_1))))
// Offset: 24, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_3_Value_2		0x0018
#define GETPARAM_Switch_3_Value_2 ((uint)((knx.paramByte(PARAM_Switch_3_Value_2))))
// Offset: 25, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_3_Value_3		0x0019
#define GETPARAM_Switch_3_Value_3 ((uint)((knx.paramByte(PARAM_Switch_3_Value_3))))
// Offset: 26, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_3_Value_4		0x001A
#define GETPARAM_Switch_3_Value_4 ((uint)((knx.paramByte(PARAM_Switch_3_Value_4))))
// Offset: 27, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_4_Value_1		0x001B
#define GETPARAM_Switch_4_Value_1 ((uint)((knx.paramByte(PARAM_Switch_4_Value_1))))
// Offset: 28, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_4_Value_2		0x001C
#define GETPARAM_Switch_4_Value_2 ((uint)((knx.paramByte(PARAM_Switch_4_Value_2))))
// Offset: 29, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_4_Value_3		0x001D
#define GETPARAM_Switch_4_Value_3 ((uint)((knx.paramByte(PARAM_Switch_4_Value_3))))
// Offset: 30, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_4_Value_4		0x001E
#define GETPARAM_Switch_4_Value_4 ((uint)((knx.paramByte(PARAM_Switch_4_Value_4))))
// Offset: 31, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_5_Value_1		0x001F
#define GETPARAM_Switch_5_Value_1 ((uint)((knx.paramByte(PARAM_Switch_5_Value_1))))
// Offset: 32, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_5_Value_2		0x0020
#define GETPARAM_Switch_5_Value_2 ((uint)((knx.paramByte(PARAM_Switch_5_Value_2))))
// Offset: 33, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_5_Value_3		0x0021
#define GETPARAM_Switch_5_Value_3 ((uint)((knx.paramByte(PARAM_Switch_5_Value_3))))
// Offset: 34, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_5_Value_4		0x0022
#define GETPARAM_Switch_5_Value_4 ((uint)((knx.paramByte(PARAM_Switch_5_Value_4))))
// Offset: 35, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_6_Value_1		0x0023
#define GETPARAM_Switch_6_Value_1 ((uint)((knx.paramByte(PARAM_Switch_6_Value_1))))
// Offset: 36, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_6_Value_2		0x0024
#define GETPARAM_Switch_6_Value_2 ((uint)((knx.paramByte(PARAM_Switch_6_Value_2))))
// Offset: 37, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_6_Value_3		0x0025
#define GETPARAM_Switch_6_Value_3 ((uint)((knx.paramByte(PARAM_Switch_6_Value_3))))
// Offset: 38, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_6_Value_4		0x0026
#define GETPARAM_Switch_6_Value_4 ((uint)((knx.paramByte(PARAM_Switch_6_Value_4))))
// Offset: 39, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_7_Value_1		0x0027
#define GETPARAM_Switch_7_Value_1 ((uint)((knx.paramByte(PARAM_Switch_7_Value_1))))
// Offset: 40, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_7_Value_2		0x0028
#define GETPARAM_Switch_7_Value_2 ((uint)((knx.paramByte(PARAM_Switch_7_Value_2))))
// Offset: 41, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_7_Value_3		0x0029
#define GETPARAM_Switch_7_Value_3 ((uint)((knx.paramByte(PARAM_Switch_7_Value_3))))
// Offset: 42, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_7_Value_4		0x002A
#define GETPARAM_Switch_7_Value_4 ((uint)((knx.paramByte(PARAM_Switch_7_Value_4))))
// Offset: 43, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_8_Value_1		0x002B
#define GETPARAM_Switch_8_Value_1 ((uint)((knx.paramByte(PARAM_Switch_8_Value_1))))
// Offset: 44, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_8_Value_2		0x002C
#define GETPARAM_Switch_8_Value_2 ((uint)((knx.paramByte(PARAM_Switch_8_Value_2))))
// Offset: 45, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_8_Value_3		0x002D
#define GETPARAM_Switch_8_Value_3 ((uint)((knx.paramByte(PARAM_Switch_8_Value_3))))
// Offset: 46, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_8_Value_4		0x002E
#define GETPARAM_Switch_8_Value_4 ((uint)((knx.paramByte(PARAM_Switch_8_Value_4))))
// Offset: 47, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_9_Value_1		0x002F
#define GETPARAM_Switch_9_Value_1 ((uint)((knx.paramByte(PARAM_Switch_9_Value_1))))
// Offset: 48, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_9_Value_2		0x0030
#define GETPARAM_Switch_9_Value_2 ((uint)((knx.paramByte(PARAM_Switch_9_Value_2))))
// Offset: 49, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_9_Value_3		0x0031
#define GETPARAM_Switch_9_Value_3 ((uint)((knx.paramByte(PARAM_Switch_9_Value_3))))
// Offset: 50, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_9_Value_4		0x0032
#define GETPARAM_Switch_9_Value_4 ((uint)((knx.paramByte(PARAM_Switch_9_Value_4))))
// Offset: 51, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_10_Value_1		0x0033
#define GETPARAM_Switch_10_Value_1 ((uint)((knx.paramByte(PARAM_Switch_10_Value_1))))
// Offset: 52, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_10_Value_2		0x0034
#define GETPARAM_Switch_10_Value_2 ((uint)((knx.paramByte(PARAM_Switch_10_Value_2))))
// Offset: 53, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_10_Value_3		0x0035
#define GETPARAM_Switch_10_Value_3 ((uint)((knx.paramByte(PARAM_Switch_10_Value_3))))
// Offset: 54, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_10_Value_4		0x0036
#define GETPARAM_Switch_10_Value_4 ((uint)((knx.paramByte(PARAM_Switch_10_Value_4))))
// Offset: 55, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_11_Value_1		0x0037
#define GETPARAM_Switch_11_Value_1 ((uint)((knx.paramByte(PARAM_Switch_11_Value_1))))
// Offset: 56, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_11_Value_2		0x0038
#define GETPARAM_Switch_11_Value_2 ((uint)((knx.paramByte(PARAM_Switch_11_Value_2))))
// Offset: 57, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_11_Value_3		0x0039
#define GETPARAM_Switch_11_Value_3 ((uint)((knx.paramByte(PARAM_Switch_11_Value_3))))
// Offset: 58, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_11_Value_4		0x003A
#define GETPARAM_Switch_11_Value_4 ((uint)((knx.paramByte(PARAM_Switch_11_Value_4))))
// Offset: 59, Size: 8 Bit (1 Byte), Text: Wert 1
#define PARAM_Switch_12_Value_1		0x003B
#define GETPARAM_Switch_12_Value_1 ((uint)((knx.paramByte(PARAM_Switch_12_Value_1))))
// Offset: 60, Size: 8 Bit (1 Byte), Text: Wert 2
#define PARAM_Switch_12_Value_2		0x003C
#define GETPARAM_Switch_12_Value_2 ((uint)((knx.paramByte(PARAM_Switch_12_Value_2))))
// Offset: 61, Size: 8 Bit (1 Byte), Text: Wert 3
#define PARAM_Switch_12_Value_3		0x003D
#define GETPARAM_Switch_12_Value_3 ((uint)((knx.paramByte(PARAM_Switch_12_Value_3))))
// Offset: 62, Size: 8 Bit (1 Byte), Text: Wert 4
#define PARAM_Switch_12_Value_4		0x003E
#define GETPARAM_Switch_12_Value_4 ((uint)((knx.paramByte(PARAM_Switch_12_Value_4))))
// Offset: 63, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_1_Type		0x003F
#define GETPARAM_Switch_1_Type ((uint)((knx.paramByte(PARAM_Switch_1_Type))))
// Offset: 64, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_2_Type		0x0040
#define GETPARAM_Switch_2_Type ((uint)((knx.paramByte(PARAM_Switch_2_Type))))
// Offset: 65, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_3_Type		0x0041
#define GETPARAM_Switch_3_Type ((uint)((knx.paramByte(PARAM_Switch_3_Type))))
// Offset: 66, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_4_Type		0x0042
#define GETPARAM_Switch_4_Type ((uint)((knx.paramByte(PARAM_Switch_4_Type))))
// Offset: 67, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_5_Type		0x0043
#define GETPARAM_Switch_5_Type ((uint)((knx.paramByte(PARAM_Switch_5_Type))))
// Offset: 68, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_6_Type		0x0044
#define GETPARAM_Switch_6_Type ((uint)((knx.paramByte(PARAM_Switch_6_Type))))
// Offset: 69, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_7_Type		0x0045
#define GETPARAM_Switch_7_Type ((uint)((knx.paramByte(PARAM_Switch_7_Type))))
// Offset: 70, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_8_Type		0x0046
#define GETPARAM_Switch_8_Type ((uint)((knx.paramByte(PARAM_Switch_8_Type))))
// Offset: 71, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_9_Type		0x0047
#define GETPARAM_Switch_9_Type ((uint)((knx.paramByte(PARAM_Switch_9_Type))))
// Offset: 72, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_10_Type		0x0048
#define GETPARAM_Switch_10_Type ((uint)((knx.paramByte(PARAM_Switch_10_Type))))
// Offset: 73, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_11_Type		0x0049
#define GETPARAM_Switch_11_Type ((uint)((knx.paramByte(PARAM_Switch_11_Type))))
// Offset: 74, Size: 8 Bit (1 Byte), Text: Funktion
#define PARAM_Switch_12_Type		0x004A
#define GETPARAM_Switch_12_Type ((uint)((knx.paramByte(PARAM_Switch_12_Type))))
// Offset: 75, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_1_Info_1		0x004B
#define GETPARAM_Switch_1_Info_1 knx.paramData(75)
// Offset: 89, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_2_Info_1		0x0059
#define GETPARAM_Switch_2_Info_1 knx.paramData(89)
// Offset: 103, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_3_Info_1		0x0067
#define GETPARAM_Switch_3_Info_1 knx.paramData(103)
// Offset: 117, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_4_Info_1		0x0075
#define GETPARAM_Switch_4_Info_1 knx.paramData(117)
// Offset: 131, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_5_Info_1		0x0083
#define GETPARAM_Switch_5_Info_1 knx.paramData(131)
// Offset: 145, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_6_Info_1		0x0091
#define GETPARAM_Switch_6_Info_1 knx.paramData(145)
// Offset: 159, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_7_Info_1		0x009F
#define GETPARAM_Switch_7_Info_1 knx.paramData(159)
// Offset: 173, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_8_Info_1		0x00AD
#define GETPARAM_Switch_8_Info_1 knx.paramData(173)
// Offset: 187, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_9_Info_1		0x00BB
#define GETPARAM_Switch_9_Info_1 knx.paramData(187)
// Offset: 201, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_10_Info_1		0x00C9
#define GETPARAM_Switch_10_Info_1 knx.paramData(201)
// Offset: 215, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_11_Info_1		0x00D7
#define GETPARAM_Switch_11_Info_1 knx.paramData(215)
// Offset: 229, Size: 112 Bit (14 Byte), Text: Info 1
#define PARAM_Switch_12_Info_1		0x00E5
#define GETPARAM_Switch_12_Info_1 knx.paramData(229)
// Offset: 243, Size: 8 Bit (1 Byte), Text: Inkrement alle
#define PARAM_Heartbeat_Periode		0x00F3
#define GETPARAM_Heartbeat_Periode ((uint)((knx.paramByte(PARAM_Heartbeat_Periode))))
// Offset: 1, BitOffset: 2, Size: 1 Bit, Text: Heartbeat Signal
#define PARAM_Debug_Heartbeat		0x0001
#define GETPARAM_Debug_Heartbeat knx.paramBit(1, 2)
// Offset: 1, BitOffset: 3, Size: 1 Bit, Text: Präsenz
#define PARAM_Presence		0x0001
#define GETPARAM_Presence knx.paramBit(1, 3)
// Offset: 1, BitOffset: 4, Size: 1 Bit, Text: Sensoren
#define PARAM_Sensoren		0x0001
#define GETPARAM_Sensoren knx.paramBit(1, 4)
// Offset: 1, BitOffset: 5, Size: 1 Bit, Text: Tag = 1 (Nacht = 0)
#define PARAM_Day_Coding		0x0001
#define GETPARAM_Day_Coding knx.paramBit(1, 5)
// Offset: 1, BitOffset: 6, Size: 1 Bit, Text: Temperatursensor
#define PARAM_Temperatur		0x0001
#define GETPARAM_Temperatur knx.paramBit(1, 6)
// Offset: 1, BitOffset: 7, Size: 1 Bit, Text: Taupunktberechnung
#define PARAM_Taupunkt		0x0001
#define GETPARAM_Taupunkt knx.paramBit(1, 7)
// Offset: 244, Size: 1 Bit, Text: Luftfeuchte
#define PARAM_Luftfeuchte		0x00F4
#define GETPARAM_Luftfeuchte knx.paramBit(244, 0)
// Offset: 244, BitOffset: 1, Size: 1 Bit, Text: Luftdruck
#define PARAM_Luftdruck		0x00F4
#define GETPARAM_Luftdruck knx.paramBit(244, 1)
// Offset: 245, Size: 16 Bit (2 Byte), Text: Messung alle
#define PARAM_Sensor_Messperiode_Temperatur		0x00F5
#define GETPARAM_Sensor_Messperiode_Temperatur ((uint)((knx.paramWord(PARAM_Sensor_Messperiode_Temperatur))))
// Offset: 247, Size: 16 Bit (2 Byte), Text: Messung alle
#define PARAM_Sensor_Messperiode_Taupunkt		0x00F7
#define GETPARAM_Sensor_Messperiode_Taupunkt ((uint)((knx.paramWord(PARAM_Sensor_Messperiode_Taupunkt))))
// Offset: 249, Size: 16 Bit (2 Byte), Text: Messung alle
#define PARAM_Sensor_Messperiode_Luftfeuchte		0x00F9
#define GETPARAM_Sensor_Messperiode_Luftfeuchte ((uint)((knx.paramWord(PARAM_Sensor_Messperiode_Luftfeuchte))))
// Offset: 251, Size: 16 Bit (2 Byte), Text: Messung alle
#define PARAM_Sensor_Messperiode_Luftdruck		0x00FB
#define GETPARAM_Sensor_Messperiode_Luftdruck ((uint)((knx.paramWord(PARAM_Sensor_Messperiode_Luftdruck))))
// Offset: 244, BitOffset: 2, Size: 1 Bit, Text: Temperatur anzeigen
#define PARAM_show_Temperatur		0x00F4
#define GETPARAM_show_Temperatur knx.paramBit(244, 2)
// Offset: 244, BitOffset: 3, Size: 1 Bit, Text: Luftfeuchte anzeigen
#define PARAM_show_Humidity		0x00F4
#define GETPARAM_show_Humidity knx.paramBit(244, 3)
// Offset: 244, BitOffset: 4, Size: 1 Bit, Text: Luftdruck anzeigen
#define PARAM_show_Pressure		0x00F4
#define GETPARAM_show_Pressure knx.paramBit(244, 4)
// Offset: 253, Size: 16 Bit (2 Byte), Text: Offset_Temperatur
#define PARAM_Offset_Temperatur		0x00FD
#define GETPARAM_Offset_Temperatur knx.paramFloat(253, Float_Enc_DPT9)
// Offset: 255, Size: 16 Bit (2 Byte), Text: Offset_Luftfeuchte
#define PARAM_Offset_Luftfeuchte		0x00FF
#define GETPARAM_Offset_Luftfeuchte knx.paramFloat(255, Float_Enc_DPT9)
// Offset: 257, Size: 16 Bit (2 Byte), Text: Offset_Temperatur
#define PARAM_Offset_Luftdruck		0x0101
#define GETPARAM_Offset_Luftdruck ((uint)((knx.paramWord(PARAM_Offset_Luftdruck))))
// Offset: 259, Size: 8 Bit (1 Byte), Text: Aktivzeit Info 1
#define PARAM_Dauer_Info_1		0x0103
#define GETPARAM_Dauer_Info_1 ((uint)((knx.paramByte(PARAM_Dauer_Info_1))))
// Offset: 260, Size: 8 Bit (1 Byte), Text: Aktivzeit Info 2
#define PARAM_Dauer_Info_2		0x0104
#define GETPARAM_Dauer_Info_2 ((uint)((knx.paramByte(PARAM_Dauer_Info_2))))
// Offset: 261, Size: 8 Bit (1 Byte), Text: Schalter Nr.
#define PARAM_Button_Info_1		0x0105
#define GETPARAM_Button_Info_1 ((int)((knx.paramByte(PARAM_Button_Info_1))))
// Offset: 262, Size: 8 Bit (1 Byte), Text: Schalter Nr. 
#define PARAM_Button_Info_2		0x0106
#define GETPARAM_Button_Info_2 ((int)((knx.paramByte(PARAM_Button_Info_2))))
// Offset: 244, BitOffset: 5, Size: 1 Bit, Text: Schalter Info 1 anzeigen
#define PARAM_show_Info_1		0x00F4
#define GETPARAM_show_Info_1 knx.paramBit(244, 5)
// Offset: 244, BitOffset: 6, Size: 1 Bit, Text: Schalter Info 2 anzeigen
#define PARAM_show_Info_2		0x00F4
#define GETPARAM_show_Info_2 knx.paramBit(244, 6)
// Offset: 263, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_1_Info_2		0x0107
#define GETPARAM_Switch_1_Info_2 knx.paramData(263)
// Offset: 277, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_2_Info_2		0x0115
#define GETPARAM_Switch_2_Info_2 knx.paramData(277)
// Offset: 291, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_3_Info_2		0x0123
#define GETPARAM_Switch_3_Info_2 knx.paramData(291)
// Offset: 305, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_4_Info_2		0x0131
#define GETPARAM_Switch_4_Info_2 knx.paramData(305)
// Offset: 319, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_5_Info_2		0x013F
#define GETPARAM_Switch_5_Info_2 knx.paramData(319)
// Offset: 333, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_6_Info_2		0x014D
#define GETPARAM_Switch_6_Info_2 knx.paramData(333)
// Offset: 347, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_7_Info_2		0x015B
#define GETPARAM_Switch_7_Info_2 knx.paramData(347)
// Offset: 361, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_8_Info_2		0x0169
#define GETPARAM_Switch_8_Info_2 knx.paramData(361)
// Offset: 375, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_9_Info_2		0x0177
#define GETPARAM_Switch_9_Info_2 knx.paramData(375)
// Offset: 389, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_10_Info_2		0x0185
#define GETPARAM_Switch_10_Info_2 knx.paramData(389)
// Offset: 403, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_11_Info_2		0x0193
#define GETPARAM_Switch_11_Info_2 knx.paramData(403)
// Offset: 417, Size: 112 Bit (14 Byte), Text: Info 2
#define PARAM_Switch_12_Info_2		0x01A1
#define GETPARAM_Switch_12_Info_2 knx.paramData(417)
// Offset: 244, BitOffset: 7, Size: 1 Bit, Text: Zentrale Funktionen
#define PARAM_Zentrale_Funktionen		0x00F4
#define GETPARAM_Zentrale_Funktionen knx.paramBit(244, 7)
// Offset: 431, Size: 1 Bit, Text: Tag / Nacht
#define PARAM_Tag_Nacht		0x01AF
#define GETPARAM_Tag_Nacht knx.paramBit(431, 0)
// Offset: 431, BitOffset: 1, Size: 1 Bit, Text: Timestamps aktivieren
#define PARAM_Debug_Timestamps		0x01AF
#define GETPARAM_Debug_Timestamps knx.paramBit(431, 1)
// Offset: 431, BitOffset: 2, Size: 1 Bit, Text: Timestamp formatieren
#define PARAM_Debug_Format_Timestamp		0x01AF
#define GETPARAM_Debug_Format_Timestamp knx.paramBit(431, 2)
#define COMOBJ_Switch_1 	10	//!< Number: 10, Text: Schalten, Function: T1: Schalten
#define COMOBJ_Dim_1 	11	//!< Number: 11, Text: Dimmen, Function: T1: Dim-Wert in %
#define COMOBJ_State_1 	12	//!< Number: 12, Text: Status, Function: T1: Wert für Umschalten
#define COMOBJ_Switch_2 	15	//!< Number: 15, Text: Schalten, Function: T2: Schalten
#define COMOBJ_Dim_2 	16	//!< Number: 16, Text: Dimmen, Function: T2: Dim-Wert in %
#define COMOBJ_State_2 	17	//!< Number: 17, Text: Status, Function: T2: Wert für Umschalten
#define COMOBJ_Switch_3 	20	//!< Number: 20, Text: Schalten, Function: T3: Schalten
#define COMOBJ_Dim_3 	21	//!< Number: 21, Text: Dimmen, Function: T3: Dim-Wert in %
#define COMOBJ_State_3 	22	//!< Number: 22, Text: Status, Function: T3: Wert für Umschalten
#define COMOBJ_Switch_4 	25	//!< Number: 25, Text: Schalten, Function: T4: Schalten
#define COMOBJ_Dim_4 	26	//!< Number: 26, Text: Dimmen, Function: T4: Dim-Wert in %
#define COMOBJ_State_4 	27	//!< Number: 27, Text: Status, Function: T4: Wert für Umschalten
#define COMOBJ_Switch_5 	30	//!< Number: 30, Text: Schalten, Function: T5: Schalten
#define COMOBJ_Dim_5 	31	//!< Number: 31, Text: Dimmen, Function: T5: Dim-Wert in %
#define COMOBJ_State_5 	32	//!< Number: 32, Text: Status, Function: T5: Wert für Umschalten
#define COMOBJ_Switch_6 	35	//!< Number: 35, Text: Schalten, Function: T6: Schalten
#define COMOBJ_Dim_6 	36	//!< Number: 36, Text: Dimmen, Function: T6: Dim-Wert in %
#define COMOBJ_State_6 	37	//!< Number: 37, Text: Status, Function: T6: Wert für Umschalten
#define COMOBJ_Switch_7 	40	//!< Number: 40, Text: Schalten, Function: T7: Schalten
#define COMOBJ_Dim_7 	41	//!< Number: 41, Text: Dimmen, Function: T7: Dim-Wert in %
#define COMOBJ_State_7 	42	//!< Number: 42, Text: Status, Function: T7: Wert für Umschalten
#define COMOBJ_Switch_8 	45	//!< Number: 45, Text: Schalten, Function: T8: Schalten
#define COMOBJ_Dim_8 	46	//!< Number: 46, Text: Dimmen, Function: T8: Dim-Wert in %
#define COMOBJ_State_8 	47	//!< Number: 47, Text: Status, Function: T8: Wert für Umschalten
#define COMOBJ_Switch_9 	50	//!< Number: 50, Text: Schalten, Function: T9: Schalten
#define COMOBJ_Dim_9 	51	//!< Number: 51, Text: Dimmen, Function: T9: Dim-Wert in %
#define COMOBJ_State_9 	52	//!< Number: 52, Text: Status, Function: T9: Wert für Umschalten
#define COMOBJ_Switch_10 	55	//!< Number: 55, Text: Schalten, Function: T10: Schalten
#define COMOBJ_Dim_10 	56	//!< Number: 56, Text: Dimmen, Function: T10: Dim-Wert in %
#define COMOBJ_State_10 	57	//!< Number: 57, Text: Status, Function: T10: Wert für Umschalten
#define COMOBJ_Switch_11 	60	//!< Number: 60, Text: Schalten, Function: T11: Schalten
#define COMOBJ_Dim_11 	61	//!< Number: 61, Text: Dimmen, Function: T11: Dim-Wert in %
#define COMOBJ_State_11 	62	//!< Number: 62, Text: Status, Function: T11: Wert für Umschalten
#define COMOBJ_Switch_12 	65	//!< Number: 65, Text: Schalten, Function: T12: Schalten
#define COMOBJ_Dim_12 	66	//!< Number: 66, Text: Dimmen, Function: T12: Dim-Wert in %
#define COMOBJ_State_12 	67	//!< Number: 67, Text: Status, Function: T12: Wert für Umschalten
#define COMOBJ_Heartbeat_Counter 	0	//!< Number: 0, Text: Heartbeat-Zähler, Function: Funktionsüberwachung
#define COMOBJ_Temperatur 	1	//!< Number: 1, Text: Temperatur, Function: Temperatur
#define COMOBJ_Taupunkt_Temperatur 	2	//!< Number: 2, Text: Taupunkt Temperatur, Function: Taupunkt Temperatur
#define COMOBJ_Luftfeuchte 	3	//!< Number: 3, Text: Luftfeuchte, Function: Luftfeuchte
#define COMOBJ_Luftdruck 	4	//!< Number: 4, Text: Luftdruck, Function: Luftdruck
#define COMOBJ_Datum 	5	//!< Number: 5, Text: Datum, Function: Datum
#define COMOBJ_Zeit 	6	//!< Number: 6, Text: Uhrzeit, Function: Uhrzeit
#define COMOBJ_Tag_Nacht 	7	//!< Number: 7, Text: Tag/Nacht, Function: Tag/Nacht
#define COMOBJ_Presence 	8	//!< Number: 8, Text: Presence, Function: Presence
