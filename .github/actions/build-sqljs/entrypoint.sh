#!/bin/bash

set -e

cd /github/workspace/
cd fts5-snowball
make clean all
cd ..
npm run rebuild
