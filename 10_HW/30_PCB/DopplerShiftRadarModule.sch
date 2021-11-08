EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Dopplershift Radar Module"
Date "2020-05-15"
Rev "v1.4"
Comp "hda / Stud"
Comment1 "Aadarsh Kumar Singh"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Label 6950 5750 0    50   ~ 0
VCC
Text Label 7100 4950 0    50   ~ 0
VOUT
Wire Wire Line
	7350 4950 7100 4950
Wire Wire Line
	6900 5750 7350 5750
NoConn ~ 9950 5850
NoConn ~ 9950 5750
NoConn ~ 9950 5550
NoConn ~ 9950 5450
NoConn ~ 9950 5350
NoConn ~ 9950 5250
NoConn ~ 9950 5150
NoConn ~ 9950 5050
NoConn ~ 9950 4850
NoConn ~ 9950 4750
NoConn ~ 9950 4650
NoConn ~ 9950 4550
NoConn ~ 9950 4450
NoConn ~ 9950 4350
NoConn ~ 9950 3850
NoConn ~ 9950 3750
NoConn ~ 7350 3750
NoConn ~ 7350 3850
NoConn ~ 7350 4050
NoConn ~ 7350 4150
NoConn ~ 7350 4450
NoConn ~ 7350 4550
NoConn ~ 7350 4650
NoConn ~ 7350 4750
NoConn ~ 7350 4850
NoConn ~ 7350 5050
NoConn ~ 7350 5650
NoConn ~ 7350 5850
Wire Wire Line
	10100 1450 10250 1450
$Comp
L Device:R R8
U 1 1 5EC65AD1
P 9950 1450
F 0 "R8" V 9750 1450 50  0000 C CNN
F 1 "220" V 9850 1450 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 9880 1450 50  0001 C CNN
F 3 "~" H 9950 1450 50  0001 C CNN
	1    9950 1450
	0    1    1    0   
$EndComp
Wire Wire Line
	10100 2250 10250 2250
$Comp
L Arduino_Shield:Arduino_Uno_Shield XA1
U 1 1 5EC2047A
P 8650 4800
F 0 "XA1" H 8650 6187 60  0000 C CNN
F 1 "Uno_Shield" H 8650 6081 60  0000 C CNN
F 2 "Arduino_SDHD:Arduino_Uno_Shield" H 10450 8550 60  0001 C CNN
F 3 "https://store.arduino.cc/arduino-uno-rev3" H 10450 8550 60  0001 C CNN
	1    8650 4800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R10
U 1 1 5EC6524A
P 9950 2250
F 0 "R10" V 9750 2250 50  0000 C CNN
F 1 "220" V 9850 2250 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 9880 2250 50  0001 C CNN
F 3 "~" H 9950 2250 50  0001 C CNN
	1    9950 2250
	0    1    1    0   
$EndComp
Wire Wire Line
	4550 4300 3150 4300
Connection ~ 3150 4300
Wire Wire Line
	2350 4300 2500 4300
Connection ~ 2350 4300
Wire Wire Line
	2350 4300 2350 4200
$Comp
L Connector_Generic:Conn_01x01 J4
U 1 1 5EF07664
P 2350 4000
F 0 "J4" V 2400 3800 50  0000 L CNN
F 1 "TP_VCM" V 2300 3600 50  0000 L CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 2350 4000 50  0001 C CNN
F 3 "~" H 2350 4000 50  0001 C CNN
	1    2350 4000
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3450 5500 3650 5500
$Comp
L Connector_Generic:Conn_01x01 J5
U 1 1 5EF04DCF
P 3850 5500
F 0 "J5" H 3950 5450 50  0000 L CNN
F 1 "FILTER_1" H 3800 5350 50  0000 L CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 3850 5500 50  0001 C CNN
F 3 "~" H 3850 5500 50  0001 C CNN
	1    3850 5500
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR02
U 1 1 5EAE2D9F
P 2050 3700
F 0 "#PWR02" H 2050 3550 50  0001 C CNN
F 1 "VCC" H 2067 3873 50  0000 C CNN
F 2 "" H 2050 3700 50  0001 C CNN
F 3 "" H 2050 3700 50  0001 C CNN
	1    2050 3700
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5EADDE70
P 2050 4050
F 0 "R1" H 2120 4096 50  0000 L CNN
F 1 "1k" H 2120 4005 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 1980 4050 50  0001 C CNN
F 3 "~" H 2050 4050 50  0001 C CNN
	1    2050 4050
	1    0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 5EADE31A
P 2050 4550
F 0 "R2" H 2120 4596 50  0000 L CNN
F 1 "1k" H 2120 4505 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 1980 4550 50  0001 C CNN
F 3 "~" H 2050 4550 50  0001 C CNN
	1    2050 4550
	1    0    0    -1  
