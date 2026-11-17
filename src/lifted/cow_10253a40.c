/* f_0x10253a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10253a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x30u, in_esi);
    wr32(self + 0x204u, 0u);
    if (arg1 != 0u) goto L_10253aad;
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x3cu, self + 4u);
    g->eax = arg1;
    g->ecx = self + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, self + 4u, COW_IMG(0x1034f2d0u), in_edi, in_esi, rd32(sp0 - 0x2cu));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = t1;
    }
    else
    {
        ecx = t2;
        edx = t3;
        edi = t1;
        wr32(sp0 - 0x38u, sp0 - 0x2cu);
        wr32(sp0 - 0x3cu, edi);
        g->esi = self + 0x204u;
        g->edi = edi;
        g->eax = sp0 - 0x2cu;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t4 = cow_cdecl(g, COW_IMG(0x10253ae0u), 2, edi, sp0 - 0x2cu);
        t5 = g->edx;
        wr32(sp0 - 0x40u, self + 0x204u);
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        g->ecx = sp0 - 0x2cu;
        g->esp = sp0 - 0x38u;
        t6 = cow_cdecl(g, COW_IMG(0x10253e90u), 3, sp0 - 0x2cu, self + 0x204u, rd32(sp0 - 0x3cu));
        t7 = g->ecx;
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        g->esp = sp0 - 0x3cu;
        t8 = cow_call_regs(g, COW_IMG(0x10253820u), g->eax, t7, sp0 - 0x2cu, 1, 3, sp0 - 0x2cu, sp0 - 0x2cu, self + 0x204u);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    wr32(sp0 - 0x38u, edi);
    g->edi = edi;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return rd32(self + 0x204u) != 0u;
L_10253aad: ;
    wr32(sp0 - 0x34u, sp0 - 0x2cu);
    wr32(sp0 - 0x38u, arg1);
    g->esi = self + 0x204u;
    g->edi = in_edi;
    g->eax = arg1;
    g->ecx = sp0 - 0x2cu;
    g->esp = sp0 - 0x30u;
    t11 = cow_cdecl(g, COW_IMG(0x102540c0u), 2, arg1, sp0 - 0x2cu);
    t12 = g->ecx;
    wr32(sp0 - 0x3cu, self + 0x204u);
    wr32(sp0 - 0x40u, sp0 - 0x2cu);
    g->ecx = t12;
    g->edx = sp0 - 0x2cu;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10253e90u), 3, sp0 - 0x2cu, self + 0x204u, arg1);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x10253820u), g->eax, t13, t14, 1, 3, sp0 - 0x2cu, sp0 - 0x2cu, self + 0x204u);
    g->esi = in_esi;
    g->edi = in_edi;
    return rd32(self + 0x204u) != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253a40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
