# **Test Report: Inline-4 Crankshaft CLI Simulator**

**Project:** CLI version of an inline-4 engine crankshaft simulation  
**Date:** 1 December 2025  
**Purpose:** Demonstrate modular C design, state-machine logic, and output visualization while applying software verification and validation practices similar to automotive ECU development.

---
## **1. Verification**

**Objective:** Ensure the software is correctly implemented according to design and compiles/links successfully.

**Actions Taken:**

- Attempted initial builds in the IDE; encountered linker errors because some source files were not correctly referenced.

- Transitioned to terminal-based compilation and linking using explicit file lists.

**Outcome:**

- All modules compiled and linked successfully, producing a working executable.
- Verified that the modular file structure (`cranklib`, `graphics`, `main`) worked as intended.
- Improved understanding of how the compiler and linker handle multi-file projects.

---
## **2. Validation**

**Objective:** Ensure the simulator behaves as intended, reflecting correct engine logic and crankshaft sequence.

**Actions Taken:**

- Ran the CLI simulator and observed that the crankshaft output was not toggling—lobes appeared static in the ASCII visualization.

- Investigated the modular functions responsible for output (`printLobesTDC`, `printLobesBDC`) and discovered that the **function arguments taken were `int` instead of `bool`**, causing constant true evaluation.

- Corrected the argument types and verified that the **crankshaft state toggled correctly** for each loop iteration.

- Confirmed that the ASCII output correctly represented TDC/BDC positions per lobe and followed the 1-3-4-2 firing order.

**Outcome:**

- Successfully validated that the simulator behaves according to the design specifications.
- **Compared expected vs. actual behavior**, isolated root causes, and corrected logic errors.

---

## **3. Key Insights & Parallels to Automotive Testing**

| Concept                 | CLI Simulator Example                                         |
| ----------------------- | ------------------------------------------------------------- |
| Verification            | Fixing linker errors, ensuring files compile and link         |
| Validation              | Observing crankshaft output and correcting TDC/BDC logic      |
| Modular testing         | `cranklib` state machine separated from `graphicslib`         |
| State machine reasoning | Crankshaft lobe toggling and cycle sequencing                 |
| Input-driven testing    | Loop control and `checkContinue` simulating user input        |
| Debugging workflow      | Tracing incorrect outputs to type mismatch in print functions |

---

## **4. Lessons Learned **

1. **Separate logic from output early:**
    
    - Modularizing the state machine and visualization simplified both verification and validation.

2. **Define expected behavior clearly:**
    
    - Knowing the expected TDC/BDC sequence allowed rapid identification of validation issues.

3. **Iterative testing approach:**
    
    - Verification first (build & link), then validation (behavior correctness).

4. **Use controlled inputs to exercise system behavior:**
    
    - `checkContinue` and loop intervals allowed structured testing of different crank cycles.

5. **Debug systematically using modularity:**
    
    - The modular function structure made it straightforward to isolate errors to `printLobesTDC/BDC`.

---