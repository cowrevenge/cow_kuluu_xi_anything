/* src/util/cow_accessors.c - the shared bodies of the object accessors that
   tools/cow/mkaccessor.py found in FFXiMain.dll. Each one is one instruction of the
   original, expressed as C: it reads or writes exactly the field named in layout/structs.h.
   cowdiff proves every entry that calls one against its generated original.
*/
#include "cow.h"

/* `mov eax, [ecx+0x0c]` then `ret`: read the field. */
uint32_t cow_read_word_0c(const CowWordObj_0c* o)
{
    return o->word_0c;
}

/* `lea eax, [ecx+0x34]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_34(uint32_t self)
{
    return self + COW_LEA_34;
}

/* `mov eax, [ecx+0x00]` then `ret`: read the field. */
uint32_t cow_read_word_00(const CowWordObj_00* o)
{
    return o->word_00;
}

/* `mov eax, [ecx+0x30]` then `ret`: read the field. */
uint32_t cow_read_word_30(const CowWordObj_30* o)
{
    return o->word_30;
}

/* `lea eax, [ecx+0x20]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_20(uint32_t self)
{
    return self + COW_LEA_20;
}

/* `lea eax, [ecx+0x44]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_44(uint32_t self)
{
    return self + COW_LEA_44;
}

/* `lea eax, [ecx+0x08]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_08(uint32_t self)
{
    return self + COW_LEA_08;
}

/* `lea eax, [ecx+0x38]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_38(uint32_t self)
{
    return self + COW_LEA_38;
}

/* `lea eax, [ecx+0x02]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_02(uint32_t self)
{
    return self + COW_LEA_02;
}

/* `lea eax, [ecx+0x01]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_01(uint32_t self)
{
    return self + COW_LEA_01;
}

/* `lea eax, [ecx+0x03]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_03(uint32_t self)
{
    return self + COW_LEA_03;
}

/* `mov eax, [ecx+0x34]` then `ret`: read the field. */
uint32_t cow_read_word_34(const CowWordObj_34* o)
{
    return o->word_34;
}

/* `lea eax, [ecx+0x30]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_30(uint32_t self)
{
    return self + COW_LEA_30;
}

/* `lea eax, [ecx+0x78]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_78(uint32_t self)
{
    return self + COW_LEA_78;
}

/* `mov eax, [ecx+0x2c]` then `ret`: read the field. */
uint32_t cow_read_word_2c(const CowWordObj_2c* o)
{
    return o->word_2c;
}

/* `mov eax, [ecx+0x70]` then `ret`: read the field. */
uint32_t cow_read_word_70(const CowWordObj_70* o)
{
    return o->word_70;
}

/* `mov eax, [ecx+0x68]` then `ret`: read the field. */
uint32_t cow_read_word_68(const CowWordObj_68* o)
{
    return o->word_68;
}

/* `mov eax, [ecx+0x74]` then `ret`: read the field. */
uint32_t cow_read_word_74(const CowWordObj_74* o)
{
    return o->word_74;
}

/* `mov eax, [ecx+0x38]` then `ret`: read the field. */
uint32_t cow_read_word_38(const CowWordObj_38* o)
{
    return o->word_38;
}

/* `lea eax, [ecx+0x10]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_10(uint32_t self)
{
    return self + COW_LEA_10;
}

/* `mov eax, [ecx+0x18]` then `ret`: read the field. */
uint32_t cow_read_word_18(const CowWordObj_18* o)
{
    return o->word_18;
}

/* `lea eax, [ecx+0x04]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_04(uint32_t self)
{
    return self + COW_LEA_04;
}

/* `lea eax, [ecx+0x05]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_05(uint32_t self)
{
    return self + COW_LEA_05;
}

/* `mov eax, [ecx+0x40]` then `ret`: read the field. */
uint32_t cow_read_word_40(const CowWordObj_40* o)
{
    return o->word_40;
}

/* `mov eax, [ecx+0x50]` then `ret`: read the field. */
uint32_t cow_read_word_50(const CowWordObj_50* o)
{
    return o->word_50;
}

/* `mov eax, [ecx+0x54]` then `ret`: read the field. */
uint32_t cow_read_word_54(const CowWordObj_54* o)
{
    return o->word_54;
}

/* `mov eax, [ecx+0x08]` then `ret`: read the field. */
uint32_t cow_read_word_08(const CowWordObj_08* o)
{
    return o->word_08;
}

/* `mov eax, [ecx+0x04]` then `ret`: read the field. */
uint32_t cow_read_word_04(const CowWordObj_04* o)
{
    return o->word_04;
}

/* `mov eax, [ecx+0x20]` then `ret`: read the field. */
uint32_t cow_read_word_20(const CowWordObj_20* o)
{
    return o->word_20;
}

/* `mov eax, [ecx+0x10]` then `ret`: read the field. */
uint32_t cow_read_word_10(const CowWordObj_10* o)
{
    return o->word_10;
}

/* `lea eax, [ecx+0x58]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_58(uint32_t self)
{
    return self + COW_LEA_58;
}

/* `lea eax, [ecx+0x14]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_14(uint32_t self)
{
    return self + COW_LEA_14;
}

/* `lea eax, [ecx+0x0c]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_0c(uint32_t self)
{
    return self + COW_LEA_0c;
}

/* `mov eax, [ecx+0x24]` then `ret`: read the field. */
uint32_t cow_read_word_24(const CowWordObj_24* o)
{
    return o->word_24;
}

/* `mov eax, [ecx+0x28]` then `ret`: read the field. */
uint32_t cow_read_word_28(const CowWordObj_28* o)
{
    return o->word_28;
}

/* `mov eax, [ecx+0x14]` then `ret`: read the field. */
uint32_t cow_read_word_14(const CowWordObj_14* o)
{
    return o->word_14;
}

/* `lea eax, [ecx+0x6c]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_6c(uint32_t self)
{
    return self + COW_LEA_6c;
}

/* `mov eax, [ecx+0x7c]` then `ret`: read the field. */
uint32_t cow_read_word_7c(const CowWordObj_7c* o)
{
    return o->word_7c;
}

/* `lea eax, [ecx+0x24]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_24(uint32_t self)
{
    return self + COW_LEA_24;
}

/* `lea eax, [ecx+0x64]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_64(uint32_t self)
{
    return self + COW_LEA_64;
}

/* `lea eax, [ecx+0x74]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_74(uint32_t self)
{
    return self + COW_LEA_74;
}

/* `mov eax, [ecx+0x1c]` then `ret`: read the field. */
uint32_t cow_read_word_1c(const CowWordObj_1c* o)
{
    return o->word_1c;
}

/* `mov eax, [ecx+0x48]` then `ret`: read the field. */
uint32_t cow_read_word_48(const CowWordObj_48* o)
{
    return o->word_48;
}

/* `fld dword ptr [ecx+8]` then `ret`: the field as a float, for the adapter to push on the
   x87 stack. The struct types it as float and the offset is proven by COW_ASSERT_OFFSET. */
float cow_read_float_08(const CowFloatObj_08* o)
{
    return o->float_08;
}

/* `mov al, [ecx+1]` then `ret`: read the byte into al and leave the other three bytes of
   eax exactly as the caller left them, because that is what the instruction does. */
uint32_t cow_read_byte_01(const CowByteObj_01* o, uint32_t eax)
{
    return (eax & ~0xffu) | (uint32_t)o->byte_01;
}

/* `lea eax, [ecx-48]` then `ret`: the address of that byte of the object. */
uint32_t cow_object_plus_m30(uint32_t self)
{
    return self + COW_LEA_m30;
}

