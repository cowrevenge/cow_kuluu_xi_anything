/* f_0x10138b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10138b50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_d04;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 3364u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10138b5cu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10138b5c;
    case 0x10138b5fu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10138b5f;
    case 0x10138b78u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10138b78;
    case 0x10138b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10138b89;
    case 0x10138b90u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10138b90;
    case 0x10138ba4u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138ba4;
    case 0x10138bafu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138baf;
    case 0x10138bbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138bbc;
    case 0x10138bc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138bc3;
    case 0x10138c14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10138c14;
    case 0x10138c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10138c28;
    case 0x10138c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138c37;
    case 0x10138c9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138c9e;
    case 0x10138cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138cd8;
    case 0x10138d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138d12;
    case 0x10138d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138d4c;
    case 0x10138d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138d82;
    case 0x10138db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138db8;
    case 0x10138deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd04u); g->esi = rd32(sp0 - 0xd04u); goto E_10138dee;
    case 0x10138e22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_d04 = rd32(sp0 - 0xd04u); goto E_10138e22;
    default: break;
    }
#endif

    COW_AT(10138b50)
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) == 5u)
    {
        edx = rd32(sp0 + 4u);
        goto L_10138b78;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edx = rd32(sp0 + 4u);
    COW_AT(10138b5c)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10138b89;
    }
    COW_AT(10138b5f)
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), edx);
L_10138b78: ;
    COW_AT(10138b78)
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, edx);
    wr32(sp0 + 8u, t2);
    eax = t2;
    COW_AT(10138b90)
    wr32(sp0 - 0xd04u, in_esi);
    if (rd16(sp0 + 8u) == 9u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        ecx = self;
        goto L_10138baf;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
    COW_AT(10138ba4)
    if (rd8(self + 0x2cu) == 0u)
    {
        loc_d04 = in_esi;
        goto L_10138e22;
    }
    ecx = (self & 0xffffff00u) | rd8(self + 0x2cu);
L_10138baf: ;
    COW_AT(10138baf)
    if ((uint32_t)(int16_t)eax - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)eax - 1u;
        loc_d04 = in_esi;
        goto L_10138e22;
    }
    eax = (uint32_t)(int16_t)eax - 1u;
    COW_AT(10138bbc)
    t3 = rd32(COW_IMG(0x10138e2cu) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x10138bc3u: goto L_10138bc3;
    case 0x10138c37u: goto L_10138c37;
    case 0x10138c9eu: goto L_10138c9e;
    case 0x10138cd8u: goto L_10138cd8;
    case 0x10138d12u: goto L_10138d12;
    case 0x10138d4cu: goto L_10138d4c;
    case 0x10138d82u: goto L_10138d82;
    case 0x10138db8u: goto L_10138db8;
    case 0x10138deeu: goto L_10138dee;
    default: rt_fatal(g, COW_IMG(0x10138bbcu), "switch");
    }
    return 0;
L_10138b89: ;
    COW_AT(10138b89)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10138bc3: ;
    COW_AT(10138bc3)
    wr32(sp0 - 0xd08u, self + 0x2cu);
    wr32(sp0 - 0xd0cu, COW_IMG(0x1036f9b0u));
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f9a8u));
    wr32(sp0 - 0xd14u, sp0 - 0xc00u);
    g->esp = sp0 - 0xd00u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc00u, COW_IMG(0x1036f9a8u), COW_IMG(0x1036f9b0u), self + 0x2cu, in_esi);
    wr32(sp0 - 0xd08u, sp0 - 0xc00u);
    g->eax = sp0 - 0xc00u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t61 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0xd04u;
    t62 = cow_thiscall(g, rd32(t61 + 0x24u), rd32(COW_IMG(0x10662d40u)), 1, sp0 - 0xc00u);
    t63 = g->edx;
    t64 = rd32(self + 0x1cu);
    wr32(sp0 - 0xd08u, t64);
    wr32(sp0 - 0xd0cu, 0u);
    g->edx = t63;
    t65 = cow_thiscall(g, COW_IMG(0x10127f20u), rd32(COW_IMG(0x10578160u)), 2, 0u, t64);
    t66 = g->edx;
    g->edx = t66;
    t67 = cow_thiscall(g, COW_IMG(0x10138ef0u), self, 0);
    t68 = g->edx;
    if ((uint8_t)t67 == 0u)
    {
        eax = t67;
        edx = t68;
        loc_d04 = in_esi;
        goto L_10138e22;
    }
    eax = t67;
    edx = t68;
    COW_AT(10138c14)
    if ((rd8(rd32(self + 0x50u) + 0x15u) & 0xfu) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x50u) + 0x15u);
        edx = (edx & 0xffffff00u) | (rd8(rd32(self + 0x50u) + 0x15u) & 0xfu);
        loc_d04 = rd32(sp0 - 0xd04u);
        goto L_10138e22;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x50u) + 0x15u);
    edx = (edx & 0xffffff00u) | (rd8(rd32(self + 0x50u) + 0x15u) & 0xfu);
    esi = rd32(self + 0x50u);
    COW_AT(10138c28)
    wr8(esi + 0x15u, (uint8_t)(eax | 0x40u));
    g->esi = rd32(sp0 - 0xd04u);
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0x40u);
L_10138c37: ;
    COW_AT(10138c37)
    wr32(sp0 - 0xd08u, in_edi);
    t47 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 0xd0cu, t47);
    g->eax = rd32(COW_IMG(0x10664494u));
    g->edx = edx;
    t48 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 0xd00u;
    t49 = cow_thiscall_cdecl(g, COW_IMG(0x10103f20u), ecx, 3, t47, in_edi, in_esi);
    t50 = g->edx;
    wr32(sp0 - 0xd10u, self + 0x2cu);
    wr32(sp0 - 0xd14u, t47);
    g->edx = t50;
    g->esp = sp0 - 0xd0cu;
    t51 = cow_cdecl(g, COW_IMG(0x10107690u), 2, t47, self + 0x2cu);
    t52 = g->edx;
    wr32(sp0 - 0xd0cu, COW_IMG(0x1036f96cu));
    g->esp = sp0 - 0xd08u;
    t53 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f96cu));
    wr32(sp0 - 0xd0cu, 1u);
    t54 = rd32(self + 8u);
    wr32(sp0 - 0xd10u, t54);
    g->edx = t54;
    t55 = cow_call_regs(g, COW_IMG(0x1015e790u), t53, COW_IMG(0x10621838u), g->edx, 0, 2, t54, 1u);
    t56 = g->edx;
    g->edx = t56;
    t57 = cow_thiscall(g, COW_IMG(0x10157620u), rd32(COW_IMG(0x1057876cu)), 0);
    t58 = g->edx;
    wr32(sp0 - 0xd0cu, 0u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 1u);
    wr32(sp0 - 0xd1cu, t47);
    wr32(sp0 - 0xd20u, 1u);
    g->edx = t58;
    t59 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t57, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, t47, 1u, 0u, 0u, 0u);
    t60 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t60;
    return t59;
L_10138c9e: ;
    COW_AT(10138c9e)
    wr32(sp0 - 0xd08u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xd04u;
    cow_call_regs(g, COW_IMG(0x10081450u), eax, ecx, g->edx, 1, 1, 0u);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0xd0cu, self + 0x2cu);
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f99cu));
    wr32(sp0 - 0xd14u, sp0 - 0xd00u);
    g->eax = sp0 - 0xd00u;
    g->edx = t39;
    g->esp = sp0 - 0xd00u;
    t40 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd00u, COW_IMG(0x1036f99cu), self + 0x2cu, 0u, in_esi);
    t41 = g->edx;
    wr32(sp0 - 0xd18u, 0u);
    wr32(sp0 - 0xd1cu, sp0 - 0xd00u);
    g->ecx = sp0 - 0xd00u;
    g->edx = t41;
    g->esp = sp0 - 0xd14u;
    t42 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0xd00u, 0u);
    t43 = g->ecx;
    t44 = g->edx;
    wr32(sp0 - 0xd20u, 0u);
    g->edx = t44;
    g->esp = sp0 - 0xd1cu;
    t45 = cow_call_regs(g, COW_IMG(0x10081460u), t42, t43, g->edx, 1, 1, 0u);
    t46 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t46;
    return t45;
L_10138cd8: ;
    COW_AT(10138cd8)
    wr32(sp0 - 0xd08u, 0u);
    g->esp = sp0 - 0xd04u;
    t29 = cow_call_regs(g, COW_IMG(0x10081450u), eax, ecx, g->edx, 1, 1, 0u);
    t30 = g->ecx;
    wr32(sp0 - 0xd0cu, self + 0x2cu);
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f560u));
    wr32(sp0 - 0xd14u, sp0 - 0xd00u);
    g->ecx = t30;
    g->edx = sp0 - 0xd00u;
    g->esp = sp0 - 0xd00u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd00u, COW_IMG(0x1036f560u), self + 0x2cu, 0u, in_esi);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(sp0 - 0xd18u, 0u);
    wr32(sp0 - 0xd1cu, sp0 - 0xd00u);
    g->eax = sp0 - 0xd00u;
    g->ecx = t31;
    g->edx = t32;
    g->esp = sp0 - 0xd14u;
    t33 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0xd00u, 0u);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0xd20u, 0u);
    g->edx = t35;
    g->esp = sp0 - 0xd1cu;
    t36 = cow_call_regs(g, COW_IMG(0x10081460u), t33, t34, g->edx, 1, 1, 0u);
    t37 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t37;
    return t36;
L_10138d12: ;
    COW_AT(10138d12)
    wr32(sp0 - 0xd08u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xd04u;
    t20 = cow_call_regs(g, COW_IMG(0x10081450u), eax, ecx, g->edx, 1, 1, 0u);
    t21 = g->edx;
    wr32(sp0 - 0xd0cu, self + 0x2cu);
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f980u));
    wr32(sp0 - 0xd14u, sp0 - 0xd00u);
    g->ecx = sp0 - 0xd00u;
    g->esp = sp0 - 0xd00u;
    t22 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd00u, COW_IMG(0x1036f980u), self + 0x2cu, 0u, in_esi);
    t23 = g->ecx;
    wr32(sp0 - 0xd18u, 0u);
    wr32(sp0 - 0xd1cu, sp0 - 0xd00u);
    g->ecx = t23;
    g->edx = sp0 - 0xd00u;
    g->esp = sp0 - 0xd14u;
    t24 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0xd00u, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0xd20u, 0u);
    g->edx = t26;
    g->esp = sp0 - 0xd1cu;
    t27 = cow_call_regs(g, COW_IMG(0x10081460u), t24, t25, g->edx, 1, 1, 0u);
    t28 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t28;
    return t27;
L_10138d4c: ;
    COW_AT(10138d4c)
    wr32(sp0 - 0xd08u, 0u);
    wr32(sp0 - 0xd0cu, 1u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 0x417u);
    wr32(sp0 - 0xd1cu, 0xeu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xd14u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x417u);
    t17 = g->edx;
    wr32(sp0 - 0xd18u, t16);
    wr32(sp0 - 0xd1cu, self + 0x2cu);
    wr32(sp0 - 0xd20u, COW_IMG(0x10138f50u));
    g->edx = t17;
    g->esp = sp0 - 0xd04u;
    t18 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10138f50u), self + 0x2cu, t16, 0u, 0u, 1u, 0u);
    t19 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t19;
    return t18;
L_10138d82: ;
    COW_AT(10138d82)
    wr32(sp0 - 0xd08u, 0u);
    wr32(sp0 - 0xd0cu, 1u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 0x419u);
    wr32(sp0 - 0xd1cu, 0xeu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xd14u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x419u);
    t13 = g->edx;
    wr32(sp0 - 0xd18u, t12);
    wr32(sp0 - 0xd1cu, self + 0x2cu);
    wr32(sp0 - 0xd20u, COW_IMG(0x10138f70u));
    g->edx = t13;
    g->esp = sp0 - 0xd04u;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10138f70u), self + 0x2cu, t12, 0u, 0u, 1u, 0u);
    t15 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t15;
    return t14;
L_10138db8: ;
    COW_AT(10138db8)
    wr32(sp0 - 0xd08u, 0u);
    wr32(sp0 - 0xd0cu, 1u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 0x418u);
    wr32(sp0 - 0xd1cu, 0xeu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xd14u;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x418u);
    t9 = g->edx;
    wr32(sp0 - 0xd18u, t8);
    wr32(sp0 - 0xd1cu, self + 0x2cu);
    wr32(sp0 - 0xd20u, COW_IMG(0x10138f90u));
    g->edx = t9;
    g->esp = sp0 - 0xd04u;
    t10 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10138f90u), self + 0x2cu, t8, 0u, 0u, 1u, 0u);
    t11 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t11;
    return t10;
L_10138dee: ;
    COW_AT(10138dee)
    wr32(sp0 - 0xd08u, 0x400u);
    wr32(sp0 - 0xd0cu, sp0 - 0x800u);
    t4 = (uint32_t)(int16_t)rd16(self + 0x456u);
    wr32(sp0 - 0xd10u, t4);
    wr32(sp0 - 0xd14u, self + 0x56u);
    g->eax = sp0 - 0x800u;
    g->esp = sp0 - 0xce8u;
    t5 = cow_call_regs(g, COW_IMG(0x1011dee0u), g->eax, t4, edx, 1, 11, self + 0x56u, t4, sp0 - 0x800u, 0x400u, in_esi, rd32(sp0 - 0xd00u), rd32(sp0 - 0xcfcu), rd32(sp0 - 0xcf8u), rd32(sp0 - 0xcf4u), rd32(sp0 - 0xcf0u), rd32(sp0 - 0xcecu));
    wr32(sp0 - 0xd08u, sp0 - 0x800u);
    g->esp = sp0 - 0xd04u;
    t6 = cow_fastcall(g, COW_IMG(0x10001d20u), rd32(COW_IMG(0x103d3c64u)), sp0 - 0x800u, 1, sp0 - 0x800u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    loc_d04 = in_esi;
L_10138e22: ;
    COW_AT(10138e22)
    g->esi = loc_d04;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10138b50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10138b5cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10138b5fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10138b78u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10138b89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10138b90u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10138ba4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10138bafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138bbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138bc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138c14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd04u;
        wr32(sp0 - 0xd14u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x10138c28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xd04u;
        wr32(sp0 - 0xd14u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x10138c37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138c9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138cd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138d12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138d4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138d82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138db8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138deeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    case 0x10138e22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_d04;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_d04 = rd32(sp0 - 0xd04u);
        g->esp = sp0 - 0xd04u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10138b50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10138b50(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
