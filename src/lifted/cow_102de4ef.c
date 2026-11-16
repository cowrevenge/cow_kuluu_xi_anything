/* f_0x102de4ef - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102de4ef(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
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
        ebx = rd32(rd32(self) + 0x1050u);
        esi = rd32(rd32(self) + 0x18u);
        loc_1c = t1;
        loc_4 = t2;
L_102de52b: ;
        t3 = esi + rd32(eax + 0x1058u) * 2u;
        if (esi >= esi + rd32(eax + 0x1058u) * 2u) goto L_102de5e9;
        ebp = esi;
        loc_20 = loc_1c;
        loc_18 = esi;
        loc_14 = ebx + esi;
        ebx = ebx + esi;
        loc_c = t3;
L_102de554: ;
        t4 = rd16(ebx + 2u);
        t5 = rd16(ebp + 2u);
        t6 = (((t4 & 0xffff03e0u) + (t5 & 0xffff03e0u) + (rd16(ebp) & 0xffff03e0u) + (rd16(ebx) & 0xffff03e0u) + 0x40u) >> 2u & 0xffff03e0u) | (((t4 & 0x7c1fu) + (t5 & 0x7c1fu) + (rd16(ebp) & 0x7c1fu) + (rd16(ebx) & 0x7c1fu) + 0x802u) >> 2u & 0xffff0000u) | (((t4 & 0x7c1fu) + (t5 & 0x7c1fu) + (rd16(ebp) & 0x7c1fu) + (rd16(ebx) & 0x7c1fu) + 0x802u) >> 2u & 0x7c1fu);
        wr16(loc_20, (uint16_t)t6);
        if (loc_18 + 4u < loc_c)
        {
            ebx = loc_14 + 4u;
            ebp = loc_18 + 4u;
            loc_20 = loc_20 + 2u;
            loc_18 = loc_18 + 4u;
            loc_14 = loc_14 + 4u;
            goto L_102de554;
        }
        edx = loc_4;
L_102de5e9: ;
        t7 = loc_1c + rd32(rd32(self + 4u) + 0x1050u);
        if (esi + rd32(rd32(self) + 0x1050u) * 2u < edx)
        {
            eax = rd32(self);
            ebx = rd32(rd32(self) + 0x1050u);
            esi = esi + rd32(rd32(self) + 0x1050u) * 2u;
            loc_1c = t7;
            goto L_102de52b;
        }
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102de4ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102de4ef(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
