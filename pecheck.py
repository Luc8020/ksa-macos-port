import struct, sys
d = open(sys.argv[1], 'rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
machine = struct.unpack_from('<H', d, pe + 4)[0]
nsec = struct.unpack_from('<H', d, pe + 6)[0]
optsize = struct.unpack_from('<H', d, pe + 20)[0]
magic = struct.unpack_from('<H', d, pe + 24)[0]
dd = pe + 24 + (112 if magic == 0x20b else 96)
cli_rva = struct.unpack_from('<I', d, dd + 14 * 8)[0]
sec = pe + 24 + optsize
off = None
for i in range(nsec):
    s = sec + i * 40
    vsize, va, rawsize, rawptr = struct.unpack_from('<IIII', d, s + 8)
    if va <= cli_rva < va + max(vsize, rawsize):
        off = cli_rva - va + rawptr
flags = struct.unpack_from('<I', d, off + 16)[0] if off else None
print(sys.argv[1], "machine=%#x magic=%#x clrflags=%s" % (machine, magic, hex(flags) if flags is not None else None))