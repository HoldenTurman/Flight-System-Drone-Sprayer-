# Flight-System-Drone-Sprayer 🚁

## Overview  
Flight-System-Drone-Sprayer is a personal C++ project that demonstrates how an autonomous (or semi-autonomous) drone flight control and spray-system logic can be implemented from scratch. The project was built in under 24 hours after learning C++ — showcasing rapid adaptive learning, problem-solving, and the ability to quickly transform new technical concepts into working code.

## Why this Project?  
- **Proof of concept for UAV-based spraying systems** — aimed at demonstrating core flight logic, pathing, and spray-control behavior in a simplified drone simulator context.  
- **Demonstrate rapid learning and adaptability** — the project was conceived, coded, and tested within a short timeframe, illustrating that new programming languages and paradigms can be mastered quickly and applied immediately.  
- **Modular, extensible foundation** — while simple, the codebase is structured with readability and expansion in mind, allowing for future enhancements such as real sensor integration, obstacle avoidance, or real-world drone interfacing.

## Features  
- Basic flight-logic and pathing simulation  
- Spray-control logic integrated with flight path (simulated)  
- Use of core C++ features: vectors, modular code design, and efficient data management  
- Simple, self-contained codebase — easy to read, compile, and run  

## Requirements  
- macOS (or any Unix-based system)  
- C++ compiler (e.g. `clang++`, `g++`, or other standards-compliant compiler)  

## Build & Run  

```bash
# Navigate to the project folder
cd Flight-System-Drone-Sprayer

# Compile
clang++ main.cpp -o drone_sprayer   # or replace with your compiler

# Run
./drone_sprayer
