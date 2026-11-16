/* f_0x1021e060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021e060(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(rd32(arg1 + 0x44u) + 0x34u);
    t2 = rd32(arg1 + 0x44u);
    wr32(self + 0x160u, t1);
    t3 = (rd32(t2 + 0x38u) ^ (uint32_t)((int32_t)rd32(t2 + 0x38u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(t2 + 0x38u) >> 0x1fu);
    wr32(self + 0x164u, t3);
    t4 = t1 * 3u + 3u & 0xfffffffcu;
    wr32(self + 0x168u, t4);
    ecx = t1;
    edx = t4;
    ebx = 0u;
    edi = self + 0x174u;
L_1021e0a0: ;
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x15u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 0x200u);
    wr32(sp0 - 0x4cu, 0x200u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t5);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t6 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t5, 0x200u, 0x200u, 1u, 0u, 0x15u, 1u, edi);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 < 0)
    {
        eax = t6;
        edx = t8;
        goto L_1021e107;
    }
    ecx = t7;
    edx = t8;
    if ((int32_t)(ebx + 1u) < 4)
    {
        ebx = ebx + 1u;
        edi = edi + 4u;
        goto L_1021e0a0;
    }
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, 0u);
    t9 = rd32(self + 0x174u);
    wr32(sp0 - 0x3cu, t9);
    g->eax = t9;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x30u;
    t10 = cow_thiscall(g, rd32(rd32(rd32(self + 0x174u)) + 0x38u), rd32(rd32(self + 0x174u)), 3, t9, 0u, sp0 - 0x20u);
    t11 = g->edx;
    if ((int32_t)t10 < 0)
    {
        eax = t10;
        edx = t11;
        goto L_1021e107;
    }
    edx = t11;
    t12 = rd32(sp0 - 0x20u);
    t13 = rd32(sp0 - 0x20u);
    wr32(self + 0x16cu, t12);
    if (t13 == 0x15u) goto L_1021e105;
    eax = t12;
    if (eax == 0x19u) goto L_1021e105;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return 0x8004022au;
L_1021e105: ;
    eax = 0u;
L_1021e107: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021e060(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
