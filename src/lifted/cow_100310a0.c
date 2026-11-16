/* f_0x100310a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100310a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_divs(g, rd32(arg1 + 0xcu), rd32(self + 0x10u));
    t2 = cow_mods(g, rd32(arg1 + 0xcu), rd32(self + 0x10u));
    if (rd8(COW_IMG(0x1045b770u)) & 1u)
    {
        ebp = t1;
        edi = rd32(arg1 + 8u);
        loc_4 = t1;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | 1u;
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1045b770u));
        edx = t2;
        ebp = t1;
        edi = rd32(arg1 + 8u);
        loc_4 = t1;
        wr8(COW_IMG(0x1045b770u), (uint8_t)(ecx | eax));
        eax = COW_IMG(0x1045b6a8u);
        ecx = 0xau;
L_100310d9: ;
        wr32(eax, COW_IMG(0x1032a7dcu));
        if (ecx != 1u)
        {
            eax = eax + 0x14u;
            ecx = ecx - 1u;
            goto L_100310d9;
        }
        ecx = ecx - 1u;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10031180u));
    }
    if ((int32_t)(rd32(self + 0x10u) - 1u) <= 0)
    {
        ecx = 0u;
    }
    else
    {
        eax = COW_IMG(0x1045b6b0u);
        ecx = 0u;
        edx = 0u;
L_10031103: ;
        t3 = rd32(arg1 + 4u);
        wr32(eax, edi);
        wr32(eax - 4u, t3);
        wr32(eax + 4u, ebp);
        wr32(eax + 8u, ecx);
        wr32(edx + rd32(self + 4u) + 0x1cu, eax - 8u);
        if ((int32_t)(ecx + 1u) < (int32_t)(rd32(self + 0x10u) - 1u))
        {
            eax = eax + 0x14u;
            ecx = ecx + 1u;
            edx = edx + 0x20u;
            ebp = loc_4;
            edi = edi + loc_4;
            goto L_10031103;
        }
        ecx = ecx + 1u;
        edi = edi + loc_4;
    }
    t4 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1045b6acu) + ecx * 0x14u, t4);
    wr32(COW_IMG(0x1045b6b0u) + ecx * 0x14u, edi);
    t5 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1045b6b8u) + ecx * 0x14u, ecx);
    wr32(COW_IMG(0x1045b6b4u) + ecx * 0x14u, t5 - edi);
    t6 = COW_IMG(0x1045b6a8u) + ecx * 0x14u;
    t7 = rd32(self + 4u);
    wr32(ecx * 0x20u + t7 + 0x1cu, t6);
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100310a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100310a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
