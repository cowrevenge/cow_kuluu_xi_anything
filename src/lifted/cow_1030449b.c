/* f_0x1030449b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1030449b(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;

    t1 = cow_divs(g, rd32(rd32(in_edi + 0x194u) + 0x14u), 8u);
    t2 = cow_mods(g, rd32(rd32(in_edi + 0x194u) + 0x14u), 8u);
    t3 = rd32(in_edi + 0x194u);
    wr32(rd32(in_edi + 0x190u) + 0x58u, t1 + rd32(rd32(in_edi + 0x190u) + 0x58u));
    wr32(t3 + 0x14u, 0u);
    g->eax = rd32(in_edi + 0x190u);
    t4 = rd32(in_edi + 0x190u);
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall_cdecl(g, rd32(t4 + 8u), in_edi + 0x190u, 1, in_edi);
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
    }
    else
    {
        esi = t3;
        if ((int32_t)rd32(in_edi + 0x120u) > 0)
        {
            ecx = esi + 0x24u;
            edx = 0u;
L_103044d7: ;
            wr32(ecx, 0u);
            if ((int32_t)(edx + 1u) < (int32_t)rd32(in_edi + 0x120u))
            {
                ecx = ecx + 4u;
                edx = edx + 1u;
                goto L_103044d7;
            }
        }
        wr32(esi + 0x20u, 0u);
        t6 = rd32(in_edi + 0xfcu);
        wr32(esi + 0x34u, t6);
        wr8(esi + 0x18u, 0u);
        eax = (t6 & 0xffffff00u) | 1u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030449b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030449b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
