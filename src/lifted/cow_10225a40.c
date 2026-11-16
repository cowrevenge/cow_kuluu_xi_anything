/* f_0x10225a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10225a40(Guest* g)
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

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1013a320u), t1, 2, 0u, 2u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 0x68u) == 0u)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        edx = t4;
        edi = rd32(self + 0x68u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x101c8230u), edi, 0);
        t6 = g->ecx;
        t7 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t6, t7, 1, 1, edi);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 0x68u, 0u);
        ecx = t8;
        edx = t9;
    }
    if (rd32(self + 0x64u) == 0u)
    {
        eax = rd32(self + 0x64u);
    }
    else
    {
        eax = rd32(self + 0x64u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t10 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t11 = g->edx;
        wr32(self + 0x64u, 0u);
        eax = t10;
        edx = t11;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103861d0u));
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10225a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
