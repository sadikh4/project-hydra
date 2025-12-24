## Hardware Block Overview – Project HYDRA

The hardware architecture of Project HYDRA is designed to ensure reliable
detection of recyclable input and controlled reward dispensing.

### Main Blocks

#### Load Cell & HX711 Module
- Measures the weight of the inserted recyclable material
- Provides accurate and repeatable readings
- Connected to the microcontroller through a digital interface

#### Microcontroller Unit
- Processes sensor data and executes control logic
- Validates weight thresholds
- Controls reward dispensing and system timing

#### Water Dispensing Unit
- Consists of a solenoid valve or pump
- Activated through a relay module
- Dispenses a fixed quantity of water per valid cycle

#### Display / Indicator Module
- Provides user feedback
- Indicates successful recycling and reward status

#### Power Supply Unit
- Provides regulated power to sensors, controller, and actuators
- Ensures safe operation of high-current components
