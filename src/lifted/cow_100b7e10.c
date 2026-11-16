/* f_0x100b7e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7e10(Guest* g)
{
    double d17;
    double d23;
    double d28;
    double d32;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_24;
    uint32_t loc_4;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    t1 = (in_eax & 0xffff0000u) | rd16(self + 0x256u);
    t2 = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if (t2 > 0x55u) goto L_100b8310;
    eax = t1;
    ecx = t2;
    ebx = t2;
    t3 = rd32(COW_IMG(0x100b8320u) + rd8(COW_IMG(0x100b8374u) + ecx) * 4u);
    switch (t3 - RD)
    {
    case 0x100b7e49u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7e49;
    case 0x100b7e82u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7e82;
    case 0x100b7f01u: goto L_100b7f01;
    case 0x100b7f26u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7f26;
    case 0x100b7f4au: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7f4a;
    case 0x100b7f69u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7f69;
    case 0x100b7f90u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7f90;
    case 0x100b7fb9u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7fb9;
    case 0x100b7fcdu: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7fcd;
    case 0x100b7fe1u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b7fe1;
    case 0x100b8015u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b8015;
    case 0x100b8035u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b8035;
    case 0x100b8081u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b8081;
    case 0x100b80a7u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b80a7;
    case 0x100b80f8u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b80f8;
    case 0x100b811fu: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b811f;
    case 0x100b8143u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b8143;
    case 0x100b816au: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b816a;
    case 0x100b8196u: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b8196;
    case 0x100b82eau: edx = rd8(COW_IMG(0x100b8374u) + ecx); goto L_100b82ea;
    case 0x100b8310u: goto L_100b8310;
    default: rt_fatal(g, COW_IMG(0x100b7e42u), "switch");
    }
    return;
L_100b7e49: ;
    t70 = rd32(COW_IMG(0x10664404u));
    wr8(COW_IMG(0x1047fab0u), 1u);
    wr8(COW_IMG(0x10489930u), 1u);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10206540u), t70, 4, COW_IMG(0x100b83d0u), 0u, 0xffffffffu, 0x10u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b7e82: ;
    if (rd8(COW_IMG(0x10489930u)) != 0u) goto L_100b8310;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t67 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x60u, 0u, 0u);
    t68 = g->edx;
    if (t67 == 0u) goto L_100b8310;
    eax = t67;
    edx = t68;
    wr32(eax + 4u, rd32(COW_IMG(0x10480aa4u)));
    wr16(eax + 8u, rd16(COW_IMG(0x10482f1au)));
    wr32(eax + 0xcu, rd32(COW_IMG(0x104886e0u)));
    wr32(eax + 0x10u, rd32(COW_IMG(0x104886e4u)));
    wr32(eax + 0x14u, rd32(COW_IMG(0x104886e8u)));
    t69 = rd32(COW_IMG(0x104886ecu));
    wr32(eax + 0x18u, t69);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x1cu, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b7f01: ;
    if (rd8(COW_IMG(0x1047fab0u)) != 0u) goto L_100b8310;
    wr8(self + 0x25au, 1u);
    wr16(self + 0x256u, (uint16_t)(eax + 2u));
    g->ebx = in_ebx;
    return;
L_100b7f26: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t64 = cow_call_regs(g, COW_IMG(0x10094160u), eax, g->ecx, g->edx, 1, 1, COW_IMG(0x104886e0u));
    t65 = g->edx;
    t66 = (uint8_t)((uint8_t)t64 - 1u) != 0u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t66);
L_100b8308: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
L_100b8310: ;
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b7f4a: ;
    wr8(COW_IMG(0x1047fab0u), 1u);
    wr8(COW_IMG(0x10489930u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t62 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t63 = g->edx;
    eax = t62 + 1u;
    edx = t63;
    loc_24 = 8u;
L_100b7ffd: ;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10206540u), rd32(COW_IMG(0x10664404u)), 4, COW_IMG(0x100b83d0u), 0u, eax, loc_24);
    goto L_100b8308;
L_100b7f69: ;
    wr8(COW_IMG(0x1047fab0u), 1u);
    wr8(COW_IMG(0x10489930u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t58 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t59 = g->edx;
    g->edx = t59;
    g->esp = sp0 - 0x24u;
    t60 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t61 = g->edx;
    eax = t60 + 1u;
    edx = t61;
    loc_24 = t58;
L_100b8059: ;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10206540u), rd32(COW_IMG(0x10664404u)), 4, COW_IMG(0x100b83d0u), 0u, eax, loc_24);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b7f90: ;
    if (rd8(COW_IMG(0x10489930u)) != 0u) goto L_100b8310;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10489930u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t56 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, COW_IMG(0x104886e0u));
    t57 = g->edx;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t56);
    goto L_100b8308;
L_100b7fb9: ;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x100b93e0u), self, 0);
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b7fcd: ;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x100b9470u), eax, self, g->edx, 1, 0);
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b7fe1: ;
    wr8(COW_IMG(0x1047fab0u), 1u);
    wr8(COW_IMG(0x10489930u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t54 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t55 = g->edx;
    eax = t54 + 3u;
    edx = t55;
    loc_24 = 0x10u;
    goto L_100b7ffd;
L_100b8015: ;
    if (rd8(COW_IMG(0x10489930u)) != 0u) goto L_100b8310;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10489930u));
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 2u, COW_IMG(0x104886e0u));
    goto L_100b8308;
L_100b8035: ;
    wr8(COW_IMG(0x1047fab0u), 1u);
    wr8(COW_IMG(0x10489930u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t50 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t51 = g->edx;
    g->edx = t51;
    g->esp = sp0 - 0x24u;
    t52 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t53 = g->edx;
    eax = t52 + 3u;
    edx = t53;
    loc_24 = t50;
    goto L_100b8059;
L_100b8081: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t46 = cow_stdcall(g, COW_IMG(0x100b8430u), 0);
    t47 = g->edx;
    g->edx = t47;
    t48 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t49 = g->edx;
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x101e4470u), rd32(COW_IMG(0x10663520u)), 3, 1u, COW_IMG(0x100b8460u), t48);
    goto L_100b8308;
L_100b80a7: ;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t40 = cow_thiscall(g, COW_IMG(0x100b8450u), ecx, 0);
    t41 = g->edx;
    if ((uint8_t)t40 == 0u) goto L_100b8310;
    edx = t41;
    g->eax = rd32(COW_IMG(0x10489934u));
    g->edx = edx;
    t42 = rd32(COW_IMG(0x10489934u));
    g->esp = sp0 - 0x20u;
    t43 = cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t42);
    t44 = g->edx;
    t45 = cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 4u, rd32(COW_IMG(0x10489938u)));
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 6u, rd32(COW_IMG(0x1048993cu)));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b80f8: ;
    if (rd32(COW_IMG(0x10621944u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10621944u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t38 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t39 = g->edx;
        g->ebx = ebx;
        cow_fastcall(g, COW_IMG(0x10163130u), rd32(COW_IMG(0x10621944u)), t39, 1, t38);
    }
    goto L_100b8308;
L_100b811f: ;
    if (rd32(COW_IMG(0x10621944u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10621944u));
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x101632a0u), ecx, 0);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b8143: ;
    if (rd32(COW_IMG(0x10621944u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10621944u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t36 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t37 = g->edx;
        cow_thiscall(g, COW_IMG(0x101632f0u), rd32(COW_IMG(0x10621944u)), 1, t36);
    }
    goto L_100b8308;
L_100b816a: ;
    if (rd32(COW_IMG(0x10621944u)) == 0u) goto L_100b8181;
    ecx = rd32(COW_IMG(0x10621944u));
    g->esp = sp0 - 0x20u;
    t35 = cow_call_regs(g, COW_IMG(0x10163310u), eax, ecx, g->edx, 1, 0);
    if ((uint8_t)t35 == 0u) goto L_100b8310;
L_100b8181: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b8196: ;
    if (rd32(COW_IMG(0x10621944u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10621944u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t7 = g->edx;
        g->edx = t7;
        t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        t13 = g->ecx;
        t14 = g->edx;
        if ((int32_t)t6 > 0)
        {
            edx = t14;
            ebx = t8;
            ebp = rd32(COW_IMG(0x106218b8u));
            edi = t6;
            loc_c = t6;
            loc_8 = t8;
            loc_18 = t10;
            loc_4 = t12;
            t15 = (uint32_t)(int16_t)(ebp - rd32(COW_IMG(0x106218b4u)));
            g->ecx = t15;
            g->edx = edx;
            t16 = rd32(COW_IMG(0x106218b4u));
            d17 = fr(g, fr(g, (double)(int32_t)t15 * (double)(int32_t)loc_c) * (double)rdf32(COW_IMG(0x10329a18u)));
            fpush(g, d17);
            g->esp = sp0 - 0x28u;
            t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), ebp - t16, g->ecx, g->edx, 1, 0);
            t19 = g->ecx;
            t20 = g->edx;
            ecx = t19;
            edx = t20;
            loc_14 = (t15 & 0xffff0000u) | (uint16_t)t18;
        }
        else
        {
            ecx = t13;
            edx = t14;
            ebx = t8;
            ebp = rd32(COW_IMG(0x106218b8u));
            edi = t6;
            loc_8 = t8;
            loc_18 = t10;
            loc_4 = t12;
            loc_14 = rd32(sp0 - 0x14u) & 0xffff0000u;
        }
        if ((int32_t)ebx > 0)
        {
            edi = (edi & 0xffff0000u) | rd16(COW_IMG(0x106218bau));
            t21 = (uint32_t)(int16_t)((uint16_t)edi - rd16(COW_IMG(0x106218b6u)));
            g->ecx = ecx;
            g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)edi - rd16(COW_IMG(0x106218b6u)));
            t22 = rd16(COW_IMG(0x106218b6u));
            d23 = fr(g, fr(g, (double)(int32_t)t21 * (double)(int32_t)loc_8) * (double)rdf32(COW_IMG(0x10329a18u)));
            fpush(g, d23);
            g->esp = sp0 - 0x28u;
            t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
            t25 = g->ecx;
            t26 = g->edx;
            ecx = t25;
            edx = t26;
            loc_14 = (uint16_t)loc_14 | (uint16_t)t24 << 0x10u;
        }
        else
        {
            edi = (edi & 0xffff0000u) | rd16(COW_IMG(0x106218bau));
            loc_14 = (uint16_t)loc_14;
        }
        if ((int32_t)loc_18 > 0)
        {
            eax = rd32(COW_IMG(0x106218b4u));
            t27 = (uint32_t)(int16_t)(ebp - eax);
            g->ecx = t27;
            g->edx = edx;
            d28 = fr(g, fr(g, (double)(int32_t)t27 * (double)(int32_t)loc_18) * (double)rdf32(COW_IMG(0x10329a18u)));
            fpush(g, d28);
            g->esp = sp0 - 0x28u;
            t29 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t30 = g->ecx;
            t31 = g->edx;
            eax = t29;
            ecx = t30;
            edx = t31;
            loc_10 = (rd32(sp0 - 0x10u) & 0xffff0000u) | (uint16_t)t29;
        }
        else
        {
            eax = rd32(COW_IMG(0x106218b4u));
            loc_10 = (rd32(sp0 - 0x10u) & 0xffff0000u) | (uint16_t)(ebp - eax);
        }
        if ((int32_t)ebx > 0)
        {
            edi = (edi & 0xffff0000u) | (uint16_t)((uint16_t)edi - rd16(COW_IMG(0x106218b6u)));
            g->edx = (uint32_t)(int16_t)edi;
            d32 = fr(g, fr(g, (double)(int32_t)(uint32_t)(int16_t)edi * (double)(int32_t)loc_4) * (double)rdf32(COW_IMG(0x10329a18u)));
            fpush(g, d32);
            g->esp = sp0 - 0x28u;
            t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t34 = g->edx;
            edx = t34;
            loc_10 = (uint16_t)loc_10 | (uint16_t)t33 << 0x10u;
        }
        else
        {
            edi = (edi & 0xffff0000u) | (uint16_t)((uint16_t)edi - rd16(COW_IMG(0x106218b6u)));
            loc_10 = (uint16_t)loc_10 | (uint16_t)edi << 0x10u;
        }
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x10163320u), rd32(COW_IMG(0x10621944u)), 2, loc_14, loc_10);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    wr8(self + 0x25au, 1u);
    return;
L_100b82ea: ;
    if (rd32(COW_IMG(0x10621944u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10621944u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t5 = g->edx;
        cow_thiscall(g, COW_IMG(0x10163340u), rd32(COW_IMG(0x10621944u)), 1, t4);
    }
    goto L_100b8308;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7e10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
