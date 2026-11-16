/* f_0x10222ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10222ad0(Guest* g)
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

    if (rd32(COW_IMG(0x10667170u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10667170u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10667170u));
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(COW_IMG(0x10667170u), 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x10667160u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10667160u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10667160u));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t4 = g->edx;
        wr32(COW_IMG(0x10667160u), 0u);
        eax = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x10667164u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10667164u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10667164u));
        g->edx = rd32(ecx);
        t5 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t5), ecx, 1, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(COW_IMG(0x10667164u), 0u);
        ecx = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x1066715cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066715cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1066715cu));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t9 = g->edx;
        wr32(COW_IMG(0x1066715cu), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x10667144u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10667144u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x10667144u), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x10667148u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10667148u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10667148u));
        g->edx = rd32(ecx);
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(COW_IMG(0x10667148u), 0u);
        ecx = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x10667150u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10667150u));
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t16 = g->edx;
        wr32(COW_IMG(0x10667150u), 0u);
        edx = t16;
    }
    if (rd32(COW_IMG(0x10667154u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10667154u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(COW_IMG(0x10667154u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10222ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10222ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
