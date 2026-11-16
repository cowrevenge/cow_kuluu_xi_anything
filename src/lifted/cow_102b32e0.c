/* f_0x102b32e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102b32e0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x14u);
    t2 = rd32(arg1 + 0x54u);
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1028a750u), 2, t2, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(arg1 + 0x24u) != 1u)
    {
        ecx = t3;
        edx = t4;
        t8 = rd32(arg1 + 0x60u);
        g->eax = t8;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t8);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = rd32(arg1 + 0x24u);
        ecx = t3;
        t5 = rd32(arg1 + 0x60u);
        g->eax = eax;
        g->edx = t5;
        g->esp = sp0 - 4u;
        t6 = cow_cdecl(g, COW_IMG(0x1028a7d0u), 1, t5);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    t11 = rd32(arg1 + 0x58u);
    g->eax = eax;
    g->ecx = t11;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x1028a770u), 1, t11);
    t13 = g->ecx;
    t14 = rd32(arg1 + 0x5cu);
    g->edx = t14;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1028a790u), 2, t14, 0u);
    t15 = g->edx;
    t16 = rd32(arg1 + 0x68u);
    t17 = rd32(arg1 + 0x64u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1028a7f0u), 2, t17, t16);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b32e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b32e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
