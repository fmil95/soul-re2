#!/bin/bash

# Get directory of this script
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

# CD into project dir
cd $DIR/..

# Ensure disc/SLUS_201.65 exists
if [ ! -f disc/SLUS_201.65 ]; then
  echo "Error: SLUS_201.65 not found. Copy it from your own game disc to the 'disc' directory of this project."
  exit
fi

# Configure and build
python3 configure.py --clean
ninja
