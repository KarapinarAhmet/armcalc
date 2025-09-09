#!/bin/bash
# armcalc çalıştırma scripti

cd "$(dirname "$0")/.."

if [ ! -f hesap ]; then
    echo "❌ 'hesap' bulunamadı. Önce 'make hesap' ile derle."
    exit 1
fi

./hesap
