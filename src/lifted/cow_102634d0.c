/* f_0x102634d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102634d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327c18u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = t1;
        esi = rd32(sp0 + 8u);
        loc_c = t1;
        t2 = rd32(arg1 - 0x78u);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 + 8u, t2);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x20u, esi);
        wr32(sp0 - 4u, 0u);
        g->eax = rd32(esi);
        g->edx = t4;
        t5 = rd32(esi);
        t6 = rd32(arg1 + 4u);
        t7 = cow_thiscall(g, rd32(t5 + 4u), t3, 1, esi);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(arg1 + 4u, esi);
        if (t6 == 0u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            ebx = t2;
        }
        else
        {
            eax = t7;
            edx = t9;
            ebx = t2;
            ebp = t6;
            wr32(sp0 - 0x20u, ebp);
            g->eax = eax;
            g->edx = edx;
            t10 = rd32(ebp);
            g->esp = sp0 - 0x1cu;
            t11 = cow_thiscall(g, rd32(t10 + 8u), t10, 1, ebp);
            t12 = g->ecx;
            t13 = g->edx;
            eax = t11;
            ecx = t12;
            edx = t13;
        }
        wr32(sp0 - 0x20u, ebx);
        wr8(arg1 + 8u, (uint8_t)arg3);
        g->edx = (edx & 0xffffff00u) | (uint8_t)arg3;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebx);
        t14 = g->edx;
        eax = 0u;
        edx = t14;
    }
    else
    {
        loc_c = t1;
        eax = 0x80004003u;
        edx = in_edx;
    }
    wr32(g->fs_base, loc_c);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102634d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102634d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
