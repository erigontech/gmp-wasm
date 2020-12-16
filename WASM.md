Compilation into WebAssembly
===

Prerequisite: install [WASI SDK](https://github.com/WebAssembly/wasi-sdk) into `/opt/wasi-sdk`

```
./configure --prefix $HOME/opt-wasm CC=/opt/wasi-sdk/bin/clang --host=none
```

For C++ support add `--enable-cxx CXX=/opt/wasi-sdk/bin/clang++`

To use 64-bit rather than 32-bit limbs, add `ABI=longlong`

Then
```
make
make install
```

Result: Wasm-compiled GMP library is installed into `$HOME/opt-wasm`
