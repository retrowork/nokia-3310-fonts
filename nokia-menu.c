struct
{
	int width;
	int advance;
	int rows[6];
}
font_data[] =
{
	{  2,  3, { 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00 } }, // -
	{  1,  2, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x80 } }, // .
	{  3,  4, { 0x20, 0x20, 0x40, 0x40, 0x80, 0x80 } }, // /
	{  5,  6, { 0x70, 0xd8, 0xd8, 0xd8, 0xd8, 0x70 } }, // 0
	{  5,  6, { 0x30, 0x70, 0x30, 0x30, 0x30, 0x30 } }, // 1
	{  5,  6, { 0xf0, 0x18, 0x18, 0x70, 0xc0, 0xf8 } }, // 2
	{  5,  6, { 0xf0, 0x18, 0x70, 0x18, 0x18, 0xf0 } }, // 3
	{  5,  6, { 0x18, 0x38, 0x58, 0xf8, 0x18, 0x18 } }, // 4
	{  5,  6, { 0xf0, 0xc0, 0xf0, 0x18, 0x18, 0xf0 } }, // 5
	{  5,  6, { 0x70, 0xc0, 0xf0, 0xd8, 0xd8, 0x70 } }, // 6
	{  5,  6, { 0xf8, 0x18, 0x30, 0x60, 0x60, 0x60 } }, // 7
	{  5,  6, { 0x70, 0xd8, 0x70, 0xd8, 0xd8, 0x70 } }, // 8
	{  5,  6, { 0x70, 0xd8, 0xd8, 0x78, 0x18, 0x70 } }, // 9
};