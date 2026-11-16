/* f_0x102debdb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102debdb(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t self = g->ecx;

    t1 = rd32(rd32(self + 4u) + 0x18u);
    t2 = rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x105cu) * rd32(rd32(self) + 0x1050u);
    if (rd32(rd32(self) + 0x18u) >= rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x105cu) * rd32(rd32(self) + 0x1050u))
    {
        edx = t2;
    }
    else
    {
        eax = rd32(self);
        edx = t2;
        ebp = t1;
        esi = rd32(rd32(self) + 0x18u);
        edi = rd32(rd32(self) + 0x1050u);
        loc_10 = t1;
        loc_4 = t2;
L_102dec12: ;
        t3 = esi + rd32(eax + 0x1058u) * 2u;
        if (esi >= esi + rd32(eax + 0x1058u) * 2u) goto L_102decd2;
        ebx = esi;
        loc_1c = ebp;
        loc_18 = esi;
        loc_14 = edi + esi;
        edi = edi + esi;
        loc_c = t3;
L_102dec37: ;
        t4 = rd16(edi + 2u);
        t5 = rd16(ebx + 2u);
        t6 = (((t4 & 0xffff00f0u) + (t5 & 0xffff00f0u) + (rd16(ebx) & 0xffff00f0u) + (rd16(edi) & 0xffff00f0u) + 0x20u) >> 2u & 0xffff00f0u) | ((((t4 & 0xffff0000u) | (t4 & 0xf0fu)) + ((t5 & 0xffff0000u) | (t5 & 0xf0fu)) + ((rd16(ebx) & 0xffff0000u) | (rd16(ebx) & 0xf0fu)) + ((rd16(edi) & 0xffff0000u) | (rd16(edi) & 0xf0fu)) + 0x202u) >> 2u & 0xffff0000u) | ((((t4 & 0xffff0000u) | (t4 & 0xf0fu)) + ((t5 & 0xffff0000u) | (t5 & 0xf0fu)) + ((rd16(ebx) & 0xffff0000u) | (rd16(ebx) & 0xf0fu)) + ((rd16(edi) & 0xffff0000u) | (rd16(edi) & 0xf0fu)) + 0x202u) >> 2u & 0xf0fu);
        wr16(loc_1c, (uint16_t)t6);
        if (loc_18 + 4u < loc_c)
        {
            ebx = loc_18 + 4u;
            edi = loc_14 + 4u;
            loc_1c = loc_1c + 2u;
            loc_18 = loc_18 + 4u;
            loc_14 = loc_14 + 4u;
            goto L_102dec37;
        }
        edx = loc_4;
        ebp = loc_10;
L_102decd2: ;
        t7 = ebp + rd32(rd32(self + 4u) + 0x1050u);
        if (esi + rd32(rd32(self) + 0x1050u) * 2u < edx)
        {
            eax = rd32(self);
            ebp = t7;
            esi = esi + rd32(rd32(self) + 0x1050u) * 2u;
            edi = rd32(rd32(self) + 0x1050u);
            loc_10 = t7;
            goto L_102dec12;
        }
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102debdb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102debdb(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
