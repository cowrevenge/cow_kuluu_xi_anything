/* f_0x100033c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100033c0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, 0u);
    t1 = rd32(self + 4u);
    wr32(sp0 - 0x28u, t1);
    g->eax = t1;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, rd32(rd32(t1) + 0x20u), rd32(t1), 3, t1, 0u, sp0 - 0x10u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1000344b;
    }
    edx = t3;
    eax = rd32(COW_IMG(0x1034f698u) + rd32(sp0 + 0x1cu) * 4u);
    loc_14 = in_ebx;
    loc_18 = in_esi;
    loc_1c = in_edi;
L_100033e7: ;
    t4 = rd32(eax);
    t5 = rd32(eax + 4u);
    wr32(sp0 + 0x1cu, eax);
    if (t4 != 0u)
    {
        eax = rd32(sp0 - 4u);
        esi = t4;
        edi = t5;
        goto L_100033fe;
    }
    eax = rd32(sp0 - 4u);
    edi = t5;
    if (edi == 0u) goto L_1000344b;
    esi = eax;
L_100033fe: ;
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t6 = cow_fastcall(g, COW_IMG(0x10003460u), self, edx, 3, eax, esi, edi);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t7;
        goto L_10003437;
    }
    wr32(sp0 - 0x20u, arg6);
    wr32(sp0 - 0x24u, arg5);
    wr32(sp0 - 0x28u, arg4);
    wr32(sp0 - 0x2cu, arg3);
    wr32(sp0 - 0x30u, arg2);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, esi);
    wr32(sp0 - 0x3cu, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x1cu;
    t8 = cow_fastcall(g, COW_IMG(0x100034b0u), self, arg2, 8, arg1, esi, edi, arg2, arg3, arg4, arg5, arg6);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        goto L_10003440;
    }
    edx = t9;
L_10003437: ;
    eax = rd32(sp0 + 0x1cu) + 8u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_100033e7;
L_10003440: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | 1u;
L_1000344b: ;
    g->ebx = loc_14;
    g->esi = loc_18;
    g->edi = loc_1c;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100033c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100033c0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
