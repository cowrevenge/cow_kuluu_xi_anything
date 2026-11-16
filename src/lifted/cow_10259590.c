/* f_0x10259590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10259590(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0xffffffffu) goto L_102595a4;
    return 0u;
L_102595a4: ;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x38u, in_esi, in_ebx);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = 0u;
    }
    else
    {
        edx = t2;
        esi = t1;
        wr32(esi + 4u, 0u);
        wr32(esi + 8u, 6u);
        wr32(esi, COW_IMG(0x1033ceacu));
        wr32(esi + 0xcu, 0u);
        wr32(esi + 0x10u, arg1);
        wr32(esi + 0x14u, 0xffffffffu);
        wr32(esi + 0x1cu, arg3);
        g->eax = arg1;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0x20u, 1, arg4);
        wr32(esi + 0x2cu, 0u);
        wr32(esi + 0x30u, 0u);
        wr32(esi + 0x34u, arg2);
        wr32(esi, COW_IMG(0x1033cec0u));
        eax = t3;
        edx = arg2;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x10259120u), self, 1, esi);
    t5 = g->edx;
    if (rd32(self) != 1u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        edx = t5;
        if (rd32(self + 4u) == 0u)
        {
            eax = rd32(self + 4u);
            goto L_10259631;
        }
        eax = rd32(self + 4u);
L_10259615: ;
        if (rd32(eax + 8u) == 2u) goto L_10259627;
        ecx = rd32(eax + 8u);
        if (ecx == 3u) goto L_10259627;
        if (ecx != 4u) goto L_1025962a;
L_10259627: ;
        wr32(eax + 0x10u, esi);
L_1025962a: ;
        if (rd32(eax + 4u) != 0u)
        {
            eax = rd32(eax + 4u);
            goto L_10259615;
        }
        eax = rd32(eax + 4u);
L_10259631: ;
        wr32(self, 0u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10259150u), self, 0);
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10259590(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
