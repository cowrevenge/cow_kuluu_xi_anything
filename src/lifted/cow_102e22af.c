/* f_0x102e22af - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e22af(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103282e1u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e22b9u));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, in_esi);
    if (rd32(self + 8u) == rd32(arg1 + 8u))
    {
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_10 = t1;
        goto L_102e2319;
    }
    loc_10 = t1;
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_edi);
    t2 = rd32(self + 0x1058u);
    wr32(sp0 - 0x24u, t2 << 4u);
    g->eax = t2 << 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t2 << 4u, in_edi, in_ebx);
    t4 = g->edx;
    wr32(sp0 - 0x14u, t3);
    wr32(sp0 - 8u, 0u);
    if (t3 == 0u)
    {
        eax = 0u;
        edx = t4;
    }
    else
    {
        ecx = rd32(sp0 - 0x24u);
        edx = t4;
        ebx = t3;
        edi = t2;
        wr32(sp0 - 0x24u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, 0x10u);
        wr32(sp0 - 0x30u, ebx);
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, ebx, 0x10u, edi, COW_IMG(0x102d2a17u));
        t5 = g->edx;
        eax = ebx;
        edx = t5;
    }
    t6 = rd32(sp0 - 0x20u);
    wr32(self + 0x104cu, eax);
    if (eax != 0u)
    {
        ebx = rd32(sp0 - 0x1cu);
        edi = t6;
        goto L_102e230d;
    }
    ebx = rd32(sp0 - 0x1cu);
    edi = t6;
    eax = 0x8007000eu;
L_102e231b: ;
    wr32(g->fs_base, loc_10);
    g->ebx = ebx;
    g->esi = loc_18;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e230d: ;
    t7 = rd32(arg1 + 8u);
    wr32(self + 0x1048u, t7);
L_102e2319: ;
    eax = 0u;
    loc_4 = in_ebp;
    loc_18 = in_esi;
    goto L_102e231b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e22af(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e22af(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
