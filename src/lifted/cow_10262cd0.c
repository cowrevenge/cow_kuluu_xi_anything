/* f_0x10262cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327b98u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = t1;
        ebx = rd32(sp0 + 8u);
        loc_c = t1;
        goto L_10262d09;
    }
    loc_c = t1;
    wr32(g->fs_base, loc_c);
    return 0x80004003u;
L_10262d09: ;
    t2 = rd32(arg1 + 0x14u);
    wr32(sp0 - 0x1cu, t2);
    wr32(sp0 + 8u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(arg1 + 0xcu) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        edx = t4;
        esi = t2;
        goto L_10262d51;
    }
    eax = rd32(arg1 + 0xcu);
    ecx = t3;
    edx = t4;
    esi = t2;
    wr32(sp0 - 0x1cu, arg1 + 0x28u);
    wr32(sp0 - 0x20u, ebx);
    g->cf = arg1 + 0x28u < arg1;
    g->pf = PARITY((uint8_t)(arg1 + 0x28u));
    g->af = (arg1 ^ arg1 + 0x28u) >> 4u & 1u;
    g->zf = arg1 + 0x28u == 0u;
    g->sf = (int32_t)(arg1 + 0x28u) < 0;
    g->of = ((arg1 ^ arg1 + 0x28u) & (arg1 + 0x28u ^ 0x28u)) >> 0x1fu;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t5 = cow_call_regs(g, COW_IMG(0x1026a6a0u), g->eax, g->ecx, edx, 0, 2, ebx, arg1 + 0x28u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x1cu, esi);
    g->edx = t7;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t6, 1, esi);
    t8 = g->edx;
    t9 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t9);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t8;
    return 0u;
L_10262d51: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x1026a510u), ebx, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x1cu, esi);
    g->edx = t12;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t11, 1, esi);
    t13 = g->edx;
    t14 = rd32(sp0 - 0xcu);
    t15 = rd32(sp0 - 0x14u);
    t16 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t14);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t15;
    g->edi = t16;
    g->edx = t13;
    return 0x80040209u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262cd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
