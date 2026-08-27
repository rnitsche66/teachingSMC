# Python script to convert values for EtherCAT communication into
# Gleitkommazahlen and 4 Bytes, ....

import struct

binary_str = "00111101010011001100110011001101"
val = int(binary_str, 2)
float_val = struct.unpack('!f', struct.pack('!I', val))[0]
print(float_val)
