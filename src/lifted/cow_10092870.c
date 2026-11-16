/* f_0x10092870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10092870(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 4u) == 0u)
    {
        eax = rd32(self + 0x120u);
    }
    else
    {
        eax = rd32(self + 0x120u);
        if ((eax >> 0xbu & 3u) != 0u)
        {
            eax = eax >> 0xbu & 3u;
            goto L_1009288a;
        }
        eax = eax >> 0xbu & 3u;
        loc_8 = 7u;
L_1009289a: ;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, loc_8);
        t1 = g->edx;
        edx = t1;
L_100928a5: ;
        if (rd32(self + 0xa4u) != 0u)
        {
            ecx = rd32(self + 0xa4u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
            wr32(self + 0xa4u, 0u);
        }
        wr32(rd32(self + 0xa0u) + 0x768u, 0u);
        wr32(self + 0xa4u, 0u);
        t2 = (rd32(self + 0x120u) & 0xffff00ffu) | (rd32(self + 0x120u) >> 8u & 0xfbu) << 8u;
        t3 = rd32(self + 0xa0u);
        wr32(self + 0x120u, t2);
        wr32(t3 + 0x7d8u, 0x20202020u);
        eax = t2;
    }
    return eax;
L_1009288a: ;
    if (eax != 1u) goto L_10092893;
    loc_8 = 8u;
    goto L_1009289a;
L_10092893: ;
    if (eax != 2u)
    {
        edx = in_edx;
        goto L_100928a5;
    }
    loc_8 = 9u;
    goto L_1009289a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10092870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10092870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
