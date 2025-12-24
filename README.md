
# Project HYDRA – Smart Recycling Reward System

Project HYDRA is an embedded smart recycling system designed to promote
responsible waste disposal by rewarding users with drinking water and
eco-points.

The system validates recyclable input using a load cell–based weight
measurement mechanism to prevent misuse and ensure fair rewards.

## Problem Statement
Recycling participation is often low due to the absence of immediate
incentives. Conventional recycling bins do not provide feedback or
rewards, resulting in poor user motivation and engagement.

## Proposed Solution
Project HYDRA introduces a reward-based recycling mechanism where users
receive tangible benefits for recycling. Once a valid recyclable item
is detected and verified by weight, the system dispenses a predefined
quantity of drinking water and increments eco-points.

## System Overview
- User places recyclable material into the system
- A load cell measures the applied weight
- The microcontroller validates the weight against predefined thresholds
- Upon validation:
  - Water is dispensed using a solenoid valve or pump
  - Eco-points are updated and displayed
- A cooldown period prevents repeated misuse

## Hardware Components
- Microcontroller (Arduino / ESP32)
- Load cell with HX711 amplifier
- Solenoid valve or water pump
- Relay module
- Display or indicator module
- Power supply and regulation circuitry

## Control Logic
- Minimum and maximum weight thresholds for validation
- Single reward cycle per valid input
- Time-based cooldown to avoid abuse

## My Contribution
- System concept and reward logic design
- Load cell interfacing and calibration
- Embedded firmware development
- Hardware integration and testing

## Funding & Support
- Received ₹2,00,000 project funding under the KTU (APJ Abdul Kalam
  Technological University) student innovation support scheme for
  prototype development.

## Project Status
Functional prototype developed and tested.
Future improvements include user identification and cloud-based
eco-point tracking.
