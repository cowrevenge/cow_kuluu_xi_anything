/* f_0x103165ea - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_103165ea(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, 0xfffffffeu);
    wr32(sp0 - 0x18u, COW_IMG(0x103165c8u));
    wr32(sp0 - 0x1cu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x1cu);
    edx = in_edx;
    loc_1c = t1;
L_10316607: ;
    if (rd32(arg1 + 0xcu) == 0xffffffffu) goto L_10316644;
    ebx = rd32(arg1 + 8u);
    esi = rd32(arg1 + 0xcu);
    if (esi == arg2) goto L_10316644;
    t2 = rd32(ebx + esi * 0xcu);
    wr32(sp0 - 0x14u, t2);
    wr32(arg1 + 0xcu, t2);
    if (rd32(ebx + esi * 0xcu + 4u) == 0u)
    {
        ecx = t2;
        esi = esi * 3u;
        wr32(sp0 - 0x20u, 0x101u);
        g->edx = edx;
        t3 = rd32(ebx + esi * 4u + 8u);
        g->esp = sp0 - 0x1cu;
        t4 = cow_call_regs(g, COW_IMG(0x1031667eu), t3, ecx, g->edx, 0, 1, 0x101u);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        cow_thiscall(g, rd32(ebx + esi * 4u + 8u), t5, 0);
        t7 = g->edx;
        edx = t7;
    }
    goto L_10316607;
L_10316644: ;
    wr32(g->fs_base, loc_1c);
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103165ea(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103165ea(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
