/* f_0x102614e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102614e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327978u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0x2cu);
    wr32(sp0 - 0x28u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    wr32(sp0 - 0x10u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 8u) == 0u)
    {
        eax = rd32(t3 + 8u);
        ecx = t4;
        edx = t5;
        ebx = 0u;
        ebp = t3;
        esi = t2;
    }
    else
    {
        edx = t5;
        ebp = t3;
        g->eax = rd32(ebp - 0xcu);
        g->edx = edx;
        t6 = rd32(ebp - 0xcu);
        g->esp = sp0 - 0x24u;
        t7 = cow_thiscall(g, rd32(t6 + 0x18u), ebp - 0xcu, 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x14u, t7);
        if ((int32_t)t7 <= 0)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            ebx = 0u;
            goto L_1026155d;
        }
        eax = t7;
        ebx = 0u;
        esi = ebp - 0xcu;
        edi = 0u;
        loc_14 = t7;
L_10261534: ;
        wr32(sp0 - 0x28u, edi);
        g->eax = eax;
        g->edx = rd32(esi);
        t10 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t11 = cow_thiscall(g, rd32(t10 + 0x1cu), esi, 1, edi);
        t12 = g->edx;
        if (rd32(t11 + 0x18u) == 0u)
        {
            ecx = rd32(t11 + 0x18u);
            edx = t12;
        }
        else
        {
            eax = t11;
            g->eax = eax;
            g->edx = rd32(eax);
            t13 = rd32(eax);
            g->esp = sp0 - 0x24u;
            t14 = cow_thiscall(g, rd32(t13 + 0x18u), eax, 0);
            t15 = g->ecx;
            t16 = g->edx;
            if ((int32_t)t14 >= 0)
            {
                ecx = t15;
                edx = t16;
            }
            else
            {
                eax = t14;
                ecx = t15;
                edx = t16;
                if ((int32_t)ebx >= 0)
                {
                    ebx = eax;
                }
            }
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x14u))
        {
            eax = rd32(sp0 - 0x14u);
            edi = edi + 1u;
            goto L_10261534;
        }
        eax = rd32(sp0 - 0x14u);
L_1026155d: ;
        esi = rd32(sp0 + 4u);
    }
    wr32(sp0 - 0x28u, esi);
    wr32(ebp + 8u, 0u);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, esi);
    t17 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t17);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102614e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102614e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
