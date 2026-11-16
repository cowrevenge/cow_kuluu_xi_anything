/* f_0x100d1c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d1c80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
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

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t2 = g->edx;
    if (t1 > 7u)
    {
        edx = t2;
        goto L_100d1e44;
    }
    eax = t1;
    edx = t2;
    t3 = rd32(COW_IMG(0x100d1f10u) + rd8(COW_IMG(0x100d1f1cu) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x100d1ca6u: goto L_100d1ca6;
    case 0x100d1cdbu: goto L_100d1cdb;
    case 0x100d1e44u: goto L_100d1e44;
    default: rt_fatal(g, COW_IMG(0x100d1c9fu), "switch");
    }
    return;
L_100d1ca6: ;
    if (rd32(self + 0x70u) == 0u) goto L_100d1e44;
    eax = rd32(self + 0x70u);
    if (!(rd32(eax + 0x12cu) >> 0x16u & 1u))
    {
        edx = rd32(eax + 0x12cu) >> 0x16u;
        goto L_100d1e44;
    }
    edx = rd32(eax + 0x12cu) >> 0x16u;
    g->esp = sp0 - 0x18u;
    t4 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        edx = t5;
        goto L_100d1e44;
    }
    eax = t4;
    edx = t5;
    if ((int32_t)eax >= 9) goto L_100d1e44;
L_100d1cdb: ;
    g->esp = sp0 - 0x18u;
    t6 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t7 = g->edx;
    if ((int32_t)t6 < 9)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        edx = t7;
        eax = 1u;
    }
    t8 = rd32(self + 0x8a0u) + rd16(COW_IMG(0x1035d7fcu) + eax * 2u);
    wr32(sp0 - 0x1cu, t8);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t8);
    t10 = g->edx;
    wr32(sp0 - 8u, rd32(t9));
    if (rd32(t9) == 0u)
    {
        ebp = eax * 2u;
        eax = rd32(t9);
    }
    else
    {
        edx = t10;
        ebp = eax * 2u;
        eax = rd32(t9);
        edi = t8;
        loc_8 = rd32(t9);
        wr32(sp0 - 0x1cu, 3u);
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 3u);
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
        t13 = g->ecx;
        t14 = g->edx;
        if ((uint8_t)t12 == 0u)
        {
            ecx = t13;
            edx = t14;
            wr32(sp0 - 0x1cu, 0x14u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t18 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t19 = g->edx;
            if (t18 == 0u)
            {
                eax = t18;
                edx = t19;
                edi = 0u;
            }
            else
            {
                eax = t18;
                edx = t19;
                edi = t18;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                t20 = g->edx;
                wr32(sp0 - 0x1cu, self);
                t21 = rd32(self + 0x9ecu);
                wr32(edi, t21);
                g->eax = t21;
                g->edx = t20;
                t22 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
                t23 = g->edx;
                wr32(edi + 0x10u, 1u);
                eax = t22;
                edx = t23;
            }
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, self);
            wr32(sp0 - 0x24u, edi);
            wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t24 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
            eax = t24;
        }
        else
        {
            eax = t12;
            t15 = rd32(self + 0x9ecu);
            wr32(sp0 - 0x1cu, t15);
            t16 = rd32(sp0 - 8u);
            wr32(sp0 - 0x20u, t16);
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t17 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t16, t15);
            eax = t17;
        }
    }
    if ((int8_t)rd8(self + 0x881u) <= 0) goto L_100d1f05;
    eax = (eax & 0xffffff00u) | rd8(self + 0x881u);
    t25 = rd32(self + 0x8a0u) + rd16(COW_IMG(0x1035d80eu) + ebp * 2u + (uint32_t)(int8_t)eax * 2u);
    wr32(sp0 - 0x1cu, t25);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = sp0 - 4u;
    t26 = rd32(self + 0x8a0u);
    g->esp = sp0 - 0x18u;
    t27 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t25);
    t28 = g->edx;
    wr32(sp0 - 8u, rd32(t27));
    if (rd32(t27) == 0u) goto L_100d1f05;
    eax = rd32(t27);
    edx = t28;
    edi = t25;
    loc_8 = rd32(t27);
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 3u);
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_100d1e0a;
    }
    edx = t32;
    t33 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x1cu, t33);
    t34 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t34);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t34, t33);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_100d1e0a: ;
    wr32(sp0 - 0x1cu, 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t36 = g->edx;
    if (t35 == 0u)
    {
        eax = t35;
        edx = t36;
        goto L_100d1ef1;
    }
    eax = t35;
    edx = t36;
    edi = t35;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t37 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
    wr32(sp0 - 0x1cu, self);
    t38 = rd32(self + 0x9ecu);
    wr32(edi, t38);
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
    t40 = g->edx;
    wr32(edi + 0x10u, 2u);
    eax = t39;
    edx = t40;
L_100d1ef3: ;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
L_100d1f05: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_100d1e44: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t41 = cow_thiscall(g, COW_IMG(0x10084460u), self, 0);
    t42 = g->edx;
    if (t41 == 0u) goto L_100d1f05;
    eax = t41;
    edx = t42;
    if ((int32_t)eax >= 3) goto L_100d1f05;
    t43 = rd32(self + 0x8a0u) + rd16(COW_IMG(0x1035d834u) + eax * 2u);
    wr32(sp0 - 0x1cu, t43);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t44 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t43);
    t45 = g->edx;
    wr32(sp0 - 8u, rd32(t44));
    if (rd32(t44) == 0u) goto L_100d1f05;
    eax = rd32(t44);
    edx = t45;
    edi = t43;
    loc_8 = rd32(t44);
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 3u);
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        ecx = t48;
        edx = t49;
        goto L_100d1ebe;
    }
    eax = t47;
    t50 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x1cu, t50);
    t51 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t51);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t51, t50);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_100d1ebe: ;
    wr32(sp0 - 0x1cu, 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t52 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t53 = g->edx;
    if (t52 == 0u)
    {
        eax = t52;
        edx = t53;
        goto L_100d1ef1;
    }
    eax = t52;
    edx = t53;
    edi = t52;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
    t54 = g->edx;
    wr32(sp0 - 0x1cu, self);
    t55 = rd32(self + 0x9ecu);
    wr32(edi, t55);
    g->eax = t55;
    g->edx = t54;
    t56 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
    t57 = g->edx;
    wr32(edi + 0x10u, 1u);
    eax = t56;
    edx = t57;
    goto L_100d1ef3;
L_100d1ef1: ;
    edi = 0u;
    goto L_100d1ef3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d1c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d1c80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
