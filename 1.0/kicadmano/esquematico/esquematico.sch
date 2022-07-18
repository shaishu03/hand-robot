EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	1200 4150 1200 2300
Wire Wire Line
	1150 4350 1150 2200
Wire Wire Line
	4900 1000 4900 1900
Connection ~ 3250 1000
Wire Wire Line
	4900 1000 3250 1000
Wire Wire Line
	1150 2200 1600 2200
Wire Wire Line
	1550 4350 1150 4350
Wire Wire Line
	1200 2300 1600 2300
Wire Wire Line
	1550 4150 1200 4150
Wire Wire Line
	1400 2600 1600 2600
Wire Wire Line
	1400 3850 1400 2600
Wire Wire Line
	1550 3850 1400 3850
Wire Wire Line
	1350 2700 1600 2700
Wire Wire Line
	1350 3950 1350 2700
Wire Wire Line
	1550 3950 1350 3950
Wire Wire Line
	1300 2800 1600 2800
Wire Wire Line
	1300 4050 1300 2800
Wire Wire Line
	1550 4050 1300 4050
Wire Wire Line
	4600 4750 2050 4750
Wire Wire Line
	4900 3550 4900 2500
Wire Wire Line
	2050 3550 4900 3550
Wire Wire Line
	3250 1000 3250 1900
Wire Wire Line
	2300 1000 3250 1000
Wire Wire Line
	2300 1100 2300 1000
Connection ~ 3950 2600
Wire Wire Line
	3950 2750 3950 2600
Connection ~ 3750 2500
Wire Wire Line
	3750 2500 3750 2750
Connection ~ 3550 2400
Wire Wire Line
	3550 2750 3550 2400
Connection ~ 3350 2300
Wire Wire Line
	3350 2300 3350 2750
Connection ~ 3150 2200
Wire Wire Line
	3150 2750 3150 2200
Wire Wire Line
	3150 3200 3350 3200
Connection ~ 3150 3200
Wire Wire Line
	3150 3050 3150 3200
Wire Wire Line
	3350 3200 3550 3200
Connection ~ 3350 3200
Wire Wire Line
	3350 3200 3350 3050
Wire Wire Line
	3550 3200 3750 3200
Connection ~ 3550 3200
Wire Wire Line
	3550 3050 3550 3200
Wire Wire Line
	3750 3200 3950 3200
Connection ~ 3750 3200
Wire Wire Line
	3750 3050 3750 3200
Wire Wire Line
	3950 3200 3950 3050
Connection ~ 3250 1900
Wire Wire Line
	3850 1900 3650 1900
Connection ~ 3850 1900
Wire Wire Line
	3850 2500 3850 1900
Wire Wire Line
	3650 1900 3450 1900
Connection ~ 3650 1900
Wire Wire Line
	3650 2400 3650 1900
Wire Wire Line
	3450 1900 3250 1900
Connection ~ 3450 1900
Wire Wire Line
	3450 2300 3450 1900
Wire Wire Line
	3250 1900 3250 2200
Wire Wire Line
	4050 1900 3850 1900
Wire Wire Line
	4050 2600 4050 1900
Wire Wire Line
	3950 2600 2600 2600
Wire Wire Line
	3750 2500 2600 2500
Wire Wire Line
	3550 2400 2600 2400
Wire Wire Line
	3350 2300 2600 2300
Wire Wire Line
	3150 2200 2600 2200
$Comp
L Connector:Conn_01x02_Male J1
U 1 1 61579415
P 3250 2000
F 0 "J1" V 3312 2044 50  0000 L CNN
F 1 "pulgar" V 3403 2044 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-126-2_Vertical" H 3250 2000 50  0001 C CNN
F 3 "~" H 3250 2000 50  0001 C CNN
	1    3250 2000
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J2
U 1 1 61579B50
P 3450 2100
F 0 "J2" V 3512 2144 50  0000 L CNN
F 1 "indice" V 3603 2144 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-126-2_Vertical" H 3450 2100 50  0001 C CNN
F 3 "~" H 3450 2100 50  0001 C CNN
	1    3450 2100
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J3
U 1 1 6157A464
P 3650 2200
F 0 "J3" V 3712 2244 50  0000 L CNN
F 1 "medio" V 3803 2244 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-126-2_Vertical" H 3650 2200 50  0001 C CNN
F 3 "~" H 3650 2200 50  0001 C CNN
	1    3650 2200
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J4
U 1 1 6157A546
P 3850 2300
F 0 "J4" V 3912 2344 50  0000 L CNN
F 1 "anular" V 4003 2344 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-126-2_Vertical" H 3850 2300 50  0001 C CNN
F 3 "~" H 3850 2300 50  0001 C CNN
	1    3850 2300
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J5
U 1 1 6157AD2C
P 4050 2400
F 0 "J5" V 4112 2444 50  0000 L CNN
F 1 "menique" V 4203 2444 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-126-2_Vertical" H 4050 2400 50  0001 C CNN
F 3 "~" H 4050 2400 50  0001 C CNN
	1    4050 2400
	0    1    1    0   
