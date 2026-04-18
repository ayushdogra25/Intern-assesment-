# Guard Logic Challenge

## Overview
This project is a simple C++ program that simulates a guard system deciding which door to choose in a secured facility.

There are three possible outcomes:
- Exit (safe door)
- Trap (dangerous door)
- Return (go back to start)

The goal was to design a clear and logical decision system.

---

## Approach
I implemented a priority-based decision logic:

1. If a trap is detected → avoid it and return  
2. If the path is safe and not visited → choose exit  
3. If the path was already visited → return to avoid looping  
4. In any uncertain case → return as a safe fallback  

This ensures the system always makes a consistent and safe decision.

---

## Test Cases
I tested the program with different scenarios:

- Safe = true, Trap = false, Visited = false → EXIT  
- Trap = true → RETURN  
- Visited = true → RETURN  
- Safe = false, Trap = false → RETURN  

These tests confirm that the logic behaves correctly in all situations.

---

## How to Run

1. Compile the code:
   g++ guard.cpp -o guard

2. Run the program:
   ./guard

---

## Tech Used
- C++
- Basic conditional logic

---

## Author
Ayush Dogra
