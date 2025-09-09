#!/bin/bash
# armcalc benchmark scripti

cd "$(dirname "$0")/.."

if [ ! -f benchmark ]; then
    echo "❌ 'benchmark' bulunamadı. Önce 'make benchmark' ile derle."
    exit 1
fi

./benchmark
