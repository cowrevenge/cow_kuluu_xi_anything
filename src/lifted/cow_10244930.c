/* f_0x10244930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10244930(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg2 + 8u);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4b60u), t2, 2, arg1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t3, in_edi, in_esi);
    t7 = g->edx;
    t8 = rd32(arg2 + 8u);
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, t6, t3, 0u, t8);
    t10 = rd32(arg2 + 0x14u);
    g->edx = t10;
    t11 = rd32(arg2 + 0xcu);
    t12 = cow_call_regs(g, COW_IMG(0x10211990u), t9, t11, g->edx, 0, 4, t6, t3, t10, arg1);
    t13 = g->ecx;
    t14 = g->edx;
    if (t6 == 0u)
    {
        eax = t12;
        edx = t14;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        esi = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t15 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10244930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
