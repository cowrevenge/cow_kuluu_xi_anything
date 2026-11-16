/* f_0x102ded08 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ded08(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t self = g->ecx;

    t1 = rd32(rd32(self + 4u) + 0x18u);
    t2 = rd32(rd32(self) + 0x18u);
    t3 = rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x105cu) * rd32(rd32(self) + 0x1050u);
    if (rd32(rd32(self) + 0x18u) >= rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x105cu) * rd32(rd32(self) + 0x1050u))
    {
        edx = rd32(self);
    }
    else
    {
        eax = t2;
        edx = rd32(self);
        ebp = rd32(rd32(self) + 0x1050u);
        edi = t3;
        loc_20 = t1;
        loc_10 = t2;
        loc_4 = t3;
L_102ded48: ;
        t4 = eax + rd32(edx + 0x1058u) * 2u;
        if (eax >= eax + rd32(edx + 0x1058u) * 2u) goto L_102dee26;
        ebx = eax;
        loc_24 = loc_20;
        loc_18 = eax;
        loc_14 = eax + ebp;
        ebp = eax + ebp;
        loc_c = t4;
L_102ded71: ;
        t5 = rd16(ebp + 2u);
        t6 = rd16(ebx + 2u);
        t7 = (uint8_t)((((t5 & 0xffff0000u) | (uint8_t)t5) + ((t6 & 0xffff0000u) | (uint8_t)t6) + ((rd16(ebp) & 0xffff0000u) | (uint8_t)rd16(ebp)) + ((rd16(ebx) & 0xffff0000u) | (uint8_t)rd16(ebx)) + 2u) >> 2u) ^ (uint8_t)((((t5 & 0xffff0000u) | (t5 & 0xff00u)) + ((t6 & 0xffff0000u) | (t6 & 0xff00u)) + ((rd16(ebp) & 0xffff0000u) | (rd16(ebp) & 0xff00u)) + ((rd16(ebx) & 0xffff0000u) | (rd16(ebx) & 0xff00u)) + 0x200u) >> 2u);
        t8 = ((((((t5 & 0xffff0000u) | (uint8_t)t5) + ((t6 & 0xffff0000u) | (uint8_t)t6) + ((rd16(ebp) & 0xffff0000u) | (uint8_t)rd16(ebp)) + ((rd16(ebx) & 0xffff0000u) | (uint8_t)rd16(ebx)) + 2u) >> 2u & 0xffffff00u) | (uint8_t)t7) & 0xffff00ffu) ^ ((t5 & 0xff00u) + (t6 & 0xff00u) + (rd16(ebp) & 0xff00u) + (rd16(ebx) & 0xff00u) + 0x200u) >> 2u;
        wr16(loc_24, (uint16_t)t8);
        if (loc_18 + 4u < loc_c)
        {
            ebx = loc_18 + 4u;
            ebp = loc_14 + 4u;
            loc_24 = loc_24 + 2u;
            loc_18 = loc_18 + 4u;
            loc_14 = loc_14 + 4u;
            goto L_102ded71;
        }
        eax = loc_10;
        edi = loc_4;
L_102dee26: ;
        t9 = loc_20 + rd32(rd32(self + 4u) + 0x1050u);
        t10 = eax + rd32(rd32(self) + 0x1050u) * 2u;
        if (eax + rd32(rd32(self) + 0x1050u) * 2u < edi)
        {
            eax = t10;
            edx = rd32(self);
            ebp = rd32(rd32(self) + 0x1050u);
            loc_20 = t9;
            loc_10 = t10;
            goto L_102ded48;
        }
        edx = rd32(self);
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ded08(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ded08(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
