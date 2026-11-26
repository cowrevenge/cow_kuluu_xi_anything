/* f_0x100d4560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100d4560(Guest* g)
{
    double d27;
    double d29;
    double d4;
    double d46;
    double d47;
    double d5;
    double d51;
    double d54;
    double d56;
    double d6;
    double d61;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t28;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d457au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_100d457a;
    case 0x100d45acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d45ac;
    case 0x100d45d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d45d2;
    case 0x100d45e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d45e6;
    case 0x100d45f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d45f2;
    case 0x100d45fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d45fa;
    case 0x100d4601u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4601;
    case 0x100d4609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4609;
    case 0x100d4611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4611;
    case 0x100d4619u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4619;
    case 0x100d4627u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4627;
    case 0x100d462eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d462e;
    case 0x100d463au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d463a;
    case 0x100d4642u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4642;
    case 0x100d464bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d464b;
    case 0x100d46eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d46ea;
    case 0x100d46efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d46ef;
    case 0x100d46f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d46f4;
    case 0x100d46fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d46fb;
    case 0x100d4705u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4705;
    case 0x100d470cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d470c;
    case 0x100d4716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4716;
    case 0x100d4720u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4720;
    case 0x100d4724u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4724;
    case 0x100d472bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d472b;
    case 0x100d4733u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4733;
    case 0x100d4737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4737;
    case 0x100d473bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d473b;
    case 0x100d4745u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4745;
    case 0x100d474fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d474f;
    case 0x100d4753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4753;
    case 0x100d475au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d475a;
    case 0x100d4762u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4762;
    case 0x100d4766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4766;
    case 0x100d476au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d476a;
    case 0x100d4772u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4772;
    case 0x100d477cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d477c;
    case 0x100d4789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d4789;
    case 0x100d479cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d479c;
    case 0x100d47a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d47a6;
    case 0x100d47b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d47b3;
    case 0x100d47bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d47bb;
    case 0x100d47c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d47c5;
    case 0x100d47c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d47c7;
    case 0x100d47cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d47cf;
    case 0x100d47d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d47d9;
    default: break;
    }
#endif

    COW_AT(100d4560)
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    wr32(sp0 - 0x6cu, self + 0x678u);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x70u, t1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d457au);
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t1, self + 0x678u);
    t2 = g->ecx;
    t3 = g->edx;
    ecx = t2;
    edx = t3;
    ebx = t1;
    COW_AT(100d457a)
    wr32(sp0 - 0x6cu, 0x3f800000u);
    d4 = (double)(float)(double)rdf32(self + 0x69cu);
    wrf32(sp0 - 0x70u, (float)d4);
    d5 = (double)(float)(double)rdf32(self + 0x6a0u);
    wrf32(sp0 - 0x74u, (float)d5);
    d6 = (double)(float)(double)rdf32(self + 0x698u);
    wrf32(sp0 - 0x78u, (float)d6);
    wr32(sp0 - 0x7cu, sp0 - 0x58u);
    g->eax = sp0 - 0x58u;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d45acu);
    t7 = cow_cdecl(g, COW_IMG(0x10026e30u), 5, sp0 - 0x58u, cow_f2bits(d6), cow_f2bits(d5), cow_f2bits(d4), 0x3f800000u);
    eax = t7;
    COW_AT(100d45ac)
    wr32(sp0 - 0x6cu, self + 0x688u);
    wr32(sp0 - 0x70u, self + 0x678u);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    wr32(sp0 - 0x78u, ebx);
    t8 = rd32(sp0 + 4u);
    wr32(sp0 - 0x7cu, t8);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, self);
    g->eax = eax;
    g->edx = sp0 - 0x58u;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d45d2u);
    t9 = cow_thiscall(g, COW_IMG(0x1002c3e0u), self + 0x674u, 7, self, 0u, t8, ebx, sp0 - 0x58u, self + 0x678u, self + 0x688u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    edi = t8;
    COW_AT(100d45d2)
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, edi);
    wr32(sp0 + 4u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d45e6u);
    t11 = cow_thiscall(g, COW_IMG(0x1002c5c0u), self + 0x674u, 2, edi, 0u);
    t12 = g->edx;
    edx = t12;
    ebx = (ebx & 0xffffff00u) | (uint8_t)eax;
    eax = t11;
    COW_AT(100d45e6)
    g->eax = rd32(self);
    g->edx = edx;
    t13 = rd32(self);
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d45f2u);
    t14 = cow_thiscall(g, rd32(t13 + 0x358u), self, 0);
    t15 = g->edx;
    edx = t15;
    edi = eax;
    eax = t14;
    COW_AT(100d45f2)
    if (eax != 0u) goto L_100d4716;
    COW_AT(100d45fa)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d4601u);
    t16 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(100d4601)
    wr32(sp0 - 0x6cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d4609u);
    t18 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(100d4609)
    if ((uint8_t)eax == 0u) goto L_100d4716;
    COW_AT(100d4611)
    if (edi != 0u) goto L_100d4716;
    COW_AT(100d4619)
    if (rd32(self + 0x768u) == 0u) goto L_100d473b;
    edi = rd32(self + 0x768u);
    COW_AT(100d4627)
    g->eax = eax;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d462eu);
    t20 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(100d462e)
    wr32(sp0 - 0x6cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d463au);
    t22 = cow_thiscall(g, COW_IMG(0x10022340u), edi + 0x878u, 1, eax);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(100d463a)
    if (eax == 0u) goto L_100d473b;
    COW_AT(100d4642)
    if (eax == 6u) goto L_100d473b;
    COW_AT(100d464b)
    wr32(sp0 + 4u, 0xbf000000u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0x3f000000u);
    wr32(sp0 - 0x1cu, 0x3f000000u);
    wr32(sp0 - 0x18u, 0x3f000000u);
    wr32(sp0 - 0x14u, 0x3f8ccccdu);
    wr32(sp0 - 0x10u, 0xbf333333u);
    wr32(sp0 - 0xcu, 0xbf333333u);
    wr32(sp0 - 8u, 0x3f000000u);
    wr32(sp0 - 4u, 0x3d4ccccdu);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3ecccccdu);
    wr32(sp0 - 0x40u, 0x3ecccccdu);
    wr32(sp0 - 0x3cu, 0x3ecccccdu);
    wr32(sp0 - 0x38u, 0x3ecccccdu);
    wr32(sp0 - 0x34u, 0xbf4ccccdu);
    wr32(sp0 - 0x30u, 0xbf4ccccdu);
    wr32(sp0 - 0x2cu, 0x3ecccccdu);
    wr32(sp0 - 0x28u, 0x3ecccccdu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d46eau);
    t24 = cow_thiscall(g, COW_IMG(0x10084720u), edi, 0);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(100d46ea)
    if (eax == 0x1du)
    {
    COW_AT(100d4705)
        g->eax = eax;
        g->esp = sp0 - 0x68u;
        COW_RET(0x100d470cu);
        t28 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
        eax = t28;
    COW_AT(100d470c)
        d29 = (double)rdf32(eax * 4u + sp0 - 0x24u);
        wrf32(sp0 + 4u, (float)d29);
    }
    else
    {
    COW_AT(100d46ef)
        if (eax == 0x25u)
        {
    COW_AT(100d46f4)
            g->eax = eax;
            g->esp = sp0 - 0x68u;
            COW_RET(0x100d46fbu);
            t26 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
            eax = t26;
    COW_AT(100d46fb)
            d27 = (double)rdf32(eax * 4u + sp0 - 0x48u);
            wrf32(sp0 + 4u, (float)d27);
        }
    }
L_100d4772: ;
    COW_AT(100d4772)
    g->eax = eax;
    g->edx = rd32(self);
    t43 = rd32(self);
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d477cu);
    t44 = cow_thiscall(g, rd32(t43 + 0x110u), self, 0);
    t45 = g->edx;
    d46 = cow_take_float(g);
    eax = t44;
    edx = t45;
    x0 = d46;
    COW_AT(100d477c)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(100d47cf)
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        COW_RET(0x100d47d9u);
        cow_thiscall(g, rd32(rd32(self) + 0x110u), self, 0);
        t55 = g->edx;
        d56 = cow_take_float(g);
        edx = t55;
        x0 = d56;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4789)
        d47 = (double)rdf32(self + 0x75cu);
        if (!(d47 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
    COW_AT(100d47c7)
            x0 = (double)rdf32(self + 0x75cu);
        }
        else
        {
    COW_AT(100d479c)
            g->eax = rd32(self);
            g->edx = edx;
            t48 = rd32(self);
            g->esp = sp0 - 0x68u;
            COW_RET(0x100d47a6u);
            t49 = cow_thiscall(g, rd32(t48 + 0x110u), self, 0);
            t50 = g->edx;
            d51 = cow_take_float(g);
            eax = t49;
            edx = t50;
            x0 = d51;
    COW_AT(100d47a6)
            if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d47bb)
                g->edx = rd32(self);
                t52 = rd32(self);
                g->esp = sp0 - 0x68u;
                COW_RET(0x100d47c5u);
                cow_thiscall(g, rd32(t52 + 0x110u), self, 0);
                t53 = g->edx;
                d54 = cow_take_float(g);
                edx = t53;
                x0 = d54;
    COW_AT(100d47c5)
            }
            else
            {
    COW_AT(100d47b3)
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100d47d9)
    t57 = rd32(sp0 + 8u);
    t58 = rd32(sp0 - 0x60u);
    t59 = rd32(sp0 - 0x64u);
    t60 = rd32(sp0 - 0x68u);
    d61 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 4u)) + (double)rdf32(rd32(sp0 + 8u) + 4u));
    wrf32(t57 + 4u, (float)d61);
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = t59;
    g->edi = t60;
    g->ebp = t58;
    g->edx = edx;
    return (t57 & 0xffffff00u) | (uint8_t)ebx;
L_100d4716: ;
    COW_AT(100d4716)
    g->eax = eax;
    g->edx = rd32(self);
    t30 = rd32(self);
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d4720u);
    t31 = cow_thiscall(g, rd32(t30 + 0x34cu), self, 0);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(100d4720)
    if (eax != 0u) goto L_100d4745;
    COW_AT(100d4724)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d472bu);
    t33 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(100d472b)
    wr32(sp0 - 0x6cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d4733u);
    t35 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    COW_AT(100d4733)
    if ((uint8_t)eax == 0u) goto L_100d4745;
    COW_AT(100d4737)
    if (edi != 0u) goto L_100d4745;
L_100d473b: ;
    COW_AT(100d473b)
    wr32(sp0 + 4u, 0xbfa66666u);
    goto L_100d4772;
L_100d4745: ;
    COW_AT(100d4745)
    g->eax = rd32(self);
    g->edx = edx;
    t37 = rd32(self);
    g->esp = sp0 - 0x68u;
    COW_RET(0x100d474fu);
    t38 = cow_thiscall(g, rd32(t37 + 0x36cu), self, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(100d474f)
    if (eax == 0u)
    {
    COW_AT(100d4753)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        COW_RET(0x100d475au);
        t40 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t41 = g->edx;
        eax = t40;
        edx = t41;
    COW_AT(100d475a)
        wr32(sp0 - 0x6cu, eax);
        g->eax = eax;
        g->esp = sp0 - 0x68u;
        COW_RET(0x100d4762u);
        t42 = cow_thiscall(g, COW_IMG(0x10084330u), self, 1, eax);
        eax = t42;
    COW_AT(100d4762)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(100d4766)
            if (edi == 0u)
            {
    COW_AT(100d476a)
                wr32(sp0 + 4u, 0xbf000000u);
            }
        }
    }
    goto L_100d4772;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d4560(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d457au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x70u;
        g->edi = self + 0x678u;
        (void)sp0;
        return 1;
    }
    case 0x100d45acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x7cu;
        g->edi = self + 0x678u;
        (void)sp0;
        return 1;
    }
    case 0x100d45d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        g->ebp = self + 0x674u;
        (void)sp0;
        return 1;
    }
    case 0x100d45e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d45f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d45fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4601u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4609u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4611u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4619u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4627u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d462eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d463au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4642u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d464bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d46eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d46efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d46f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d46fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4705u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d470cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4716u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4720u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4724u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d472bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4733u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4737u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d473bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4745u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d474fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4753u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d475au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4762u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4766u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d476au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4772u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d477cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d4789u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d479cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d47a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d47b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d47bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d47c5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d47c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d47cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100d47d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4560(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d4560(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