$EndComp
$Comp
L Device:R R5
U 1 1 5EB36906
P 4250 4850
F 0 "R5" V 4043 4850 50  0000 C CNN
F 1 "2.2k" V 4134 4850 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4180 4850 50  0001 C CNN
F 3 "~" H 4250 4850 50  0001 C CNN
	1    4250 4850
	0    1    1    0   
$EndComp
$Comp
L Device:R R3
U 1 1 5EB38D52
P 2350 5600
F 0 "R3" V 2450 5600 50  0000 C CNN
F 1 "2.2k" V 2550 5600 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2280 5600 50  0001 C CNN
F 3 "~" H 2350 5600 50  0001 C CNN
	1    2350 5600
	0    1    1    0   
$EndComp
$Comp
L Device:CP C1
U 1 1 5EB39063
P 1550 5600
F 0 "C1" V 1800 5600 50  0000 C CNN
F 1 "4.7u" V 1700 5600 50  0000 C CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.00mm" H 1588 5450 50  0001 C CNN
F 3 "~" H 1550 5600 50  0001 C CNN
	1    1550 5600
	0    1    1    0   
$EndComp
$Comp
L Device:C C3
U 1 1 5EB399A6
P 3100 6250
F 0 "C3" V 3250 6250 50  0000 C CNN
F 1 "1.5n" V 3350 6250 50  0000 C CNN
F 2 "Capacitor_THT:C_Rect_L7.2mm_W4.5mm_P5.00mm_FKS2_FKP2_MKS2_MKP2" H 3138 6100 50  0001 C CNN
F 3 "~" H 3100 6250 50  0001 C CNN
	1    3100 6250
	0    1    1    0   
$EndComp
$Comp
L Device:R R4
U 1 1 5EB3A807
P 3100 5950
F 0 "R4" V 2893 5950 50  0000 C CNN
F 1 "220k" V 2984 5950 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 3030 5950 50  0001 C CNN
F 3 "~" H 3100 5950 50  0001 C CNN
	1    3100 5950
	0    1    1    0   
$EndComp
$Comp
L Device:C C4
U 1 1 5EB8410A
P 3150 4650
F 0 "C4" H 2900 4750 50  0000 L CNN
F 1 "100n" H 2850 4650 50  0000 L CNN
F 2 "Capacitor_THT:C_Rect_L7.2mm_W2.5mm_P5.00mm_FKS2_FKP2_MKS2_MKP2" H 3188 4500 50  0001 C CNN
F 3 "~" H 3150 4650 50  0001 C CNN
	1    3150 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 5950 3250 5950
Wire Wire Line
	4400 4850 4500 4850
$Comp
L Device:R R6
U 1 1 5EB869CA
P 4900 5100
F 0 "R6" V 4693 5100 50  0000 C CNN
F 1 "100k" V 4784 5100 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 4830 5100 50  0001 C CNN
F 3 "~" H 4900 5100 50  0001 C CNN
	1    4900 5100
	0    1    1    0   
$EndComp
Wire Wire Line
	5050 5100 5350 5100
Wire Wire Line
	5350 5100 5350 4750
Connection ~ 5350 5100
Wire Wire Line
	4500 5450 4500 5100
Wire Wire Line
	4750 5100 4500 5100
Wire Wire Line
	3450 5950 3450 6250
Connection ~ 3450 5950
Wire Wire Line
	2650 6250 2650 5950
Wire Wire Line
	2950 5950 2650 5950
Wire Wire Line
	2500 5600 2650 5600
Wire Wire Line
	1700 5600 2200 5600
Wire Wire Line
	2050 4200 2050 4300
Connection ~ 2050 4300
Wire Wire Line
	2050 4300 2050 4400
Wire Wire Line
	3150 4300 3150 4500
Wire Wire Line
	2050 4300 2350 4300
Wire Wire Line
	2700 5400 2500 5400
Wire Wire Line
	2500 5400 2500 4300
Connection ~ 2500 4300
Wire Wire Line
	2500 4300 3150 4300
Wire Wire Line
	4550 4650 4550 4300
Wire Wire Line
	5150 4750 5350 4750
$Comp
L power:GNDA #PWR06
U 1 1 5EBA7996
P 3150 4900
F 0 "#PWR06" H 3150 4650 50  0001 C CNN
F 1 "GNDA" H 3000 4900 50  0000 C CNN
F 2 "" H 3150 4900 50  0001 C CNN
F 3 "" H 3150 4900 50  0001 C CNN
	1    3150 4900
	1    0    0    -1  
$EndComp
Wire Wire Line
	3150 4800 3150 4900
