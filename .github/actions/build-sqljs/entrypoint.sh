#!/bin/bash

set -e

cd /github/workspace/
cd fts5-snowball
make clean || true
make all
cd ..
npm run rebuild
