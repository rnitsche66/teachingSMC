# float_to_bytes_2.py – Konvertiert eine Dezimalzahl in ihre 4-Byte-Darstellung (IEEE 754, Little-Endian).

# Verwendung:
#    python float_to_bytes_2.py <zahl>
#    python float_to_bytes_2.py 0.05
#
# Ohne Argument wird 0.05 als Standardwert verwendet.

# Ausgabe:
#     - Hexadezimale Byte-Darstellung (Little-Endian)
#     - Binäre Byte-Darstellung (Little-Endian)
#     - Dezimale Byte-Werte (Little-Endian)


import struct
import sys


def float_to_le_bytes(value: float):
    # Float als 4 Bytes im Little-Endian-Format packen (IEEE 754 single precision)
    data = struct.pack('<f', value)

    # Jedes Byte als Hex-Wert formatieren
    hex_str = ' '.join(f'0x{b:02X}' for b in data)

    # Jedes Byte als 8-Bit-Binärwert formatieren
    bin_str = ' '.join(f'{b:08b}' for b in data)

    print(f"Wert:       {value}")
    print(f"Hex (LE):   {hex_str}")
    print(f"Binär (LE): {bin_str}")
    print(f"Bytes (LE): {list(data)}")


if __name__ == '__main__':
    # Wert aus Kommandozeilenargument lesen oder Standardwert verwenden
    val = float(sys.argv[1]) if len(sys.argv) > 1 else 0.05
    float_to_le_bytes(val)