Wire Wire Line
	2050 4700 2050 4950
Wire Wire Line
	2050 3700 2050 3900
$Comp
L Device:CP C2
U 1 1 5EAE1F96
P 1750 4600
F 0 "C2" H 1500 4700 50  0000 L CNN
F 1 "22u" H 1500 4600 50  0000 L CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.00mm" H 1788 4450 50  0001 C CNN
F 3 "~" H 1750 4600 50  0001 C CNN
	1    1750 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	1750 4450 1750 4300
Wire Wire Line
	1750 4750 1750 4950
$Comp
L power:GNDA #PWR04
U 1 1 5EBAACE5
P 1750 4950
F 0 "#PWR04" H 1750 4700 50  0001 C CNN
F 1 "GNDA" H 1600 4950 50  0000 C CNN
F 2 "" H 1750 4950 50  0001 C CNN
F 3 "" H 1750 4950 50  0001 C CNN
	1    1750 4950
	1    0    0    -1  
$EndComp
$Comp
L power:GNDA #PWR05
U 1 1 5EBAB9AD
P 2050 4950
F 0 "#PWR05" H 2050 4700 50  0001 C CNN
F 1 "GNDA" H 2200 4950 50  0000 C CNN
F 2 "" H 2050 4950 50  0001 C CNN
F 3 "" H 2050 4950 50  0001 C CNN
	1    2050 4950
	1    0    0    -1  
$EndComp
Wire Wire Line
	1750 4300 2050 4300
Wire Wire Line
	4750 5450 4500 5450
$Comp
L Device:C C6
U 1 1 5EB86E16
P 4900 5450
F 0 "C6" V 4648 5450 50  0000 C CNN
F 1 "3.3n" V 4739 5450 50  0000 C CNN
F 2 "Capacitor_THT:C_Rect_L7.2mm_W4.5mm_P5.00mm_FKS2_FKP2_MKS2_MKP2" H 4938 5300 50  0001 C CNN
F 3 "~" H 4900 5450 50  0001 C CNN
	1    4900 5450
	0    1    1    0   
$EndComp
Wire Wire Line
	5350 5450 5350 5100
Wire Wire Line
	5050 5450 5350 5450
Wire Wire Line
	3300 5500 3450 5500
Wire Wire Line
	3450 5500 3450 5950
$Comp
L Device:CP C5
U 1 1 5EB3781B
P 3750 4850
F 0 "C5" V 4005 4850 50  0000 C CNN
F 1 "4.7u" V 3914 4850 50  0000 C CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.00mm" H 3788 4700 50  0001 C CNN
F 3 "~" H 3750 4850 50  0001 C CNN
	1    3750 4850
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3450 5500 3450 4850
Wire Wire Line
	3450 4850 3600 4850
Connection ~ 3450 5500
Wire Wire Line
	3900 4850 4100 4850
Wire Wire Line
	2950 6250 2650 6250
Wire Wire Line
	3450 6250 3250 6250
Wire Wire Line
	1400 5600 950  5600
Text Label 1000 5600 0    50   ~ 0
VIN
Wire Wire Line
	5800 5250 5800 5400
$Comp
L power:VCC #PWR01
U 1 1 5EB808DD
P 5800 5250
F 0 "#PWR01" H 5800 5100 50  0001 C CNN
F 1 "VCC" H 5817 5423 50  0000 C CNN
F 2 "" H 5800 5250 50  0001 C CNN
F 3 "" H 5800 5250 50  0001 C CNN
	1    5800 5250
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 6000 5800 6150
$Comp
L power:GNDA #PWR03
U 1 1 5EB99455
P 5800 6150
F 0 "#PWR03" H 5800 5900 50  0001 C CNN
F 1 "GNDA" H 5650 6150 50  0000 C CNN
F 2 "" H 5800 6150 50  0001 C CNN
F 3 "" H 5800 6150 50  0001 C CNN
	1    5800 6150
	1    0    0    -1  
$EndComp
Connection ~ 5350 4750
$Comp
L Connector_Generic:Conn_01x01 J1
U 1 1 5EBB4C92
P 5900 4400
F 0 "J1" V 6100 4350 50  0000 L CNN
F 1 "FILTER_2" V 6000 4200 50  0000 L CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 5900 4400 50  0001 C CNN
F 3 "~" H 5900 4400 50  0001 C CNN
	1    5900 4400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5350 4750 5500 4750
$Comp
L Device:R R7
U 1 1 5EB87A42
P 5650 4750
F 0 "R7" V 5443 4750 50  0000 C CNN
F 1 "100" V 5534 4750 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 5580 4750 50  0001 C CNN
F 3 "~" H 5650 4750 50  0001 C CNN
	1    5650 4750
	0    1    1    0   
