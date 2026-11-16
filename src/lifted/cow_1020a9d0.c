/* f_0x1020a9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_1020a9d0(Guest* g)
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
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x1020a410u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1020ac04;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(COW_IMG(0x106644e8u), 0u);
    wr16(COW_IMG(0x10385a04u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x1020b3a0u), ecx, edx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (arg1 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_1020aa10;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (arg1 == 1u) goto L_1020aa10;
    if (arg1 != 2u) goto L_1020aa19;
L_1020aa10: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1020cda0u), 1, arg2);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
L_1020aa19: ;
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 8u);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    t11 = rd32(COW_IMG(0x106644dcu));
    wr16(COW_IMG(0x10385a04u), 1u);
    wr32(COW_IMG(0x106644e4u), t11);
    wr8(self + 0x894u, (uint8_t)arg6);
    if (arg1 > 8u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg6;
        goto L_1020aa6a;
    }
    eax = t11;
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg6;
    t12 = rd32(COW_IMG(0x1020ac0cu) + arg1 * 4u);
    switch (t12 - RD)
    {
    case 0x1020aa55u: goto L_1020aa55;
    case 0x1020aaa9u: goto L_1020aaa9;
    case 0x1020aabdu: goto L_1020aabd;
    case 0x1020aad2u: goto L_1020aad2;
    case 0x1020aae6u: goto L_1020aae6;
    case 0x1020ab18u: goto L_1020ab18;
    case 0x1020ab56u: goto L_1020ab56;
    case 0x1020ab94u: goto L_1020ab94;
    default: rt_fatal(g, COW_IMG(0x1020aa4eu), "switch");
    }
    return 0;
L_1020aa55: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100e1b90u), 6, arg2, 0u, 3u, COW_IMG(0x1020ac30u), self, 5u);
    t50 = g->ecx;
    t51 = g->edx;
    ecx = t50;
    edx = t51;
L_1020aa67: ;
L_1020aa6a: ;
    wr32(self + 0x58u, arg1);
    if (rd32(COW_IMG(0x106644e4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106644e4u));
    }
    else
    {
        eax = rd32(COW_IMG(0x106644e4u));
        wr8(eax + 0x17u, (uint8_t)arg3);
        t52 = rd32(COW_IMG(0x106644e4u));
        wr8(t52 + 0x18u, (uint8_t)arg4);
        eax = t52;
    }
    if ((uint8_t)arg5 != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg5;
        goto L_1020abfd;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg5;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t53 = cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    wr8(COW_IMG(0x106644ecu), 0u);
    g->esi = in_esi;
    return t53;
L_1020aaa9: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x100e29c0u), ecx, 6, arg2, 0u, 3u, COW_IMG(0x1020ac30u), self, 5u);
    t48 = g->ecx;
    t49 = g->edx;
    ecx = t48;
    edx = t49;
    goto L_1020aa67;
L_1020aabd: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100e2f10u), 5, arg2, 0u, 3u, COW_IMG(0x1020ac30u), self);
    t46 = g->ecx;
    t47 = g->edx;
    ecx = t46;
    edx = t47;
    goto L_1020aa6a;
L_1020aad2: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100e2d00u), 6, arg2, 0u, 3u, COW_IMG(0x1020ac30u), self, 5u);
    t44 = g->ecx;
    t45 = g->edx;
    ecx = t44;
    edx = t45;
    goto L_1020aa67;
L_1020aae6: ;
    g->esi = self;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1020a4c0u), self, 0);
    t38 = g->ecx;
    t39 = rd32(COW_IMG(0x10456a28u));
    t40 = rd32(COW_IMG(0x106644dcu));
    wr32(COW_IMG(0x106644e4u), t40);
    t41 = (t38 & 0xffff0000u) | rd16(t39 + 8u);
    g->ecx = t41;
    g->edx = t40;
    cow_cdecl(g, COW_IMG(0x100e2ac0u), 6, arg2, t41, 3u, COW_IMG(0x1020ac30u), self, 5u);
    t42 = g->ecx;
    t43 = g->edx;
    ecx = t42;
    edx = t43;
    goto L_1020aa67;
L_1020ab18: ;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1020aa6a;
    eax = rd32(COW_IMG(0x104dfd98u));
    t31 = rd32(COW_IMG(0x106644e0u));
    wr32(COW_IMG(0x106644e4u), t31);
    t32 = rd32(eax + 0x3c350u);
    g->ecx = ecx;
    g->edx = t31;
    g->esp = sp0 - 0x1cu;
    t33 = cow_cdecl(g, COW_IMG(0x101d7280u), 1, t32);
    t34 = g->ecx;
    t35 = g->edx;
    g->ecx = t34;
    g->edx = t35;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100e2b60u), 6, arg2, t33, 3u, COW_IMG(0x1020ac30u), self, 5u);
    t36 = g->ecx;
    t37 = g->edx;
    ecx = t36;
    edx = t37;
    goto L_1020aa67;
L_1020ab56: ;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1020aa6a;
    eax = rd32(COW_IMG(0x104dfd98u));
    t24 = rd32(COW_IMG(0x106644e0u));
    wr32(COW_IMG(0x106644e4u), t24);
    t25 = rd32(eax + 0x3c350u);
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x1cu;
    t26 = cow_cdecl(g, COW_IMG(0x101d7280u), 1, t25);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->edx = t28;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100e2c30u), 6, arg2, t26, 3u, COW_IMG(0x1020ac30u), self, 5u);
    t29 = g->ecx;
    t30 = g->edx;
    ecx = t29;
    edx = t30;
    goto L_1020aa67;
L_1020ab94: ;
    t13 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x106644e4u)) + 8u);
    t14 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu);
    g->esi = self;
    g->edx = t14;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t14, t13, 1u);
    t15 = g->edx;
    g->eax = rd32(self);
    t16 = rd32(self);
    t17 = cow_thiscall(g, rd32(t16 + 0x70u), self, 0);
    g->edx = rd32(self);
    t18 = rd32(self);
    cow_thiscall(g, rd32(t18 + 0x84u), self, 0);
    t19 = g->ecx;
    t20 = g->edx;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t20;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
    }
    wr16(COW_IMG(0x10385a04u), 4u);
    wr32(self + 0x58u, 8u);
    wr8(rd32(COW_IMG(0x106644e4u)) + 0x17u, (uint8_t)arg3);
    t23 = rd32(COW_IMG(0x106644e4u));
    wr8(t23 + 0x18u, (uint8_t)arg4);
    g->esi = in_esi;
    return t23;
L_1020abfd: ;
    wr8(COW_IMG(0x106644ecu), 1u);
L_1020ac04: ;
    g->esi = in_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020a9d0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
