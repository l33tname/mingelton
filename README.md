Fun with Singletons
===================

This is a companion repository for my blog post: <https://l33tsource.com/blog/2022/12/26/Mingelton-cpp/>

## Build & Run

Configure and build.

```
mkdir build && cd build
cmake ..
make
```

To run make sure the `LD_LIBRARY_PATH` is set to load the plugin.

```
export LD_LIBRARY_PATH=src/plugin
./src/app/app.exe
```

## Commits

Contains 2 commits:

- Broken state <- using a singleton defined in header only
- Working state <- with macro and singleton in cpp
