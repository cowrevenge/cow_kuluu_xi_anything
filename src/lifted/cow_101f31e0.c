/* f_0x101f31e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f31e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x101f1120u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(sp0 + 8u) == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = t2;
        edi = rd32(sp0 + 8u);
        if (esi != 0u)
        {
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t5 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, esi);
            t6 = g->ecx;
            t7 = g->edx;
            if (t5 == 0x12u)
            {
                eax = t5;
                ecx = t6;
                edx = t7;
            }
            else
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                t8 = (ecx & 0xffffff00u) | rd8(esi + 2u);
                g->eax = eax;
                g->ecx = t8;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t9 = cow_cdecl(g, COW_IMG(0x101f0260u), 3, eax, t8, edi);
                t10 = g->ecx;
                t11 = g->edx;
                eax = t9;
                ecx = t10;
                edx = t11;
            }
        }
    }
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101f3230u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f31e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f31e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
