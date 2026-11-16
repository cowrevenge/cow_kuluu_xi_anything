/* f_0x100f1b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f1b20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        goto L_100f1b3b;
    }
    eax = rd32(self + 0x1cu);
L_100f1b2a: ;
    if (rd16(eax + 0x1058u) == 0u) goto L_100f1b5c;
    if (rd32(eax + 4u) != 0u)
    {
        eax = rd32(eax + 4u);
        goto L_100f1b2a;
    }
    eax = rd32(eax + 4u);
L_100f1b3b: ;
    if (rd16(self + 0x18u) >= 0x1eu) goto L_100f1b95;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x1060u);
    t2 = g->edx;
    if (t1 == 0u) goto L_100f1b6f;
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
    eax = t3;
    if (eax != 0u)
    {
        wr16(self + 8u, (uint16_t)(rd16(self + 8u) + 1u));
        if (rd16(self + 8u) == 0u)
        {
            wr16(self + 8u, 1u);
        }
        t4 = rd32(self + 0x1cu);
        wr16(self + 0x18u, (uint16_t)(rd16(self + 0x18u) + 1u));
        wr32(eax + 4u, t4);
        wr32(self + 0x1cu, eax);
    }
L_100f1b95: ;
    return eax;
L_100f1b5c: ;
    wr16(self + 8u, (uint16_t)(rd16(self + 8u) + 1u));
    if (rd16(self + 8u) != 0u) goto L_100f1b95;
    wr16(self + 8u, 1u);
    return eax;
L_100f1b6f: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f1b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
