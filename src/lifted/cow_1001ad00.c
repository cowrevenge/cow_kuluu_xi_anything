/* f_0x1001ad00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_1001ad00(Guest* g)
{
    double d12;
    double d24;
    double d31;
    double d35;
    double d36;
    double d38;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001ad0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1001ad0b;
    case 0x1001ad15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1001ad15;
    case 0x1001ad1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001ad1f;
    case 0x1001ad29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1001ad29;
    case 0x1001ad30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad30;
    case 0x1001ad37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad37;
    case 0x1001ad3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad3e;
    case 0x1001ad46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001ad46;
    case 0x1001ad50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001ad50;
    case 0x1001ad5au: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad5a;
    case 0x1001ad5eu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad5e;
    case 0x1001ad63u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad63;
    case 0x1001ad66u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad66;
    case 0x1001ad77u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad77;
    case 0x1001ad7fu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ad7f;
    case 0x1001adbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001adbe;
    case 0x1001add6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001add6;
    case 0x1001adddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001addd;
    case 0x1001adeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001adee;
    case 0x1001adf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001adf6;
    case 0x1001ae01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ae01;
    case 0x1001ae0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ae0d;
    case 0x1001ae19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ae19;
    case 0x1001ae25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ae25;
    case 0x1001ae31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ae31;
    case 0x1001ae3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ae3d;
    case 0x1001ae60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001ae60;
    case 0x1001ae96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ae96;
    case 0x1001aeadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001aead;
    case 0x1001aed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001aed0;
    case 0x1001aeebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001aeeb;
    case 0x1001aef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001aef8;
    case 0x1001af09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001af09;
    case 0x1001af0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001af0b;
    case 0x1001af13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001af13;
    case 0x1001af1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001af1d;
    case 0x1001af29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001af29;
    case 0x1001af33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001af33;
    case 0x1001af38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001af38;
    case 0x1001af3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001af3b;
    case 0x1001af47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001af47;
    case 0x1001af4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001af4d;
    case 0x1001af51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001af51;
    case 0x1001af58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1001af58;
    default: break;
    }
#endif

    COW_AT(1001ad00)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001ad0bu);
    t1 = cow_thiscall(g, COW_IMG(0x1001b1a0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1001ad0b)
    if (rd32(sp0 + 4u) != 0u)
    {
        ebx = rd32(sp0 + 4u);
        edi = eax;
        goto L_1001ad29;
    }
    COW_AT(1001ad15)
    wr32(sp0 - 0x14u, COW_IMG(0x10351108u));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001ad1fu);
    cow_cdecl(g, COW_IMG(0x10017d30u), 1, COW_IMG(0x10351108u));
    COW_AT(1001ad1f)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_1001ad29: ;
    COW_AT(1001ad29)
    wr32(sp0 - 0x14u, 0x40u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001ad30u);
    t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x40u);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1001ad30)
    if (eax == 0u) goto L_1001ad46;
    COW_AT(1001ad37)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001ad3eu);
    t7 = cow_thiscall(g, COW_IMG(0x1001a800u), eax, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1001ad3e)
    if (eax != 0u)
    {
        esi = eax;
        goto L_1001ad5a;
    }
    ecx = 0u;
L_1001ad46: ;
    COW_AT(1001ad46)
    wr32(sp0 - 0x14u, COW_IMG(0x103510d4u));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001ad50u);
    cow_cdecl(g, COW_IMG(0x10017d30u), 1, COW_IMG(0x103510d4u));
    COW_AT(1001ad50)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_1001ad5a: ;
    COW_AT(1001ad5a)
    if (edi != 0u)
    {
    COW_AT(1001ad63)
        wr32(edi + 4u, esi);
    }
    else
    {
    COW_AT(1001ad5e)
        wr32(self + 4u, esi);
    }
    COW_AT(1001ad66)
    d9 = (double)rdf32(sp0 + 0x14u);
    if (d9 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(1001ad77)
        wr32(sp0 + 0x14u, 0x3f800000u);
    }
    COW_AT(1001ad7f)
    t10 = rd32(sp0 + 0x14u);
    t11 = rd32(sp0 + 0x1cu);
    d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x14u));
    wr32(esi + 0x14u, t10);
    t13 = rd32(sp0 + 0x20u);
    wr32(esi + 0xcu, 0u);
    wr32(esi + 0x10u, 0u);
    t14 = rd32(sp0 + 8u);
    wr32(esi + 0x38u, t13);
    t15 = rd32(sp0 + 0xcu);
    wr32(esi + 0x24u, t11);
    t16 = rd32(esi);
    wr32(esi + 0x1cu, t14);
    wr32(sp0 - 0x14u, t15);
    wr8(esi + 8u, 1u);
    wrf32(esi + 0x18u, (float)d12);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001adbeu);
    cow_thiscall(g, rd32(t16 + 0x2cu), esi, 1, rd32(sp0 - 0x14u));
    COW_AT(1001adbe)
    t17 = (uint32_t)(int8_t)rd8(sp0 + 0x10u);
    wr32(esi + 0x2cu, t17);
    wr32(sp0 - 0x14u, ebx);
    t18 = rd32(rd32(ebx) + 0x20u);
    t19 = rd32(esi);
    wr32(esi + 0x30u, t18);
    g->eax = t19;
    g->edx = t18;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001add6u);
    t20 = cow_thiscall(g, rd32(t19 + 0x28u), esi, 1, rd32(sp0 - 0x14u));
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(1001add6)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001adddu);
    t22 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(ebx), g->edx, 1, 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(1001addd)
    d24 = (double)rdf32(sp0 + 0x18u);
    if (!(d24 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d24;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d24;
    COW_AT(1001adee)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(1001adf6)
    wrf32(esi + 0x20u, (float)x0);
    if (edi != 0u)
    {
    COW_AT(1001ae01)
        wr32(sp0 - 0x14u, sp0 + 0x10u);
        g->esp = sp0 - 0x10u;
        COW_RET(0x1001ae0du);
        cow_thiscall(g, rd32(rd32(edi) + 0x24u), edi, 1, sp0 + 0x10u);
    COW_AT(1001ae0d)
        wr32(sp0 - 0x14u, sp0 + 8u);
        g->edx = rd32(esi);
        t25 = rd32(esi);
        g->esp = sp0 - 0x10u;
        COW_RET(0x1001ae19u);
        cow_thiscall(g, rd32(t25 + 0x24u), esi, 1, sp0 + 8u);
        t26 = g->edx;
        edx = t26;
    COW_AT(1001ae19)
        if (rd32(sp0 + 0x10u) != 0u)
        {
            eax = rd32(sp0 + 0x10u);
    COW_AT(1001ae25)
            if (rd32(sp0 + 8u) != 0u)
            {
    COW_AT(1001ae31)
                wr32(sp0 - 0x14u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                COW_RET(0x1001ae3du);
                t27 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
                eax = t27;
    COW_AT(1001ae3d)
                t28 = (uint32_t)(int16_t)rd16(eax + 0x34u);
                wr32(sp0 + 4u, t28);
                t29 = rd32(sp0 + 8u);
                wr32(sp0 - 0x14u, t29);
                t30 = rd32(COW_IMG(0x1047d128u));
                d31 = fr(g, (double)(int32_t)rd32(sp0 + 4u) / (double)rdf32(eax + 0x36u));
                wrf32(sp0 + 0x1cu, (float)d31);
                g->eax = eax;
                g->edx = t29;
                g->esp = sp0 - 0x10u;
                COW_RET(0x1001ae60u);
                t32 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t29);
                t33 = g->edx;
                eax = t32;
                edx = t33;
    COW_AT(1001ae60)
                wr32(sp0 + 0x20u, 0u);
                t34 = (uint32_t)(int16_t)rd16(eax + 0x34u);
                wr32(sp0 + 4u, t34);
                d35 = fr(g, (double)(int32_t)rd32(sp0 + 4u) / (double)rdf32(eax + 0x36u));
                wrf32(sp0 + 4u, (float)d35);
                d36 = (double)rdf32(sp0 + 0x1cu);
                if ((cow_fsw(g, d36, (double)rdf32(COW_IMG(0x1032a22cu)), 1u) & 0x4100u) != 0u)
                {
                    ebx = eax;
                    eax = cow_fsw(g, d36, (double)rdf32(COW_IMG(0x1032a22cu)), 1u) & 0x4100u;
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                }
                else
                {
                    ebx = eax;
                    eax = cow_fsw(g, d36, (double)rdf32(COW_IMG(0x1032a22cu)), 1u) & 0x4100u;
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
    COW_AT(1001ae96)
                    t37 = rd32(edi);
                    d38 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x1cu));
                    wrf32(sp0 + 0x1cu, (float)d38);
                    g->eax = eax;
                    g->edx = t37;
                    g->esp = sp0 - 0x10u;
                    COW_RET(0x1001aeadu);
                    t39 = cow_thiscall(g, rd32(t37 + 0x30u), edi, 0);
                    t40 = g->edx;
                    d41 = cow_take_float(g);
                    eax = t39;
                    edx = t40;
                    x0 = d41;
    COW_AT(1001aead)
                    d42 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x1cu) * (double)rdf32(sp0 + 4u)) * fr(g, (double)rdf32(ebx + 0x36u) * (double)rdf32(COW_IMG(0x10329a08u)))) * (double)rdf32(sp0 + 0xcu)) * (double)rdf32(sp0 + 0x14u));
                    d43 = fr(g, x0 * (double)rdf32(sp0 + 0x1cu));
                    wrf32(sp0 + 0x20u, (float)d42);
                    x0 = d43;
                }
    COW_AT(1001aed0)
                d44 = (double)rdf32(sp0 + 4u);
                if ((cow_fsw(g, d44, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
                {
                    x0 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 4u)) + (double)rdf32(sp0 + 0x20u));
    COW_AT(1001af0b)
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                }
                else
                {
                    eax = cow_fsw(g, d44, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                    x0 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 4u)) + (double)rdf32(sp0 + 0x20u));
    COW_AT(1001aeeb)
                    d45 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, x0, d45, 1u) & 0x100u) != 0u) goto L_1001af13;
                    eax = cow_fsw(g, x0, d45, 1u) & 0x100u;
L_1001aef8: ;
    COW_AT(1001aef8)
                    d46 = fr(g, x0 - (double)rdf32(sp0 + 4u));
                    d47 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, d46, d47, 1u) & 0x100u) == 0u)
                    {
                        eax = cow_fsw(g, d46, d47, 1u) & 0x100u;
                        x0 = d46;
                        goto L_1001aef8;
                    }
                    x0 = d46;
    COW_AT(1001af09)
                }
L_1001af13: ;
    COW_AT(1001af13)
                d48 = fr(g, (double)rdf32(ebx + 0x36u) * x0);
                wrf32(esi + 0x24u, (float)d48);
            }
        }
    COW_AT(1001af1d)
        t49 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x14u, t49);
        g->eax = t49;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        COW_RET(0x1001af29u);
        t50 = cow_thiscall(g, COW_IMG(0x1001b520u), edi, 1, t49);
        t51 = g->edx;
        eax = t50;
        edx = t51;
    }
    COW_AT(1001af29)
    g->eax = eax;
    g->edx = edx;
    t52 = rd32(self + 4u);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1001af33u);
    t53 = cow_thiscall(g, COW_IMG(0x1001b340u), self, 0);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    esi = t52;
    COW_AT(1001af33)
    if ((int32_t)eax > 3)
    {
    COW_AT(1001af38)
        edi = eax - 3u;
L_1001af3b: ;
    COW_AT(1001af3b)
        wr32(sp0 - 0x14u, 0x3f800000u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        COW_RET(0x1001af47u);
        t55 = cow_thiscall(g, COW_IMG(0x1001b520u), esi, 1, 0x3f800000u);
        t56 = g->edx;
        eax = t55;
        edx = t56;
    COW_AT(1001af47)
        if (edi != 1u)
        {
            esi = rd32(esi + 4u);
            edi = edi - 1u;
            goto L_1001af3b;
        }
        esi = rd32(esi + 4u);
    }
    COW_AT(1001af4d)
    if (esi != 0u)
    {
    COW_AT(1001af51)
        wr32(esi + 0x10u, 0x3f800000u);
    }
    COW_AT(1001af58)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001ad00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001ad0bu:
    {
        uint32_t eax;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad15u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad1fu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad29u:
    {
        uint32_t eax;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad30u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad37u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad3eu:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad46u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad50u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad5au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad66u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001ad7fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001adbeu:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001add6u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001adddu:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001adeeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001adf6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ae01u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ae0du:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001ae19u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001ae25u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001ae31u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001ae3du:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ae60u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001ae96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001aeadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001aed0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001aeebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001aef8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af09u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af1du:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af29u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af33u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af38u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af3bu:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af47u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af4du:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af51u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1001af58u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ad00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1001ad00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 32u);
}
/* COW_ADAPTER END */
