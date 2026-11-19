/* f_0x100a8fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100a8fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a8fceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100a8fce;
    case 0x100a8fd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100a8fd2;
    case 0x100a8fe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a8fe3;
    case 0x100a8ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a8ffa;
    case 0x100a9003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9003;
    case 0x100a9015u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9015;
    case 0x100a9027u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9027;
    case 0x100a9029u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9029;
    case 0x100a9030u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9030;
    case 0x100a9039u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9039;
    case 0x100a903du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a903d;
    case 0x100a9045u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9045;
    case 0x100a9049u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9049;
    case 0x100a9051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9051;
    case 0x100a9055u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a9055;
    case 0x100a905du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a905d;
    case 0x100a9063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9063;
    case 0x100a9083u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9083;
    case 0x100a9091u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9091;
    case 0x100a909au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a909a;
    case 0x100a909du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a909d;
    case 0x100a90c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a90c2;
    case 0x100a90eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_100a90ee;
    case 0x100a9105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9105;
    case 0x100a910cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a910c;
    case 0x100a9115u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9115;
    case 0x100a911cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a911c;
    case 0x100a911eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a911e;
    case 0x100a9125u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9125;
    case 0x100a912eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100a912e;
    case 0x100a9145u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9145;
    case 0x100a915cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a915c;
    case 0x100a9160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9160;
    case 0x100a9164u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9164;
    case 0x100a916eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a916e;
    case 0x100a9175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9175;
    case 0x100a9178u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9178;
    case 0x100a9191u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100a9191;
    default: break;
    }
#endif

    COW_AT(100a8fb0)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->edx = in_edx;
    t1 = rd32(arg2 + 0x20u);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 4u, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100a912e;
    }
    eax = t2;
    edx = t3;
    edi = t1;
    COW_AT(100a8fce)
    if (edi == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100a9027;
    }
    COW_AT(100a8fd2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x1018c940u), edi, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100a912e;
    }
    eax = t4;
    edx = t5;
    edi = t4;
    COW_AT(100a8fe3)
    wr32(sp0 - 0x1cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10085450u), edi, 1, 0u);
    t6 = g->edx;
    g->eax = rd32(edi);
    g->edx = t6;
    t7 = rd32(edi);
    t8 = cow_thiscall(g, rd32(t7 + 0x304u), edi, 0);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
    }
    else
    {
        eax = t8;
        edx = t9;
    COW_AT(100a8ffa)
        if (rd16(arg2 + 0x26u) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(arg2 + 0x26u);
    COW_AT(100a9003)
            t10 = (uint32_t)(int16_t)rd16(arg2 + 0x28u);
            wr32(sp0 - 0x1cu, t10);
            t11 = (uint32_t)(int16_t)eax - 1u;
            wr32(sp0 - 0x20u, t11);
            g->edx = t11;
            g->esp = sp0 - 0x14u;
            cow_thiscall_cdecl(g, COW_IMG(0x1022b330u), t10, 3, t11, t10, rd32(sp0 - 0x18u));
            t12 = g->edx;
            edx = t12;
        }
    }
    COW_AT(100a9015)
    g->eax = rd32(edi);
    g->edx = edx;
    t13 = rd32(edi);
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1e4u), edi, 0);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t15;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_100a912e;
    }
    edx = t15;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_100a9027: ;
    COW_AT(100a9027)
    ebx = 0u;
L_100a9029: ;
    COW_AT(100a9029)
    if (rd32(arg2 + 0x20u) == 0u)
    {
        ecx = rd32(arg2 + 0x20u);
    COW_AT(100a9039)
        eax = (uint32_t)(int16_t)rd16(arg2 + 0x24u);
    }
    else
    {
        ecx = rd32(arg2 + 0x20u);
    COW_AT(100a9030)
        eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
        edx = rd32(ecx + 0xcu);
    }
    COW_AT(100a903d)
    if ((int32_t)ebx >= (int32_t)eax) goto L_100a912e;
    COW_AT(100a9045)
    if (ecx == 0u) goto L_100a9051;
    COW_AT(100a9049)
    wr32(sp0 - 0x1cu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t16 = cow_thiscall(g, COW_IMG(0x1018c980u), ecx, 1, ebx);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_100a905d: ;
    COW_AT(100a905d)
    if (eax == 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_100a909a;
    }
    edi = eax;
    COW_AT(100a9063)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, COW_IMG(0x100814a0u), sp0 - 0xcu, 0);
    t21 = g->edx;
    wr32(sp0 - 0x1cu, edi);
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x100814f0u), sp0 - 0xcu, 1, edi);
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x10081550u), sp0 - 0xcu, 0);
    t25 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        edx = t25;
        goto L_100a9091;
    }
    edx = t25;
    COW_AT(100a9083)
    g->eax = rd32(edi);
    g->edx = edx;
    t26 = rd32(edi);
    g->esp = sp0 - 0x18u;
    t27 = cow_thiscall(g, rd32(t26 + 0x1e4u), edi, 0);
    t28 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        eax = t27;
        edx = t28;
        goto L_100a909d;
    }
    eax = t27;
    edx = t28;
L_100a9091: ;
    COW_AT(100a9091)
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100814e0u), sp0 - 0xcu, 0);
    t55 = g->edx;
    edx = t55;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_100a909a: ;
    COW_AT(100a909a)
    ebx = ebx + 1u;
    goto L_100a9029;
L_100a9051: ;
    COW_AT(100a9051)
    if (ebx != 0u) goto L_100a909a;
    COW_AT(100a9055)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t18 = cow_thiscall(g, COW_IMG(0x10081550u), arg2 + 0x14u, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    goto L_100a905d;
L_100a909d: ;
    COW_AT(100a909d)
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100814e0u), sp0 - 0xcu, 0);
    t29 = rd32(arg2 + 0x30u);
    wr32(sp0 - 0x1cu, t29);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 + 8u, 7u, t29);
    t31 = g->edx;
    if (rd32(t30) == 0u)
    {
        eax = rd32(t30);
        edx = t31;
    }
    else
    {
        eax = rd32(t30);
        edx = t31;
    COW_AT(100a90c2)
        t32 = rd32(arg2 + 0x20u);
        wr32(sp0 - 0x1cu, t32);
        wr32(sp0 - 0x20u, 0u);
        g->eax = eax;
        g->edx = edx;
        t33 = rd32(eax);
        g->esp = sp0 - 0x18u;
        t34 = cow_thiscall_cdecl(g, COW_IMG(0x10081550u), arg2 + 0x14u, 2, 0u, t32);
        t35 = g->edx;
        wr32(sp0 - 0x24u, t34);
        g->edx = t35;
        g->esp = sp0 - 0x20u;
        t36 = cow_thiscall_cdecl(g, COW_IMG(0x10081550u), arg2 + 8u, 1, t34);
        t37 = g->edx;
        wr32(sp0 - 0x28u, t36);
        g->edx = t37;
        g->esp = sp0 - 0x18u;
        t38 = cow_call_regs(g, COW_IMG(0x10056c70u), t36, t33, g->edx, 0, 4, t36, rd32(sp0 - 0x24u), 0u, rd32(sp0 - 0x1cu));
        t39 = g->edx;
        if (rd8(arg2 + 0x2au) == 0u)
        {
            eax = (t38 & 0xffffff00u) | rd8(arg2 + 0x2au);
            edx = t39;
        }
        else
        {
            eax = (t38 & 0xffffff00u) | rd8(arg2 + 0x2au);
            edx = t39;
            ebx = t38;
    COW_AT(100a90ee)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t40 = cow_thiscall(g, COW_IMG(0x10081550u), arg2 + 8u, 0);
            t41 = g->edx;
            wr32(ebx + 0xacu, COW_IMG(0x100a9200u));
            wr32(ebx + 0xb0u, t40);
            eax = t40;
            edx = t41;
        }
    }
    COW_AT(100a9105)
    if (rd32(arg2 + 0x20u) != 0u)
    {
        ecx = rd32(arg2 + 0x20u);
    COW_AT(100a910c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t42 = cow_thiscall(g, COW_IMG(0x1018c890u), ecx, 0);
        t43 = g->edx;
        if (t42 == 0u)
        {
            edx = t43;
        }
        else
        {
            eax = t42;
            edx = t43;
    COW_AT(100a9115)
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
            t44 = g->edx;
            edx = t44;
        }
    COW_AT(100a911c)
        edi = 0u;
L_100a911e: ;
    COW_AT(100a911e)
        if (rd32(arg2 + 0x20u) == 0u)
        {
            ecx = rd32(arg2 + 0x20u);
    COW_AT(100a915c)
            eax = (uint32_t)(int16_t)rd16(arg2 + 0x24u);
        }
        else
        {
            ecx = rd32(arg2 + 0x20u);
    COW_AT(100a9125)
            eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
            edx = rd32(ecx + 0xcu);
        }
    COW_AT(100a9160)
        if ((int32_t)edi >= (int32_t)eax) goto L_100a9178;
    COW_AT(100a9164)
        wr32(sp0 - 0x1cu, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t45 = cow_thiscall(g, COW_IMG(0x1018c8c0u), ecx, 1, edi);
        t46 = g->edx;
        if (t45 == 0u)
        {
            edx = t46;
        }
        else
        {
            eax = t45;
            edx = t46;
    COW_AT(100a916e)
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
            t47 = g->edx;
            edx = t47;
        }
    COW_AT(100a9175)
        edi = edi + 1u;
        goto L_100a911e;
    }
L_100a9178: ;
    COW_AT(100a9178)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t48 = cow_thiscall(g, COW_IMG(0x100814e0u), arg2 + 0x14u, 0);
    t49 = g->edx;
    g->edx = t49;
    t50 = cow_thiscall(g, COW_IMG(0x100814e0u), arg2 + 8u, 0);
    t51 = g->ecx;
    t52 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    t53 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t51, t52, 1, 1, arg2);
    t54 = g->edx;
    eax = t53;
    edx = t54;
L_100a9191: ;
    COW_AT(100a9191)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
L_100a912e: ;
    COW_AT(100a912e)
    g->eax = eax;
    g->edx = edx;
    t56 = rd32(arg2 + 0x20u);
    g->esp = sp0 - 0x18u;
    t57 = cow_thiscall(g, COW_IMG(0x100a91a0u), arg2, 0);
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    t60 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t58, t59, 1, 1, arg2);
    t61 = g->edx;
    if (t56 == 0u)
    {
        eax = t60;
        edx = t61;
        goto L_100a9191;
    }
    eax = t60;
    edx = t61;
    edi = t56;
    COW_AT(100a9145)
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t62 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, edi, g->edx, 1, 0);
    t63 = g->ecx;
    t64 = g->edx;
    wr32(sp0 - 0x1cu, edi);
    t65 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t63, t64, 1, 1, edi);
    t66 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t66;
    return t65;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a8fb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a8fceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a8fd2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a8fe3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a8ffau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9003u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9015u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9027u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9029u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9030u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9039u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a903du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9045u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9049u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9051u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9055u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a905du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9063u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9083u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9091u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a909au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a909du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a90c2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100a90eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        g->edi = arg2 + 8u;
        (void)sp0;
        return 1;
    }
    case 0x100a9105u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a910cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9115u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a911cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a911eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9125u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a912eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9145u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100a915cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9160u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9164u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a916eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9175u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9178u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a9191u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8fb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a8fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
