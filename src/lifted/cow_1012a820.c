/* f_0x1012a820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1012a820(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t1 = cow_call_regs(g, COW_IMG(0x1018ec10u), in_eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1012a854;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t3 = cow_call_regs(g, COW_IMG(0x1018ec50u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1012a854;
    }
    eax = t3;
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t5 = cow_call_regs(g, COW_IMG(0x1018ece0u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        goto L_1012a891;
    }
    eax = t5;
    edx = t6;
L_1012a854: ;
L_1012a858: ;
    wr32(sp0 - 0x48u, eax);
    wr32(sp0 - 0x4cu, sp0 + 4u);
    wr32(sp0 - 0x50u, sp0 - 0x3cu);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall_cdecl(g, COW_IMG(0x10128060u), sp0 - 0x3cu, 3, sp0 - 0x3cu, sp0 + 4u, eax);
    t7 = g->edx;
    if ((int32_t)rd32(sp0 - 0x30u) >= (int32_t)arg1)
    {
        eax = rd32(sp0 - 0x30u);
        edx = t7;
        zf = rd32(sp0 - 0x30u) == arg1;
        sf = (int32_t)(rd32(sp0 - 0x30u) - arg1) < 0;
        of = ((rd32(sp0 - 0x30u) ^ arg1) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - arg1)) >> 0x1fu;
        goto L_1012a880;
    }
    eax = rd32(sp0 - 0x30u);
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t8 = cow_call_regs(g, COW_IMG(0x1018ece0u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_1012a88d: ;
    if (eax != 0u) goto L_1012a858;
L_1012a891: ;
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    return eax & 0xffffff00u;
L_1012a880: ;
    if (zf || sf != of) goto L_1012a89b;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t10 = cow_call_regs(g, COW_IMG(0x1018ec50u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    goto L_1012a88d;
L_1012a89b: ;
    wr32(self + 8u, eax);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012a820(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
