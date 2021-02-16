# C++ CMake Template

Create the `build` directory and configure the build system:

```bash
cmake -B build
```

Build the project:

```bash
cmake --build build
```

The application and tests are created inside the `build` directory.

The tests can be run with `ctest` by typing:

```bash
cmake -E chdir build ctest
```