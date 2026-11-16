/* f_0x1025e7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025e7e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327608u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t2 = rd32(sp0 + 4u) + 0x70u;
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 8u) == 0u)
    {
        eax = rd32(t3 + 8u);
        ecx = t4;
        edx = t5;
        ebx = t2;
    }
    else
    {
        edx = t5;
        ebx = t2;
        edi = t3;
        if (rd32(rd32(edi + 0x6cu) + 0x18u) != 0u)
        {
            ecx = rd32(rd32(edi + 0x6cu) + 0x18u);
            wr32(sp0 - 0x1cu, edi);
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x102614e0u), ecx, edx, 1, edi);
            t6 = g->edx;
            if (rd32(rd32(edi + 0x6cu) + 0x9cu) == 0u)
            {
                eax = rd32(rd32(edi + 0x6cu) + 0x9cu);
                edx = t6;
            }
            else
            {
                eax = rd32(rd32(edi + 0x6cu) + 0x9cu);
                ecx = rd32(edi + 0x6cu);
                wr32(sp0 - 0x1cu, eax);
                g->eax = eax;
                g->edx = rd32(eax);
                t7 = rd32(eax);
                g->esp = sp0 - 0x18u;
                t8 = cow_thiscall(g, rd32(t7 + 0x18u), ecx, 1, eax);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
            wr32(sp0 - 0x1cu, 1u);
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x1025f6d0u), edi - 0xcu, edx, 1, 1u);
            t10 = g->edx;
            g->eax = rd32(edi - 0xcu);
            t11 = rd32(edi - 0xcu);
            t12 = cow_thiscall(g, rd32(t11 + 0x80u), edi - 0xcu, 0);
            wr32(sp0 - 0x1cu, 0u);
            g->edx = rd32(edi - 0xcu);
            t13 = rd32(edi - 0xcu);
            cow_thiscall(g, rd32(t13 + 0x28u), edi - 0xcu, 1, 0u);
            t14 = g->edx;
            g->eax = rd32(edi - 0xcu);
            t15 = rd32(edi - 0xcu);
            t16 = cow_thiscall(g, rd32(t15 + 0x64u), edi - 0xcu, 0);
            g->edx = rd32(edi - 0xcu);
            t17 = rd32(edi - 0xcu);
            cow_thiscall(g, rd32(t17 + 0x6cu), edi - 0xcu, 0);
            t18 = g->ecx;
            t19 = g->edx;
            t20 = rd32(edi + 0x50u);
            wr32(sp0 - 0x1cu, t20);
            g->eax = t20;
            g->edx = t19;
            t21 = cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), t18, 1, t20);
            t22 = g->edx;
            t23 = cow_fastcall(g, COW_IMG(0x1025e6a0u), edi - 0xcu, t22, 0);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(edi + 0x54u, 0u);
            eax = t23;
            ecx = t24;
            edx = t25;
        }
        else
        {
            eax = rd32(edi + 0x6cu);
            ecx = rd32(rd32(edi + 0x6cu) + 0x18u);
            wr32(edi + 8u, 0u);
        }
    }
    wr32(sp0 - 0x1cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebx);
    t26 = g->edx;
    t27 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t27);
    g->edx = t26;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025e7e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
