# C++ Particle Detector Event Analyzer
C++20 pipeline that generates synthetic detector hits, reconstructs coincident events, rejects invalid measurements and reports energy/occupancy statistics.

```bash
cmake -S . -B build
cmake --build build --config Release
ctest --test-dir build --output-on-failure
./build/detector_analyzer --generate sample.csv 5000
./build/detector_analyzer sample.csv
```
On Windows the executable may be in `build/Release/`.
