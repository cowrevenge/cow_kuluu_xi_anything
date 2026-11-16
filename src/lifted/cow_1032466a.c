/* f_0x1032466a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1032466a(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0xffffffffu)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_103246b6;
    }
    if (rd32(arg2 + 0xcu) & 1u)
    {
        eax = rd32(arg2 + 0xcu);
        goto L_10324688;
    }
    eax = rd32(arg2 + 0xcu);
    if ((eax & 0x80u) == 0u)
    {
        edx = in_edx;
        goto L_103246b6;
    }
    if ((eax & 2u) != 0u)
    {
        edx = in_edx;
        goto L_103246b6;
    }
L_10324688: ;
    if (rd32(arg2 + 8u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10323b8au), 1, arg2);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(arg2) != rd32(arg2 + 8u)) goto L_103246a5;
    eax = rd32(arg2);
    if (rd32(arg2 + 4u) != 0u) goto L_103246b6;
    wr32(arg2, eax + 1u);
L_103246a5: ;
    if ((rd8(arg2 + 0xcu) & 0x40u) == 0u) goto L_103246bc;
    wr32(arg2, rd32(arg2) - 1u);
    if (rd8(rd32(arg2)) == (uint8_t)arg1) goto L_103246c2;
    eax = rd32(arg2);
    wr32(arg2, eax + 1u);
    eax = eax + 1u;
L_103246b6: ;
    eax = 0xffffffffu;
L_103246b9: ;
    g->edx = edx;
    return eax;
L_103246bc: ;
    wr32(arg2, rd32(arg2) - 1u);
    wr8(rd32(arg2), (uint8_t)arg1);
L_103246c2: ;
    t2 = rd32(arg2 + 0xcu);
    wr32(arg2 + 4u, rd32(arg2 + 4u) + 1u);
    t3 = (t2 & 0xffffff00u) | (t2 & 0xefu) | 1u;
    wr32(arg2 + 0xcu, t3);
    eax = (uint8_t)arg1;
    goto L_103246b9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032466a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1032466a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
