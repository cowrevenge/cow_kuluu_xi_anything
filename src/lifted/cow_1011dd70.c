/* f_0x1011dd70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1011dd70(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    if ((int32_t)arg3 > 0) goto L_1011dd86;
    return 0xffffffffu;
L_1011dd86: ;
    wr32(sp0 - 4u, 0u);
    if (arg1 != 0u)
    {
        wr32(sp0 - 0xcu, COW_IMG(0x1011dba0u));
        wr32(sp0 - 8u, COW_IMG(0x1011dc00u));
        loc_c = COW_IMG(0x1011dba0u);
        loc_8 = COW_IMG(0x1011dc00u);
    }
    else
    {
        wr32(sp0 - 0xcu, COW_IMG(0x1011db40u));
        wr32(sp0 - 8u, COW_IMG(0x1011dcc0u));
        loc_c = COW_IMG(0x1011db40u);
        loc_8 = COW_IMG(0x1011dcc0u);
    }
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd8(arg4) == 0u)
    {
        ebx = 0u;
        goto L_1011de1f;
    }
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    esi = arg4;
    loc_4 = 0u;
L_1011ddc0: ;
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x24u, esi);
    g->edx = t3;
    g->esp = sp0 - 0x20u;
    t4 = cow_thiscall_cdecl(g, rd32(sp0 - 0xcu), t2, 1, esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ebp = t1;
        edi = ebp;
    }
    else
    {
        ecx = t5;
        edx = t6;
        ebp = t1;
        wr32(sp0 - 0x20u, esi);
        wr32(sp0 - 0x24u, sp0 + 4u);
        g->eax = sp0 + 4u;
        g->esp = sp0 - 0x1cu;
        t7 = cow_thiscall_cdecl(g, rd32(sp0 - 8u), ecx, 2, sp0 + 4u, esi);
        esi = sp0 + 4u;
        edi = t7;
    }
    if ((int32_t)(ebp + ebx) >= (int32_t)arg3) goto L_1011de31;
    ecx = ebp + ebx;
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, arg2 + ebx);
    g->edx = arg2;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10312090u), arg2 + ebx, g->ecx, g->edx, 1, 3, arg2 + ebx, esi, edi);
    t8 = g->edx;
    t9 = ebp + rd32(sp0 - 4u);
    wr32(sp0 - 4u, t9);
    if (rd8(arg4 + t9) != 0u)
    {
        ecx = arg4;
        edx = t8;
        ebx = ebx + edi;
        esi = arg4 + t9;
        loc_4 = t9;
        goto L_1011ddc0;
    }
    ebx = ebx + edi;
L_1011de1f: ;
    wr8(arg2 + ebx, 0u);
    return ebx;
L_1011de31: ;
    t10 = rd32(sp0 - 0x14u);
    t11 = rd32(sp0 - 0x18u);
    t12 = rd32(sp0 - 0x1cu);
    wr8(arg2, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t11;
    g->edi = t12;
    g->ebp = t10;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011dd70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011dd70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
