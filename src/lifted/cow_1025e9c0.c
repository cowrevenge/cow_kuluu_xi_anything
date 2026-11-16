/* f_0x1025e9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025e9c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327648u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t2 = rd32(sp0 + 4u) + 0x70u;
    wr32(sp0 - 0x20u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 8u) != 2u)
    {
        edx = t6;
        ebx = t2;
        ebp = rd32(t3 + 8u);
        esi = t3;
        if (rd32(rd32(esi + 0x6cu) + 0x18u) != 0u)
        {
            eax = rd32(esi + 0x6cu);
            t13 = rd32(esi + 0x50u);
            wr32(sp0 - 0x20u, t13);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), t13, 1, t13);
            t14 = g->ecx;
            wr32(sp0 - 0x20u, arg3);
            wr32(sp0 - 0x24u, arg2);
            wr32(sp0 - 0x28u, esi);
            t15 = cow_fastcall(g, COW_IMG(0x10261640u), t14, arg3, 3, esi, arg2, arg3);
            t16 = g->ecx;
            t17 = g->edx;
            if ((int32_t)t15 >= 0)
            {
                eax = t15;
                wr32(sp0 - 0x20u, 1u);
                g->eax = eax;
                g->edx = rd32(esi - 0xcu);
                t19 = rd32(esi - 0xcu);
                g->esp = sp0 - 0x1cu;
                t20 = cow_thiscall(g, rd32(t19 + 0x28u), esi - 0xcu, 1, 1u);
                t21 = g->edx;
                wr32(sp0 - 0x20u, 0u);
                cow_fastcall(g, COW_IMG(0x1025f6d0u), esi - 0xcu, t21, 1, 0u);
                t22 = g->edx;
                if (rd32(rd32(esi + 0x6cu) + 0x9cu) == 0u)
                {
                    eax = rd32(rd32(esi + 0x6cu) + 0x9cu);
                    edx = t22;
                    edi = esi - 0xcu;
                }
                else
                {
                    eax = rd32(rd32(esi + 0x6cu) + 0x9cu);
                    edx = t22;
                    edi = esi - 0xcu;
                    wr32(sp0 - 0x20u, eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t23 = cow_thiscall(g, rd32(rd32(eax) + 0x14u), rd32(eax), 1, eax);
                    t24 = g->edx;
                    eax = t23;
                    edx = t24;
                }
                if (ebp == 0u)
                {
                    t25 = rd32(edi);
                    wr32(esi + 0x54u, ebp);
                    g->edx = t25;
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, rd32(t25 + 0x70u), edi, 0);
                    t26 = g->edx;
                    edx = t26;
                }
                g->eax = rd32(edi);
                g->edx = edx;
                t27 = rd32(edi);
                g->esp = sp0 - 0x1cu;
                t28 = cow_thiscall(g, rd32(t27 + 0x7cu), edi, 0);
                t29 = g->ecx;
                t30 = g->edx;
                wr32(sp0 - 0x20u, ebx);
                g->edx = t30;
                cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t29, 1, ebx);
                t31 = g->edx;
                eax = t28;
                edx = t31;
            }
            else
            {
                eax = t15;
                ecx = t16;
                edx = t17;
                edi = t15;
                wr32(sp0 - 0x20u, ebx);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebx);
                t18 = g->edx;
                eax = edi;
                edx = t18;
            }
        }
        else
        {
            t8 = -(esi != 0xcu) & esi;
            wr32(sp0 - 0x20u, t8);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t9 = cow_thiscall(g, COW_IMG(0x10261a00u), esi - 0xcu, 3, 1u, 0u, t8);
            t10 = g->ecx;
            t11 = g->edx;
            wr32(sp0 - 0x20u, ebx);
            wr32(esi + 8u, 2u);
            g->edx = t11;
            cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t10, 1, ebx);
            t12 = g->edx;
            eax = 0u;
            edx = t12;
        }
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = t2;
        wr32(sp0 - 0x20u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebx);
        t7 = g->edx;
        eax = 0u;
        edx = t7;
    }
    t32 = rd32(sp0 - 0xcu);
    t33 = rd32(sp0 - 0x14u);
    t34 = rd32(sp0 - 0x18u);
    t35 = rd32(sp0 - 0x1cu);
    wr32(g->fs_base, t32);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t34;
    g->edi = t35;
    g->ebp = t33;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025e9c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
