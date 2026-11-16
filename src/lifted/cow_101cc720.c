/* f_0x101cc720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cc720(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x101cc6f0u), self, 1, arg1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101cc744;
    }
    return 1u;
L_101cc744: ;
    if (arg2 != 0u) goto L_101cc7ac;
    if (arg1 == rd32(self + 0x398u)) goto L_101cc7a1;
    t2 = (uint32_t)(int16_t)rd16(eax + 4u);
    wr32(sp0 - 0x30u, t2);
    wr32(sp0 - 0x34u, rd32(eax));
    wr32(sp0 - 0x38u, COW_IMG(0x1037d790u));
    wr32(sp0 - 0x3cu, self + 0x378u);
    g->ebx = arg1;
    g->edx = rd32(eax);
    t3 = rd32(eax);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x378u, COW_IMG(0x1037d790u), t3, t2, in_edi);
    t4 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x54u);
    wr32(sp0 - 0x3cu, self + 0x324u);
    wr32(sp0 - 0x40u, self + 0x378u);
    g->eax = self + 0x324u;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, self + 0x378u, self + 0x324u, 0x54u, 0u, 0u);
    if ((int32_t)t5 >= 0) goto L_101cc79b;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 5u;
L_101cc79b: ;
    wr32(self + 0x398u, arg1);
L_101cc7a1: ;
    g->ebx = in_ebx;
    return 0u;
L_101cc7ac: ;
    t6 = (uint32_t)(int16_t)rd16(eax + 4u);
    wr32(sp0 - 0x30u, t6);
    wr32(sp0 - 0x34u, rd32(eax));
    wr32(sp0 - 0x38u, COW_IMG(0x1037d790u));
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->ebx = arg1;
    g->edx = rd32(eax);
    t7 = rd32(eax);
    g->esp = sp0 - 0x28u;
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037d790u), t7, t6, in_edi);
    t9 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x54u);
    wr32(sp0 - 0x3cu, arg2);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->esp = sp0 - 0x2cu;
    t10 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, sp0 - 0x20u, arg2, 0x54u, 0u, 0u);
    if ((int32_t)t10 >= 0) goto L_101cc7a1;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 5u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc720(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
