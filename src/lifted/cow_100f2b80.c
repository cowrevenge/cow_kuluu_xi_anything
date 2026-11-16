/* f_0x100f2b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100f2b80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x105cu) == 0u)
    {
        eax = rd32(self + 0x105cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x105cu);
        if (rd32(eax + rd16(self + 0x105au) * 4u) == 0u)
        {
            eax = rd32(eax + rd16(self + 0x105au) * 4u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(eax + rd16(self + 0x105au) * 4u);
            ecx = rd16(self + 0x105au);
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_thiscall_cdecl(g, eax, ecx, 2, self, 2u);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(self + 0x105cu, 0u);
            if ((int32_t)rd32(self + 8u) >= 0)
            {
                edx = t3;
                edi = t1;
            }
            else
            {
                eax = rd32(self + 8u);
                ecx = t2;
                edx = t3;
                edi = t1;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x100182c0u), 1, eax);
                t4 = g->edx;
                edx = t4;
            }
            if (rd32(self + 0x104cu) != 0u)
            {
                ecx = rd32(self + 0x104cu);
                t5 = -(edi != 0u) & self + 8u;
                t6 = rd32(self + 0x1048u);
                g->edx = t6;
                g->esp = sp0 - 0xcu;
                cow_thiscall_cdecl(g, ecx, ecx, 4, t6, 0u, edi, t5);
                t7 = g->edx;
                edx = t7;
            }
            if (rd32(self + 0x1050u) != 0u)
            {
                ecx = rd32(self + 0x1050u);
                t8 = -(edi != 0u) & self + 8u;
                t9 = rd32(self + 0x1048u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall_cdecl(g, ecx, ecx, 5, t9, 0u, edi, 0u, t8);
                t10 = g->edx;
                edx = t10;
            }
            if (rd32(self + 0x1054u) == 0u)
            {
                eax = rd32(self + 0x1054u);
            }
            else
            {
                eax = rd32(self + 0x1054u);
                t11 = rd32(self + 0x1048u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t12 = cow_thiscall_cdecl(g, eax, t11, 5, t11, 0u, edi, 0u, 0u);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100f2a70u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100f2b80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