$EndComp
Wire Wire Line
	5900 4600 5900 4750
Wire Wire Line
	5800 4750 5900 4750
Connection ~ 5900 4750
Text Label 6000 4750 0    50   ~ 0
VOUT
Wire Wire Line
	5900 4750 6250 4750
Text Notes 4950 3550 0    50   ~ 0
Amplifier and Band Pass Filter
Wire Notes Line
	800  6600 800  3400
$Comp
L power:PWR_FLAG #FLG02
U 1 1 5EF6E822
P 2000 2150
F 0 "#FLG02" H 2000 2225 50  0001 C CNN
F 1 "PWR_FLAG" H 2000 2323 50  0000 C CNN
F 2 "" H 2000 2150 50  0001 C CNN
F 3 "~" H 2000 2150 50  0001 C CNN
	1    2000 2150
	-1   0    0    1   
$EndComp
$Comp
L power:GNDD #PWR010
U 1 1 5EF684B8
P 1900 2150
F 0 "#PWR010" H 1900 1900 50  0001 C CNN
F 1 "GNDD" V 1904 2040 50  0000 R CNN
F 2 "" H 1900 2150 50  0001 C CNN
F 3 "" H 1900 2150 50  0001 C CNN
	1    1900 2150
	0    1    1    0   
$EndComp
$Comp
L power:GNDA #PWR09
U 1 1 5EF67603
P 1900 2750
F 0 "#PWR09" H 1900 2500 50  0001 C CNN
F 1 "GNDA" V 1905 2623 50  0000 R CNN
F 2 "" H 1900 2750 50  0001 C CNN
F 3 "" H 1900 2750 50  0001 C CNN
	1    1900 2750
	0    1    -1   0   
$EndComp
$Comp
L power:PWR_FLAG #FLG01
U 1 1 5EF6DDF4
P 2050 2750
F 0 "#FLG01" H 2050 2825 50  0001 C CNN
F 1 "PWR_FLAG" H 2200 2900 50  0000 C CNN
F 2 "" H 2050 2750 50  0001 C CNN
F 3 "~" H 2050 2750 50  0001 C CNN
	1    2050 2750
	-1   0    0    -1  
$EndComp
Wire Wire Line
	1900 2750 2050 2750
Connection ~ 2050 2750
Wire Wire Line
	2050 2750 2200 2750
$Comp
L power:VCC #PWR011
U 1 1 5EF5EB37
P 1500 1200
F 0 "#PWR011" H 1500 1050 50  0001 C CNN
F 1 "VCC" V 1518 1327 50  0000 L CNN
F 2 "" H 1500 1200 50  0001 C CNN
F 3 "" H 1500 1200 50  0001 C CNN
	1    1500 1200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1500 1200 1650 1200
$Comp
L power:PWR_FLAG #FLG03
U 1 1 5EF65AC4
P 1650 1200
F 0 "#FLG03" H 1650 1275 50  0001 C CNN
F 1 "PWR_FLAG" H 1650 1373 50  0000 C CNN
F 2 "" H 1650 1200 50  0001 C CNN
F 3 "~" H 1650 1200 50  0001 C CNN
	1    1650 1200
	-1   0    0    1   
$EndComp
Wire Wire Line
	1650 1200 2050 1200
Connection ~ 1650 1200
Text Label 1850 1200 0    50   ~ 0
VCC
Wire Wire Line
	2000 2150 2150 2150
Connection ~ 2000 2150
$Comp
L Jumper:SolderJumper_2_Open JP1
U 1 1 5EC6CD22
P 2850 2750
F 0 "JP1" H 2800 2650 50  0000 L CNN
F 1 "GNDA_JOIN" H 2500 2550 50  0000 L CNN
F 2 "Jumper:SolderJumper-2_P1.3mm_Open_RoundedPad1.0x1.5mm" H 2850 2750 50  0001 C CNN
F 3 "~" H 2850 2750 50  0001 C CNN
	1    2850 2750
	1    0    0    -1  
$EndComp
Text Notes 2750 1700 0    50   ~ 0
Separate GNDA & GNDD
Wire Wire Line
	5650 1350 5650 1100
Wire Wire Line
	5500 1350 5650 1350
$Comp
L power:VCC #PWR07
U 1 1 5EEFDB40
P 5650 1100
F 0 "#PWR07" H 5650 950 50  0001 C CNN
F 1 "VCC" H 5667 1273 50  0000 C CNN
F 2 "" H 5650 1100 50  0001 C CNN
F 3 "" H 5650 1100 50  0001 C CNN
	1    5650 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 1550 5650 1800
Wire Wire Line
	5500 1550 5650 1550
