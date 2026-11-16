/* f_0x102de762 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102de762(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(rd32(self + 4u) + 0x18u);
    t2 = rd32(rd32(self) + 0x18u);
    t3 = rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x105cu) * rd32(rd32(self) + 0x1050u);
    if (rd32(rd32(self) + 0x18u) >= rd32(rd32(self) + 0x18u) + rd32(rd32(self) + 0x105cu) * rd32(rd32(self) + 0x1050u))
    {
        edx = in_edx;
    }
    else
    {
        eax = t2;
        ebp = t3;
        esi = rd32(self);
        edi = rd32(rd32(self) + 0x1050u);
        loc_20 = t1;
        loc_14 = t2;
        loc_4 = t3;
L_102de7a2: ;
        t4 = eax + rd32(esi + 0x1058u) * 2u;
        if (eax >= eax + rd32(esi + 0x1058u) * 2u) goto L_102de887;
        ebx = eax;
        loc_24 = loc_20;
        loc_1c = eax;
        loc_18 = eax + edi;
        edi = eax + edi;
        loc_c = t4;
L_102de7cb: ;
        t5 = rd16(edi + 2u);
        t6 = rd16(ebx + 2u);
        t7 = (((t5 & 0xffff0000u) | (t5 & 0xf0f0u)) + ((t6 & 0xffff0000u) | (t6 & 0xf0f0u)) + ((rd16(ebx) & 0xffff0000u) | (rd16(ebx) & 0xf0f0u)) + ((rd16(edi) & 0xffff0000u) | (rd16(edi) & 0xf0f0u)) + 0x2020u) >> 2u ^ ((t5 & 0xffff0f0fu) + (t6 & 0xffff0f0fu) + (rd16(ebx) & 0xffff0f0fu) + (rd16(edi) & 0xffff0f0fu) + 0x202u) >> 2u;
        wr16(loc_24, (uint16_t)((t7 & 0xffff0f0fu) ^ ((t5 & 0xf0f0u) + (t6 & 0xf0f0u) + (rd16(ebx) & 0xf0f0u) + (rd16(edi) & 0xf0f0u) + 0x2020u) >> 2u));
        if (loc_1c + 4u < loc_c)
        {
            ebx = loc_1c + 4u;
            edi = loc_18 + 4u;
            loc_24 = loc_24 + 2u;
            loc_1c = loc_1c + 4u;
            loc_18 = loc_18 + 4u;
            goto L_102de7cb;
        }
        eax = loc_14;
        ebp = loc_4;
L_102de887: ;
        t8 = loc_20 + rd32(rd32(self + 4u) + 0x1050u);
        t9 = eax + rd32(rd32(self) + 0x1050u) * 2u;
        if (eax + rd32(rd32(self) + 0x1050u) * 2u < ebp)
        {
            eax = t9;
            esi = rd32(self);
            edi = rd32(rd32(self) + 0x1050u);
            loc_20 = t8;
            loc_14 = t9;
            goto L_102de7a2;
        }
        edx = 0xf0f0u;
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102de762(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102de762(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
