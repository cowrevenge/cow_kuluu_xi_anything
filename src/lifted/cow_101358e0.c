/* f_0x101358e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101358e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x1057847cu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10150cc0u), t1, 2, 0u, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(self + 0x74u) == 0u)
    {
        eax = rd32(self + 0x74u);
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        esi = 0u;
        edi = self + 0x78u;
L_10135900: ;
        t4 = esi + rd32(self + 0x74u);
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10134e90u), t4, g->ecx, edx, 1, 4, t4, edi, in_edi, in_esi);
        t6 = g->ecx;
        t7 = g->edx;
        if ((int32_t)(esi + 4u) < 64)
        {
            ecx = t6;
            edx = t7;
            esi = esi + 4u;
            edi = edi + 4u;
            goto L_10135900;
        }
        eax = t5;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101358e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101358e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