$Comp
L power:GNDA #PWR08
U 1 1 5EEFBCD4
P 5650 1800
F 0 "#PWR08" H 5650 1550 50  0001 C CNN
F 1 "GNDA" H 5655 1627 50  0000 C CNN
F 2 "" H 5650 1800 50  0001 C CNN
F 3 "" H 5650 1800 50  0001 C CNN
	1    5650 1800
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x03_Female J2
U 1 1 5EEF6C9F
P 5300 1450
F 0 "J2" H 5250 1250 50  0000 C CNN
F 1 "Radar" H 5250 1150 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x03_P2.54mm_Horizontal" H 5300 1450 50  0001 C CNN
F 3 "~" H 5300 1450 50  0001 C CNN
	1    5300 1450
	-1   0    0    -1  
$EndComp
Wire Wire Line
	5500 1450 5850 1450
Text Label 5700 1450 0    50   ~ 0
VIN
Wire Notes Line
	6300 850  6300 2100
Wire Notes Line
	6300 2100 5150 2100
Wire Notes Line
	5150 2100 5150 850 
Wire Notes Line
	5150 850  6300 850 
Text Notes 6000 950  0    50   ~ 0
Sensor
Wire Notes Line
	5050 850  3900 850 
Text Notes 4600 950  0    50   ~ 0
Power Led
$Comp
L power:VCC #PWR013
U 1 1 5F4341AF
P 4450 1250
F 0 "#PWR013" H 4450 1100 50  0001 C CNN
F 1 "VCC" H 4467 1423 50  0000 C CNN
F 2 "" H 4450 1250 50  0001 C CNN
F 3 "" H 4450 1250 50  0001 C CNN
	1    4450 1250
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D4
U 1 1 5F4347CB
P 4450 1650
F 0 "D4" V 4489 1532 50  0000 R CNN
F 1 "LED red" V 4398 1532 50  0000 R CNN
F 2 "LED_SMD:LED_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 4450 1650 50  0001 C CNN
F 3 "~" H 4450 1650 50  0001 C CNN
	1    4450 1650
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R11
U 1 1 5F435D33
P 4450 2300
F 0 "R11" H 4520 2346 50  0000 L CNN
F 1 "220" H 4520 2255 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 4380 2300 50  0001 C CNN
F 3 "~" H 4450 2300 50  0001 C CNN
	1    4450 2300
	1    0    0    -1  
$EndComp
$Comp
L power:GNDD #PWR014
U 1 1 5F4432E4
P 4450 2950
F 0 "#PWR014" H 4450 2700 50  0001 C CNN
F 1 "GNDD" H 4250 2900 50  0000 C CNN
F 2 "" H 4450 2950 50  0001 C CNN
F 3 "" H 4450 2950 50  0001 C CNN
	1    4450 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	4450 2450 4450 2950
Wire Wire Line
	4450 1800 4450 2150
Wire Wire Line
	4450 1250 4450 1500
Wire Notes Line
	800  6600 6300 6600
Wire Notes Line
	6300 6600 6300 3400
Wire Notes Line
	6300 3400 800  3400
Text Label 10000 3950 0    50   ~ 0
LEDGREEN
Wire Wire Line
	9950 3950 10550 3950
Text Label 8600 1450 0    50   ~ 0
LEDGREEN
Wire Wire Line
	9950 4050 10550 4050
Text Label 10000 4050 0    50   ~ 0
LEDYELLOW
Wire Wire Line
	9950 4150 10550 4150
Text Label 10000 4150 0    50   ~ 0
LEDRED
Text Label 8600 2250 0    50   ~ 0
LEDRED
Text Notes 9900 3200 0    50   ~ 0
Arduino Shield
Wire Wire Line
	9950 4250 10550 4250
Text Label 10000 4250 0    50   ~ 0
PUSHBUTTON
Wire Wire Line
	9650 1450 9800 1450
$Comp
L power:GNDD #PWR016
U 1 1 5EDF8605
P 10250 1450
F 0 "#PWR016" H 10250 1200 50  0001 C CNN
F 1 "GNDD" V 10250 1250 50  0000 C CNN
F 2 "" H 10250 1450 50  0001 C CNN
F 3 "" H 10250 1450 50  0001 C CNN
	1    10250 1450
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D1
U 1 1 5EE75917
P 9500 1450
F 0 "D1" H 9500 1200 50  0000 C CNN
F 1 "LED green" H 9450 1300 50  0000 C CNN
F 2 "LED_SMD:LED_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 9500 1450 50  0001 C CNN
F 3 "~" H 9500 1450 50  0001 C CNN
	1    9500 1450
	-1   0    0    1   
