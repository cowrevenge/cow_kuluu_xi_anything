/* f_0x10044490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10044490(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1047bba0u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1047bba0u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x1047bba0u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x1047bba4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bba4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x1047bba4u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x1047bba8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bba8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x1047bba8u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x1047bbacu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bbacu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x1047bbacu), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x1047bbb0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bbb0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x1047bbb0u), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x1047bb88u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1047bb88u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1047bb88u));
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t16 + 0x18u), ecx, 1, 1u);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(COW_IMG(0x1047bb88u), 0u);
        ecx = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x1047bbb4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1047bbb4u));
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, eax);
        wr32(COW_IMG(0x1047bbb4u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10044490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
