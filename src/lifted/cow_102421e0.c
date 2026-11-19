/* f_0x102421e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102421e0(Guest* g)
{
    double d101;
    double d102;
    double d107;
    double d108;
    double d109;
    double d111;
    double d112;
    double d113;
    double d115;
    double d116;
    double d117;
    double d12;
    double d13;
    double d14;
    double d16;
    double d17;
    double d18;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d35;
    double d37;
    double d38;
    double d41;
    double d44;
    double d45;
    double d5;
    double d58;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d65;
    double d66;
    double d67;
    double d68;
    double d7;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d92;
    double d94;
    double d95;
    double d98;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    double loc_48_f;
    uint32_t loc_4c;
    double loc_4c_f;
    double loc_50_f;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t11;
    uint32_t t110;
    uint32_t t114;
    uint32_t t15;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t42;
    uint32_t t43;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t64;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t8;
    uint32_t t82;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t93;
    uint32_t t96;
    uint32_t t97;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 144u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10242223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_10242223;
    case 0x1024222du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_1024222d;
    case 0x10242235u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_10242235;
    case 0x10242237u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_10242237;
    case 0x10242240u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_10242240;
    case 0x1024224cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_1024224c;
    case 0x10242269u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_10242269;
    case 0x1024228cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1024228c;
    case 0x102422b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_102422b9;
    case 0x102422e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x60u); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_102422e5;
    case 0x1024230du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_1024230d;
    case 0x10242318u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10242318;
    case 0x1024233fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1024233f;
    case 0x1024236cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1024236c;
    case 0x10242398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10242398;
    case 0x102423c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_102423c0;
    case 0x102423ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_102423ce;
    case 0x102423d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_102423d3;
    case 0x102423d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_102423d7;
    case 0x10242415u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10242415;
    case 0x102424b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50_f = rdf32(sp0 - 0x50u); loc_4c_f = rdf32(sp0 - 0x4cu); loc_48_f = rdf32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_102424b8;
    case 0x102425bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_102425bd;
    case 0x102425d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_102425d4;
    case 0x102425fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_102425fc;
    case 0x1024269fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1024269f;
    case 0x102426a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_102426a4;
    case 0x102426a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_102426a8;
    case 0x102426adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_102426ad;
    case 0x102426bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_102426bb;
    case 0x102426c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_102426c5;
    case 0x1024270bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1024270b;
    case 0x10242792u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_50_f = rdf32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10242792;
    case 0x10242989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10242989;
    default: break;
    }
#endif

    COW_AT(102421e0)
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    wr32(sp0 - 0x58u, rd32(COW_IMG(0x1066908cu)));
    t1 = rd32(self + 0x14u);
    wr32(sp0 - 0x54u, t1);
    if (rd32(COW_IMG(0x1066908cu)) == 0xffffffffu)
    {
        loc_5c = in_ebx;
        loc_60 = in_ebp;
        loc_64 = in_esi;
        loc_68 = in_edi;
    }
    else
    {
        eax = t1;
        ebx = rd32(COW_IMG(0x1066908cu));
        ebp = t1 * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0x34u;
        edi = rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x34u;
        loc_58 = rd32(COW_IMG(0x1066908cu));
        loc_54 = t1;
    COW_AT(10242223)
        if (rd32(sp0 + 4u) != 0u) goto L_10242237;
    COW_AT(1024222d)
        if (eax == ebx)
        {
            loc_5c = in_ebx;
            loc_60 = in_ebp;
            loc_64 = in_esi;
            loc_68 = in_edi;
            goto L_10242989;
        }
    COW_AT(10242235)
L_1024224c: ;
    COW_AT(1024224c)
        wr32(self + 0xb38u, 0u);
        wr32(self + 0xb3cu, 0u);
        wr32(self + 0xb40u, 0u);
        wr32(self + 0xb44u, 0u);
        if (rd32(ebp + 0x34u) == 0u)
        {
    COW_AT(102422e5)
            wr32(sp0 - 0x20u, rd32(COW_IMG(0x10388748u)));
            wr32(sp0 - 0x1cu, rd32(COW_IMG(0x1038874cu)));
            wr32(sp0 - 0x18u, rd32(COW_IMG(0x10388750u)));
            wr32(sp0 - 0x14u, rd32(COW_IMG(0x10388754u)));
            loc_5c = in_ebx;
            loc_60 = in_ebp;
            loc_64 = in_esi;
            loc_68 = in_edi;
        }
        else
        {
    COW_AT(10242269)
            wr32(sp0 - 0x6cu, sp0 - 0x20u);
            wr32(sp0 - 0x70u, 7u);
            g->eax = rd32(rd32(ebp + 0x78u));
            t2 = rd32(rd32(ebp + 0x78u));
            g->esp = sp0 - 0x68u;
            t3 = cow_thiscall(g, rd32(t2 + 0x1c4u), rd32(ebp + 0x78u), 2, 7u, sp0 - 0x20u);
            t4 = rd32(sp0 - 0x58u);
            wr32(ebp + 0xacu, (uint8_t)t3);
            if ((uint8_t)t3 == 0u)
            {
                ebx = t4;
    COW_AT(102422b9)
                wr32(sp0 - 0x20u, rd32(COW_IMG(0x10388738u)));
                wr32(sp0 - 0x1cu, rd32(COW_IMG(0x1038873cu)));
                wr32(sp0 - 0x14u, rd32(COW_IMG(0x10388744u)));
                wr32(sp0 - 0x18u, rd32(COW_IMG(0x10388740u)));
                eax = rd32(sp0 - 0x54u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_60 = rd32(sp0 - 0x60u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_68 = rd32(sp0 - 0x68u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_54 = rd32(sp0 - 0x54u);
            }
            else
            {
                ebx = t4;
    COW_AT(1024228c)
                d5 = fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(ebp + 0x7cu));
                wrf32(sp0 - 0x20u, (float)(double)(float)d5);
                d6 = fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(ebp + 0x80u));
                wrf32(sp0 - 0x1cu, (float)(double)(float)d6);
                d7 = fr(g, (double)rdf32(sp0 - 0x18u) - (double)rdf32(ebp + 0x84u));
                wrf32(sp0 - 0x18u, (float)(double)(float)d7);
                eax = rd32(sp0 - 0x54u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_60 = rd32(sp0 - 0x60u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_68 = rd32(sp0 - 0x68u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_54 = rd32(sp0 - 0x54u);
            }
        }
    COW_AT(1024230d)
        if (rd32(edi + 0x34u) == 0u)
        {
    COW_AT(10242398)
            wr32(sp0 - 0x30u, rd32(COW_IMG(0x10388768u)));
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1038876cu)));
            wr32(sp0 - 0x28u, rd32(COW_IMG(0x10388770u)));
            wr32(sp0 - 0x24u, rd32(COW_IMG(0x10388774u)));
        }
        else
        {
    COW_AT(10242318)
            wr32(sp0 - 0x6cu, sp0 - 0x30u);
            wr32(sp0 - 0x70u, 7u);
            t8 = rd32(edi + 0x78u);
            t9 = rd32(rd32(edi + 0x78u));
            wr32(sp0 + 4u, t8);
            g->eax = t9;
            g->esp = sp0 - 0x68u;
            t10 = cow_thiscall(g, rd32(t9 + 0x1c4u), t8, 2, 7u, sp0 - 0x30u);
            t11 = rd32(sp0 - 0x58u);
            wr32(edi + 0xacu, (uint8_t)t10);
            if ((uint8_t)t10 == 0u)
            {
                ebx = t11;
    COW_AT(1024236c)
                wr32(sp0 - 0x30u, rd32(COW_IMG(0x10388758u)));
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1038875cu)));
                wr32(sp0 - 0x24u, rd32(COW_IMG(0x10388764u)));
                wr32(sp0 - 0x28u, rd32(COW_IMG(0x10388760u)));
                eax = rd32(sp0 - 0x54u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_60 = rd32(sp0 - 0x60u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_68 = rd32(sp0 - 0x68u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_54 = rd32(sp0 - 0x54u);
            }
            else
            {
                ebx = t11;
    COW_AT(1024233f)
                d12 = fr(g, (double)rdf32(sp0 - 0x30u) - (double)rdf32(edi + 0x7cu));
                wrf32(sp0 - 0x30u, (float)(double)(float)d12);
                d13 = fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(edi + 0x80u));
                wrf32(sp0 - 0x2cu, (float)(double)(float)d13);
                d14 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(edi + 0x84u));
                wrf32(sp0 - 0x28u, (float)(double)(float)d14);
                eax = rd32(sp0 - 0x54u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_60 = rd32(sp0 - 0x60u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_68 = rd32(sp0 - 0x68u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_54 = rd32(sp0 - 0x54u);
            }
        }
    COW_AT(102423c0)
        if ((ebx - eax ^ (uint32_t)((int32_t)(ebx - eax) >> 0x1fu)) - (uint32_t)((int32_t)(ebx - eax) >> 0x1fu) == 1u)
        {
            ebx = ebx - eax;
            goto L_10242415;
        }
        t15 = eax;
        eax = (ebx - t15 ^ (uint32_t)((int32_t)(ebx - t15) >> 0x1fu)) - (uint32_t)((int32_t)(ebx - t15) >> 0x1fu);
        ebx = ebx - t15;
    COW_AT(102423ce)
        if (eax == 0xfu) goto L_10242415;
    COW_AT(102423d3)
        if (ebx == 0u) goto L_10242415;
    COW_AT(102423d7)
        d16 = fr(g, (double)rdf32(COW_IMG(0x10388778u)) + (double)rdf32(self + 0xb48u));
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10388784u)));
        wrf32(sp0 - 0x50u, (float)(double)(float)d16);
        d17 = fr(g, (double)rdf32(COW_IMG(0x1038877cu)) + (double)rdf32(self + 0xb4cu));
        wrf32(sp0 - 0x4cu, (float)(double)(float)d17);
        d18 = fr(g, (double)rdf32(COW_IMG(0x10388780u)) + (double)rdf32(self + 0xb50u));
        wrf32(sp0 - 0x48u, (float)(double)(float)d18);
        loc_44 = rd32(COW_IMG(0x10388784u));
        loc_50_f = (double)(float)d16;
        loc_4c_f = (double)(float)d17;
        loc_48_f = (double)(float)d18;
L_102424b8: ;
    COW_AT(102424b8)
        wr32(sp0 - 0x6cu, 0x40000000u);
        t32 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x44u);
        wr32(sp0 - 0x40u, t32);
        t33 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x48u);
        wr32(sp0 - 0x3cu, t33);
        t34 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x4cu);
        wr32(sp0 - 0x38u, t34);
        d35 = (double)(float)fr(g, cow_bits2f(t32) - loc_50_f);
        wrf32(sp0 - 0x40u, (float)d35);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        t36 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x50u);
        wr32(sp0 - 0x34u, t36);
        d37 = (double)(float)fr(g, cow_bits2f(t33) - loc_4c_f);
        wrf32(sp0 - 0x3cu, (float)d37);
        d38 = (double)(float)fr(g, cow_bits2f(t34) - loc_48_f);
        wrf32(sp0 - 0x38u, (float)d38);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t39 = rd32(sp0 - 0x34u);
        t40 = rd32(sp0 - 0x50u);
        d41 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xbb4u, t39);
        t42 = rd32(sp0 - 0x48u);
        wr32(self + 0xbb8u, t40);
        wrf32(sp0 - 0x40u, (float)(double)(float)d41);
        t43 = rd32(sp0 - 0x44u);
        d44 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        wr32(self + 0xbc0u, t42);
        wr32(self + 0xbc4u, t43);
        wrf32(sp0 - 0x3cu, (float)(double)(float)d44);
        d45 = fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)(double)(float)d45);
        wrf32(self + 0xba8u, (float)d41);
        wr32(self + 0xbb0u, cow_f2bits((double)(float)d45));
        t46 = rd32(sp0 - 0x4cu);
        wrf32(self + 0xbacu, (float)d44);
        wr32(self + 0xbbcu, t46);
        t47 = rd32(edi + 0x9cu);
        wr32(sp0 - 0x40u, t47);
        t48 = rd32(edi + 0xa0u);
        wr32(sp0 - 0x3cu, t48);
        t49 = rd32(edi + 0xa4u);
        wr32(sp0 - 0x38u, t49);
        t50 = rd32(edi + 0xa8u);
        wr32(sp0 - 0x34u, t50);
        if (rd32(edi + 0x34u) == 0u)
        {
            ecx = t50;
            loc_40 = t47;
            loc_3c = t48;
            loc_38 = t49;
            loc_34 = t50;
        }
        else
        {
            loc_40 = t47;
            loc_3c = t48;
            loc_38 = t49;
            loc_34 = t50;
    COW_AT(102425bd)
            wr32(sp0 - 0x6cu, sp0 - 0x10u);
            wr32(sp0 - 0x70u, 7u);
            g->eax = sp0 - 0x10u;
            t51 = rd32(sp0 + 4u);
            g->esp = sp0 - 0x68u;
            t52 = cow_thiscall(g, rd32(rd32(t51) + 0x1c4u), t51, 2, 7u, sp0 - 0x10u);
            t53 = g->ecx;
            if ((uint8_t)t52 == 0u)
            {
                ecx = t53;
                loc_40 = rd32(sp0 - 0x40u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_38 = rd32(sp0 - 0x38u);
                loc_34 = rd32(sp0 - 0x34u);
            }
            else
            {
    COW_AT(102425d4)
                t54 = rd32(edi + 0x8cu);
                wr32(sp0 - 0x40u, t54);
                t55 = rd32(edi + 0x90u);
                wr32(sp0 - 0x3cu, t55);
                t56 = rd32(edi + 0x94u);
                wr32(sp0 - 0x38u, t56);
                t57 = rd32(edi + 0x98u);
                wr32(sp0 - 0x34u, t57);
                ecx = t57;
                loc_40 = t54;
                loc_3c = t55;
                loc_38 = t56;
                loc_34 = t57;
            }
        }
    COW_AT(102425fc)
        d58 = fr(g, cow_bits2f(loc_38) + (double)rdf32(sp0 - 0x28u));
        d59 = fr(g, cow_bits2f(loc_3c) + (double)rdf32(sp0 - 0x2cu));
        d60 = fr(g, cow_bits2f(loc_40) + (double)rdf32(sp0 - 0x30u));
        wr32(sp0 - 0x6cu, 0x40000000u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wrf32(sp0 - 0x38u, (float)(double)(float)d58);
        d61 = fr(g, d60 - (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x40u, (float)(double)(float)d61);
        d62 = fr(g, d59 - (double)rdf32(sp0 - 0x4cu));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d62);
        d63 = fr(g, (double)(float)d58 - (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)(double)(float)d63);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t64 = rd32(sp0 - 0x34u);
        d65 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xbd4u, t64);
        wrf32(sp0 - 0x40u, (float)(double)(float)d65);
        d66 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d66);
        d67 = fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)(double)(float)d67);
        wrf32(self + 0xbc8u, (float)d65);
        wr32(self + 0xbd0u, cow_f2bits((double)(float)d67));
        wrf32(self + 0xbccu, (float)d66);
        if ((ebx ^ (uint32_t)((int32_t)ebx >> 0x1fu)) - (uint32_t)((int32_t)ebx >> 0x1fu) == 1u) goto L_1024270b;
        eax = (ebx ^ (uint32_t)((int32_t)ebx >> 0x1fu)) - (uint32_t)((int32_t)ebx >> 0x1fu);
    COW_AT(1024269f)
        if (eax == 0xfu) goto L_1024270b;
    COW_AT(102426a4)
        if (ebx == 0u) goto L_1024270b;
        sf = (int32_t)ebx < 0;
    COW_AT(102426a8)
        if (!sf)
        {
            eax = ebx;
            edx = (uint32_t)((int32_t)ebx >> 0x1fu);
    COW_AT(102426bb)
            eax = rd32(sp0 - 0x54u) + (uint32_t)((int32_t)(eax - edx) >> 1u);
        }
        else
        {
            eax = ebx;
            edx = (uint32_t)((int32_t)ebx >> 0x1fu);
    COW_AT(102426ad)
            eax = rd32(sp0 - 0x58u) - (uint32_t)((int32_t)(eax - edx) >> 1u);
        }
    COW_AT(102426c5)
        d68 = (double)(float)(double)rdf32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xb0u);
        wrf32(sp0 - 0x50u, (float)d68);
        t69 = rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xb4u);
        wr32(sp0 - 0x4cu, t69);
        t70 = rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xb8u);
        wr32(sp0 - 0x48u, t70);
        t71 = rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xbcu);
        wr32(sp0 - 0x44u, t71);
        eax = t71;
        loc_50_f = d68;
        loc_4c = t69;
        loc_48 = t70;
        loc_44 = t71;
L_10242792: ;
    COW_AT(10242792)
        d83 = fr(g, loc_50_f - (double)rdf32(self + 0xb48u));
        wr32(sp0 - 0x6cu, 0x3f4ccccdu);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        wr32(sp0 - 0x74u, sp0 - 0x50u);
        wrf32(sp0 - 0x50u, (float)(double)(float)d83);
        d84 = fr(g, cow_bits2f(loc_4c) - (double)rdf32(self + 0xb4cu));
        wrf32(sp0 - 0x4cu, (float)(double)(float)d84);
        d85 = fr(g, cow_bits2f(loc_48) - (double)rdf32(self + 0xb50u));
        wrf32(sp0 - 0x48u, (float)(double)(float)d85);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x50u, sp0 - 0x50u, 0x3f4ccccdu);
        d86 = fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(self + 0xb48u));
        wr32(sp0 - 0x78u, 0x40000000u);
        wrf32(sp0 - 0x50u, (float)(double)(float)d86);
        d87 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(self + 0xb4cu));
        wrf32(sp0 - 0x4cu, (float)(double)(float)d87);
        d88 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(self + 0xb50u));
        wrf32(sp0 - 0x48u, (float)(double)(float)d88);
        t89 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x50u);
        wr32(sp0 - 0x40u, t89);
        t90 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x54u);
        wr32(sp0 - 0x3cu, t90);
        t91 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x58u);
        wr32(sp0 - 0x38u, t91);
        d92 = (double)(float)fr(g, cow_bits2f(t89) - (double)(float)d86);
        wrf32(sp0 - 0x40u, (float)d92);
        wr32(sp0 - 0x7cu, sp0 - 0x40u);
        wr32(sp0 - 0x80u, sp0 - 0x40u);
        t93 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x5cu);
        wr32(sp0 - 0x34u, t93);
        d94 = (double)(float)fr(g, cow_bits2f(t90) - (double)(float)d87);
        wrf32(sp0 - 0x3cu, (float)d94);
        d95 = (double)(float)fr(g, cow_bits2f(t91) - (double)(float)d88);
        wrf32(sp0 - 0x38u, (float)d95);
        g->esp = sp0 - 0x74u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t96 = rd32(sp0 - 0x34u);
        t97 = rd32(sp0 - 0x50u);
        d98 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xb84u, t96);
        t99 = rd32(sp0 - 0x48u);
        wr32(self + 0xb88u, t97);
        wrf32(sp0 - 0x40u, (float)(double)(float)d98);
        t100 = rd32(sp0 - 0x44u);
        d101 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        wr32(self + 0xb90u, t99);
        wr32(self + 0xb94u, t100);
        wrf32(sp0 - 0x3cu, (float)(double)(float)d101);
        d102 = fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)(double)(float)d102);
        wrf32(self + 0xb78u, (float)d98);
        wr32(self + 0xb80u, cow_f2bits((double)(float)d102));
        t103 = rd32(sp0 - 0x4cu);
        wrf32(self + 0xb7cu, (float)d101);
        wr32(self + 0xb8cu, t103);
        t104 = rd32(edi + 0x7cu);
        wr32(sp0 - 0x40u, t104);
        t105 = rd32(edi + 0x80u);
        wr32(sp0 - 0x3cu, t105);
        t106 = rd32(edi + 0x84u);
        d107 = fr(g, cow_bits2f(t105) + (double)rdf32(sp0 - 0x2cu));
        d108 = fr(g, cow_bits2f(t104) + (double)rdf32(sp0 - 0x30u));
        wr32(sp0 - 0x38u, t106);
        d109 = fr(g, cow_bits2f(t106) + (double)rdf32(sp0 - 0x28u));
        wr32(sp0 - 0x84u, 0x40000000u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        t110 = rd32(edi + 0x88u);
        wr32(sp0 - 0x34u, t110);
        wrf32(sp0 - 0x38u, (float)(double)(float)d109);
        d111 = fr(g, d108 - (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x40u, (float)(double)(float)d111);
        d112 = fr(g, d107 - (double)rdf32(sp0 - 0x4cu));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d112);
        d113 = fr(g, (double)(float)d109 - (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)(double)(float)d113);
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t114 = rd32(sp0 - 0x34u);
        d115 = fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        d116 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        d117 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xba4u, t114);
        wrf32(sp0 - 0x38u, (float)(double)(float)d115);
        wrf32(self + 0xb98u, (float)d117);
        wr32(self + 0xba0u, cow_f2bits((double)(float)d115));
        wrf32(self + 0xb9cu, (float)d116);
        wr32(self + 0x14u, rd32(COW_IMG(0x1066908cu)));
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_68 = rd32(sp0 - 0x68u);
    }
L_10242989: ;
    COW_AT(10242989)
    g->ebx = loc_5c;
    g->esi = loc_64;
    g->edi = loc_68;
    g->ebp = loc_60;
    return;
L_10242237: ;
    COW_AT(10242237)
    if (rd32(ebp + 0x34u) == 0u)
    {
        loc_5c = in_ebx;
        loc_60 = in_ebp;
        loc_64 = in_esi;
        loc_68 = in_edi;
        goto L_10242989;
    }
    COW_AT(10242240)
    if (rd32(ebp + 0xacu) != 0u)
    {
        loc_5c = in_ebx;
        loc_60 = in_ebp;
        loc_64 = in_esi;
        loc_68 = in_edi;
        goto L_10242989;
    }
    goto L_1024224c;
L_10242415: ;
    COW_AT(10242415)
    wr32(sp0 - 0x6cu, 0x3f000000u);
    t19 = rd32(ebp + 0x9cu);
    wr32(sp0 - 0x50u, t19);
    t20 = rd32(ebp + 0xa0u);
    wr32(sp0 - 0x4cu, t20);
    t21 = rd32(ebp + 0xa4u);
    wr32(sp0 - 0x48u, t21);
    t22 = rd32(ebp + 0xa8u);
    wr32(sp0 - 0x44u, t22);
    d23 = fr(g, cow_bits2f(t19) + (double)rdf32(edi + 0x9cu));
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    wrf32(sp0 - 0x50u, (float)(double)(float)d23);
    d24 = fr(g, cow_bits2f(t20) + (double)rdf32(edi + 0xa0u));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d24);
    d25 = fr(g, (double)(float)d24 + (double)rdf32(sp0 - 0x1cu));
    d26 = fr(g, (double)(float)d23 + (double)rdf32(sp0 - 0x20u));
    d27 = fr(g, cow_bits2f(t21) + (double)rdf32(edi + 0xa4u));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d25);
    d28 = fr(g, d27 + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x48u, (float)(double)(float)d28);
    d29 = fr(g, d26 + (double)rdf32(sp0 - 0x30u));
    wrf32(sp0 - 0x50u, (float)(double)(float)d29);
    d30 = fr(g, (double)(float)d25 + (double)rdf32(sp0 - 0x2cu));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d30);
    d31 = fr(g, (double)(float)d28 + (double)rdf32(sp0 - 0x28u));
    wrf32(sp0 - 0x48u, (float)(double)(float)d31);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x50u, sp0 - 0x50u, 0x3f000000u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_60 = rd32(sp0 - 0x60u);
    loc_64 = rd32(sp0 - 0x64u);
    loc_68 = rd32(sp0 - 0x68u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_50_f = (double)rdf32(sp0 - 0x50u);
    loc_4c_f = (double)rdf32(sp0 - 0x4cu);
    loc_48_f = (double)rdf32(sp0 - 0x48u);
    goto L_102424b8;
L_1024270b: ;
    COW_AT(1024270b)
    wr32(sp0 - 0x6cu, 0x3f000000u);
    t72 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x50u);
    wr32(sp0 - 0x50u, t72);
    t73 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x54u);
    wr32(sp0 - 0x4cu, t73);
    t74 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x58u);
    wr32(sp0 - 0x48u, t74);
    t75 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x5cu);
    wr32(sp0 - 0x44u, t75);
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    d76 = fr(g, cow_bits2f(t72) + (double)rdf32(edi + 0x7cu));
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    wrf32(sp0 - 0x50u, (float)(double)(float)d76);
    d77 = fr(g, cow_bits2f(t73) + (double)rdf32(edi + 0x80u));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d77);
    d78 = fr(g, (double)(float)d76 + (double)rdf32(sp0 - 0x30u));
    d79 = fr(g, cow_bits2f(t74) + (double)rdf32(edi + 0x84u));
    wrf32(sp0 - 0x50u, (float)(double)(float)d78);
    d80 = fr(g, (double)(float)d77 + (double)rdf32(sp0 - 0x2cu));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d80);
    d81 = fr(g, d79 + (double)rdf32(sp0 - 0x28u));
    wrf32(sp0 - 0x48u, (float)(double)(float)d81);
    g->eax = sp0 - 0x50u;
    g->esp = sp0 - 0x68u;
    t82 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x50u, sp0 - 0x50u, 0x3f000000u);
    eax = t82;
    loc_50_f = (double)rdf32(sp0 - 0x50u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_48 = rd32(sp0 - 0x48u);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_10242792;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102421e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10242223u:
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
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x1024222du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242235u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242237u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242240u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024224cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242269u:
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
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x1024228cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102422b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102422e5u:
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
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x1024230du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x10242318u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x1024233fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024236cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x10242398u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102423c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102423ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102423d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102423d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x10242415u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102424b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        double loc_48_f;
        double loc_4c_f;
        double loc_50_f;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_48_f = rdf32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102425bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102425d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102425fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1024269fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102426a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102426a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102426adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102426bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102426c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1024270bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10242792u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        double loc_50_f;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x10242989u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102421e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102421e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
