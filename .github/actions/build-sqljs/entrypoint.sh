#!/bin/bash

set -e

cd /github/workspace/
cd fts5-snowball
make
cd ..
npm run rebuild
