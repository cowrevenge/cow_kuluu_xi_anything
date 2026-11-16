/* f_0x10286970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10286970(Guest* g)
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_102869c7;
    if (arg2 == 0u) goto L_102869c7;
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
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg3, arg2, in_edi);
        t2 = g->ecx;
        t3 = g->edx;
        g->eax = rd32(COW_IMG(0x109a2788u));
        g->ecx = t2;
        t4 = rd32(COW_IMG(0x109a2788u));
        t5 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t4, COW_IMG(0x103b83fcu), t1, arg2, in_edi);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    if ((int32_t)arg2 <= 0) goto L_102869c2;
    esi = arg2;
L_102869b1: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x10285fb0u), 2, 0xefbeddbau, arg3);
    t9 = g->ecx;
    t10 = g->edx;
    if (esi != 1u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        esi = esi - 1u;
        goto L_102869b1;
    }
    eax = t8;
L_102869c2: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_102869c7: ;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2788u));
        g->eax = eax;
        g->ecx = arg3;
        g->esp = sp0;
        t11 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg3, arg2, in_esi);
        t12 = g->ecx;
        t13 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, rd32(COW_IMG(0x109a2788u)), 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b83ccu), t11, arg2, in_esi);
        eax = t13;
    }
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10286970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10286970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
