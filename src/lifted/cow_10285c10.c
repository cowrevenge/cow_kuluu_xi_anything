/* f_0x10285c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10285c10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10292150u), 3, arg1 + 4u, 4u, 1u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x103122d6u), 6, arg1, 1u, 0x10u, arg2, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        esi = t6;
    }
    else
    {
        ecx = t7;
        edx = t8;
        esi = t6;
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, esi, 0x10u);
        t10 = g->edx;
        t11 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t10, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b7ed8u), t9, esi, 0x10u);
        eax = t11;
    }
    return (uint8_t)((esi != 0x10u) - 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10285c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
