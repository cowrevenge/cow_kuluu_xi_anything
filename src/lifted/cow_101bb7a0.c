/* f_0x101bb7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bb7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
    uint32_t loc_58;
    uint32_t loc_5c;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bb7cau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x6cu); in_esi = rd32(sp0 - 0x68u); in_ebp = rd32(sp0 - 0x64u); in_ebx = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x64u); g->ebx = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x6cu); g->esi = rd32(sp0 - 0x68u); goto E_101bb7ca;
    case 0x101bb7d7u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x6cu); in_esi = rd32(sp0 - 0x68u); in_ebp = rd32(sp0 - 0x64u); in_ebx = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x64u); g->ebx = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x6cu); g->esi = rd32(sp0 - 0x68u); goto E_101bb7d7;
    case 0x101bb7e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb7e5;
    case 0x101bb7f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb7f3;
    case 0x101bb7f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb7f5;
    case 0x101bb7fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb7fb;
    case 0x101bb81du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb81d;
    case 0x101bb832u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_101bb832;
    case 0x101bb84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb84e;
    case 0x101bb856u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb856;
    case 0x101bb85eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb85e;
    case 0x101bb884u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb884;
    case 0x101bb88du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb88d;
    case 0x101bb892u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb892;
    case 0x101bb89bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb89b;
    case 0x101bb8cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); goto E_101bb8cf;
    case 0x101bb8d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); goto E_101bb8d7;
    case 0x101bb955u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb955;
    case 0x101bb959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb959;
    case 0x101bb961u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101bb961;
    case 0x101bb97cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb97c;
    case 0x101bb987u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb987;
    case 0x101bb9a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); goto E_101bb9a2;
    case 0x101bb9bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb9bd;
    case 0x101bb9cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bb9cd;
    default: break;
    }
#endif

    COW_AT(101bb7a0)
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_ebp);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x6cu, in_edi);
    t1 = rd8(self);
    wr8(sp0 - 0x4cu, 0u);
    wr8(sp0 - 0x4bu, 0u);
    wr8(sp0 - 0x4au, 0u);
    wr8(sp0 - 0x49u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    if ((uint8_t)t1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
    COW_AT(101bb7d7)
        wr32(sp0 - 0x70u, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x64u;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0xcu, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
    COW_AT(101bb7f3)
            eax = 0u;
        }
        else
        {
            eax = t6;
            edx = t8;
    COW_AT(101bb7e5)
            wr32(sp0 - 0x70u, 0x1b800u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x6cu;
            t9 = cow_thiscall(g, COW_IMG(0x101bc9e0u), eax, 1, 0x1b800u);
            t10 = g->ecx;
            t11 = g->edx;
            eax = t9;
            ecx = t10;
            edx = t11;
        }
    COW_AT(101bb7f5)
        wr32(self + 0x208u, eax);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | t1;
    COW_AT(101bb7ca)
        g->eax = eax;
        g->edx = in_edx;
        t2 = rd32(self + 0x208u);
        g->esp = sp0 - 0x6cu;
        t3 = cow_thiscall(g, COW_IMG(0x101bcb30u), t2, 0);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    COW_AT(101bb7fb)
    wr32(sp0 - 0x70u, 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x6cu;
    t12 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x18u);
    t13 = g->edx;
    wr32(sp0 - 0x70u, t12);
    g->ebx = 0u;
    g->edx = t13;
    t14 = rd32(COW_IMG(0x10662dccu));
    t15 = cow_thiscall(g, COW_IMG(0x101c4af0u), t14, 1, t12);
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)t15 < 0)
    {
        ecx = t16;
        edx = t17;
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    esi = t15;
    edi = t12;
    COW_AT(101bb81d)
    wr32(sp0 - 0x70u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x64u;
    t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x5cu, t18);
    if (t18 == 0u)
    {
        ecx = t19;
        edx = t20;
        loc_5c = t18;
        goto L_101bb9a2;
    }
    eax = t18;
    edx = t20;
    loc_5c = t18;
    COW_AT(101bb832)
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, eax);
    wr32(sp0 - 0x7cu, edi);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    t21 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x6cu;
    t22 = cow_thiscall(g, COW_IMG(0x101c4740u), t21, 4, edi, eax, esi, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x50u, t22);
    if ((int32_t)t22 < 0)
    {
        ecx = t23;
        edx = t24;
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    loc_50 = t22;
    COW_AT(101bb84e)
    if (eax != esi)
    {
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    COW_AT(101bb856)
    if ((int32_t)eax <= 0) goto L_101bb961;
    ebx = 0u;
L_101bb85e: ;
    COW_AT(101bb85e)
    esi = ebx + rd32(sp0 - 0x5cu);
    edi = sp0 - 0x4cu;
    ecx = 0x13u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((uint8_t)rd32(sp0 - 0x4bu) == rd32(self + 4u))
    {
        edx = (uint8_t)rd32(sp0 - 0x4bu);
        ebx = ebx + 0x4cu;
        goto L_101bb89b;
    }
    ecx = rd32(self + 4u);
    edx = (uint8_t)rd32(sp0 - 0x4bu);
    ebx = ebx + 0x4cu;
    COW_AT(101bb884)
    if (rd8(sp0 - 0x4cu) >= 7u) goto L_101bb892;
    ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x4cu);
    COW_AT(101bb88d)
    if ((uint8_t)ecx == 1u) goto L_101bb89b;
L_101bb892: ;
    COW_AT(101bb892)
    ebx = ebx + rd32(sp0 - 4u);
L_101bb959: ;
    COW_AT(101bb959)
    if ((int32_t)ebx < (int32_t)eax) goto L_101bb85e;
L_101bb961: ;
    COW_AT(101bb961)
    t42 = rd32(self + 4u);
    wr32(sp0 - 0x70u, t42);
    t43 = rd32(self + 0x224u);
    wr32(self + 0x228u, t43);
    g->eax = t43;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t44 = cow_thiscall(g, COW_IMG(0x101bc520u), self, 1, t42);
    t45 = g->ecx;
    t46 = g->edx;
    if ((uint8_t)t44 == 0u)
    {
        ecx = t45;
        edx = t46;
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    eax = t44;
    edx = t46;
    COW_AT(101bb97c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x101bc6f0u), self, 1, rd32(sp0 - 0x6cu));
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        ecx = t48;
        edx = t49;
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    eax = t47;
    ecx = t48;
    COW_AT(101bb987)
    t50 = rd32(sp0 - 0x5cu);
    wr32(sp0 - 0x70u, t50);
    g->eax = eax;
    g->esp = sp0 - 0x6cu;
    t51 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t50, 1, 1, t50);
    wr8(self, 1u);
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return (t51 & 0xffffff00u) | 1u;
L_101bb89b: ;
    COW_AT(101bb89b)
    wr32(sp0 - 0x70u, 0x4cu);
    wr32(sp0 - 0x74u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t25 = cow_thiscall(g, COW_IMG(0x101bca40u), rd32(self + 0x208u), 2, sp0 - 0x4cu, 0x4cu);
    t26 = g->edx;
    t27 = rd32(sp0 - 4u);
    wr32(sp0 - 0x70u, t27);
    wr32(sp0 - 0x54u, t25);
    g->edx = t26;
    t28 = rd32(self + 0x208u);
    t29 = cow_thiscall(g, COW_IMG(0x101bcac0u), t28, 1, t27);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x58u, t29);
    if (t25 == 0u)
    {
        ecx = t30;
        edx = t31;
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    loc_58 = t29;
    COW_AT(101bb8cf)
    if (eax == 0u)
    {
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    COW_AT(101bb8d7)
    t32 = rd32(sp0 - 4u);
    t33 = rd32(sp0 - 0x5cu);
    esi = ebx + t33;
    edi = eax;
    ecx = t32 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t32 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t34 = rd32(self + 0x224u);
    t35 = rd32(sp0 - 4u);
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, COW_IMG(0x101ba5c0u), self + t34 * 0x1f0u + 0x22cu, 0);
    wr32(sp0 - 0x70u, 0u);
    t36 = rd32(self + 0x224u);
    t37 = rd32(sp0 - 4u);
    wr32(sp0 - 0x74u, t37);
    t38 = rd32(sp0 - 0x58u);
    wr32(sp0 - 0x78u, t38);
    t39 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x7cu, t39);
    g->edx = t39;
    cow_thiscall(g, rd32(rd32(self + t36 * 0x1f0u + 0x22cu) + 0x14u), self + t36 * 0x1f0u + 0x22cu, 4, t39, t38, t37, 0u);
    t40 = g->edx;
    t41 = rd32(self + 0x224u) + 1u;
    wr32(self + 0x224u, t41);
    if ((int32_t)t41 > 64)
    {
        ecx = t41;
        edx = t40;
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_101bb9a2;
    }
    edx = t40;
    ebx = ebx + t35;
    COW_AT(101bb955)
    eax = rd32(sp0 - 0x50u);
    loc_50 = rd32(sp0 - 0x50u);
    goto L_101bb959;
L_101bb9a2: ;
    COW_AT(101bb9a2)
    wr32(sp0 - 0x70u, loc_5c);
    g->eax = loc_5c;
    g->esp = sp0 - 0x6cu;
    t52 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_5c);
    t53 = g->edx;
    wr8(self, 0u);
    if (rd32(self + 0x208u) == 0u)
    {
        eax = t52;
    }
    else
    {
        eax = t52;
        edx = t53;
        ebp = rd32(self + 0x208u);
    COW_AT(101bb9bd)
        g->eax = eax;
        g->esp = sp0 - 0x6cu;
        t54 = cow_fastcall(g, COW_IMG(0x101bca30u), ebp, edx, 0);
        t55 = g->ecx;
        t56 = g->edx;
        wr32(sp0 - 0x70u, ebp);
        t57 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t55, t56, 1, 1, ebp);
        eax = t57;
    }
    COW_AT(101bb9cd)
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bb7a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bb7cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x6cu);
        in_esi = rd32(sp0 - 0x68u);
        in_ebp = rd32(sp0 - 0x64u);
        in_ebx = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        wr32(sp0 - 0x5cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bb7d7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x6cu);
        in_esi = rd32(sp0 - 0x68u);
        in_ebp = rd32(sp0 - 0x64u);
        in_ebx = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        g->ebp = self;
        wr32(sp0 - 0x5cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bb7e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb7f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb7f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb7fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb81du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb832u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb84eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb856u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bb85eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb884u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb88du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb892u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb89bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb8cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x74u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb8d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x74u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb955u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb959u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb961u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb97cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb987u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb9a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb9bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x101bb9cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb7a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101bb7a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
