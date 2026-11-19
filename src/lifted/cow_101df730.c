/* f_0x101df730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101df730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_8;
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
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101df744u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_101df744;
    case 0x101df752u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df752;
    case 0x101df75au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df75a;
    case 0x101df76du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df76d;
    case 0x101df772u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df772;
    case 0x101df774u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df774;
    case 0x101df77bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df77b;
    case 0x101df78bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df78b;
    case 0x101df79du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df79d;
    case 0x101df7ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df7dd;
    case 0x101df7e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df7e8;
    case 0x101df7f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df7f2;
    case 0x101df801u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df801;
    case 0x101df812u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_101df812;
    case 0x101df820u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_101df820;
    case 0x101df837u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df837;
    case 0x101df843u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x1cu); goto E_101df843;
    case 0x101df845u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101df845;
    case 0x101df86au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); goto E_101df86a;
    case 0x101df877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_101df877;
    case 0x101df89fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101df89f;
    case 0x101df8c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df8c2;
    case 0x101df8cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df8cb;
    case 0x101df8cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df8cf;
    case 0x101df8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101df8e2;
    case 0x101df8e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101df8e7;
    case 0x101df919u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df919;
    case 0x101df923u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101df923;
    case 0x101df943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101df943;
    case 0x101df95cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_101df95c;
    case 0x101df9c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101df9c3;
    case 0x101df9c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_101df9c6;
    case 0x101df9deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101df9de;
    case 0x101df9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101df9e7;
    case 0x101dfa05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101dfa05;
    case 0x101dfa0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101dfa0f;
    case 0x101dfa11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101dfa11;
    case 0x101dfa1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101dfa1a;
    case 0x101dfa1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101dfa1d;
    default: break;
    }
#endif

    COW_AT(101df730)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 4u);
    COW_AT(101df843)
        ecx = self;
        edx = in_edx;
        edi = in_edi;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 4u);
    COW_AT(101df744)
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t1 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        if (rd32(self + 0x38u) == 0u)
        {
            edx = rd32(self + 0x38u);
            goto L_101df772;
        }
        eax = t1;
        edx = rd32(self + 0x38u);
    COW_AT(101df752)
        if ((int32_t)eax >= (int16_t)rd16(self + 0x20u)) goto L_101df772;
    COW_AT(101df75a)
        if (eax * 0x54u + edx == 0u) goto L_101df772;
        eax = eax * 0x54u + edx;
    COW_AT(101df76d)
        eax = rd32(eax + 0x48u);
L_101df774: ;
    COW_AT(101df774)
        if ((int32_t)(eax - 1u) <= 0)
        {
            edi = eax - 1u;
            goto L_101df7dd;
        }
        edi = eax - 1u;
    COW_AT(101df77b)
        wr32(sp0 - 0x24u, edi);
        g->eax = eax;
        t2 = rd32(COW_IMG(0x106631e8u));
        g->esp = sp0 - 0x20u;
        t3 = cow_fastcall(g, COW_IMG(0x101c8020u), t2, edx, 1, edi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            goto L_101df7e8;
        }
        eax = t3;
        edx = t5;
    COW_AT(101df78b)
        t6 = rd8(eax + 2u) - 1u;
        wr32(sp0 - 0x24u, t6);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t7 = cow_thiscall(g, COW_IMG(0x101df180u), self, 1, t6);
        t8 = g->edx;
        if (t7 == 0u)
        {
            eax = t7;
            edx = t8;
            goto L_101df7dd;
        }
        eax = t7;
    COW_AT(101df79d)
        wr32(sp0 - 0x24u, eax);
        wr16(rd32(COW_IMG(0x106636a0u)) + 0x2au, 0xcu);
        t9 = rd32(COW_IMG(0x106636a0u));
        wr32(t9 + 0x30u, COW_IMG(0x101dfc80u));
        wr32(t9 + 0x38u, edi + 0x200u);
        t10 = rd32(COW_IMG(0x106636a0u));
        wr32(t10 + 0x34u, COW_IMG(0x101dfd60u));
        wr32(t10 + 0x3cu, edi + 0x200u);
        g->edx = edi + 0x200u;
        t11 = rd32(COW_IMG(0x106636a0u));
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x101ec330u), eax, t11, g->edx, 0, 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
L_101df7e8: ;
    COW_AT(101df7e8)
        if (rd32(rd32(COW_IMG(0x1066369cu)) + 8u) == 0u)
        {
            eax = rd32(COW_IMG(0x1066369cu));
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
            eax = rd32(COW_IMG(0x1066369cu));
    COW_AT(101df7f2)
            g->edx = edx;
            t17 = rd32(COW_IMG(0x104e1d4cu));
            g->esp = sp0 - 0x20u;
            t18 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, t17, g->edx, 1, 0);
            t19 = g->ecx;
            t20 = g->edx;
            if ((uint8_t)t18 == 0u)
            {
                eax = t18;
                ecx = t19;
                edx = t20;
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                edx = t20;
    COW_AT(101df801)
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(101df812)
                    t21 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t21);
                    t22 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t22);
                    edx = t22;
                }
    COW_AT(101df820)
                wr32(sp0 - 0x24u, sp0 - 8u);
                g->eax = sp0 - 8u;
                g->edx = edx;
                t23 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
                g->esp = sp0 - 0x20u;
                t24 = cow_thiscall(g, COW_IMG(0x10118c10u), t23, 1, sp0 - 8u);
                t25 = g->ecx;
                t26 = g->edx;
                if ((uint8_t)t24 == 0u)
                {
                    eax = t24;
                    ecx = t25;
                    edx = t26;
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
                else
                {
                    eax = t24;
    COW_AT(101df837)
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 8u);
                    g->eax = eax;
                    g->edx = rd32(self);
                    t27 = rd32(self);
                    g->esp = sp0 - 0x20u;
                    t28 = cow_thiscall(g, rd32(t27 + 0x18u), self, 2, 8u, 0u);
                    t29 = g->ecx;
                    t30 = g->edx;
                    eax = t28;
                    ecx = t29;
                    edx = t30;
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
            }
        }
    }
    COW_AT(101df845)
    wr32(sp0 - 0x24u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t31 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 8u, t31);
    t34 = rd8(self + 0x5fu);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr8(self + 0x5du, 0u);
    if ((uint8_t)t34 == 0u)
    {
        eax = (t31 & 0xffffff00u) | t34;
        edx = t33;
        ebp = in_ebp;
    }
    else
    {
        eax = (t31 & 0xffffff00u) | t34;
        ecx = t32;
        loc_8 = t31;
    COW_AT(101df86a)
        wr32(sp0 - 0x24u, in_ebp);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0x640u);
        ebx = 0u;
        loc_24 = in_ebp;
        loc_c = 0u;
        loc_10 = 0u;
        loc_14 = 0x640u;
L_101df877: ;
    COW_AT(101df877)
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, 0x1000u);
        t35 = (eax & 0xffffff00u) | rd8(self + 0x5cu);
        wr32(sp0 - 0x30u, t35);
        g->edi = loc_10 + rd32(self + 0x58u);
        g->eax = t35;
        g->edx = loc_10;
        t36 = rd32(self + 0x58u);
        g->esp = sp0 - 0x24u;
        t37 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t35, 0x1000u, ebx);
        t38 = g->edx;
        if ((uint8_t)t37 == 0u)
        {
            eax = (uint8_t)t37;
            edx = t38;
            ebp = (uint8_t)t37;
            edi = loc_10 + t36;
    COW_AT(101df943)
            wr32(sp0 - 0x28u, 0x80808080u);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, 2u);
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t51 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 2u, 1u, 0u, 0x80808080u);
            t52 = g->edx;
            wr32(sp0 - 0x28u, 0x80808080u);
            wr32(sp0 - 0x2cu, 0u);
            eax = t51;
            edx = t52;
            loc_2c = 0u;
        }
        else
        {
            eax = (uint8_t)t37;
            edx = t38;
            ebp = (uint8_t)t37;
            edi = loc_10 + t36;
    COW_AT(101df89f)
            wr32(sp0 - 0x28u, ebp);
            g->eax = eax;
            t39 = rd32(COW_IMG(0x106631e8u));
            g->esp = sp0 - 0x24u;
            t40 = cow_fastcall(g, COW_IMG(0x101c8020u), t39, edx, 1, ebp);
            t41 = g->ecx;
            t42 = g->edx;
            t43 = rd8(self + 0x5du);
            t44 = rd8(t40 + 1u);
            wr8(self + 0x5du, (uint8_t)(t43 + t44));
            if ((uint8_t)(t43 + t44) <= rd8(self + rd32(sp0 + 4u) + 0x60u))
            {
                eax = rd32(sp0 + 4u);
                goto L_101df8cf;
            }
            eax = rd32(sp0 + 4u);
            ecx = ((t41 | t44) & 0xffffff00u) | (uint8_t)(t43 + t44);
            edx = t42;
L_101df8c2: ;
    COW_AT(101df8c2)
            if ((uint8_t)ecx > rd8(eax + self + 0x61u))
            {
                edx = (edx & 0xffffff00u) | rd8(eax + self + 0x61u);
                eax = eax + 1u;
                goto L_101df8c2;
            }
            eax = eax + 1u;
    COW_AT(101df8cb)
            wr32(sp0 + 4u, eax);
L_101df8cf: ;
    COW_AT(101df8cf)
            t45 = rd32(sp0 - 0xcu) + 1u;
            t46 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0xcu, t45);
            if ((int32_t)(t46 + 1u) <= (int32_t)rd8(eax + self + 0x69u))
            {
                edx = rd8(eax + self + 0x69u);
                loc_c = t45;
            }
            else
            {
                edx = rd8(eax + self + 0x69u);
                loc_c = t45;
    COW_AT(101df8e2)
                wr32(sp0 + 4u, eax + 1u);
            }
    COW_AT(101df8e7)
            t47 = (-(ebx != rd32(self + 0x50u)) & 0x4060u) - 0x7f7fbfe0u;
            wr32(sp0 - 0x28u, t47);
            wr32(sp0 - 0x2cu, ebp + 0x201u);
            wr32(sp0 - 0x30u, 0x1cu);
            wr32(sp0 - 0x34u, 2u);
            g->eax = t47;
            g->esp = sp0 - 0x24u;
            t48 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 2u, 0x1cu, ebp + 0x201u, t47);
            t49 = g->edx;
            if (rd8(self + 0x9cu) == 0u)
            {
    COW_AT(101df923)
                wr32(sp0 - 0x28u, 0x80808080u);
                t50 = rd16(ebp * 0x64u + rd32(COW_IMG(0x10667a74u)) + 0xc840u) + 1u;
                wr32(sp0 - 0x2cu, t50);
                eax = t50;
                edx = ebp * 0x19u;
                loc_2c = t50;
            }
            else
            {
                edx = t49;
    COW_AT(101df919)
                wr32(sp0 - 0x28u, 0x80808080u);
                wr32(sp0 - 0x2cu, 0u);
                eax = 0u;
                loc_2c = 0u;
            }
        }
    COW_AT(101df95c)
        wr32(sp0 - 0x30u, 0x1du);
        wr32(sp0 - 0x34u, 1u);
        g->esp = sp0 - 0x24u;
        cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 0x1du, loc_2c, 0x80808080u);
        t53 = rd32(self + rd32(sp0 + 4u) * 4u + 0x74u);
        wr32(sp0 - 0x28u, t53);
        t54 = rd32(rd32(sp0 - 0x14u) + rd32(rd32(sp0 - 8u)));
        wr32(sp0 - 0x2cu, t54);
        wr32(sp0 - 0x30u, 0xeu);
        wr32(sp0 - 0x34u, 0u);
        g->eax = rd32(sp0 - 0x14u);
        t55 = rd32(sp0 - 0x14u);
        t56 = rd32(rd32(sp0 - 8u));
        t57 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t56, 4, 0u, 0xeu, t54, t53);
        t58 = g->ecx;
        t59 = g->edx;
        wr32(sp0 - 0x28u, 0x28bu);
        wr32(sp0 - 0x2cu, 0xeu);
        t60 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x28bu);
        t61 = rd32(sp0 - 0x14u) + 4u;
        wr32(sp0 - 0x14u, t61);
        t62 = rd32(sp0 - 0x10u);
        wr32(edi + 0x4cu, t60);
        wr32(edi + 0x48u, ebp + 1u);
        wr32(sp0 - 0x10u, t62 + 0x54u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd8(self + 0x5fu))
        {
            eax = t60;
            ecx = t62 + 0x54u;
            ebx = ebx + 1u;
            loc_24 = rd32(sp0 - 0x24u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = t62 + 0x54u;
            loc_14 = t61;
            goto L_101df877;
        }
        eax = t60;
        edx = rd8(self + 0x5fu);
    COW_AT(101df9c3)
        ebp = rd32(sp0 - 0x24u);
    }
    COW_AT(101df9c6)
    wr32(sp0 - 0x24u, 1u);
    t63 = (eax & 0xffff0000u) | rd8(self + 0x5fu);
    wr32(sp0 - 0x28u, t63);
    t64 = rd32(self + 0x58u);
    wr32(sp0 - 0x2cu, t64);
    g->esi = self;
    g->edi = edi;
    g->eax = t63;
    g->esp = sp0 - 0x20u;
    t65 = cow_fastcall(g, COW_IMG(0x101f7020u), self, edx, 3, t64, t63, 1u);
    t66 = g->ecx;
    t67 = g->edx;
    if (rd32(self + 0x54u) != 0u)
    {
        eax = t65;
        ecx = t66;
        edx = t67;
    COW_AT(101df9de)
        if (rd8(self + 0x5fu) == 0u) goto L_101dfa1a;
        eax = (eax & 0xffffff00u) | rd8(self + 0x5fu);
        edi = 0u;
L_101df9e7: ;
    COW_AT(101df9e7)
        wr32(sp0 - 0x24u, edi);
        wr32(sp0 - 0x28u, 0x1000u);
        t68 = (edx & 0xffffff00u) | rd8(self + 0x5cu);
        wr32(sp0 - 0x2cu, t68);
        g->edi = edi;
        g->eax = eax;
        g->edx = t68;
        g->esp = sp0 - 0x20u;
        t69 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t68, 0x1000u, edi);
        t70 = g->edx;
        if (rd32(self + 0x54u) == (uint8_t)t69)
        {
            eax = (uint8_t)t69;
            edx = t70;
            goto L_101dfa11;
        }
        ecx = rd32(self + 0x54u);
        edx = t70;
    COW_AT(101dfa05)
        if ((int32_t)(edi + 1u) < (int32_t)rd8(self + 0x5fu))
        {
            eax = rd8(self + 0x5fu);
            edi = edi + 1u;
            goto L_101df9e7;
        }
    COW_AT(101dfa0f)
L_101dfa1a: ;
    COW_AT(101dfa1a)
        wr32(self + 0x54u, 0u);
    }
    COW_AT(101dfa1d)
    t71 = rd8(self + 0x5du);
    t72 = rd32(COW_IMG(0x106634a0u));
    t73 = rd8(self + 0x5eu);
    t74 = rd32(sp0 - 0x1cu);
    t75 = rd32(sp0 - 0x20u);
    wr32(t72 + 0x14u, t71);
    wr32(t72 + 0x18u, t73);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t74;
    g->edi = t75;
    g->ebp = ebp;
    g->edx = t71;
    return t72;
L_101df772: ;
    COW_AT(101df772)
    eax = 0u;
    goto L_101df774;
L_101df7dd: ;
    COW_AT(101df7dd)
    g->edx = edx;
    t14 = rd32(COW_IMG(0x106636a0u));
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, t14, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    goto L_101df7e8;
L_101dfa11: ;
    COW_AT(101dfa11)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edi);
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x101f7080u), eax, self, edx, 0, 2, edi, 0u);
    goto L_101dfa1a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101df730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101df744u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101df752u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df75au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df76du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df772u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df774u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df77bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df78bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df79du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df7ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df7e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df7f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df801u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df812u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df820u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df837u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101df843u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->esi = self;
        wr32(sp0 - 0x20u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101df845u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df86au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101df877u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df89fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df8c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df8cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df8cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df8e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df8e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df919u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df923u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df943u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df95cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x28u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x101df9c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101df9c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df9deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101df9e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dfa05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dfa0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dfa11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dfa1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dfa1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101df730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101df730(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
