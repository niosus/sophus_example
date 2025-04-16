# A Sophus example

This is a tiny example of how to download and build [Sophus](https://github.com/strasdat/Sophus) using CMake and [CPM](https://github.com/cpm-cmake/CPM.cmake) as a package manager. We also use (an older version of) [`{fmt}`](https://github.com/fmtlib/fmt) to print stuff to terminal.

## How to build

```bash
cd <project_folder>
cmake -S . -B build
cmake --build build -j 12
```

This will automatically download `fmt` and `Sophus` libraries and build everything.

## Run an example

```cmd
./build/sophus_example/example
```

This should print an SE(3) transformation matrix.
