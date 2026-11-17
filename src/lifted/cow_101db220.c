/* f_0x101db220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101db220(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, self);
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, rd32(t1 + 0x64u), self, 0);
    g->eax = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    g->edx = rd32(COW_IMG(0x10663468u));
    t3 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    t4 = rd32(COW_IMG(0x10663468u));
    t5 = rd32(rd32(COW_IMG(0x10663740u)) + 0x64u);
    t6 = cow_thiscall(g, rd32(t3 + 0x54u), rd32(t4 + 0x58u), 0);
    t7 = g->edx;
    if (t2 != 1u)
    {
        eax = t6;
        edx = t7;
        esi = t5;
        edi = t2;
        goto L_101db252;
    }
    eax = t6;
    edx = t7;
    esi = t5;
    edi = t2;
    ebx = esi;
L_101db258: ;
    esi = eax;
L_101db25a: ;
    if (edi != 1u) goto L_101db289;
    if (eax == 0x11u)
    {
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_101db3db;
    }
    g->edx = edx;
    t8 = rd32(rd32(COW_IMG(0x10663468u)) + 0x5cu);
    g->esp = sp0 - 0x18u;
    t9 = cow_call_regs(g, COW_IMG(0x1021cc60u), eax, t8, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int8_t)t9 >= 0)
    {
        ecx = t10;
        edx = t11;
        goto L_101db29f;
    }
    edx = t11;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80404040u;
L_101db252: ;
    if (eax != esi)
    {
        ebx = eax;
        goto L_101db25a;
    }
    ebx = eax;
    goto L_101db258;
L_101db289: ;
    g->edx = rd32(COW_IMG(0x10663740u));
    t12 = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
    t13 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 0x18u;
    t14 = cow_call_regs(g, COW_IMG(0x1021cc60u), eax, t12, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int8_t)t14 < 0)
    {
        edx = t16;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_101db3db;
    }
    ecx = t15;
    edx = t16;
L_101db29f: ;
    if (ebx != 0x11u) goto L_101db358;
    if (arg1 == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    if (rd16(arg1) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = (ecx & 0xffff0000u) | rd16(arg1);
    if (arg2 == 0u) goto L_101db2eb;
    if (rd32(arg2 + 0x14bcu) == 0u) goto L_101db2eb;
    eax = rd32(arg2 + 0x14bcu);
    if ((int8_t)(rd32(eax) >> 8u) >= 0)
    {
        edx = rd32(eax);
        goto L_101db2eb;
    }
    edx = rd32(eax);
    wr32(sp0 - 0x1cu, ecx);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    t17 = rd32(sp0 - 4u);
    g->esp = sp0 - 0x18u;
    t18 = cow_thiscall(g, COW_IMG(0x101dbad0u), t17, 1, ecx);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        edx = t20;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t19;
    edx = t20;
L_101db2eb: ;
    if (esi == 0xbu) goto L_101db35d;
    if (ebx == 0xcu) goto L_101db411;
    if (esi == 0xcu) goto L_101db411;
    if (ebx == 0xdu) goto L_101db3fe;
    if (esi == 0xdu) goto L_101db3fe;
    if (ebx == 0xeu) goto L_101db3ea;
    if (esi == 0xeu) goto L_101db3ea;
    if (ebx == 0xfu) goto L_101db3c8;
    if (esi == 0xfu) goto L_101db3c8;
    if (ebx == 0x10u) goto L_101db342;
    if (esi != 0x10u) goto L_101db371;
L_101db342: ;
    ecx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u;
    zf = !(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u & 1u);
L_101db3d9: ;
    if (!zf) goto L_101db371;
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_101db3db: ;
    g->ebx = loc_c;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = loc_10;
    g->edx = edx;
    return 0x80404040u;
L_101db358: ;
    if (ebx != 0xbu) goto L_101db2eb;
L_101db35d: ;
    if (!(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u & 1u))
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = rd32(COW_IMG(0x103601bcu));
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
L_101db371: ;
    if (ebx == 1u) goto L_101db37f;
    eax = ebx - 1u;
    if (eax != 8u) goto L_101db422;
L_101db37f: ;
    if (rd16(rd32(arg2 + 0x14b4u)) == 0xau)
    {
        eax = rd16(rd32(arg2 + 0x14b4u)) - 0xau;
        ecx = rd32(arg2 + 0x14b4u);
        goto L_101db39d;
    }
    eax = rd16(rd32(arg2 + 0x14b4u)) - 0xau;
    ecx = rd32(arg2 + 0x14b4u);
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_101db39d;
    }
    eax = eax - 2u;
    if (eax != 2u) goto L_101db422;
    eax = eax - 2u;
L_101db39d: ;
    if ((rd8(arg1 + 0x11u) & 0x40u) == 0u) goto L_101db422;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
    t22 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = rd8(arg1 + 0x11u) & 3u;
    return (-(t21 != (rd8(arg1 + 0x11u) & 3u)) & 0x1fdfe0u) - 0x7fbfbfc0u;
L_101db3c8: ;
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u;
    edx = rd32(COW_IMG(0x103601bcu));
L_101db3d7: ;
    zf = !(eax & 1u);
    goto L_101db3d9;
L_101db3ea: ;
    ecx = rd32(COW_IMG(0x103601bcu));
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u;
    zf = !(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u & 1u);
    goto L_101db3d9;
L_101db3fe: ;
    ecx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u;
    zf = !(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u & 1u);
    goto L_101db3d9;
L_101db411: ;
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u;
    edx = rd32(COW_IMG(0x103601bcu));
    goto L_101db3d7;
L_101db422: ;
    if (ebx > 0x10u) goto L_101db5d3;
    t23 = rd32(COW_IMG(0x101db63cu) + rd8(COW_IMG(0x101db64cu) + ebx) * 4u);
    switch (t23 - RD)
    {
    case 0x101db43au: eax = rd8(COW_IMG(0x101db64cu) + ebx); goto L_101db43a;
    case 0x101db4e9u: eax = rd8(COW_IMG(0x101db64cu) + ebx); goto L_101db4e9;
    case 0x101db5b7u: eax = rd8(COW_IMG(0x101db64cu) + ebx); goto L_101db5b7;
    case 0x101db5d3u: goto L_101db5d3;
    default: rt_fatal(g, COW_IMG(0x101db433u), "switch");
    }
    return 0;
L_101db43a: ;
    wr32(sp0 - 0x1cu, 0u);
    t39 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x20u, t39);
    g->ebx = ebx;
    g->eax = eax;
    t40 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x18u;
    t41 = cow_fastcall(g, COW_IMG(0x10131f10u), t40, edx, 2, t39, 0u);
    t42 = g->ecx;
    t43 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        edx = t43;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t42;
    edx = t43;
L_101db453: ;
    if (esi == 8u) goto L_101db536;
    if ((int32_t)esi <= 9) goto L_101db46a;
    if ((int32_t)esi <= 16) goto L_101db527;
L_101db46a: ;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 + 8u);
    wr32(sp0 - 0x28u, 0u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 8u, 4, 0u, sp0 + 8u, sp0 - 8u, 1u);
    t45 = g->ecx;
    t46 = g->edx;
    if ((uint8_t)t44 == 0u)
    {
        ecx = t45;
        goto L_101db4a3;
    }
    ecx = t45;
    edx = t46;
    if ((uint8_t)arg2 != rd8(arg1 + 2u)) goto L_101db4a3;
    edx = (edx & 0xffffff00u) | (uint8_t)arg2;
    if ((uint8_t)rd32(sp0 - 8u) == ebx)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = (uint8_t)rd32(sp0 - 8u);
L_101db4a3: ;
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 + 8u);
    wr32(sp0 - 0x28u, 0u);
    g->eax = sp0 + 8u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, sp0 + 8u, sp0 - 8u, 2u);
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        ecx = t48;
        edx = t49;
        goto L_101db527;
    }
    eax = t47;
    ecx = t48;
    edx = t49;
    if ((uint8_t)arg2 != rd8(arg1 + 2u))
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        goto L_101db527;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
    if ((uint8_t)rd32(sp0 - 8u) != ebx)
    {
        edx = (uint8_t)rd32(sp0 - 8u);
        goto L_101db527;
    }
    edx = (uint8_t)rd32(sp0 - 8u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80404040u;
L_101db4e9: ;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0xffffffffu);
    t29 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x24u, t29);
    g->edx = t29;
    t30 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 0x18u;
    t31 = cow_call_regs(g, COW_IMG(0x101334c0u), eax, t30, g->edx, 0, 3, t29, 0xffffffffu, 1u);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        edx = t33;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t32;
    edx = t33;
    wr32(sp0 - 0x1cu, 9u);
    wr32(sp0 - 0x20u, 0xffffffffu);
    t34 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x24u, t34);
    g->edx = edx;
    t35 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 0x18u;
    t36 = cow_call_regs(g, COW_IMG(0x101334c0u), arg1, t35, g->edx, 0, 3, t34, 0xffffffffu, 9u);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        edx = t38;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t37;
    edx = t38;
L_101db527: ;
    if (esi == 8u) goto L_101db536;
    if ((int32_t)esi <= 9) goto L_101db566;
    if ((int32_t)esi > 16) goto L_101db566;
L_101db536: ;
    if (rd32(arg2 + 0x14d0u) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = rd32(arg2 + 0x14d0u);
    if (rd16(eax) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    if (rd32(arg2 + 0x14d8u) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = rd32(arg2 + 0x14d8u);
    if (rd16(eax) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
L_101db566: ;
    if (esi != 2u)
    {
        eax = esi - 2u;
        goto L_101db593;
    }
    if (rd16(rd32(arg2 + 0x14b4u)) == 0xau)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = rd16(rd32(arg2 + 0x14b4u)) - 0xau;
    ecx = rd32(arg2 + 0x14b4u);
    if (eax == 2u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = eax - 2u;
    if (eax == 2u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = eax - 2u;
L_101db593: ;
    if (rd8(rd32(COW_IMG(0x10663468u)) + 0x70u) != 0u)
    {
        edx = rd32(COW_IMG(0x10663468u));
        goto L_101db609;
    }
    edx = rd32(COW_IMG(0x10663468u));
    if (ebx - 1u > 8u) goto L_101db5f2;
    eax = ebx - 1u;
    t50 = rd32(COW_IMG(0x101db660u) + rd8(COW_IMG(0x101db668u) + eax) * 4u);
    switch (t50 - RD)
    {
    case 0x101db3dbu: loc_c = rd32(sp0 - 0xcu); loc_10 = rd32(sp0 - 0x10u); loc_14 = rd32(sp0 - 0x14u); loc_18 = rd32(sp0 - 0x18u); goto L_101db3db;
    case 0x101db5f2u: ecx = rd8(COW_IMG(0x101db668u) + eax); goto L_101db5f2;
    default: rt_fatal(g, COW_IMG(0x101db5b0u), "switch");
    }
    return 0;
L_101db5b7: ;
    wr32(sp0 - 0x1cu, ebx);
    t24 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x20u, t24);
    g->ebx = ebx;
    g->eax = eax;
    t25 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x18u;
    t26 = cow_fastcall(g, COW_IMG(0x10131f10u), t25, t24, 2, t24, ebx);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        edx = t28;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t27;
    edx = t28;
L_101db5d3: ;
    if (ebx == 0u) goto L_101db453;
    if ((int32_t)ebx <= 4) goto L_101db527;
    if ((int32_t)ebx > 7) goto L_101db527;
    goto L_101db453;
L_101db5f2: ;
    if (esi - 1u > 8u) goto L_101db609;
    eax = esi - 1u;
    t51 = rd32(COW_IMG(0x101db674u) + rd8(COW_IMG(0x101db67cu) + eax) * 4u);
    switch (t51 - RD)
    {
    case 0x101db3dbu: edx = rd8(COW_IMG(0x101db67cu) + eax); loc_c = rd32(sp0 - 0xcu); loc_10 = rd32(sp0 - 0x10u); loc_14 = rd32(sp0 - 0x14u); loc_18 = rd32(sp0 - 0x18u); goto L_101db3db;
    case 0x101db609u: edx = rd8(COW_IMG(0x101db67cu) + eax); goto L_101db609;
    default: rt_fatal(g, COW_IMG(0x101db602u), "switch");
    }
    return 0;
L_101db609: ;
    if (rd8(rd32(sp0 - 4u) + 4u) == 0u) goto L_101db62d;
    eax = rd32(sp0 - 4u);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 4u);
    if (rd8(eax + 5u) != rd8(arg1 + 2u)) goto L_101db62d;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80804020u;
L_101db62d: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80808080u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101db220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101db220(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
