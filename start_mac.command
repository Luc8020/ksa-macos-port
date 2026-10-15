#!/bin/bash
cd "$(dirname "$0")"

# Lokales, gepatchtes MoltenVK als ICD-Treiber erzwingen
export VK_DRIVER_FILES="$(pwd)/MoltenVK_icd.json"
export VK_ICD_FILENAMES="$(pwd)/MoltenVK_icd.json"
export DYLD_LIBRARY_PATH="$(pwd):$DYLD_LIBRARY_PATH"

# Prüfen ob dotnet vorhanden ist
if ! command -v dotnet &> /dev/null; then
    echo "=========================================================="
    echo "FEHLER: .NET Runtime wurde nicht auf deinem Mac gefunden!"
    echo "Bitte installiere .NET 8 oder 9 für macOS:"
    echo "  brew install dotnet"
    echo "oder lade den offiziellen Mac-Installer herunter:"
    echo "  https://dotnet.microsoft.com/download/dotnet/8.0"
    echo "=========================================================="
    read -p "Drücke Enter zum Beenden..."
    exit 1
fi

echo "Starte Kitten Space Agency (macOS Native)..."
dotnet KSA.dll "$@"
