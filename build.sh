### Calls CMake

set -euxo pipefail

## Ugly Hack
mkdir -p build
rm -r build
mkdir build

cd build

cmake .. && cmake --build .