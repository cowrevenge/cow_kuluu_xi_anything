/* f_0x102860e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_102860e0(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2788u));
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg2, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->eax = rd32(COW_IMG(0x109a2788u));
        g->ecx = t2;
        g->edx = t3;
        t4 = rd32(COW_IMG(0x109a2788u));
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x10314d95u), 5, t4, COW_IMG(0x103b8060u), t1, arg2, in_edi);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t9 = g->edx;
    g->ecx = rd32(arg1);
    g->edx = t9;
    t10 = rd32(arg1);
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10285fb0u), 2, t10, arg2);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(arg1 + 4u, 0u);
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0u, arg2, t10, arg2, arg2, in_edi, in_esi);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0u, arg2, t10, arg2, arg2);
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x14u;
    t20 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0u, arg2, t10);
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x1cu;
    t23 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    g->esp = sp0 - 0x30u;
    t26 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t25, 1, 3, arg2, 0xefbeddbau, arg2);
    return (uint8_t)((t26 - t8 != 0x14u) - 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102860e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102860e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