$EndComp
$Comp
L Device:R R9
U 1 1 5EC64492
P 9950 1850
F 0 "R9" V 9750 1850 50  0000 C CNN
F 1 "220" V 9850 1850 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 9880 1850 50  0001 C CNN
F 3 "~" H 9950 1850 50  0001 C CNN
	1    9950 1850
	0    1    1    0   
$EndComp
$Comp
L Device:LED D2
U 1 1 5EE6D7A4
P 9500 1850
F 0 "D2" H 9500 1600 50  0000 C CNN
F 1 "LED yellow" H 9450 1700 50  0000 C CNN
F 2 "LED_SMD:LED_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 9500 1850 50  0001 C CNN
F 3 "~" H 9500 1850 50  0001 C CNN
	1    9500 1850
	-1   0    0    1   
$EndComp
Wire Wire Line
	9650 1850 9800 1850
Wire Wire Line
	10100 1850 10250 1850
Text Label 8600 1850 0    50   ~ 0
LEDYELLOW
Wire Wire Line
	9650 2250 9800 2250
$Comp
L Device:LED D3
U 1 1 5EE74B03
P 9500 2250
F 0 "D3" H 9500 2000 50  0000 C CNN
F 1 "LED red" H 9500 2100 50  0000 C CNN
F 2 "LED_SMD:LED_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 9500 2250 50  0001 C CNN
F 3 "~" H 9500 2250 50  0001 C CNN
	1    9500 2250
	-1   0    0    1   
$EndComp
$Comp
L power:GNDD #PWR017
U 1 1 5EE3E048
P 10250 1850
F 0 "#PWR017" H 10250 1600 50  0001 C CNN
F 1 "GNDD" V 10254 1740 50  0000 R CNN
F 2 "" H 10250 1850 50  0001 C CNN
F 3 "" H 10250 1850 50  0001 C CNN
	1    10250 1850
	0    -1   -1   0   
$EndComp
$Comp
L power:GNDD #PWR018
U 1 1 5EE41AFA
P 10250 2250
F 0 "#PWR018" H 10250 2000 50  0001 C CNN
F 1 "GNDD" V 10254 2140 50  0000 R CNN
F 2 "" H 10250 2250 50  0001 C CNN
F 3 "" H 10250 2250 50  0001 C CNN
	1    10250 2250
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR015
U 1 1 5EE6F13A
P 8950 2600
F 0 "#PWR015" H 8950 2450 50  0001 C CNN
F 1 "VCC" H 8967 2773 50  0000 C CNN
F 2 "" H 8950 2600 50  0001 C CNN
F 3 "" H 8950 2600 50  0001 C CNN
	1    8950 2600
	0    1    1    0   
$EndComp
Text Label 7100 2600 0    50   ~ 0
PUSHBUTTON
Text Notes 9300 950  0    50   ~ 0
DIGITAL COMPONENTS
$Comp
L Connector_Generic:Conn_01x01 J6
U 1 1 5EEAF59A
P 2200 2950
F 0 "J6" V 2300 3200 50  0000 R CNN
F 1 "TP_GNDA" V 2200 3350 50  0000 R CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 2200 2950 50  0001 C CNN
F 3 "~" H 2200 2950 50  0001 C CNN
	1    2200 2950
	0    -1   1    0   
$EndComp
Connection ~ 2200 2750
Wire Wire Line
	2200 2750 2350 2750
$Comp
L Connector_Generic:Conn_01x01 J8
U 1 1 5EEBA34B
P 2350 2550
F 0 "J8" V 2300 2700 50  0000 L CNN
F 1 "TP_GNDA" V 2400 2650 50  0000 L CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 2350 2550 50  0001 C CNN
F 3 "~" H 2350 2550 50  0001 C CNN
	1    2350 2550
	0    1    -1   0   
$EndComp
Connection ~ 2350 2750
Wire Wire Line
	1900 2150 2000 2150
$Comp
L Connector_Generic:Conn_01x01 J7
U 1 1 5EEC3AFD
P 2350 2350
F 0 "J7" V 2222 2430 50  0000 L CNN
F 1 "TP_GNDD" V 2313 2430 50  0000 L CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 2350 2350 50  0001 C CNN
F 3 "~" H 2350 2350 50  0001 C CNN
	1    2350 2350
	0    1    1    0   
$EndComp
Connection ~ 2350 2150
Wire Wire Line
	2350 2150 2650 2150
$Comp
L Connector_Generic:Conn_01x01 J3
U 1 1 5EEC4ECA
P 2150 1950
F 0 "J3" V 2250 2250 50  0000 R CNN
F 1 "TP_GNDD" V 2150 2350 50  0000 R CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 2150 1950 50  0001 C CNN
F 3 "~" H 2150 1950 50  0001 C CNN
	1    2150 1950
	0    -1   -1   0   
