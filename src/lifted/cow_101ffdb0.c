/* f_0x101ffdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_101ffdb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 376u);

    wr32(sp0 - 0x144u, in_esi);
    if (rd8(COW_IMG(0x10663ac8u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
        goto L_101ffdd9;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
    wr32(sp0 - 0x148u, 0x7au);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x144u;
    t1 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101ffdd9: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x144u;
    t3 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    t4 = g->edx;
    if (t3 - rd32(self + 0x20cu) < 0x1eu)
    {
        eax = t3 - rd32(self + 0x20cu);
        edx = t4;
    }
    else
    {
        edx = t4;
        wr32(sp0 - 0x148u, arg5);
        wr32(sp0 - 0x14cu, arg4);
        g->esp = sp0 - 0x144u;
        cow_thiscall(g, COW_IMG(0x101fef20u), self, 2, arg4, arg5);
        wr16(self + 0x14u, 4u);
        wr32(self + 0x1d0u, arg1);
        wr32(self + 0x1d4u, arg2);
        wr32(self + 0x1d8u, arg3);
        t5 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
        wr32(sp0 - 0x148u, t5);
        g->eax = t5;
        g->edx = arg1;
        t6 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t5);
        t7 = g->edx;
        wr32(sp0 - 0x148u, t6);
        t8 = rd32(COW_IMG(0x103601bcu));
        t9 = cow_thiscall(g, COW_IMG(0x100db7b0u), t8, 1, t6);
        t10 = g->ecx;
        if (t9 == 0u)
        {
            eax = t9;
            t14 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
            wr32(sp0 - 0x148u, t14);
            wr32(sp0 - 0x14cu, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0x150u, sp0 - 0x140u);
            g->ecx = t14;
            g->edx = sp0 - 0x140u;
            g->esp = sp0 - 0x13cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x1034f7e0u), t14, rd32(sp0 - 0x144u), rd32(sp0 - 0x140u));
            t15 = g->ecx;
            t16 = g->edx;
            ecx = t15;
            edx = t16;
        }
        else
        {
            eax = t9;
            ecx = t10;
            wr32(sp0 - 0x148u, eax);
            t11 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
            wr32(sp0 - 0x14cu, t11);
            wr32(sp0 - 0x150u, COW_IMG(0x10385224u));
            wr32(sp0 - 0x154u, sp0 - 0x140u);
            g->ecx = ecx;
            g->edx = t11;
            g->esp = sp0 - 0x140u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x10385224u), t11, eax, rd32(sp0 - 0x144u));
            t12 = g->ecx;
            t13 = g->edx;
            ecx = t12;
            edx = t13;
        }
        t17 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
        wr32(sp0 - 0x148u, t17);
        wr32(sp0 - 0x14cu, 0x21u);
        wr32(sp0 - 0x150u, 0xau);
        g->eax = t17;
        g->edx = edx;
        g->esp = sp0 - 0x148u;
        t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x21u);
        t19 = g->edx;
        wr32(sp0 - 0x14cu, t18);
        wr32(sp0 - 0x150u, sp0 - 0x100u);
        g->esp = sp0 - 0x13cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t18, rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u));
        wr32(sp0 - 0x154u, 0x13u);
        wr32(sp0 - 0x158u, COW_IMG(0x101ff8a0u));
        t20 = rd32(self + 0x204u);
        wr32(sp0 - 0x15cu, t20);
        t21 = rd32(self + 0x200u);
        wr32(sp0 - 0x160u, t21);
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        wr32(sp0 - 0x168u, sp0 - 0x140u);
        t22 = rd32(self + 0x1d8u);
        wr32(sp0 - 0x16cu, t22);
        t23 = rd32(self + 0x1d4u);
        wr32(sp0 - 0x170u, t23);
        t24 = rd32(self + 0x1d0u);
        wr32(sp0 - 0x174u, t24);
        g->eax = t22;
        g->ecx = t23;
        g->edx = t24;
        g->esp = sp0 - 0x150u;
        t25 = cow_cdecl(g, COW_IMG(0x100f7130u), 9, t24, t23, t22, sp0 - 0x140u, sp0 - 0x100u, t21, t20, COW_IMG(0x101ff8a0u), 0x13u);
        t26 = g->ecx;
        t27 = g->edx;
        if (t25 != 0u)
        {
            eax = t25;
            edx = t27;
        }
        else
        {
            ecx = t26;
            edx = t27;
            if (rd32(COW_IMG(0x105781f8u)) == 0u)
            {
                eax = rd32(COW_IMG(0x105781f8u));
            }
            else
            {
                eax = rd32(COW_IMG(0x105781f8u));
                wr32(sp0 - 0x148u, 0x10u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x144u;
                t28 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
                t29 = g->ecx;
                t30 = g->edx;
                eax = t28;
                ecx = t29;
                edx = t30;
            }
            wr8(COW_IMG(0x10663ac8u), 1u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x144u;
            t31 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
            t32 = g->edx;
            wr32(self + 0x20cu, t31);
            eax = t31;
            edx = t32;
        }
    }
    g->esi = rd32(sp0 - 0x144u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ffdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ffdb0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
