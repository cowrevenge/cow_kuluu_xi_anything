/* f_0x10265710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10265710(Guest* g)
{
    uint32_t eax;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(sp0 + 4u) != 0u)
    {
        edi = rd32(sp0 + 4u);
        goto L_1026572c;
    }
    return 1u;
L_1026572c: ;
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x24u, rd32(rd32(edi)));
    t1 = rd32(rd32(edi) + 4u);
    wr32(sp0 - 0x20u, t1);
    t2 = rd32(rd32(edi) + 8u);
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(rd32(edi) + 0xcu);
    wr32(sp0 - 0x18u, t3);
    g->eax = rd32(arg2);
    t4 = rd32(arg2);
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, rd32(t4 + 0x1cu), t3, 5, arg2, rd32(rd32(edi)), t1, t2, t3);
    if (rd32(sp0 + 0xcu) == 0u)
    {
        ecx = t5;
    }
    else
    {
        t6 = rd32(edi + 8u);
        wr32(sp0 - 0x18u, t6);
        t7 = rd32(edi + 4u);
        wr32(sp0 - 0x1cu, t7);
        wr32(sp0 - 0x30u, arg2);
        wr32(sp0 - 0x2cu, rd32(rd32(edi)));
        t8 = rd32(rd32(edi) + 4u);
        wr32(sp0 - 0x28u, t8);
        t9 = rd32(rd32(edi) + 8u);
        wr32(sp0 - 0x24u, t9);
        t10 = rd32(rd32(edi) + 0xcu);
        wr32(sp0 - 0x20u, t10);
        g->eax = t10;
        g->esp = sp0 - 0x14u;
        t11 = cow_thiscall(g, rd32(rd32(arg2) + 0xcu), sp0 - 0x2cu, 7, arg2, rd32(rd32(edi)), t8, t9, t10, t7, t6);
        if ((int32_t)t11 < 0)
        {
            ecx = t11;
        }
        else
        {
            ecx = t11;
            t12 = rd32(edi + 0xcu);
            wr32(sp0 + 0xcu, 0u);
            if (t12 == 0u) goto L_102658cf;
            esi = 0u;
L_102657a3: ;
            t13 = rd32(esi + rd32(edi + 0x10u) + 0x18u);
            wr32(sp0 - 0x18u, t13);
            t14 = rd32(rd32(esi + rd32(edi + 0x10u) + 0x14u));
            wr32(sp0 - 0x28u, t14);
            t15 = rd32(rd32(esi + rd32(edi + 0x10u) + 0x14u) + 4u);
            wr32(sp0 - 0x24u, t15);
            t16 = rd32(rd32(esi + rd32(edi + 0x10u) + 0x14u) + 8u);
            wr32(sp0 - 0x20u, t16);
            t17 = rd32(rd32(esi + rd32(edi + 0x10u) + 0x14u) + 0xcu);
            wr32(sp0 - 0x1cu, t17);
            t18 = rd32(esi + rd32(edi + 0x10u) + 0x10u);
            wr32(sp0 - 0x2cu, t18);
            t19 = rd32(esi + rd32(edi + 0x10u) + 0xcu);
            wr32(sp0 - 0x30u, t19);
            t20 = rd32(esi + rd32(edi + 0x10u) + 8u);
            wr32(sp0 - 0x34u, t20);
            t21 = rd32(esi + rd32(edi + 0x10u) + 4u);
            wr32(sp0 - 0x38u, t21);
            t22 = rd32(esi + rd32(edi + 0x10u));
            wr32(sp0 - 0x3cu, t22);
            wr32(sp0 - 0x4cu, rd32(rd32(edi)));
            t23 = rd32(rd32(edi) + 4u);
            wr32(sp0 - 0x48u, t23);
            t24 = rd32(rd32(edi) + 8u);
            wr32(sp0 - 0x44u, t24);
            wr32(sp0 - 0x50u, arg2);
            t25 = rd32(rd32(edi) + 0xcu);
            wr32(sp0 - 0x40u, t25);
            g->eax = sp0 - 0x4cu;
            g->esp = sp0 - 0x14u;
            t26 = cow_thiscall(g, rd32(rd32(arg2) + 0x14u), t25, 15, arg2, rd32(rd32(edi)), t23, t24, t25, t22, t21, t20, t19, t18, t14, t15, t16, t17, t13);
            if ((int32_t)t26 < 0)
            {
                ecx = t26;
                goto L_102658cf;
            }
            ecx = t26;
            t27 = rd32(edi + 0x10u);
            wr32(sp0 + 4u, 0u);
            if (rd32(esi + t27 + 0x1cu) == 0u) goto L_102658b8;
            eax = t27;
            edx = 0u;
L_10265825: ;
            t28 = edx * 8u + rd32(eax + esi + 0x20u);
            wr32(sp0 - 4u, t28);
            t29 = rd32(rd32(t28 + 4u));
            wr32(sp0 - 0x24u, t29);
            t30 = rd32(rd32(t28 + 4u) + 4u);
            wr32(sp0 - 0x20u, t30);
            t31 = rd32(rd32(t28 + 4u) + 8u);
            wr32(sp0 - 0x1cu, t31);
            t32 = rd32(rd32(t28 + 4u) + 0xcu);
            wr32(sp0 - 0x18u, t32);
            t33 = rd32(eax + esi);
            wr32(sp0 - 0x38u, t33);
            wr32(sp0 - 0x34u, rd32(rd32(t28)));
            t34 = rd32(rd32(t28) + 4u);
            wr32(sp0 - 0x30u, t34);
            t35 = rd32(rd32(t28) + 8u);
            wr32(sp0 - 0x2cu, t35);
            t36 = rd32(rd32(t28) + 0xcu);
            wr32(sp0 - 0x28u, t36);
            wr32(sp0 - 0x48u, rd32(rd32(edi)));
            t37 = rd32(rd32(edi) + 4u);
            wr32(sp0 - 0x44u, t37);
            t38 = rd32(rd32(edi) + 8u);
            wr32(sp0 - 0x40u, t38);
            wr32(sp0 - 0x4cu, arg2);
            t39 = rd32(rd32(edi) + 0xcu);
            wr32(sp0 - 0x3cu, t39);
            g->eax = sp0 - 0x48u;
            g->esp = sp0 - 0x14u;
            t40 = cow_thiscall(g, rd32(rd32(arg2) + 0x18u), t39, 14, arg2, rd32(rd32(edi)), t37, t38, t39, t33, rd32(rd32(t28)), t34, t35, t36, t29, t30, t31, t32);
            if ((int32_t)t40 < 0)
            {
                ecx = t40;
                goto L_102658cf;
            }
            ecx = t40;
            t41 = rd32(sp0 + 4u) + 1u;
            t42 = rd32(edi + 0x10u);
            t43 = rd32(esi + rd32(edi + 0x10u) + 0x1cu);
            wr32(sp0 + 4u, t41);
            if (t41 < t43)
            {
                eax = t42;
                edx = t41;
                goto L_10265825;
            }
L_102658b8: ;
            t44 = rd32(sp0 + 0xcu) + 1u;
            t45 = rd32(sp0 + 0xcu);
            t46 = rd32(edi + 0xcu);
            wr32(sp0 + 0xcu, t44);
            if (t45 + 1u < t46)
            {
                esi = esi + 0x24u;
                goto L_102657a3;
            }
        }
    }
L_102658cf: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return -(ecx + 0x7ff8fffeu != 0u) & ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265710(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
