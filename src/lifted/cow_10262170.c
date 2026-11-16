/* f_0x10262170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262170(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327a9bu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        ebx = rd32(sp0 + 8u);
        loc_c = t1;
        goto L_102621ab;
    }
    loc_c = t1;
    wr32(g->fs_base, loc_c);
    return 0x80004003u;
L_102621ab: ;
    g->eax = rd32(rd32(arg1 + 8u));
    g->edx = in_edx;
    t2 = rd32(rd32(arg1 + 8u));
    t3 = rd32(arg1 + 8u);
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, rd32(t2 + 0x10u), t3, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == rd32(arg1 + 0xcu))
    {
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x1cu, 0x14u);
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t8 = g->edx;
        wr32(sp0 + 8u, t7);
        wr32(sp0 - 4u, 0u);
        if (t7 == 0u)
        {
            edx = t8;
            eax = 0u;
        }
        else
        {
            eax = t7;
            edx = t8;
            wr32(sp0 - 0x1cu, arg1);
            t9 = rd32(arg1 + 8u);
            wr32(sp0 - 0x20u, t9);
            g->esp = sp0 - 0x18u;
            t10 = cow_fastcall(g, COW_IMG(0x10262020u), eax, edx, 2, t9, arg1);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
        wr32(ebx, eax);
        if (eax != 0u)
        {
            edi = 0u;
        }
        else
        {
            edi = 0x8007000eu;
        }
    }
    else
    {
        edx = t6;
        wr32(ebx, 0u);
        edi = 0x80040203u;
    }
    t12 = rd32(sp0 - 0xcu);
    t13 = rd32(sp0 - 0x14u);
    t14 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t12);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t13;
    g->edi = t14;
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262170(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