$EndComp
$Comp
L RF:NRF24L01_Breakout U1
U 1 1 6157D159
P 2050 4150
F 0 "U1" H 2430 4196 50  0000 L CNN
F 1 "NRF24L01_Breakout" H 2430 4105 50  0000 L CNN
F 2 "RF_Module:nRF24L01_Breakout" H 2200 4750 50  0001 L CIN
F 3 "http://www.nordicsemi.com/eng/content/download/2730/34105/file/nRF24L01_Product_Specification_v2_0.pdf" H 2050 4050 50  0001 C CNN
	1    2050 4150
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:LM1117-3.3 U2
U 1 1 6157B5AC
P 4900 2200
F 0 "U2" V 4854 2305 50  0000 L CNN
F 1 "LM1117-3.3" V 4945 2305 50  0000 L CNN
F 2 "TerminalBlock_TE-Connectivity:TerminalBlock_TE_282834-3_1x03_P2.54mm_Horizontal" H 4900 2200 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm1117.pdf" H 4900 2200 50  0001 C CNN
	1    4900 2200
	0    1    1    0   
$EndComp
$Comp
L MCU_Module:Arduino_Nano_v3.x A1
U 1 1 615756EF
P 2100 2100
F 0 "A1" H 2100 1011 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 2100 920 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 2100 2100 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 2100 2100 50  0001 C CNN
	1    2100 2100
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 61574544
P 3150 2900
F 0 "R1" V 2943 2900 50  0000 C CNN
F 1 "R" V 3034 2900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3080 2900 50  0001 C CNN
F 3 "~" H 3150 2900 50  0001 C CNN
	1    3150 2900
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 61573FA9
P 3550 2900
F 0 "R3" H 3600 2950 50  0000 L CNN
F 1 "R" H 3620 2855 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3480 2900 50  0001 C CNN
F 3 "~" H 3550 2900 50  0001 C CNN
	1    3550 2900
	1    0    0    -1  
$EndComp
$Comp
L Device:R R4
U 1 1 61573F73
P 3750 2900
F 0 "R4" V 3543 2900 50  0000 C CNN
F 1 "R" V 3634 2900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3680 2900 50  0001 C CNN
F 3 "~" H 3750 2900 50  0001 C CNN
	1    3750 2900
	1    0    0    -1  
$EndComp
$Comp
L Device:R R5
U 1 1 61573ADA
P 3950 2900
F 0 "R5" V 3743 2900 50  0000 C CNN
F 1 "R" V 3834 2900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3880 2900 50  0001 C CNN
F 3 "~" H 3950 2900 50  0001 C CNN
	1    3950 2900
	1    0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 6157399C
P 3350 2900
F 0 "R2" V 3143 2900 50  0000 C CNN
F 1 "R" V 3234 2900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3280 2900 50  0001 C CNN
F 3 "~" H 3350 2900 50  0001 C CNN
	1    3350 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	8600 4050 8600 2200
Wire Wire Line
	8550 4250 8550 2100
Wire Wire Line
	8550 2100 9000 2100
Wire Wire Line
	8950 4250 8550 4250
Wire Wire Line
	8600 2200 9000 2200
Wire Wire Line
	8950 4050 8600 4050
Wire Wire Line
	8800 2500 9000 2500
Wire Wire Line
	8800 3750 8800 2500
Wire Wire Line
	8950 3750 8800 3750
Wire Wire Line
	8750 2600 9000 2600
Wire Wire Line
	8750 3850 8750 2600
Wire Wire Line
	8950 3850 8750 3850
Wire Wire Line
	8700 2700 9000 2700
Wire Wire Line
	8700 3950 8700 2700
Wire Wire Line
	8950 3950 8700 3950
Wire Wire Line
	9450 3450 10550 3450
Wire Wire Line
	9700 1000 9700 900 
Wire Wire Line
	9500 3000 9500 3100
$Comp
L RF:NRF24L01_Breakout U3
U 1 1 615BB64D
P 9450 4050
F 0 "U3" H 9830 4096 50  0000 L CNN
F 1 "NRF24L01_Breakout" H 9830 4005 50  0000 L CNN
F 2 "RF_Module:nRF24L01_Breakout" H 9600 4650 50  0001 L CIN
F 3 "http://www.nordicsemi.com/eng/content/download/2730/34105/file/nRF24L01_Product_Specification_v2_0.pdf" H 9450 3950 50  0001 C CNN
	1    9450 4050
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:LM1117-3.3 U4
U 1 1 615BB657
P 10550 2050
F 0 "U4" V 10504 2155 50  0000 L CNN
F 1 "LM1117-3.3" V 10595 2155 50  0000 L CNN
F 2 "TerminalBlock_TE-Connectivity:TerminalBlock_TE_282834-3_1x03_P2.54mm_Horizontal" H 10550 2050 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm1117.pdf" H 10550 2050 50  0001 C CNN
	1    10550 2050
	0    1    1    0   
