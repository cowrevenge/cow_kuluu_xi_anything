/* f_0x1010b6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010b6d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    edx = in_edx;
    edi = rd32(self + 0x60u);
L_1010b6d9: ;
    if (rd32(edi + 4u) == 0u) goto L_1010b71d;
    if (rd32(edi + 8u) == 0u) goto L_1010b71d;
    t1 = rd32(rd32(edi) + 0xcu);
    g->eax = t1;
    g->edx = edx;
    t2 = rd32(edi);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x1010b690u), self, 1, t1);
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        ebx = t3;
        esi = t2;
        t5 = rd32(esi + 0x14u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, COW_IMG(0x1010b690u), self, 1, t5);
        t7 = g->edx;
        if (t6 == 0u)
        {
            edx = t7;
        }
        else
        {
            eax = t6;
            edx = t7;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101115e0u), ebx, 2, eax, esi);
            t8 = g->edx;
            edx = t8;
        }
    }
    if (rd32(edi + 8u) != 0u)
    {
        eax = rd32(edi + 8u);
        edi = eax;
    }
    goto L_1010b6d9;
L_1010b71d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010b6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010b6d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
