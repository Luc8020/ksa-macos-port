#!/bin/bash
cd "$(dirname "$0")"

# Lokales, gepatchtes MoltenVK als ICD-Treiber erzwingen
export VK_DRIVER_FILES="$(pwd)/MoltenVK_icd.json"
export VK_ICD_FILENAMES="$(pwd)/MoltenVK_icd.json"
export DYLD_LIBRARY_PATH="$(pwd):$DYLD_LIBRARY_PATH"

# MoltenVK-Konfiguration für Stabilität auf Apple Silicon:
# - Argument Buffers aktivieren (verhindert das 31-Buffer-Limit in komplexen Wolken-/Atmosphären-Shadern)
# - Live-Check aller Ressourcen aktivieren (verhindert GPU Page Faults bei gestreamten Texturen/Buffern)
# - Single-Queue-Modus (Queue 0-0 für Graphics + Compute + Transfer), da KSA Compute-Readbacks ohne
#   Cross-Queue-Semaphore abschickt
# - Resume Lost Device aktivieren, damit transiente GPU-Timeouts nicht sofort zum Absturz führen
export MVK_CONFIG_USE_METAL_ARGUMENT_BUFFERS=1
export MVK_CONFIG_LIVE_CHECK_ALL_RESOURCES=1
export MVK_CONFIG_VK_SEMAPHORE_SUPPORT_STYLE=0
export MVK_CONFIG_RESUME_LOST_DEVICE=1
export MVK_CONFIG_FAST_MATH_ENABLED=1

# Prüfen ob dotnet vorhanden ist
if ! command -v dotnet &> /dev/null; then
    echo "=========================================================="
    echo "FEHLER: .NET Runtime wurde nicht auf deinem Mac gefunden!"
    echo "Bitte installiere .NET 10 für macOS (Apple Silicon):"
    echo "  brew install --cask dotnet-sdk"
    echo "oder lade den offiziellen Mac-Installer herunter:"
    echo "  https://dotnet.microsoft.com/download/dotnet/10.0"
    echo "=========================================================="
    read -p "Drücke Enter zum Beenden..."
    exit 1
fi

echo "Starte Kitten Space Agency (macOS Native)..."
dotnet KSA.dll "$@"
