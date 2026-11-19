/* f_0x102a64f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a64f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5c;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
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
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
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
    case 0x102a6513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); in_ebx = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x68u); g->ebx = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x6cu); goto E_102a6513;
    case 0x102a6525u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_102a6525;
    case 0x102a652cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_102a652c;
    case 0x102a6540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a6540;
    case 0x102a6542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a6542;
    case 0x102a654eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a654e;
    case 0x102a6560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a6560;
    case 0x102a6568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a6568;
    case 0x102a6580u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_5c = rd32(sp0 - 0x5cu); goto E_102a6580;
    case 0x102a6589u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_102a6589;
    case 0x102a6593u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a6593;
    case 0x102a6595u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); goto E_102a6595;
    case 0x102a65a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); goto E_102a65a8;
    case 0x102a65aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); goto E_102a65aa;
    case 0x102a65b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); goto E_102a65b6;
    case 0x102a65ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a65ec;
    case 0x102a65fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a65fb;
    case 0x102a660bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a660b;
    case 0x102a661cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a661c;
    case 0x102a6621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a6621;
    case 0x102a6670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a6670;
    case 0x102a667du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a667d;
    case 0x102a6682u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a6682;
    case 0x102a66a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a66a3;
    case 0x102a66bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a66ba;
    case 0x102a66c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a66c4;
    case 0x102a66e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a66e0;
    case 0x102a66f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a66f7;
    case 0x102a6720u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a6720;
    case 0x102a672cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a672c;
    case 0x102a6736u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a6736;
    case 0x102a6768u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_102a6768;
    case 0x102a677bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a677b;
    case 0x102a677fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a677f;
    case 0x102a6792u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_102a6792;
    case 0x102a67a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a67a9;
    case 0x102a67bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a67bd;
    default: break;
    }
#endif

    COW_AT(102a64f0)
    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    wr32(sp0 - 0x74u, COW_IMG(0x1036bf68u));
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x78u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, t1, COW_IMG(0x1036bf68u));
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 + 8u, t2);
    if (t2 == 0u)
    {
        eax = t2;
        loc_64 = in_ebx;
        loc_68 = in_ebp;
        loc_6c = in_esi;
        loc_70 = in_edi;
        goto L_102a6589;
    }
    ecx = t3;
    edx = t4;
    ebp = t1;
    esi = t2;
    COW_AT(102a6513)
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x58u);
    g->eax = sp0 - 0x58u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t5 = cow_cdecl(g, COW_IMG(0x102a6260u), 3, sp0 - 0x58u, esi, in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        edi = in_edi;
        goto L_102a6580;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(102a6525)
    if (rd8(sp0 - 0x53u) != 1u)
    {
        edi = in_edi;
    }
    else
    {
    COW_AT(102a652c)
        wr32(sp0 - 0x74u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x68u;
        t8 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
        t9 = g->edx;
        if ((int32_t)(0x80u - t8) <= 0)
        {
            eax = t8;
            edx = t9;
            edi = in_edi;
        }
        else
        {
            eax = t8;
            ecx = 0x80u - t8;
            edx = t9;
    COW_AT(102a6540)
            edi = ecx;
L_102a6542: ;
    COW_AT(102a6542)
            wr32(sp0 - 0x74u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x68u;
            t10 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
            t11 = g->ecx;
            t12 = g->edx;
            if (edi != 1u)
            {
                eax = t10;
                ecx = t11;
                edx = t12;
                edi = edi - 1u;
                goto L_102a6542;
            }
            eax = t10;
            edx = t12;
            edi = edi - 1u;
        }
    }
    COW_AT(102a654e)
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x30u);
    g->eax = eax;
    g->ecx = sp0 - 0x30u;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t13 = cow_cdecl(g, COW_IMG(0x102a62c0u), 3, sp0 - 0x30u, esi, rd32(sp0 - 0x70u));
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_102a6580;
    }
    ecx = t14;
    edx = t15;
    COW_AT(102a6560)
    if ((uint8_t)rd32(sp0 - 0x1fu) <= 1u) goto L_102a6593;
    eax = rd32(sp0 - 0x1fu);
    COW_AT(102a6568)
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, (uint8_t)eax);
    wr32(sp0 - 0x7cu, sp0 - 0x48u);
    g->eax = (uint8_t)eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x6cu;
    t16 = cow_cdecl(g, COW_IMG(0x102a6330u), 4, sp0 - 0x48u, (uint8_t)eax, esi, rd32(sp0 - 0x70u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 != 0u)
    {
        eax = t16;
        edx = t18;
        goto L_102a6595;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
L_102a6580: ;
    COW_AT(102a6580)
    wr32(sp0 - 0x74u, esi);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x68u;
    t81 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    eax = t81;
    loc_64 = rd32(sp0 - 0x64u);
    loc_68 = rd32(sp0 - 0x68u);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
L_102a6589: ;
    COW_AT(102a6589)
    g->ebx = loc_64;
    g->esi = loc_6c;
    g->edi = loc_70;
    g->ebp = loc_68;
    return eax & 0xffffff00u;
L_102a6593: ;
    COW_AT(102a6593)
    eax = 0u;
L_102a6595: ;
    COW_AT(102a6595)
    if ((int32_t)((uint16_t)rd32(sp0 - 0x24u) - eax - 0x30u) > 0)
    {
        ecx = (uint16_t)rd32(sp0 - 0x24u) - eax - 0x30u;
    COW_AT(102a65a8)
        edi = ecx;
L_102a65aa: ;
    COW_AT(102a65aa)
        wr32(sp0 - 0x74u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x68u;
        t19 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
        t20 = g->ecx;
        t21 = g->edx;
        if (edi != 1u)
        {
            eax = t19;
            ecx = t20;
            edx = t21;
            edi = edi - 1u;
            goto L_102a65aa;
        }
        edx = t21;
    }
    COW_AT(102a65b6)
    wr32(sp0 - 0x74u, sp0 - 0x60u);
    wr32(sp0 - 0x78u, sp0 - 0x30u);
    g->eax = sp0 - 0x60u;
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x6cu;
    t22 = cow_cdecl(g, COW_IMG(0x102a63e0u), 3, sp0 - 0x30u, sp0 - 0x60u, rd32(sp0 - 0x70u));
    t23 = g->ecx;
    wr32(sp0 - 0x5cu, t22);
    if ((int32_t)((uint32_t)(uint16_t)rd32(sp0 - 0x1au) * (uint16_t)rd32(sp0 - 0x1cu) * t22) <= 0)
    {
        eax = t22;
        ecx = t23;
        edx = (uint16_t)rd32(sp0 - 0x1cu);
        edi = (uint32_t)(uint16_t)rd32(sp0 - 0x1au) * (uint16_t)rd32(sp0 - 0x1cu) * t22;
        goto L_102a6580;
    }
    eax = t22;
    ecx = t23;
    edx = (uint16_t)rd32(sp0 - 0x1cu);
    ebx = t22;
    edi = (uint32_t)(uint16_t)rd32(sp0 - 0x1au) * (uint16_t)rd32(sp0 - 0x1cu) * t22;
    loc_5c = t22;
    COW_AT(102a65ec)
    wr32(sp0 - 0x74u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x102a6840u), ecx, 1, ebp);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        ebp = t24;
    }
    else
    {
        edx = t26;
        ebp = t24;
    COW_AT(102a65fb)
        if (rd32(ebp + 0x1cu) != (uint16_t)rd32(sp0 - 0x1cu))
        {
            eax = (uint16_t)rd32(sp0 - 0x1cu);
            ecx = rd32(ebp + 0x1cu);
            goto L_102a6621;
        }
    COW_AT(102a660b)
        if (rd32(ebp + 0x20u) != (uint16_t)rd32(sp0 - 0x1au))
        {
            eax = rd32(ebp + 0x20u);
            ecx = (uint16_t)rd32(sp0 - 0x1au);
            goto L_102a6621;
        }
        eax = rd32(ebp + 0x20u);
        ecx = (uint16_t)rd32(sp0 - 0x1au);
    COW_AT(102a661c)
        if (rd32(ebp + 0x24u) == ebx) goto L_102a6670;
L_102a6621: ;
    COW_AT(102a6621)
        wr32(sp0 - 0x74u, COW_IMG(0x103be1f8u));
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1f8u), rd32(sp0 - 0x70u));
        t27 = g->ecx;
        wr32(sp0 - 0x78u, ebx);
        t28 = (uint16_t)rd32(sp0 - 0x1au);
        wr32(sp0 - 0x7cu, t28);
        t29 = (uint16_t)rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x80u, t29);
        wr32(sp0 - 0x84u, COW_IMG(0x103be1d8u));
        g->ebx = ebx;
        g->esp = sp0 - 0x7cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1d8u), t29);
        t30 = rd32(ebp + 0x24u);
        wr32(sp0 - 0x88u, t30);
        t31 = rd32(ebp + 0x20u);
        wr32(sp0 - 0x8cu, t31);
        t32 = rd32(ebp + 0x1cu);
        wr32(sp0 - 0x90u, t32);
        wr32(sp0 - 0x94u, COW_IMG(0x103be1b8u));
        g->ebx = ebx;
        g->eax = t32;
        g->ecx = t30;
        g->edx = t31;
        g->esp = sp0 - 0x8cu;
        t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1b8u), t32);
        t34 = g->ecx;
        t35 = g->edx;
        wr32(sp0 - 0x98u, COW_IMG(0x103be1a4u));
        g->ebx = ebx;
        g->ecx = t34;
        g->edx = t35;
        g->esp = sp0 - 0x90u;
        t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be1a4u), COW_IMG(0x103be1b8u));
        t37 = g->ecx;
        t38 = g->edx;
        eax = t36;
        ecx = t37;
        edx = t38;
        ebp = 0u;
    }
L_102a6670: ;
    COW_AT(102a6670)
    if (rd32(sp0 - 0x60u) == 3u)
    {
        ebx = rd32(sp0 - 0x60u);
        goto L_102a6682;
    }
    ebx = rd32(sp0 - 0x60u);
    COW_AT(102a667d)
    if (ebx != 4u) goto L_102a66c4;
L_102a6682: ;
    COW_AT(102a6682)
    wr32(sp0 - 0x74u, 0x481u);
    wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
    wr32(sp0 - 0x7cu, ebx << 8u);
    wr32(sp0 - 0x80u, 1u);
    g->eax = eax;
    g->ecx = ebx << 8u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t39 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ebx << 8u, COW_IMG(0x103bde10u), 0x481u, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t40 = g->ecx;
    t41 = g->edx;
    wr32(arg1 + 0x38u, t39);
    if (t39 != 0u)
    {
        eax = t39;
        ecx = t40;
        edx = t41;
        goto L_102a66ba;
    }
    eax = t39;
    ecx = t40;
    COW_AT(102a66a3)
    t42 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t42);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x68u;
    t43 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t42, 1, 3, t42, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return t43 & 0xffffff00u;
L_102a66ba: ;
    COW_AT(102a66ba)
    wr32(arg1 + 0x30u, ebx);
    wr32(arg1 + 0x34u, 0x100u);
L_102a66c4: ;
    COW_AT(102a66c4)
    wr32(sp0 - 0x74u, 0x48bu);
    wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
    wr32(sp0 - 0x7cu, edi);
    wr32(sp0 - 0x80u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t44 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, edi, COW_IMG(0x103bde10u), 0x48bu, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t45 = g->ecx;
    t46 = g->edx;
    wr32(arg1 + 0x28u, t44);
    if (t44 != 0u) goto L_102a66f7;
    ecx = t45;
    edx = t46;
    COW_AT(102a66e0)
    t47 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t47);
    g->edi = edi;
    g->eax = t47;
    g->esp = sp0 - 0x68u;
    t48 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, t47, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return t48 & 0xffffff00u;
L_102a66f7: ;
    COW_AT(102a66f7)
    t49 = rd32(sp0 - 0x5cu);
    t50 = rd32(sp0 - 0x1cu);
    t51 = rd32(sp0 - 0x1au);
    wr32(arg1 + 0x24u, t49);
    t52 = rd8(sp0 - 0x1fu);
    wr32(arg1 + 0x1cu, (uint16_t)t50);
    wr32(arg1 + 0x20u, (uint16_t)t51);
    if ((uint8_t)t52 <= 1u)
    {
        edx = (uint16_t)t51;
    COW_AT(102a672c)
        t55 = rd32(sp0 + 8u);
        wr32(sp0 - 0x74u, t55);
        t56 = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x78u, t56);
        eax = t55;
        ecx = t56;
        loc_78 = t56;
        loc_74 = t55;
    }
    else
    {
        eax = (t49 & 0xffffff00u) | t52;
    COW_AT(102a6720)
        t53 = rd32(sp0 + 8u);
        wr32(sp0 - 0x74u, t53);
        t54 = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x78u, t54);
        ecx = t53;
        edx = t54;
        loc_78 = t54;
        loc_74 = t53;
    }
    COW_AT(102a6736)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x64u;
    t57 = cow_cdecl(g, COW_IMG(0x102a6450u), 5, loc_78, loc_74, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t58 = g->ecx;
    t59 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t59);
    t60 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x78u, t60);
    g->eax = t60;
    g->edx = t59;
    t61 = cow_cdecl(g, COW_IMG(0x102a6450u), 5, t60, t59, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t62 = g->edx;
    wr32(sp0 - 0x7cu, t61);
    wr32(sp0 - 0x80u, t57);
    wr32(sp0 - 0x84u, sp0 - 0x30u);
    wr32(sp0 - 0x88u, arg1);
    g->edx = t62;
    g->esp = sp0 - 0x78u;
    t63 = cow_thiscall_cdecl(g, COW_IMG(0x102a6970u), sp0 - 0x30u, 4, arg1, sp0 - 0x30u, t57, t61);
    t64 = g->ecx;
    t65 = g->edx;
    if (t57 == 0u)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
        ebx = t61;
        edi = t57;
    }
    else
    {
        eax = t63;
        ecx = t64;
        edx = t65;
        ebx = t61;
        edi = t57;
    COW_AT(102a6768)
        wr32(sp0 - 0x74u, 0x4c5u);
        wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
        wr32(sp0 - 0x7cu, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x70u;
        t66 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103bde10u), 0x4c5u);
        t67 = g->ecx;
        t68 = g->edx;
        eax = t66;
        ecx = t67;
        edx = t68;
    }
    COW_AT(102a677b)
    if (ebx != 0u)
    {
    COW_AT(102a677f)
        wr32(sp0 - 0x74u, 0x4cau);
        wr32(sp0 - 0x78u, COW_IMG(0x103bde10u));
        wr32(sp0 - 0x7cu, ebx);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x70u;
        t69 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103bde10u), 0x4cau);
        t70 = g->ecx;
        eax = t69;
        ecx = t70;
    }
    COW_AT(102a6792)
    t71 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t71);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x68u;
    t72 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t71, 1, 3, t71, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    t73 = g->ecx;
    t74 = g->edx;
    wr32(sp0 - 0x74u, arg1);
    g->ecx = t73;
    g->edx = t74;
    g->esp = sp0 - 0x48u;
    t75 = cow_cdecl(g, COW_IMG(0x10298930u), 11, arg1, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t76 = g->ecx;
    t77 = g->edx;
    if (ebp == 0u)
    {
        ecx = t76;
        edx = t77;
        goto L_102a67bd;
    }
    eax = t75;
    ecx = t76;
    edx = t77;
    COW_AT(102a67a9)
    wr32(sp0 - 0x78u, ebp);
    wr32(sp0 - 0x7cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x60u;
    t78 = cow_cdecl(g, COW_IMG(0x102a5d40u), 7, arg1, ebp, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return (t78 & 0xffffff00u) | (uint8_t)(t78 | 0xffu);
L_102a67bd: ;
    COW_AT(102a67bd)
    wr32(sp0 - 0x78u, arg1);
    wr32(sp0 - 0x7cu, rd32(COW_IMG(0x109a2864u)));
    g->eax = rd32(COW_IMG(0x109a2864u));
    t79 = rd32(COW_IMG(0x109a2864u));
    g->esp = sp0 - 0x70u;
    t80 = cow_cdecl(g, COW_IMG(0x102a67e0u), 3, t79, arg1, rd32(sp0 - 0x74u));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return (t80 & 0xffffff00u) | (uint8_t)(t80 | 0xffu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a64f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a6513u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        in_ebx = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x70u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x102a6525u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102a652cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102a6540u:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102a6542u:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102a654eu:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102a6560u:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a6568u:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a6580u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a6589u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a6593u:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a6595u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a65a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a65aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a65b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a65ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        wr32(sp0 - 0x74u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x102a65fbu:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a660bu:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a661cu:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a6621u:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a6670u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a667du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a6682u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a66a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a66bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a66c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a66e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102a66f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a6720u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a672cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a6736u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x78u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a6768u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        wr32(sp0 - 0x84u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a677bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        wr32(sp0 - 0x84u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a677fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        wr32(sp0 - 0x84u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a6792u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        g->esi = arg1;
        wr32(sp0 - 0x84u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a67a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        wr32(sp0 - 0x84u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102a67bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        wr32(sp0 - 0x84u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a64f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a64f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
