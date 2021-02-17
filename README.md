# C++ CMake Template

```
cmake -B <path-to-build>                          # Generate the project's buildsystem in `<path-to-build>`.
cmake --build <path-to-build> [--config release]  # Build the project from the generated buildsystem [release build].
cmake -E chdir <path-to-build> ctest              # Test the built project.
```
