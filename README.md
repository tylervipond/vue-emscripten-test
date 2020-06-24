# vue-emscripten-test

Wasm here was generated with Emscripten from cpp using the following command:
`em++ ~/<path-to-cpp>/main.cpp -s EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]' -s EXPORTED_FUNCTIONS='["_testFunc"]' -o ~/<path-to-wasm>/wasm_module.js -s "ENVIRONMENT='web'" -s MODULARIZE;`

The purpose being to show that emscripten generated wasm could be used with vue. I can almost guarantee that this code is garbage as I know nothing of emscripten.

## Project setup
```
npm install
```

### Compiles and hot-reloads for development
```
npm run serve
```

### Compiles and minifies for production
```
npm run build
```

### Lints and fixes files
```
npm run lint
```

### Customize configuration
See [Configuration Reference](https://cli.vuejs.org/config/).
