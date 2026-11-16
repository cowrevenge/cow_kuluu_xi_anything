/* f_0x101e5490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e5490(Guest* g)
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
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 0x14u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
        t1 = rd32(self + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t1, g->edx, 0, 2, eax, 0u);
        t3 = g->edx;
        g->edi = t1;
        g->edx = t3;
        cow_thiscall(g, COW_IMG(0x101186a0u), t1, 0);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if (rd32(self + 0x14u) != 1u)
    {
        eax = rd32(self + 0x14u);
        ecx = (ecx & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_101e5504;
    }
    eax = rd32(self + 0x14u);
    ecx = (ecx & 0xffff0000u) | rd16(sp0 + 4u);
    if ((uint16_t)ecx != 4u) goto L_101e54d6;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t7 = g->edx;
    g->edi = in_edi;
    g->edx = t7;
    return t6;
L_101e54d6: ;
    if ((uint16_t)ecx != 3u) goto L_101e54ef;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t9 = g->edx;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_101e54ef: ;
    if ((uint16_t)ecx != 0x11u) goto L_101e5504;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x101e5130u), self, 1, 1u);
    t11 = g->edx;
    g->edi = in_edi;
    g->edx = t11;
    return t10;
L_101e5504: ;
    if ((uint16_t)ecx == 5u) goto L_101e556b;
    if ((uint16_t)ecx != 6u) goto L_101e572d;
    if (eax == 0u) goto L_101e5527;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x101e5130u), self, 1, 0u);
    t13 = g->edx;
    g->edi = in_edi;
    g->edx = t13;
    return t12;
L_101e5527: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f434u));
    t14 = g->edx;
    t15 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f3bcu), 1u, 0u);
    t16 = rd32(rd32(COW_IMG(0x10663520u)) + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, t16);
    g->esp = sp0;
    g->edi = in_edi;
    g->edx = t16;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t15, COW_IMG(0x10621838u), t16);
L_101e556b: ;
    if (eax != 1u) goto L_101e5582;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, eax);
    t18 = g->edx;
    g->edi = in_edi;
    g->edx = t18;
    return t17;
L_101e5582: ;
    if (eax == 0u) goto L_101e5595;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x101e5130u), self, 1, 1u);
    t20 = g->edx;
    g->edi = in_edi;
    g->edx = t20;
    return t19;
L_101e5595: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_101e572d;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    t21 = rd32(COW_IMG(0x101e5734u) + eax * 4u);
    switch (t21 - RD)
    {
    case 0x101e55abu: goto L_101e55ab;
    case 0x101e56a8u: goto L_101e56a8;
    case 0x101e56f7u: goto L_101e56f7;
    case 0x101e5706u: goto L_101e5706;
    case 0x101e5715u: goto L_101e5715;
    case 0x101e5724u: goto L_101e5724;
    default: rt_fatal(g, COW_IMG(0x101e55a4u), "switch");
    }
    return 0;
L_101e55ab: ;
    if (rd8(self + 0x34u) != 0u) goto L_101e55c0;
    eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t38 = g->edx;
    g->edi = in_edi;
    g->edx = t38;
    return t37;
L_101e55c0: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 1u);
    t40 = g->edx;
    t41 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, (uint8_t)(((uint8_t)t39 != 0u) + 1u));
    g->edx = t40;
    t42 = cow_thiscall(g, COW_IMG(0x101e34d0u), t41, 0);
    t43 = g->ecx;
    t44 = g->edx;
    if (t42 == 0u)
    {
        eax = t42;
        edx = t44;
    }
    else
    {
        eax = t42;
        ecx = t43;
        edx = t44;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(((uint8_t)t39 != 0u) + 1u);
        edi = t42;
        t45 = (eax & 0xffffff00u) | rd8(self + 0x32u);
        t46 = (ecx & 0xffffff00u) | rd8(self + 0x31u);
        t47 = (edx & 0xffffff00u) | rd8(self + 0x30u);
        g->esp = sp0 - 0x1cu;
        t48 = cow_thiscall_cdecl(g, COW_IMG(0x101c8f60u), t46, 1, self + 0x34u);
        t49 = g->ecx;
        t50 = (t48 & 0xffffff00u) | rd8(edi);
        t51 = (t49 & 0xffffff00u) | rd8(edi + 1u);
        t52 = rd32(sp0 + 4u);
        g->ecx = t51;
        g->edx = t52;
        g->esp = sp0 - 0x10u;
        t53 = cow_cdecl(g, COW_IMG(0x100e95e0u), 8, t52, t51, t50, 1u, t48, t47, t46, t45);
        t54 = g->ecx;
        t55 = g->edx;
        if ((uint8_t)t53 == 0u)
        {
            eax = t53;
            ecx = t54;
            edx = t55;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t61 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
            t62 = g->edx;
            eax = t61;
            edx = t62;
        }
        else
        {
            edx = t55;
            t56 = rd8(edi + 1u);
            g->edx = edx;
            t57 = rd8(edi);
            g->esp = sp0 - 0x10u;
            t58 = cow_cdecl(g, COW_IMG(0x101cb7a0u), 2, t56, t57);
            t59 = g->edx;
            if (t58 == 0u)
            {
                edx = t59;
            }
            else
            {
                eax = t58;
                edx = t59;
                t60 = rd32(eax);
                wr8(COW_IMG(0x10663514u), (uint8_t)ebx);
                wr32(COW_IMG(0x10663518u), t60);
                wr8(COW_IMG(0x1066351cu), 1u);
                wr8(COW_IMG(0x1066351du), 0x3cu);
            }
            if (rd32(COW_IMG(0x10663520u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10663520u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10663520u));
                wr8(eax + 0x65u, rd8(eax + 0x65u) | 1u);
            }
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f434u));
    t63 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f3bcu), 1u, 0u);
    t64 = rd32(rd32(COW_IMG(0x10663520u)) + 8u);
    t65 = rd32(COW_IMG(0x10663520u));
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, t64);
    g->esp = sp0;
    g->edi = in_edi;
    g->edx = t65;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t64, COW_IMG(0x10621838u), t65);
L_101e56a8: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f434u));
    t30 = g->edx;
    t31 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f3bcu), 1u, 0u);
    t32 = rd32(rd32(COW_IMG(0x10663520u)) + 8u);
    t33 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t32, 2, t32, 0u);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x101e4470u), rd32(COW_IMG(0x10663520u)), 3, 0u, 0u, 0u);
    t36 = g->edx;
    g->edi = in_edi;
    g->edx = t36;
    return t35;
L_101e56f7: ;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x101e50a0u), eax, self, edx, 0, 1, 1u);
    t29 = g->edx;
    g->edi = in_edi;
    g->edx = t29;
    return t28;
L_101e5706: ;
    g->esp = sp0 - 0xcu;
    t26 = cow_call_regs(g, COW_IMG(0x101e50a0u), eax, self, edx, 0, 1, 2u);
    t27 = g->edx;
    g->edi = in_edi;
    g->edx = t27;
    return t26;
L_101e5715: ;
    g->esp = sp0 - 0xcu;
    t24 = cow_call_regs(g, COW_IMG(0x101e50a0u), eax, self, edx, 0, 1, 3u);
    t25 = g->edx;
    g->edi = in_edi;
    g->edx = t25;
    return t24;
L_101e5724: ;
    g->esp = sp0 - 0xcu;
    t22 = cow_call_regs(g, COW_IMG(0x101e50a0u), eax, self, edx, 0, 1, 4u);
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_101e572d: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e5490(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
