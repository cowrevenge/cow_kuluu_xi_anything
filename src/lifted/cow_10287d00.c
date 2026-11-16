/* f_0x10287d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10287d00(Guest* g)
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
        eax = t1;
        ecx = t2;
        edx = t3;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10292150u), 3, arg1, 4u, 2u);
        t4 = g->ecx;
        t5 = g->edx;
        g->ecx = t4;
        g->edx = t5;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, arg1 + 0x10u, 0x10u, 3u, arg1, 4u, 2u, in_edi, in_esi);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    g->ecx = ecx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, arg1, 1u, 0x40u, arg2, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        esi = t8;
    }
    else
    {
        ecx = t9;
        edx = t10;
        esi = t8;
        g->esp = sp0 - 8u;
        t11 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, esi, 0x40u);
        t12 = g->edx;
        t13 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t12, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b896cu), t11, esi, 0x40u);
        eax = t13;
    }
    return (uint8_t)((esi != 0x40u) - 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