$EndComp
Connection ~ 2150 2150
Wire Wire Line
	2150 2150 2350 2150
Text Notes 3100 1000 0    50   ~ 0
POWER SUPPLY
Wire Notes Line
	6750 3050 6750 6250
$Comp
L Connector_Generic:Conn_01x01 J10
U 1 1 5EF34F37
P 9200 1250
F 0 "J10" V 9400 1350 50  0000 R CNN
F 1 "TP_LED_G" V 9300 1600 50  0000 R CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 9200 1250 50  0001 C CNN
F 3 "~" H 9200 1250 50  0001 C CNN
	1    9200 1250
	0    -1   -1   0   
$EndComp
Connection ~ 9200 1450
Wire Wire Line
	9200 1450 9350 1450
Wire Wire Line
	8500 1450 9200 1450
Wire Wire Line
	8500 1850 9200 1850
Wire Wire Line
	8500 2250 9200 2250
$Comp
L Connector_Generic:Conn_01x01 J11
U 1 1 5EF5B85E
P 9200 1650
F 0 "J11" V 9300 1850 50  0000 R CNN
F 1 "TP_LED_Y" V 9200 2100 50  0000 R CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 9200 1650 50  0001 C CNN
F 3 "~" H 9200 1650 50  0001 C CNN
	1    9200 1650
	0    -1   -1   0   
$EndComp
Connection ~ 9200 1850
Wire Wire Line
	9200 1850 9350 1850
$Comp
L Connector_Generic:Conn_01x01 J12
U 1 1 5EF60383
P 9200 2050
F 0 "J12" V 9300 2250 50  0000 R CNN
F 1 "TP_LED_R" V 9200 2500 50  0000 R CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 9200 2050 50  0001 C CNN
F 3 "~" H 9200 2050 50  0001 C CNN
	1    9200 2050
	0    -1   -1   0   
$EndComp
Connection ~ 9200 2250
Wire Wire Line
	9200 2250 9350 2250
$Comp
L Connector_Generic:Conn_01x01 J9
U 1 1 5EF616FD
P 7750 2400
F 0 "J9" V 7850 2600 50  0000 L CNN
F 1 "TP_BUTTON" V 7750 2500 50  0000 L CNN
F 2 "Connector_Pin:Pin_D1.0mm_L10.0mm" H 7750 2400 50  0001 C CNN
F 3 "~" H 7750 2400 50  0001 C CNN
	1    7750 2400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6950 2600 7750 2600
$Comp
L Amplifier_Operational:LM358 U1
U 1 1 5EBCBF6A
P 3000 5500
F 0 "U1" H 3000 5867 50  0000 C CNN
F 1 "LM358" H 3000 5776 50  0000 C CNN
F 2 "Package_DIP:DIP-8_W7.62mm_Socket" H 3000 5500 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm2904-n.pdf" H 3000 5500 50  0001 C CNN
	1    3000 5500
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 5950 2650 5600
Connection ~ 2650 5950
Connection ~ 2650 5600
Wire Wire Line
	2650 5600 2700 5600
$Comp
L Amplifier_Operational:LM358 U1
U 2 1 5EBE06E5
P 4850 4750
F 0 "U1" H 4850 5117 50  0000 C CNN
F 1 "LM358" H 4850 5026 50  0000 C CNN
F 2 "Package_DIP:DIP-8_W7.62mm_Socket" H 4850 4750 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm2904-n.pdf" H 4850 4750 50  0001 C CNN
	2    4850 4750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 4850 4500 5100
Connection ~ 4500 4850
Wire Wire Line
	4500 4850 4550 4850
Connection ~ 4500 5100
$Comp
L Amplifier_Operational:LM358 U1
U 3 1 5EBF8D27
P 5900 5700
F 0 "U1" H 5858 5746 50  0000 L CNN
F 1 "LM358" H 5858 5655 50  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm_Socket" H 5900 5700 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm2904-n.pdf" H 5900 5700 50  0001 C CNN
	3    5900 5700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 5EC2AC04
P 3400 1200
F 0 "#PWR0101" H 3400 950 50  0001 C CNN
F 1 "GND" V 3405 1072 50  0000 R CNN
F 2 "" H 3400 1200 50  0001 C CNN
F 3 "" H 3400 1200 50  0001 C CNN
	1    3400 1200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2350 2750 2700 2750
Wire Notes Line
	1050 850  3800 850 
