/* f_0x10017690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10017690(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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

    t1 = rd32(COW_IMG(0x10456a28u));
    wr32(t1, 0xb0u);
    g->eax = t1;
    g->edx = in_edx;
    t2 = cow_thiscall(g, COW_IMG(0x1015d9e0u), COW_IMG(0x10621838u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        eax = (t2 & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = (t2 & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        edx = t4;
        if (rd32(COW_IMG(0x1046393cu)) == 0u)
        {
            ecx = rd32(COW_IMG(0x1046393cu));
        }
        else
        {
            ecx = rd32(COW_IMG(0x1046393cu));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            t5 = cow_stdcall(g, COW_IMG(0x10246790u), 3, 0xffffffffu, 0u, 0u);
            t6 = g->ecx;
            t7 = g->edx;
            eax = t5;
            ecx = t6;
            edx = t7;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x100f76d0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    t11 = cow_call_regs(g, COW_IMG(0x101151e0u), g->eax, g->ecx, t10, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 >= 0)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    else
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t14 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    if (rd8(COW_IMG(0x10456a50u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456a50u));
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10310f85u), 1, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10017690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10017690(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
