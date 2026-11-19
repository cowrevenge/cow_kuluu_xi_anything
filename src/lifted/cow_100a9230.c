/* f_0x100a9230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a9230(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a924bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100a924b;
    case 0x100a925cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a925c;
    case 0x100a9276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); self = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_100a9276;
    case 0x100a92a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100a92a8;
    case 0x100a92b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100a92b7;
    case 0x100a92cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a92cb;
    case 0x100a932bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a932b;
    case 0x100a932eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a932e;
    case 0x100a9335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a9335;
    case 0x100a9339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a9339;
    case 0x100a934fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a934f;
    case 0x100a9356u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a9356;
    case 0x100a9358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a9358;
    case 0x100a935fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a935f;
    case 0x100a9368u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a9368;
    case 0x100a936cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a936c;
    case 0x100a9370u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a9370;
    case 0x100a937au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a937a;
    case 0x100a9381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100a9381;
    case 0x100a9384u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9384;
    case 0x100a938au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a938a;
    case 0x100a938cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a938c;
    case 0x100a9397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9397;
    case 0x100a939cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a939c;
    case 0x100a93a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a93a5;
    case 0x100a93b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a93b7;
    case 0x100a93c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a93c4;
    case 0x100a93cbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a93cb;
    case 0x100a93d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a93d0;
    case 0x100a93d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a93d5;
    case 0x100a940fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a940f;
    case 0x100a9430u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9430;
    case 0x100a9438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9438;
    case 0x100a9448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9448;
    case 0x100a945bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a945b;
    case 0x100a9461u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9461;
    case 0x100a9474u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9474;
    case 0x100a947au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a947a;
    case 0x100a9486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9486;
    case 0x100a948du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a948d;
    case 0x100a9495u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a9495;
    case 0x100a94a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a94a2;
    case 0x100a94aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a94ae;
    case 0x100a94bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a94ba;
    case 0x100a94f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a94f2;
    default: break;
    }
#endif

    COW_AT(100a9230)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x10u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall(g, COW_IMG(0x100a96b0u), self, 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        edx = t3;
        edi = t1;
        goto L_100a9276;
    }
    eax = t2;
    edx = t3;
    edi = t1;
    COW_AT(100a924b)
    wr32(sp0 - 0x24u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_thiscall(g, COW_IMG(0x10085450u), self, 1, 0u);
    t5 = g->edx;
    if (edi == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100a94f2;
    }
    eax = t4;
    edx = t5;
    COW_AT(100a925c)
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t6 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, edi, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x24u, edi);
    t9 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t7, t8, 1, 1, edi);
    t10 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t10;
    return t9;
L_100a9276: ;
    COW_AT(100a9276)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t11 = cow_thiscall(g, COW_IMG(0x1018ca20u), edi, 0);
    t12 = g->edx;
    wr32(sp0 - 0xcu, t11);
    t13 = rd32(rd32(edi + 0xcu) + 0xcu);
    wr32(sp0 - 0x24u, t13);
    g->eax = t13;
    g->ecx = rd32(edi + 0xcu);
    g->edx = t12;
    t14 = rd32(edi + 0xcu);
    t15 = cow_cdecl(g, COW_IMG(0x100a8cf0u), 1, t13);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 + 4u, t15);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (t15 != 0xaf0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        ebx = t15;
        loc_8 = 0u;
        loc_4 = 0u;
    }
    else
    {
        ecx = t16;
        edx = t17;
        ebx = t15;
    COW_AT(100a92a8)
        t18 = rd32(ecx + 0x14u);
        wr32(sp0 - 4u, t18);
        t19 = rd32(ecx + 0x10u) + 1u;
        wr32(sp0 - 8u, t19);
        eax = t19;
        ecx = t18;
        loc_8 = t19;
        loc_4 = t18;
    }
    COW_AT(100a92b7)
    wr32(sp0 - 0x24u, 0x34u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x34u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t21 = g->edx;
    if (t20 == 0u)
    {
        edx = t21;
    COW_AT(100a938a)
        esi = 0u;
    }
    else
    {
        eax = t20;
        edx = t21;
        esi = t20;
    COW_AT(100a92cb)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t22 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 8u, 0);
        t23 = g->edx;
        cow_thiscall(g, COW_IMG(0x100814a0u), esi + 0x14u, 0);
        t24 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t24);
        t25 = rd32(sp0 - 0xcu);
        wr32(esi, t24);
        wr32(esi + 4u, t25);
        g->edx = t25;
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 8u, 1, t24);
        t26 = g->edx;
        t27 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x24u, t27);
        g->edx = t26;
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 0x14u, 1, t27);
        t28 = g->edx;
        t29 = rd32(sp0 - 8u);
        t30 = rd16(sp0 - 4u);
        wr32(esi + 0x20u, edi);
        wr16(esi + 0x26u, (uint16_t)t29);
        wr16(esi + 0x28u, (uint16_t)t30);
        wr8(esi + 0x2au, 0u);
        wr32(esi + 0x2cu, 0u);
        wr32(esi + 0x30u, 0x6e69616du);
        if (rd32(edi + 4u) == 0u)
        {
            ecx = t29;
            edx = (t28 & 0xffff0000u) | t30;
        }
        else
        {
            eax = rd32(edi + 4u);
            ecx = t29;
            edx = (t28 & 0xffff0000u) | t30;
    COW_AT(100a932b)
            wr32(esi + 0x30u, eax);
        }
    COW_AT(100a932e)
        if ((uint16_t)ecx >= 0x400u)
        {
    COW_AT(100a9335)
            wr16(esi + 0x26u, 0u);
        }
    COW_AT(100a9339)
        t31 = rd32(edi + 0xcu);
        wr16(esi + 0x24u, rd16(t31 + 0x1eu));
        g->eax = t31;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t32 = cow_thiscall(g, COW_IMG(0x1018c890u), edi, 0);
        t33 = g->edx;
        if (t32 == 0u)
        {
            edx = t33;
        }
        else
        {
            eax = t32;
            edx = t33;
    COW_AT(100a934f)
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x100a4140u), eax, 0);
            t34 = g->edx;
            edx = t34;
        }
    COW_AT(100a9356)
        ebx = 0u;
L_100a9358: ;
    COW_AT(100a9358)
        if (rd32(esi + 0x20u) == 0u)
        {
            ecx = rd32(esi + 0x20u);
    COW_AT(100a9368)
            eax = (uint32_t)(int16_t)rd16(esi + 0x24u);
        }
        else
        {
            ecx = rd32(esi + 0x20u);
    COW_AT(100a935f)
            eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
            edx = rd32(ecx + 0xcu);
        }
    COW_AT(100a936c)
        if ((int32_t)ebx >= (int32_t)eax) goto L_100a9384;
    COW_AT(100a9370)
        wr32(sp0 - 0x24u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t35 = cow_thiscall(g, COW_IMG(0x1018c8c0u), ecx, 1, ebx);
        t36 = g->edx;
        if (t35 == 0u)
        {
            edx = t36;
        }
        else
        {
            eax = t35;
            edx = t36;
    COW_AT(100a937a)
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x100a4140u), eax, 0);
            t37 = g->edx;
            edx = t37;
        }
    COW_AT(100a9381)
        ebx = ebx + 1u;
        goto L_100a9358;
    }
L_100a938c: ;
    COW_AT(100a938c)
    if (rd32(rd32(edi + 0xcu) + 0xcu) == 3u)
    {
        eax = rd32(rd32(edi + 0xcu) + 0xcu);
        goto L_100a93a5;
    }
    eax = rd32(rd32(edi + 0xcu) + 0xcu);
    COW_AT(100a9397)
    if (eax == 0xeu) goto L_100a93a5;
    COW_AT(100a939c)
    if (eax != 0xfu) goto L_100a9430;
L_100a93a5: ;
    COW_AT(100a93a5)
    wr32(sp0 - 0x24u, COW_IMG(0x10330ebcu));
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t38 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(sp0 - 0x10u), edx, 1, COW_IMG(0x10330ebcu));
    t39 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        edx = t39;
        goto L_100a9430;
    }
    COW_AT(100a93b7)
    if (rd32(rd32(edi + 0xcu) + 0xcu) != 0xeu)
    {
        eax = rd32(edi + 0xcu);
        ecx = rd32(rd32(edi + 0xcu) + 0xcu);
    COW_AT(100a93cb)
        if (ecx != 0xfu)
        {
            edx = 0u;
        }
        else
        {
    COW_AT(100a93d0)
            edx = 2u;
        }
    }
    else
    {
        eax = rd32(edi + 0xcu);
    COW_AT(100a93c4)
        edx = 1u;
    }
    COW_AT(100a93d5)
    wr32(sp0 - 0x24u, edx);
    t40 = rd16(rd32(eax + 0x20u) + 0xeu);
    wr32(sp0 - 0x28u, t40);
    g->eax = eax;
    t41 = rd32(sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    t42 = cow_fastcall(g, COW_IMG(0x100d25e0u), t41, t40, 2, t40, edx);
    t43 = g->ecx;
    t44 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 0x3cu);
    g->edx = t44;
    g->esp = sp0 - 0x24u;
    t45 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x3cu, 4u);
    t46 = g->edx;
    g->esp = sp0 - 0x20u;
    t47 = cow_fastcall(g, COW_IMG(0x100748f0u), t45, t46, 0);
    t48 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t45 == 0u)
    {
        eax = t47;
        edx = t48;
        goto L_100a94f2;
    }
    eax = t47;
    edx = t48;
    ebp = t45;
    COW_AT(100a940f)
    g->esp = sp0 - 0x20u;
    t49 = cow_call_regs(g, COW_IMG(0x10074740u), eax, ebp, edx, 1, 0);
    t50 = g->edx;
    wr32(ebp, COW_IMG(0x1032e7c0u));
    wr32(ebp + 0x34u, edi);
    wr16(edi, (uint16_t)(rd16(edi) + 1u));
    wr32(ebp + 0x38u, esi);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t50;
    return t49;
L_100a9384: ;
    COW_AT(100a9384)
    ebx = rd32(sp0 + 4u);
    goto L_100a938c;
L_100a9430: ;
    COW_AT(100a9430)
    if (ebx != 0xf3cu)
    {
    COW_AT(100a948d)
        if (ebx == 0x1330u)
        {
    COW_AT(100a9495)
            if (rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu) >= 0x64u)
            {
    COW_AT(100a94a2)
                wr32(sp0 + 4u, 0xdca5u);
                ebx = rd32(sp0 + 4u);
            }
        }
    COW_AT(100a94ae)
        eax = rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu);
        edx = rd32(rd32(edi + 0xcu) + 0x20u);
    }
    else
    {
    COW_AT(100a9438)
        if (rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu) < 0x800u)
        {
            eax = (rd32(edi + 0xcu) & 0xffff0000u) | rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu);
    COW_AT(100a945b)
            if ((uint16_t)eax < 0x600u)
            {
    COW_AT(100a9474)
                if ((uint16_t)eax >= 0x200u)
                {
    COW_AT(100a947a)
                    wr32(sp0 + 4u, 0xc1efu);
                    ebx = rd32(sp0 + 4u);
                }
    COW_AT(100a9486)
                eax = (uint16_t)eax;
            }
            else
            {
    COW_AT(100a9461)
                wr32(sp0 + 4u, 0xe739u);
                eax = (uint16_t)eax;
                ebx = rd32(sp0 + 4u);
            }
        }
        else
        {
            eax = (rd32(edi + 0xcu) & 0xffff0000u) | rd16(rd32(rd32(edi + 0xcu) + 0x20u) + 0xeu);
    COW_AT(100a9448)
            wr32(sp0 + 4u, 0x14b07u);
            eax = (uint16_t)eax;
            ebx = rd32(sp0 + 4u);
        }
    }
    COW_AT(100a94ba)
    wr32(sp0 - 0x24u, eax + ebx);
    wr32(sp0 - 0x28u, sp0 - 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t51 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, eax + ebx);
    t52 = g->edx;
    t53 = rd32(t51);
    wr32(sp0 + 4u, t53);
    wr32(esi + 0x2cu, eax + ebx);
    g->eax = t53;
    t54 = cow_thiscall(g, COW_IMG(0x1018ca20u), edi, 0);
    wr32(sp0 - 0x24u, t54);
    t55 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x28u, t55);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, COW_IMG(0x100a8fb0u));
    g->edx = t55;
    t56 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 + 4u, 4, COW_IMG(0x100a8fb0u), esi, t55, t54);
    t57 = g->edx;
    eax = t56;
    edx = t57;
L_100a94f2: ;
    COW_AT(100a94f2)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a9230(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a924bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a925cu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9276u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        self = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a92a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a92b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a92cbu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a932bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a932eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9335u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9339u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a934fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9356u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9358u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a935fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9368u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a936cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9370u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a937au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9381u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a9384u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a938au:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a938cu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9397u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a939cu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a93a5u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a93b7u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a93c4u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a93cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a93d0u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a93d5u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a940fu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9430u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9438u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9448u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a945bu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9461u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9474u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a947au:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9486u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a948du:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a9495u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a94a2u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a94aeu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a94bau:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100a94f2u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9230(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a9230(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
