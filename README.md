# Legacy of Kain: Soul Reaver 2 Decompile (PS2) 

![Game Cover](https://i.imgur.com/Q5gAoB1.png)

## About

This is a decompilation of Crystal Dynamics's 2001 stunning sequel to Soul Reaver. At the time of writing this, the project for the first game is nearing completion and thus it only makes sense to continue with the next game in the Legacy of Kain series. While this decomp was technically created in 2026, the first Soul Reaver 2 function [was decompiled in February 18, 2024](https://decomp.me/scratch/CUqSg), and the prototype that this project rebuilds has been investigated extensively for aiding with the SR1 decompilation, as both games share quite a bit of code.

Unfortunately unlike the previous game, the retail release doesn't contain debug info, and the only prototype that does is the July 17 one which lags three months behind the final game. Thankfully it has a full set of STAB debugging symbols and -O1 compiled code*, so the idea is to first decompile the prototype and then move on to commercial version.

Once the project is complete, there are plans to do a new version of Soul Reaver 2 restoring some of its excised content into its gameplay.

*There is no certainty that the proto is fully compiled with "Some optimization" yet, but some functions like LIST_DeleteFunc are.

*"We have been brought here for a reason."*

## Building

You'll need the `Jul 17, 2001 prototype`, which you can find on Hidden Palace. The following steps work only on Linux, but you can use WSL too:

### Clone the repo and run quickstart.sh

Copy and run the following block of commands. You might be asked for your password to install certain dependencies.

```bash
git clone https://github.com/fmil95/soul-re2 && \
cd soul-re2 && \
./scripts/quickstart.sh
```

### Extract the ELF from the prototype DVD

Copy `SLUS_201.65` from the root folder of the prototype files to the `disc` directory of the project before you try to build.

### Build the project

```bash
./scripts/build.sh
```

You should see this, provided you encountered no errors during the process:

```
[XXX/XXX] sha1sum config/checksum.sha1
out/SLUS_201.65: OK
```

## Credits

![Bonus Pic](https://i.imgur.com/5Sfs8WU.png)

This project used the [Sly Cooper and the Thievius Raccoonus decomp repo](https://github.com/TheOnlyZac/sly1) as template.
