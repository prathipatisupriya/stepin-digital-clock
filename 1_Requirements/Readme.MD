## Introduction
*  Rectification methods to convert AC (Alternating Current) to DC (Direct Current) include full-wave rectification and half-wave rectification. In both cases, rectification is performed by utilizing the characteristic that current flows only in the positive direction in a diode.

## Research 
*  A Full Wave Rectifier is a circuit, which converts an ac voltage into a pulsating dc voltage using both half cycles of the applied ac voltage. It uses two diodes of which one conducts during one half cycle while the other conducts during the other half cycle of the applied ac voltage.During the positive half cycle of the input voltage, diode D1 becomes forward biased and D2 becomes reverse biased.Hence D1 conducts and D2 remains OFF. The load current flows through D1 and the voltage drop across RL will be equal to the input voltage.During the negative half cycle of the input voltage, diode D1 becomes reverse biased and D2 becomes forward biased.Hence D1 remains OFF and D2 conducts. The load current flows through D2 and the voltage drop across RL will be equal to the input voltage.A high AC voltage is applied to the primary side of the step-down transformer. The obtained secondary low voltage is applied to the diode.The diode is forward biased during the positive half cycle of the AC voltage and reverse biased during the negative half cycle.

## Benefits
*  The rectification efficiency of full wave rectifier is double than the half wave rectifier because it converts both the cycles of AC to DC.
*  Ripple factor is less in full wave rectifier so waveform is smooth.
*  The ripple frequency is also double so they are easy to filter out.
*  The full wave rectifier produces high DC output voltage and current so the output power is higher.
*  The full wave rectifier have better transformer utilization factor.

## Swot analysis

## STRENGTHS
*  works on different scales
*  knowledge base
*  conceptual simplicity

## WEEKNESSES
*  difficult to apply
*  need for better tools
*  scientific basis incomplete

## OPPORTUNITES
*  peoples utility
*  technologocal advancements
*  increasng environmental awareness

## THREATS
*  misuse of environmental tools
*  competing approaches
*  lack of awareness across general public

## 4w's and 1'h
 
## who
Mostly in electrical domain, such as industries at requirement of changing Ac to Dc we use this project.
## what 
This project allows us to convert alomost all the incoming Alternating current to Direct current. 
## when
This is also the heart of the circuitry that allows sensors to attach to the RCX on polarity.
## where
To detect the amplitude of the modulating radio signal.
## How
By giving required input parameters to the rectifiers.

## Detail requirements

## High level Requirements for halfwave and fullwave rectifier

| ID | DESCRIPTION | STATUS |
| :--: | :----: | :----: |
| HR01 | input values of vdc and load resisitence | implemented |

## low level requirements for halfwave 

| ID | DECRIPTION | HLR ID | STATUS |
| :--: | :----:| :----: | :----: |
| LR01 | DC current | HR01 | implemented | 
| LR02 | average voltage | HR01 | implemented | 
| LR03 | average current | HR01 | implemented |
| LR04 | RMS  voltage | HR01 | implemented |
| LR05 | RMS current | HR01 | implemented |
| LR06 | Formfactor | HR01 | implemented |
| LR07 | power delivered| HR01 | implemented |
| LR08 | percentage regulation | HR01 | implemented | 

## low level requirements for fullwave rectifier

| ID | DECRIPTION | HLR ID | STATUS |
| :--: | :----:| :----: | :----: |
| L_01 | DC current | HR01 | implemented | 
| L_02 | average voltage | HR01 | implemented | 
| L_03 | average current | HR01 | implemented |
| L_04 | RMS  voltage | HR01 | implemented |
| L_05 | RMS current | HR01 | implemented |
| L_06 | Formfactor | HR01 | implemented |
| L_07 | power delivered| HR01 | implemented |
| L_08 | percentage regulation | HR01 | implemented | 