#!/bin/bash

# Colores
RO='\033[0;31m'
V='\033[1;32m'
AM='\033[1;33m'
AZ='\033[0;34m'
B='\033[0;37m'
R='\033[0m'

# Cadenas de texto
URL='https://github.com/ibanezfr/practica-c'
FURL="\n\n\t\t${AM}REPO >>${AM} ${V}${URL}\n\n${R}"
QR="qrencode no está instalado. Debes instalarlo para generar el código QR."
CATIMG="catimg no está instalado. Debes instalarlo para mostrar imágenes en la terminal."


TMP_FILE=$(mktemp /tmp/qrcode_XXXXXXX.png)

if ! command -v qrencode &> /dev/null; then
    echo "$QR"
    echo -e "$FURL"
    rm "$TMP_FILE"
    exit 1
fi

if ! command -v catimg &> /dev/null; then
    echo "$CATIMG"
    echo -e "$FURL"
    rm "$TMP_FILE"
    exit 1
fi

echo -e "$FURL"
qrencode -o "$TMP_FILE" -t PNG $URL && catimg -H 59 "$TMP_FILE" || echo -e "$FURL"

rm "$TMP_FILE"
