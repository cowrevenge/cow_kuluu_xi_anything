/* f_0x10154c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10154c50(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1018d3d0u), arg1, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = t2;
    }
    else
    {
        eax = rd32(self + 0x14u);
        ecx = t1;
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, COW_IMG(0x10258450u), ecx, 6, arg1, arg2, arg3, eax, in_edi, in_esi);
        t3 = g->edx;
        if (rd32(self + 4u) == 0u)
        {
            eax = rd32(self + 4u);
            edx = t3;
        }
        else
        {
            eax = rd32(self + 4u);
            edx = t3;
            if (rd8(rd32(self + 0x14u)) == 0u)
            {
                ecx = rd32(self + 0x14u);
            }
            else
            {
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t4 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x1034f2b8u));
                t5 = g->ecx;
                eax = t4;
                ecx = t5;
            }
            t6 = rd32(self + 0x18u);
            g->eax = eax;
            g->edx = t6;
            g->esp = sp0 - 4u;
            t7 = cow_thiscall_cdecl(g, COW_IMG(0x10258450u), ecx, 6, arg1, 0xffffffffu, arg3, t6, in_edi, in_esi);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10154c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10154c50(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
