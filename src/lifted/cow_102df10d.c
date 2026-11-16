/* f_0x102df10d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102df10d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103281b7u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102df117u));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(rd32(self + 4u) + 0x1058u) != rd32(rd32(self) + 0x1058u))
    {
        edx = in_edx;
        loc_10 = t1;
        goto L_102df1ea;
    }
    eax = rd32(self + 4u);
    ecx = rd32(self);
    edi = rd32(rd32(self + 4u) + 0x1058u);
    loc_10 = t1;
    if (rd32(eax + 0x105cu) != rd32(ecx + 0x105cu))
    {
        edx = rd32(eax + 0x105cu);
        goto L_102df1ea;
    }
    edx = rd32(eax + 0x105cu);
    if (rd32(eax + 0x1060u) != rd32(ecx + 0x1060u)) goto L_102df1ea;
    wr32(sp0 - 0x24u, edi << 4u);
    g->eax = edi << 4u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, edi << 4u, in_edi, in_esi);
    t3 = g->edx;
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 8u, 0u);
    if (t2 == 0u)
    {
        ecx = rd32(sp0 - 0x24u);
        edx = t3;
        loc_14 = t2;
        wr32(sp0 - 0x14u, 0u);
        loc_14 = 0u;
    }
    else
    {
        eax = t2;
        ecx = rd32(sp0 - 0x24u);
        edx = t3;
        ebx = t2;
        wr32(sp0 - 0x24u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, 0x10u);
        wr32(sp0 - 0x30u, ebx);
        g->ecx = ecx;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, ebx, 0x10u, edi, COW_IMG(0x102d2a17u));
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0x14u, ebx);
        ecx = t4;
        edx = t5;
        loc_14 = ebx;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    if (loc_14 == 0u) goto L_102df1ea;
    if (rd32(rd32(self + 4u) + 0x1060u) == 0u)
    {
        eax = rd32(self + 4u);
    }
    else
    {
        eax = rd32(self + 4u);
        eax = rd32(eax + 0x105cu);
        ebx = 0u;
L_102df1a4: ;
        if (eax == 0u) goto L_102df1d1;
        edi = 0u;
L_102df1aa: ;
        wr32(sp0 - 0x24u, loc_14);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, edi, ebx, loc_14);
        t6 = g->edx;
        t7 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x24u, t7);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, edi);
        g->edx = t6;
        cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 8u), rd32(self + 4u), 3, edi, ebx, t7);
        t8 = g->edx;
        if (edi + 1u < rd32(rd32(self + 4u) + 0x105cu))
        {
            edx = t8;
            edi = edi + 1u;
            goto L_102df1aa;
        }
        eax = rd32(rd32(self + 4u) + 0x105cu);
        edx = t8;
L_102df1d1: ;
        if (ebx + 1u < rd32(rd32(self + 4u) + 0x1060u))
        {
            ebx = ebx + 1u;
            goto L_102df1a4;
        }
        ecx = rd32(self + 4u);
    }
    wr32(sp0 - 0x24u, loc_14);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, loc_14);
    t9 = g->edx;
    eax = 0u;
    edx = t9;
L_102df1ef: ;
    wr32(g->fs_base, loc_10);
    g->ebx = loc_18;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102df1ea: ;
    eax = 0x80004005u;
    loc_4 = in_ebp;
    loc_18 = in_ebx;
    loc_1c = in_esi;
    loc_20 = in_edi;
    goto L_102df1ef;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102df10d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102df10d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
