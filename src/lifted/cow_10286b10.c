/* f_0x10286b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10286b10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if ((int32_t)arg1 > 0)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        goto L_10286b49;
    }
    eax = rd32(COW_IMG(0x109a2788u));
    if (eax == 0u) goto L_10286b84;
    g->eax = arg2;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg2, arg1, in_esi);
    t2 = g->edx;
    t3 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t2, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b84e8u), t1, arg1, in_esi);
    return (t3 & 0xffffff00u) | (uint8_t)(t3 | 0xffu);
L_10286b49: ;
    if (eax == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg2, arg1, in_edi);
        t5 = g->ecx;
        g->ecx = t5;
        t6 = rd32(COW_IMG(0x109a2788u));
        t7 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t6, 1, 5, t6, COW_IMG(0x103b84c4u), t4, arg1, in_edi);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    if ((int32_t)arg1 <= 0) goto L_10286b83;
    esi = arg1;
L_10286b75: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x10285fb0u), 2, 0u, arg2);
    t11 = g->ecx;
    t12 = g->edx;
    if (esi != 1u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        esi = esi - 1u;
        goto L_10286b75;
    }
    eax = t10;
L_10286b83: ;
L_10286b84: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10286b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10286b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
