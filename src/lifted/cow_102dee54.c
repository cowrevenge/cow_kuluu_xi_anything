/* f_0x102dee54 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dee54(Guest* g)
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
    uint32_t loc_20;
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
        ebp = t1;
        esi = t3;
        edi = rd32(rd32(self) + 0x1050u);
        loc_14 = t1;
        loc_10 = t2;
        loc_4 = t3;
L_102dee8f: ;
        t4 = eax + rd32(edx + 0x1058u);
        if (eax >= eax + rd32(edx + 0x1058u)) goto L_102def65;
        ebx = eax;
        loc_20 = ebp;
        loc_1c = eax;
        loc_18 = eax + edi;
        edi = eax + edi;
        loc_c = t4;
L_102deeb3: ;
        t5 = rd8(edi + 1u);
        t6 = rd8(ebx + 1u);
        t7 = ((((t5 & 0xfu) + (t6 & 0xfu) + (rd8(ebx) & 0xfu) + (rd8(edi) & 0xfu) + 2u) >> 2u ^ ((t5 & 0xffff00f0u) + (t6 & 0xffff00f0u) + (rd8(ebx) & 0xffff00f0u) + (rd8(edi) & 0xffff00f0u) + 0x20u) >> 2u) & 0xfu) ^ (uint8_t)((((t5 & 0xffff0000u) | (t5 & 0xf0u)) + ((t6 & 0xffff0000u) | (t6 & 0xf0u)) + ((rd8(ebx) & 0xffff0000u) | (rd8(ebx) & 0xf0u)) + ((rd8(edi) & 0xffff0000u) | (rd8(edi) & 0xf0u)) + 0x20u) >> 2u);
        wr8(loc_20, (uint8_t)t7);
        if (loc_1c + 2u < loc_c)
        {
            ebx = loc_1c + 2u;
            edi = loc_18 + 2u;
            loc_20 = loc_20 + 1u;
            loc_1c = loc_1c + 2u;
            loc_18 = loc_18 + 2u;
            goto L_102deeb3;
        }
        eax = loc_10;
        ebp = loc_14;
        esi = loc_4;
L_102def65: ;
        t8 = ebp + rd32(rd32(self + 4u) + 0x1050u);
        t9 = eax + rd32(rd32(self) + 0x1050u) * 2u;
        if (eax + rd32(rd32(self) + 0x1050u) * 2u < esi)
        {
            eax = t9;
            edx = rd32(self);
            ebp = t8;
            edi = rd32(rd32(self) + 0x1050u);
            loc_14 = t8;
            loc_10 = t9;
            goto L_102dee8f;
        }
        edx = rd32(self);
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dee54(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dee54(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
