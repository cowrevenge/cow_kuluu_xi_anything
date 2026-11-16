/* f_0x1015b910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015b910(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_edi);
    if ((int32_t)rd32(sp0 + 4u) > 131072)
    {
        eax = rd32(sp0 + 4u);
        edx = in_edx;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 8u, 0x1eu);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10126670u), self, 1, 0x1eu);
        t2 = g->edx;
        wr32(sp0 + 4u, t1);
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
            esi = in_esi;
        }
        else
        {
            edx = t2;
            wr32(sp0 - 8u, in_esi);
L_1015b92e: ;
            wr32(sp0 - 0xcu, sp0 + 4u);
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
            t4 = g->edx;
            if (rd32(t3 + 0x150cu) == 0u)
            {
                edx = t4;
            }
            else
            {
                eax = t3;
                ecx = rd32(t3 + 0x150cu);
                esi = t3;
                wr32(sp0 - 0xcu, 1u);
                g->edx = rd32(ecx);
                t5 = rd32(ecx);
                g->esp = sp0 - 8u;
                cow_thiscall(g, rd32(t5 + 0x18u), ecx, 1, 1u);
                t6 = g->edx;
                wr32(esi + 0x150cu, 0u);
                edx = t6;
            }
            if (rd32(sp0 + 4u) != 0u) goto L_1015b92e;
            eax = rd32(sp0 + 4u);
            esi = rd32(sp0 - 8u);
        }
    }
    g->esi = esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b910(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
