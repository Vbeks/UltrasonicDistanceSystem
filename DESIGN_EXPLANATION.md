# Design Patterns Implementation

## MVC Pattern
The system follows the Model-View-Controller architecture.
- Model handles ultrasonic sensor reading.
- View controls the LEDs.
- Controller processes the logic and decides which LED to activate.
This separation improves maintainability and code clarity.

## Singleton Pattern
DistanceModel uses Singleton to ensure only one sensor instance exists.
This prevents hardware conflicts and saves memory in Arduino.

## Strategy Pattern
LedView uses interchangeable LED behaviors (safe, warning, danger).
This allows flexible behavior changes without modifying the controller logic.

## Conclusion
Using these patterns made the system modular, reusable, and easier to expand.
