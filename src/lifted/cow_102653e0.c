/* f_0x102653e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102653e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    if (rd32(sp0 + 0xcu) != 0u)
    {
        edi = rd32(sp0 + 0xcu);
        goto L_102653fe;
    }
    return 0x80004003u;
L_102653fe: ;
    if (arg1 == 0xcu)
    {
        ebx = 0u;
    }
    else
    {
        ebx = arg1 + 4u;
    }
    wr32(sp0 - 0x38u, ebx);
    wr32(sp0 + 0xcu, ebx);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, ebx);
    wr32(edi, 0u);
    wr32(sp0 - 0x38u, sp0 - 0x24u);
    wr32(edi + 4u, 0u);
    wr32(edi + 8u, 0u);
    wr32(edi + 0xcu, 0u);
    g->eax = sp0 - 0x24u;
    g->edx = edi;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329224u)), 0u, 1, sp0 - 0x24u);
    t2 = g->edx;
    if (rd32(arg2 + 8u) == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_102654e8;
    }
    ebp = rd32(arg2 + 8u);
    if ((ebp - 1u & rd32(sp0 - 8u)) != 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = ebp - 1u;
        goto L_102654e8;
    }
    eax = rd32(sp0 - 8u);
    edx = ebp - 1u;
    if (rd32(arg1 + 0x44u) != 1u) goto L_1026546f;
    wr32(sp0 - 0x38u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), arg2, 1, ebx);
    t3 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t3;
    return 0x8004020fu;
L_1026546f: ;
    if ((int32_t)rd32(arg1 + 0x20u) >= (int32_t)rd32(arg1 + 0x30u)) goto L_1026548f;
    eax = rd32(arg1 + 0x20u);
    edx = rd32(arg1 + 0x30u);
    wr32(sp0 - 0x38u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), arg2, 1, ebx);
    t4 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t4;
    return 0x80040210u;
L_1026548f: ;
    t5 = rd32(arg2 + 0xcu) + rd32(arg2 + 4u);
    t6 = cow_divs(g, t5, ebp);
    t7 = cow_mods(g, t5, ebp);
    if (t7 == 0u)
    {
        ebx = t5;
    }
    else
    {
        edx = t7;
        ebx = t5;
        ebx = ebp + ebx - edx;
    }
    t8 = ebx - rd32(arg2 + 0xcu);
    t9 = rd32(arg2 + 0xcu);
    wr32(arg1 + 0x34u, t8);
    wr32(edi + 4u, t8);
    t10 = rd32(arg2);
    wr32(arg1 + 0x2cu, t10);
    wr32(edi, t10);
    t11 = rd32(arg2 + 8u);
    wr32(arg1 + 0x38u, t11);
    wr32(edi + 8u, t11);
    t12 = rd32(arg2 + 0xcu);
    wr32(arg1 + 0x3cu, t12);
    wr32(edi + 0xcu, t12);
    t13 = rd32(sp0 + 0xcu);
    wr32(arg1 + 0x40u, 1u);
    wr32(sp0 - 0x38u, t13);
    g->edx = t9;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t13, 1, t13);
    t14 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t14;
    return 0u;
L_102654e8: ;
    wr32(sp0 - 0x38u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), arg2, 1, ebx);
    t15 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t15;
    return 0x8004020eu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102653e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102653e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
