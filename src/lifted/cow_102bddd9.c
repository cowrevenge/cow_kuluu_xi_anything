/* f_0x102bddd9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102bddd9(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        esi = 0u;
    }
    else
    {
        esi = rd32(arg1);
    }
    if (arg2 == 0u)
    {
        loc_8 = 0u;
    }
    else
    {
        loc_8 = rd32(arg2);
    }
    if (arg3 == 0u)
    {
        loc_c = 0u;
    }
    else
    {
        loc_c = rd32(arg3);
    }
    t1 = rd32(esi + 0x244u);
    g->eax = t1;
    g->ecx = self;
    t2 = rd32(esi + 0x24cu);
    g->esp = sp0 - 0x18u;
    t3 = cow_call_regs(g, COW_IMG(0x102bde94u), g->eax, g->ecx, in_edx, 1, 4, esi, loc_8, loc_c, in_edi);
    t4 = g->ecx;
    t5 = g->edx;
    if (loc_8 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        ebx = t2;
        loc_10 = t1;
    }
    else
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        ebx = t2;
        loc_10 = t1;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t6 = cow_cdecl(g, COW_IMG(0x102c379bu), 4, esi, loc_8, 0x4000u, 0xffffffffu);
        t7 = g->ecx;
        t8 = g->edx;
        g->esp = sp0 - 0x2cu;
        cow_call_regs(g, COW_IMG(0x102c43c9u), g->eax, t7, t8, 1, 3, loc_8, ebx, loc_10);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(arg2, 0u);
        eax = arg2;
        ecx = t9;
        edx = t10;
    }
    if (loc_c != 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t11 = cow_cdecl(g, COW_IMG(0x102c379bu), 4, esi, loc_c, 0x4000u, 0xffffffffu);
        t12 = g->ecx;
        t13 = g->edx;
        g->esp = sp0 - 0x2cu;
        cow_call_regs(g, COW_IMG(0x102c43c9u), g->eax, t12, t13, 1, 3, loc_c, ebx, loc_10);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(arg3, 0u);
        eax = arg3;
        ecx = t14;
        edx = t15;
    }
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102c43c9u), g->eax, ecx, edx, 1, 3, esi, ebx, loc_10);
    wr32(arg1, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bddd9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bddd9(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
