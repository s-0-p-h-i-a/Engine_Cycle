# Arduino Single-Cylinder Engine Simulation v0 / WIP

05/12/25
## Overview

This project is a learning-focused prototype simulating a single cylinder moving through a 4-stroke engine cycle using LEDs on a breadboard. It practices:

- Embedded C/C++ programming and multi-file organization
- State-machine logic for engine cycles
- Mapping logical cylinder state to hardware outputs (LEDs)
- Conceptual visualization of piston, valve, fuel injector and spark plug behavior

---
## Demo GIF

![Breadboard with eight LEDs visually simulating an engine cylinder](./demos/demogif.gif)

---
## Hardware Setup

Joystick:
- Turns "engine" on/off via state toggling
- Planned: speed control

Total LEDs: 8 (arranged in 4 conceptual rows)

- **Top row:**
    - Blue LED → intake valve
    - Green LED → exhaust valve

- **Second row:**
    - Yellow LED → fuel injection
    - Red LED → spark plug

- **Third row:**
    - 2 White LEDs → TDC (top dead center)

- **Fourth row (with gap below third row):**
    - 2 White LEDs → BDC (bottom dead center)

This arrangement visually represents the cylinder’s four-stroke cycle on a breadboard.

---

## Hardware Behaviour:

### Intake:
- Intake valve open, fuel injection on, piston BDC
![Breadboard with two LEDs representing a cylinder in the intake stroke](./demos/intake.gif)

- Compression: piston TDC
![Breadboard with two LEDs representing a cylinder in the compression stroke](./demos/compression.gif)

- Combustion: spark plug on, piston BDC
![Breadboard with two LEDs representing a cylinder in the combustion stroke](./demos/combustion.gif)

- Exhaust: exhaust valve open, piston TDC
![Breadboard with two LEDs representing a cylinder in the exhaust stroke](./demos/exhaust.gif)

---
## Code Structure

- **Cylinder representation:**  
    A **boolean array representing the cylinder** is currently used to track intake valve, exhaust valve, fuel injector, spark plug, and piston position. This allows looping through cylinder elements.
    
- **Cycle maps:**
```
extern const bool intakeValveCycle[4];
extern const bool exhaustValveCycle[4];
extern const bool fuelInjectionCycle[4];
extern const bool sparkPlugCycle[4];
extern const bool pistonCycle[4];
```

These maps define which elements are active at each stroke.

---
## Behaviour

Each iteration of the loop:

1. Advances to the next stroke
2. Runs `driveCar()`, which runs `updateStroke()`, then `runEngine()`
3. `runEngine()` updates the cylinder elements’ current state using the cycle maps, based on the updated stroke
4. `displayEngine()`updates the LEDs for valves, fuel injection, spark, and piston position

This produces a simple, continuous visualization of a single cylinder’s 4-stroke cycle.

---
## Learning Goals / Roadmap

- **Current focus:**

    - Develop a functional, pointer-free, loop-driven cycle model
    - Map logical state to hardware outputs clearly
    - Understand the relationship between FSMs, cylinder state, and outputs

- **Future plans:**
    
    - Expand to multiple cylinders using an LED matrix
    - Explore valve overlap, fuel injection, and spark logic
    - Transition to more structured data representations (e.g., structs) as complexity grows

---
## Notes

- This project remains a **work-in-progress**, structured for learning rather than production.

- It is part of the **larger engine-simulations repository**, with the long-term goal of building individual engine control simulations (cylinder, crankshaft, camshaft, etc) that will be merged into a more complete "full" engine simulation.