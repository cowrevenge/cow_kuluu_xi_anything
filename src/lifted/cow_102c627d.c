/* f_0x102c627d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c627d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if ((rd8(arg1 + 0x68u) & 4u) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = 0u;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    else
    {
        wr32(sp0 - 0x28u, 4u);
        wr32(sp0 - 0x2cu, COW_IMG(0x10342e0cu));
        wr32(sp0 - 0x30u, arg1 + 0x11cu);
        g->eax = arg1 + 0x11cu;
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), self, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            loc_4 = in_ebp;
            loc_8 = 0u;
            loc_20 = in_esi;
            loc_24 = in_edi;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 8u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
        }
    }
    wr32(sp0 - 0x28u, arg1 + 0x11cu);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x24u;
    t4 = cow_call_regs(g, COW_IMG(0x102c638cu), eax, g->ecx, edx, 1, 2, arg1, arg1 + 0x11cu);
    t5 = g->edx;
    if ((rd8(arg1 + 0x11cu) & 0x20u) != 0u)
    {
        ecx = arg1 + 0x11cu;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        wr32(sp0 - 0x28u, arg1 + 0x11cu);
        wr32(sp0 - 0x2cu, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t6 = cow_cdecl(g, COW_IMG(0x102c3bfau), 2, arg1, arg1 + 0x11cu);
        t7 = g->edx;
        if (t6 == 3u)
        {
            ecx = arg1 + 0x11cu;
            edx = t7;
        }
        else
        {
            eax = t6;
            edx = t7;
            if (rd32(arg1 + 0x21cu) != 0u)
            {
                ecx = arg1 + 0x11cu;
            }
            else
            {
                wr32(sp0 - 0x28u, COW_IMG(0x103c946cu));
                wr32(sp0 - 0x2cu, arg1);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x102bca45u), 4, arg1, COW_IMG(0x103c946cu), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
                t8 = g->edx;
                ecx = COW_IMG(0x103c946cu);
                edx = t8;
            }
        }
    }
    if ((rd8(arg1 + 0x6du) & 0x80u) == 0u)
    {
        eax = arg3;
    }
    else
    {
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x2cu, arg1 + 0x11cu);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        g->edi = arg1 + 0x11cu;
        g->eax = sp0 - 0x1cu;
        g->ecx = ecx;
        g->esp = sp0 - 0x24u;
        t9 = cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x1cu, arg1 + 0x11cu, in_ebx);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = g->edi;
        wr32(sp0 - 0x34u, arg3);
        wr32(sp0 - 0x38u, arg1);
        g->esp = sp0 - 0x2cu;
        t13 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, t10, t11, 1, 3, arg1, arg3, sp0 - 0x1cu);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(sp0 - 0x3cu, arg3);
        wr32(sp0 - 0x40u, t13);
        wr32(sp0 - 0x44u, arg1);
        wr32(sp0 - 0x14u, t13);
        wr32(sp0 - 0x10u, arg3);
        g->ecx = t14;
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t15, 1, 5, arg1, t13, arg3, arg1, arg3);
        t16 = g->ecx;
        t17 = g->edx;
        if (rd32(arg1 + 0x21cu) == 0u)
        {
            ecx = t16;
            edx = t17;
            goto L_102c635a;
        }
        eax = rd32(arg1 + 0x21cu);
        edx = t17;
        edi = t12;
        wr32(sp0 - 0x28u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t18 = cow_thiscall_cdecl(g, eax, sp0 - 0x1cu, 2, arg1, sp0 - 0x1cu);
        t19 = g->edx;
        if ((int32_t)t18 > 0)
        {
            eax = t18;
            ecx = sp0 - 0x1cu;
            edx = t19;
            goto L_102c636c;
        }
        eax = t18;
        edx = t19;
        if ((rd8(edi) & 0x20u) != 0u)
        {
            ecx = sp0 - 0x1cu;
        }
        else
        {
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, arg1);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t20 = cow_cdecl(g, COW_IMG(0x102c3bfau), 2, arg1, edi);
            t21 = g->edx;
            if (t20 == 3u)
            {
                ecx = rd32(sp0 - 0x28u);
                edx = t21;
            }
            else
            {
                eax = t20;
                ecx = rd32(sp0 - 0x28u);
                edx = t21;
                t22 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x28u, t22);
                wr32(sp0 - 0x2cu, arg1);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x24u;
                t23 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, arg1, t22);
                t24 = g->ecx;
                t25 = g->edx;
                wr32(sp0 - 0x30u, COW_IMG(0x103c946cu));
                wr32(sp0 - 0x34u, arg1);
                g->ecx = t24;
                g->edx = t25;
                cow_cdecl(g, COW_IMG(0x102bca45u), 4, arg1, COW_IMG(0x103c946cu), arg1, rd32(sp0 - 0x28u));
                t26 = g->ecx;
                t27 = g->edx;
                ecx = t26;
                edx = t27;
            }
        }
L_102c635a: ;
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, sp0 - 0x1cu);
        wr32(sp0 - 0x30u, arg2);
        wr32(sp0 - 0x34u, arg1);
        g->eax = sp0 - 0x1cu;
        g->esp = sp0 - 0x24u;
        t28 = cow_call_regs(g, COW_IMG(0x102c8a2du), g->eax, ecx, edx, 1, 4, arg1, arg2, sp0 - 0x1cu, 1u);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
L_102c636c: ;
        t31 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x28u, t31);
        wr32(sp0 - 0x2cu, arg1);
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, arg1, t31);
        t32 = g->edx;
        eax = rd32(sp0 - 8u);
        ecx = rd32(sp0 - 0x28u);
        edx = t32;
    }
    wr32(sp0 - 0x28u, eax);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, eax, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c627d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c627d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