$Comp
L Jumper:SolderJumper_2_Open JP2
U 1 1 5ECB6D23
P 2800 2150
F 0 "JP2" H 2800 2300 50  0000 C CNN
F 1 "GNDD_JOIN" H 2750 2400 50  0000 C CNN
F 2 "Jumper:SolderJumper-2_P1.3mm_Open_RoundedPad1.0x1.5mm" H 2800 2150 50  0001 C CNN
F 3 "~" H 2800 2150 50  0001 C CNN
	1    2800 2150
	-1   0    0    -1  
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 5ECCC80F
P 3200 2750
F 0 "#PWR0102" H 3200 2500 50  0001 C CNN
F 1 "GND" H 3205 2577 50  0000 C CNN
F 2 "" H 3200 2750 50  0001 C CNN
F 3 "" H 3200 2750 50  0001 C CNN
	1    3200 2750
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 5ECD955F
P 3150 2150
F 0 "#PWR0103" H 3150 1900 50  0001 C CNN
F 1 "GND" H 3155 1977 50  0000 C CNN
F 2 "" H 3150 2150 50  0001 C CNN
F 3 "" H 3150 2150 50  0001 C CNN
	1    3150 2150
	0    -1   1    0   
$EndComp
Wire Notes Line
	1050 1600 3800 1600
Wire Notes Line
	6750 6250 10750 6250
Wire Notes Line
	10750 6250 10750 3050
Wire Notes Line
	10750 3050 6750 3050
Wire Notes Line
	6700 850  10750 850 
$Comp
L Device:R R12
U 1 1 5EE7780C
P 8650 2600
F 0 "R12" V 8750 2550 50  0000 L CNN
F 1 "220" V 8850 2550 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 8580 2600 50  0001 C CNN
F 3 "~" H 8650 2600 50  0001 C CNN
	1    8650 2600
	0    1    1    0   
$EndComp
Wire Wire Line
	8950 2600 8800 2600
$Comp
L Switch:SW_Push SW1
U 1 1 5EC56C84
P 8150 2600
F 0 "SW1" H 8150 2500 50  0000 C CNN
F 1 "SW_Push" H 8150 2400 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 8150 2800 50  0001 C CNN
F 3 "~" H 8150 2800 50  0001 C CNN
	1    8150 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8500 2600 8350 2600
Connection ~ 7750 2600
$Comp
L power:GND #PWR019
U 1 1 5EBF34C0
P 7100 5350
F 0 "#PWR019" H 7100 5100 50  0001 C CNN
F 1 "GND" V 7105 5222 50  0000 R CNN
F 2 "" H 7100 5350 50  0001 C CNN
F 3 "" H 7100 5350 50  0001 C CNN
	1    7100 5350
	0    1    1    0   
$EndComp
Wire Wire Line
	7100 5350 7150 5350
Wire Wire Line
	7150 5350 7150 5450
Wire Wire Line
	7150 5450 7350 5450
Wire Wire Line
	3100 1200 3200 1200
$Comp
L power:PWR_FLAG #FLG04
U 1 1 5EC85175
P 3200 1200
F 0 "#FLG04" H 3200 1275 50  0001 C CNN
F 1 "PWR_FLAG" H 3200 1350 50  0000 C CNN
F 2 "" H 3200 1200 50  0001 C CNN
F 3 "~" H 3200 1200 50  0001 C CNN
	1    3200 1200
	-1   0    0    1   
$EndComp
Connection ~ 3200 1200
Wire Wire Line
	3200 1200 3400 1200
Wire Wire Line
	2950 2150 3150 2150
Wire Notes Line
	1050 850  1050 1500
Wire Notes Line
	1050 1500 3800 1500
Wire Notes Line
	3800 1500 3800 850 
Wire Wire Line
	3000 2750 3200 2750
Wire Notes Line
	1050 3150 3800 3150
Wire Notes Line
	1050 1600 1050 3150
Wire Notes Line
	3800 1600 3800 3150
Wire Wire Line
	7750 2600 7950 2600
Wire Notes Line
	6700 2900 10750 2900
Wire Notes Line
	10750 850  10750 2900
Wire Notes Line
	6700 850  6700 2900
Wire Notes Line
	3900 850  3900 3150
Wire Notes Line
	3900 3150 5050 3150
Wire Notes Line
	5050 3150 5050 850 
Wire Wire Line
	7100 5500 7100 5550
$Comp
L power:GND #PWR020
U 1 1 5EBF7DBF
P 7100 5500
F 0 "#PWR020" H 7100 5250 50  0001 C CNN
F 1 "GND" V 7105 5372 50  0000 R CNN
F 2 "" H 7100 5500 50  0001 C CNN
F 3 "" H 7100 5500 50  0001 C CNN
	1    7100 5500
	0    1    1    0   
$EndComp
Wire Wire Line
	7100 5550 7350 5550
NoConn ~ 7350 5350
$EndSCHEMATC