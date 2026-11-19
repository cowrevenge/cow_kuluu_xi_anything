/* f_0x10322e86 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10322e86(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 156u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10322ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); in_edi = rd32(sp0 - 0x88u); in_esi = rd32(sp0 - 0x84u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x88u); g->esi = rd32(sp0 - 0x84u); goto E_10322ec2;
    case 0x10322ee5u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10322ee5;
    case 0x10322f08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10322f08;
    case 0x10322f1du: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10322f1d;
    case 0x10322f2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10322f2c;
    case 0x10322f34u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10322f34;
    case 0x10322f3du: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10322f3d;
    case 0x10322f46u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10322f46;
    case 0x10322f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10322f5d;
    case 0x10322f7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10322f7e;
    case 0x10322f80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10322f80;
    case 0x10322f89u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10322f89;
    case 0x10322f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10322f94;
    case 0x10322fa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10322fa1;
    case 0x10322fb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10322fb6;
    case 0x10322fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_4 = rd32(sp0 - 4u); goto E_10322fd5;
    case 0x10322fe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10322fe4;
    case 0x10322ff9u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10322ff9;
    case 0x1032300au: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1032300a;
    case 0x10323012u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10323012;
    case 0x10323026u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10323026;
    case 0x1032302au: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1032302a;
    case 0x10323034u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10323034;
    case 0x1032303du: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1032303d;
    case 0x10323054u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10323054;
    case 0x10323055u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10323055;
    case 0x10323061u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10323061;
    case 0x10323070u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10323070;
    case 0x10323076u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); goto E_10323076;
    case 0x10323083u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_4 = rd32(sp0 - 4u); goto E_10323083;
    default: break;
    }
#endif

    COW_AT(10322e86)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x80u, in_ebx);
    wr32(sp0 - 0x84u, in_esi);
    wr32(sp0 - 0x88u, in_edi);
    wr32(sp0 - 0x8cu, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x88u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10323477u), self, 1, arg1);
    t2 = g->edx;
    wr32(sp0 - 0x8cu, 0x78u);
    wr32(sp0 - 0x90u, sp0 - 0x7cu);
    t3 = ((-(rd32(COW_IMG(0x109b2a20u)) != 0u) & 0xffff0000u) | (-(rd32(COW_IMG(0x109b2a20u)) != 0u) & 0xf005u)) + 0x1002u;
    wr32(sp0 - 0x94u, t3);
    wr32(sp0 - 0x98u, t1);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), arg1, 4, t1, t3, sp0 - 0x7cu, 0x78u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        edx = t6;
        loc_4 = in_ebp;
        loc_80 = in_ebx;
        loc_84 = in_esi;
        loc_88 = in_edi;
        goto L_10322fd5;
    }
    ecx = t5;
    edx = t6;
    esi = t1;
    COW_AT(10322ec2)
    wr32(sp0 - 0x8cu, sp0 - 0x7cu);
    wr32(sp0 - 0x90u, rd32(COW_IMG(0x109b2a30u)));
    g->eax = sp0 - 0x7cu;
    t7 = rd32(COW_IMG(0x109b2a30u));
    g->esp = sp0 - 0x80u;
    t8 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 4, t7, sp0 - 0x7cu, in_edi, in_esi);
    t9 = g->edx;
    if (t8 != 0u)
    {
        edx = t9;
        goto L_10322fa1;
    }
    edx = t9;
    COW_AT(10322ee5)
    wr32(sp0 - 0x8cu, 0x78u);
    wr32(sp0 - 0x90u, sp0 - 0x7cu);
    t10 = (-(rd32(COW_IMG(0x109b2a28u)) != 0u) & 0xfffff002u) + 0x1001u;
    wr32(sp0 - 0x94u, t10);
    wr32(sp0 - 0x98u, esi);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x88u;
    t11 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), sp0 - 0x7cu, 4, esi, t10, sp0 - 0x7cu, 0x78u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0u)
    {
        edx = t13;
        loc_4 = rd32(sp0 - 4u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        goto L_10322fd5;
    }
    ecx = t12;
    edx = t13;
    COW_AT(10322f08)
    wr32(sp0 - 0x8cu, sp0 - 0x7cu);
    wr32(sp0 - 0x90u, rd32(COW_IMG(0x109b2a2cu)));
    g->ebx = 0xfffff002u;
    g->eax = sp0 - 0x7cu;
    t14 = rd32(COW_IMG(0x109b2a2cu));
    g->esp = sp0 - 0x80u;
    t15 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 4, t14, sp0 - 0x7cu, rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
    t16 = g->edx;
    if (t15 != 0u)
    {
        edx = t16;
        goto L_10322f34;
    }
    edx = t16;
    COW_AT(10322f1d)
    wr16(COW_IMG(0x109b2a34u), rd16(COW_IMG(0x109b2a34u)) | 0x304u);
    wr32(COW_IMG(0x109b2a38u), esi);
L_10322f2c: ;
    COW_AT(10322f2c)
    wr32(COW_IMG(0x109b2a1cu), esi);
L_10322fa1: ;
    COW_AT(10322fa1)
    if ((rd32(COW_IMG(0x109b2a34u)) & 0x300u) == 0x300u) goto L_10323076;
    ecx = rd32(COW_IMG(0x109b2a34u)) & 0x300u;
    COW_AT(10322fb6)
    wr32(sp0 - 0x8cu, 0x78u);
    wr32(sp0 - 0x90u, sp0 - 0x7cu);
    t25 = (-(rd32(COW_IMG(0x109b2a28u)) != 0u) & 0xfffff002u) + 0x1001u;
    wr32(sp0 - 0x94u, t25);
    wr32(sp0 - 0x98u, esi);
    g->eax = t25;
    g->edx = edx;
    g->esp = sp0 - 0x88u;
    t26 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), ecx, 4, esi, t25, sp0 - 0x7cu, 0x78u);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        ecx = t27;
        edx = t28;
        goto L_10322fe4;
    }
    edx = t28;
    loc_4 = rd32(sp0 - 4u);
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_88 = rd32(sp0 - 0x88u);
L_10322fd5: ;
    COW_AT(10322fd5)
    wr32(COW_IMG(0x109b2a34u), 0u);
    wr32(sp0 - 0x8cu, 1u);
    eax = 1u;
L_10323083: ;
    COW_AT(10323083)
    g->ebx = loc_80;
    g->esi = loc_84;
    g->edi = loc_88;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_10322f34: ;
    COW_AT(10322f34)
    if ((rd8(COW_IMG(0x109b2a34u)) & 2u) != 0u) goto L_10322fa1;
    COW_AT(10322f3d)
    if (rd32(COW_IMG(0x109b2a24u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109b2a24u));
        ecx = sp0 - 0x7cu;
        goto L_10322f80;
    }
    eax = rd32(COW_IMG(0x109b2a24u));
    COW_AT(10322f46)
    wr32(sp0 - 0x8cu, eax);
    wr32(sp0 - 0x90u, sp0 - 0x7cu);
    wr32(sp0 - 0x94u, rd32(COW_IMG(0x109b2a2cu)));
    g->ebx = 0xfffff002u;
    g->eax = sp0 - 0x7cu;
    g->ecx = sp0 - 0x7cu;
    g->esp = sp0 - 0x80u;
    t17 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 5, rd32(COW_IMG(0x109b2a2cu)), sp0 - 0x7cu, eax, rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_10322f80;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(10322f5d)
    wr32(sp0 - 0x8cu, rd32(COW_IMG(0x109b2a2cu)));
    t20 = rd32(COW_IMG(0x109b2a2cu));
    wr32(COW_IMG(0x109b2a34u), rd32(COW_IMG(0x109b2a34u)) | 2u);
    wr32(COW_IMG(0x109b2a38u), esi);
    g->edx = edx;
    g->esp = sp0 - 0x88u;
    t21 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t20);
    t22 = g->edx;
    if (t21 != rd32(COW_IMG(0x109b2a24u)))
    {
        edx = t22;
        goto L_10322fa1;
    }
    edx = t22;
    COW_AT(10322f7e)
    goto L_10322f2c;
L_10322f80: ;
    COW_AT(10322f80)
    if (!(rd8(COW_IMG(0x109b2a34u)) & 1u))
    {
    COW_AT(10322f89)
        wr32(sp0 - 0x8cu, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x88u;
        t23 = cow_thiscall_cdecl(g, COW_IMG(0x103232dau), ecx, 1, esi);
        t24 = g->edx;
        if (t23 == 0u)
        {
            edx = t24;
        }
        else
        {
            edx = t24;
    COW_AT(10322f94)
            wr32(COW_IMG(0x109b2a34u), rd32(COW_IMG(0x109b2a34u)) | 1u);
            wr32(COW_IMG(0x109b2a38u), esi);
        }
    }
    goto L_10322fa1;
L_10322fe4: ;
    COW_AT(10322fe4)
    wr32(sp0 - 0x8cu, sp0 - 0x7cu);
    wr32(sp0 - 0x90u, rd32(COW_IMG(0x109b2a2cu)));
    g->ebx = 0xfffff002u;
    g->eax = sp0 - 0x7cu;
    t29 = rd32(COW_IMG(0x109b2a2cu));
    g->esp = sp0 - 0x80u;
    t30 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 4, t29, sp0 - 0x7cu, rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
    t31 = g->edx;
    if (t30 != 0u)
    {
        edx = t31;
        goto L_1032302a;
    }
    eax = t30;
    edx = t31;
    COW_AT(10322ff9)
    wr8(COW_IMG(0x109b2a35u), rd8(COW_IMG(0x109b2a35u)) | 2u);
    if (rd32(COW_IMG(0x109b2a28u)) != 0u) goto L_10323061;
    COW_AT(1032300a)
    if (rd32(COW_IMG(0x109b2a24u)) == 0u) goto L_10323061;
    COW_AT(10323012)
    wr32(sp0 - 0x8cu, rd32(COW_IMG(0x109b2a2cu)));
    g->edx = edx;
    t32 = rd32(COW_IMG(0x109b2a2cu));
    g->esp = sp0 - 0x88u;
    t33 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t32);
    t34 = g->edx;
    if (t33 != rd32(COW_IMG(0x109b2a24u)))
    {
        edx = t34;
        goto L_10323061;
    }
    eax = t33;
    ecx = rd32(sp0 - 0x8cu);
    edx = t34;
    COW_AT(10323026)
    wr32(sp0 - 0x8cu, 1u);
    loc_8c = 1u;
L_10323055: ;
    COW_AT(10323055)
    wr32(sp0 - 0x90u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x84u;
    t38 = cow_call_regs(g, COW_IMG(0x103232f9u), g->eax, ecx, edx, 1, 3, esi, loc_8c, rd32(sp0 - 0x88u));
    t39 = g->edx;
    if (t38 == 0u)
    {
        edx = t39;
        goto L_10323076;
    }
    edx = t39;
L_10323061: ;
    COW_AT(10323061)
    wr8(COW_IMG(0x109b2a35u), rd8(COW_IMG(0x109b2a35u)) | 1u);
    if (rd32(COW_IMG(0x109b2a1cu)) == 0u)
    {
    COW_AT(10323070)
        wr32(COW_IMG(0x109b2a1cu), esi);
    }
L_10323076: ;
    COW_AT(10323076)
    eax = ~rd32(COW_IMG(0x109b2a34u)) >> 2u & 1u;
    loc_4 = rd32(sp0 - 4u);
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_88 = rd32(sp0 - 0x88u);
    goto L_10323083;
L_1032302a: ;
    COW_AT(1032302a)
    if (rd32(COW_IMG(0x109b2a28u)) != 0u) goto L_10323076;
    COW_AT(10323034)
    if (rd32(COW_IMG(0x109b2a24u)) == 0u) goto L_10323076;
    eax = rd32(COW_IMG(0x109b2a24u));
    COW_AT(1032303d)
    wr32(sp0 - 0x8cu, eax);
    wr32(sp0 - 0x90u, sp0 - 0x7cu);
    wr32(sp0 - 0x94u, rd32(COW_IMG(0x109b2a2cu)));
    g->ebx = 0xfffff002u;
    g->eax = sp0 - 0x7cu;
    g->ecx = sp0 - 0x7cu;
    g->esp = sp0 - 0x80u;
    t35 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 5, rd32(COW_IMG(0x109b2a2cu)), sp0 - 0x7cu, eax, rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0u)
    {
        edx = t37;
        goto L_10323076;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(10323054)
    wr32(sp0 - 0x8cu, 0u);
    loc_8c = 0u;
    goto L_10323055;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10322e86(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10322ec2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        in_edi = rd32(sp0 - 0x88u);
        in_esi = rd32(sp0 - 0x84u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x90u, sp0 - 0x7cu);
        wr32(sp0 - 0x80u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10322ee5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x90u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f1du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        (void)sp0;
        return 1;
    }
    case 0x10322f34u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f3du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f46u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x90u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        wr32(sp0 - 0x90u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322f80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        (void)sp0;
        return 1;
    }
    case 0x10322f89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        (void)sp0;
        return 1;
    }
    case 0x10322f94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        (void)sp0;
        return 1;
    }
    case 0x10322fa1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        (void)sp0;
        return 1;
    }
    case 0x10322fb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0x1001u;
        (void)sp0;
        return 1;
    }
    case 0x10322fd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x90u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322fe4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x90u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10322ff9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x1032300au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323012u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323026u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1032302au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323034u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x1032303du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ecx = sp0 - 0x7cu;
        g->ebx = 0xfffff002u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323054u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x90u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323055u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x8cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10323061u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10323070u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10323076u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10323083u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x88u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10322e86(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10322e86(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