$EndComp
$Comp
L MCU_Module:Arduino_Nano_v3.x A2
U 1 1 615BB661
P 9500 2000
F 0 "A2" H 9500 911 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 9500 820 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 9500 2000 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 9500 2000 50  0001 C CNN
	1    9500 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	9700 900  10550 900 
Wire Wire Line
	10550 1750 10550 900 
Wire Wire Line
	9500 3100 9600 3100
Wire Wire Line
	10250 2050 10250 3100
Wire Wire Line
	10550 2350 10550 3450
Wire Wire Line
	10250 3100 10250 4650
Connection ~ 10250 3100
Wire Wire Line
	10250 4650 9450 4650
$Comp
L Connector:Conn_01x03_Male J10
U 1 1 615D14D4
P 7900 1200
F 0 "J10" V 7962 1344 50  0000 L CNN
F 1 "pulgars" V 8053 1344 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 7900 1200 50  0001 C CNN
F 3 "~" H 7900 1200 50  0001 C CNN
	1    7900 1200
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x03_Male J9
U 1 1 615D1F23
P 7600 1200
F 0 "J9" V 7662 1344 50  0000 L CNN
F 1 "indices" V 7753 1344 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 7600 1200 50  0001 C CNN
F 3 "~" H 7600 1200 50  0001 C CNN
	1    7600 1200
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x03_Male J8
U 1 1 615D24B1
P 7300 1200
F 0 "J8" V 7362 1344 50  0000 L CNN
F 1 "medios" V 7453 1344 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 7300 1200 50  0001 C CNN
F 3 "~" H 7300 1200 50  0001 C CNN
	1    7300 1200
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x03_Male J7
U 1 1 615D26F9
P 7000 1200
F 0 "J7" V 7062 1344 50  0000 L CNN
F 1 "anulars" V 7153 1344 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 7000 1200 50  0001 C CNN
F 3 "~" H 7000 1200 50  0001 C CNN
	1    7000 1200
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x03_Male J6
U 1 1 615D4104
P 6700 1200
F 0 "J6" V 6762 1344 50  0000 L CNN
F 1 "meniques" V 6853 1344 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 6700 1200 50  0001 C CNN
F 3 "~" H 6700 1200 50  0001 C CNN
	1    6700 1200
	0    1    1    0   
$EndComp
Wire Wire Line
	7900 1400 7900 1500
Wire Wire Line
	7900 1500 7600 1500
Wire Wire Line
	7600 1500 7600 1400
Wire Wire Line
	7600 1500 7300 1500
Wire Wire Line
	7300 1500 7300 1400
Connection ~ 7600 1500
Wire Wire Line
	7300 1500 7000 1500
Wire Wire Line
	7000 1500 7000 1400
Connection ~ 7300 1500
Wire Wire Line
	7000 1500 6700 1500
Wire Wire Line
	6700 1500 6700 1400
Connection ~ 7000 1500
Wire Wire Line
	7800 1400 7800 1550
Wire Wire Line
	7800 1550 7500 1550
Wire Wire Line
	7500 1550 7500 1400
Wire Wire Line
	7500 1550 7200 1550
Wire Wire Line
	7200 1550 7200 1400
Connection ~ 7500 1550
Wire Wire Line
	7200 1550 6900 1550
Wire Wire Line
	6900 1550 6900 1400
Connection ~ 7200 1550
Wire Wire Line
	6900 1550 6600 1550
Wire Wire Line
	6600 1550 6600 1400
Connection ~ 6900 1550
Wire Wire Line
	7900 900  9700 900 
Connection ~ 9700 900 
Wire Wire Line
	6600 1550 6600 3100
Wire Wire Line
	6600 3100 9500 3100
Connection ~ 6600 1550
Connection ~ 9500 3100
Wire Wire Line
	8000 1700 9000 1700
Wire Wire Line
	8000 1400 8000 1700
Wire Wire Line
	7700 1900 9000 1900
Wire Wire Line
	7700 1400 7700 1900
Wire Wire Line
	7400 2000 9000 2000
Wire Wire Line
	7400 1400 7400 2000
Wire Wire Line
	7100 1400 7100 2300
Wire Wire Line
	7100 2300 9000 2300
Wire Wire Line
	9000 2400 6800 2400
Wire Wire Line
	6800 2400 6800 1400
Wire Wire Line
	2200 3100 2200 3200
Wire Wire Line
	2200 3200 3150 3200
Wire Wire Line
	4600 2200 4600 3200
Wire Wire Line
	2100 3100 2100 3200
Wire Wire Line
	2200 3200 2100 3200
Connection ~ 2200 3200
Wire Wire Line
	3950 3200 4600 3200
Connection ~ 3950 3200
Connection ~ 4600 3200
Wire Wire Line
	4600 3200 4600 4750
Wire Wire Line
	9600 3000 9600 3100
Connection ~ 9600 3100
Wire Wire Line
	9600 3100 10250 3100
Wire Wire Line
	7900 900  7900 1400
Connection ~ 7900 1400
$EndSCHEMATC
