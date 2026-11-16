/* f_0x10074c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10074c30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0xd50u);
    wr32(self + 0xd48u, 0u);
    wr32(self + 0xd4cu, t1);
    if (t1 == 0u) goto L_10074c8d;
    edx = in_edx;
L_10074c4d: ;
    t2 = rd32(rd32(self + 0xd4cu) + 0xcu);
    t3 = rd32(self + 0xd4cu);
    wr32(self + 0xd5cu, t2);
    if (rd32(t3 + 4u) != 0u)
    {
        eax = t3;
        ecx = rd32(t3 + 4u);
        if (rd16(eax + 0x22u) == 0u)
        {
            g->esp = sp0 - 4u;
            cow_thiscall_cdecl(g, ecx, ecx, 1, eax);
        }
    }
    t4 = rd32(self + 0xd5cu);
    t5 = rd32(self + 0xd48u);
    wr32(self + 0xd4cu, t4);
    wr32(self + 0xd48u, t5 + 1u);
    if (t4 != 0u)
    {
        edx = t5 + 1u;
        goto L_10074c4d;
    }
L_10074c8d: ;
    t6 = rd32(self + 0xd48u);
    wr32(self + 0xd4cu, 0u);
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
