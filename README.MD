# INTEL8080 DISASSEMBLER

This project is fairy simple. It translates Intel8080 machine code into assembly, according to 8080 Assembly Language Programming Manual. It can decode many files into one output file.

## Instalation.

In order to install, you need to compile it. This project doesn't need any dependencies. 
Linux & Mac OS (for example g++ since it's very easy)
```bash
g++ disassembler.cpp translate.cpp -o disassembler
```
Windows 
Windows is an elephant in this room. I suggest using WSL and g++ (see an example above). It's also possible to plug it into some IDE like Code::Blocks or Visual Studio.

## Usage

One can use it standalone (just open executive) or use funcions from this project. In order to use main function - decompiler, it's necessary to pass name of source file. Standalone project should be used in terminal.

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

[MIT](https://choosealicense.com/licenses/mit/)
