/* f_0x100ae3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ae3f0(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
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
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ae410u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae410;
    case 0x100ae41cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae41c;
    case 0x100ae435u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae435;
    case 0x100ae452u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae452;
    case 0x100ae468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae468;
    case 0x100ae48au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae48a;
    case 0x100ae4b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae4b9;
    case 0x100ae4bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae4bf;
    case 0x100ae4c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae4c7;
    case 0x100ae4e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae4e9;
    case 0x100ae4f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae4f3;
    case 0x100ae4f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae4f7;
    case 0x100ae523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae523;
    case 0x100ae529u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae529;
    case 0x100ae52fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae52f;
    case 0x100ae531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x0 = ST(0); goto E_100ae531;
    case 0x100ae554u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae554;
    case 0x100ae568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae568;
    case 0x100ae571u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae571;
    case 0x100ae583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae583;
    case 0x100ae629u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae629;
    case 0x100ae63cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae63c;
    case 0x100ae67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae67c;
    case 0x100ae687u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae687;
    case 0x100ae68cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae68c;
    case 0x100ae691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae691;
    case 0x100ae6f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae6f1;
    case 0x100ae700u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae700;
    case 0x100ae717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae717;
    case 0x100ae729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae729;
    case 0x100ae73fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae73f;
    case 0x100ae74cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae74c;
    case 0x100ae768u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae768;
    case 0x100ae77eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae77e;
    case 0x100ae7dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100ae7dc;
    case 0x100ae7fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae7fb;
    case 0x100ae80au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae80a;
    case 0x100ae858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae858;
    case 0x100ae87bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae87b;
    case 0x100ae895u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ae895;
    case 0x100ae8a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100ae8a2;
    case 0x100ae8c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100ae8c0;
    case 0x100ae8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100ae8e2;
    default: break;
    }
#endif

    COW_AT(100ae3f0)
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4ae0u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_stdcall(g, COW_IMG(0x100875c0u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    cow_call_regs(g, COW_IMG(0x100ae3a0u), t5, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    wr32(sp0 - 0x24u, in_ebx);
    edx = t8;
    esi = COW_IMG(0x10480af0u);
    loc_1c = in_esi;
    loc_20 = in_edi;
    loc_24 = in_ebx;
L_100ae410: ;
    COW_AT(100ae410)
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
    COW_AT(100ae41c)
        if (rd32(eax + 0x138u) >> 0x1fu == 0u)
        {
            ecx = rd32(eax + 0x13cu) & 3u;
            ebx = rd32(eax + 0x138u) >> 0x1fu;
            goto L_100ae452;
        }
        ecx = rd32(eax + 0x13cu) & 3u;
        ebx = rd32(eax + 0x138u) >> 0x1fu;
    COW_AT(100ae435)
        t9 = rd32(eax + 0x174u);
        wr32(eax + 0x16cu, t9);
        wr32(rd32(esi) + 0x170u, t9);
        if (!(ecx & 1u))
        {
            edx = t9;
            goto L_100ae554;
        }
        edx = t9;
L_100ae452: ;
    COW_AT(100ae452)
        if ((int8_t)((rd16(COW_IMG(0x104808fcu)) | rd16(COW_IMG(0x1047fb40u))) >> 8u) < 0)
        {
    COW_AT(100ae468)
            t10 = rd32(rd32(esi) + 0x4cu);
            wr32(sp0 - 8u, t10);
            d11 = (double)(float)(double)rdf32(rd32(esi) + 0x48u);
            wrf32(sp0 - 0xcu, (float)d11);
            t12 = rd32(rd32(esi) + 0x44u);
            wr32(sp0 - 0x10u, t12);
            if ((rd32(rd32(esi) + 0x78u) & 0xff000000u) != 0u)
            {
                eax = rd32(esi);
                ecx = rd32(rd32(esi) + 0x78u) & 0xff000000u;
                loc_8 = t10;
                loc_c_f = d11;
                loc_10 = t12;
                x0 = (double)rdf32(rd32(esi) + 0x48u);
                goto L_100ae4bf;
            }
            eax = rd32(esi);
            loc_8 = t10;
            loc_c_f = d11;
            loc_10 = t12;
            x0 = (double)rdf32(rd32(esi) + 0x48u);
    COW_AT(100ae48a)
            wr32(sp0 - 0x28u, sp0 - 0x18u);
            wr32(sp0 - 0x2cu, 0x42480000u);
            wrf32(sp0 - 0x30u, (float)(double)(float)cow_bits2f(loc_8));
            wrf32(sp0 - 0x34u, (float)(double)(float)x0);
            wrf32(sp0 - 0x38u, (float)(double)(float)cow_bits2f(loc_10));
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t13 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, cow_f2bits((double)(float)cow_bits2f(loc_10)), cow_f2bits((double)(float)x0), cow_f2bits((double)(float)cow_bits2f(loc_8)), 0x42480000u, sp0 - 0x18u);
            if ((uint8_t)t13 != 1u) goto L_100ae529;
    COW_AT(100ae4b9)
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_8 = rd32(sp0 - 8u);
            loc_10 = rd32(sp0 - 0x10u);
            x0 = (double)rdf32(sp0 - 0x18u);
L_100ae531: ;
    COW_AT(100ae531)
            t16 = rd32(esi);
            wrf32(t16 + 0x28u, (float)x0);
            wr32(t16 + 0x24u, loc_10);
            wr32(t16 + 0x2cu, loc_8);
            t17 = rd32(esi);
            wr32(t17 + 4u, loc_10);
            wrf32(t17 + 8u, (float)x0);
            wr32(t17 + 0xcu, loc_8);
            edx = loc_8;
        }
L_100ae554: ;
    COW_AT(100ae554)
        if (!(rd32(rd32(esi) + 0x120u) >> 7u & 1u))
        {
            eax = rd32(esi);
        }
        else
        {
            eax = rd32(esi);
    COW_AT(100ae568)
            if ((rd32(eax + 0x78u) & 0xff000000u) == 0u)
            {
    COW_AT(100ae571)
                wr16(eax + 0x1fcu, 0x12cu);
                wr8(rd32(esi) + 0x1feu, 1u);
            }
    COW_AT(100ae583)
            t18 = rd32(rd32(esi) + 0x12cu) & 0xfbffffffu;
            wr32(rd32(esi) + 0x12cu, t18);
            t19 = rd32(rd32(esi) + 0x124u) & 0xdfffffffu;
            wr32(rd32(esi) + 0x124u, t19);
            t20 = rd32(rd32(esi) + 0x124u) & 0xbfffffffu;
            wr32(rd32(esi) + 0x124u, t20);
            t21 = rd32(rd32(esi) + 0x124u) & 0x7fffffffu;
            wr32(rd32(esi) + 0x124u, t21);
            t22 = rd32(rd32(esi) + 0x128u) | 0x20000u;
            wr32(rd32(esi) + 0x128u, t22);
            t23 = rd32(rd32(esi) + 0x12cu) & 0xfffffff7u;
            wr32(rd32(esi) + 0x12cu, t23);
            t24 = rd32(rd32(esi) + 0x128u) | 1u;
            wr32(rd32(esi) + 0x128u, t24);
            t25 = rd32(rd32(esi) + 0x13cu) & 0xfff7ffffu;
            wr32(rd32(esi) + 0x13cu, t25);
            t26 = rd32(esi);
            wr32(t26 + 0x20cu, 0u);
            if ((uint8_t)ebx != 0u)
            {
                eax = t26;
                edx = t24;
            }
            else
            {
                eax = t26;
                edx = t24;
    COW_AT(100ae629)
                g->eax = eax;
                g->esp = sp0 - 0x24u;
                t27 = cow_fastcall(g, COW_IMG(0x100933c0u), rd32(esi), edx, 0);
                t28 = g->edx;
                wr32(rd32(esi) + 0x204u, 0xbf800000u);
                eax = t27;
                edx = t28;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
            }
    COW_AT(100ae63c)
            g->ebx = ebx;
            g->esp = sp0 - 0x24u;
            cow_call_regs(g, COW_IMG(0x1008ee30u), eax, rd32(esi), g->edx, 1, 0);
            t29 = (rd32(rd32(esi) + 0x12cu) & 0xffff00ffu) | (rd32(rd32(esi) + 0x12cu) >> 8u & 0xf7u) << 8u;
            wr32(rd32(esi) + 0x12cu, t29);
            t30 = rd32(esi);
            wr32(t30 + 0xdcu, 0x64u);
            wr32(rd32(esi) + 0xe0u, 0x64u);
            if (!(rd32(rd32(esi) + 0x120u) >> 9u & 1u))
            {
                eax = rd32(esi);
                edx = t30;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
            }
            else
            {
                eax = rd32(esi);
                ecx = rd32(rd32(esi) + 0x120u) >> 9u;
                edx = t30;
    COW_AT(100ae67c)
                if (rd8(eax + 0xeeu) == 3u)
                {
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_24 = rd32(sp0 - 0x24u);
                }
                else
                {
                    ecx = (ecx & 0xffffff00u) | rd8(eax + 0xeeu);
    COW_AT(100ae687)
                    if ((uint8_t)ecx == 4u)
                    {
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_24 = rd32(sp0 - 0x24u);
                    }
                    else
                    {
    COW_AT(100ae68c)
                        if ((uint8_t)ecx == 5u)
                        {
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_24 = rd32(sp0 - 0x24u);
                        }
                        else
                        {
    COW_AT(100ae691)
                            wr32(sp0 - 0x28u, 0u);
                            t31 = rd32(eax + 0x1a8u);
                            wr32(eax + 0x1a4u, t31);
                            t32 = rd32(rd32(esi) + 0x1a8u);
                            wr32(rd32(rd32(esi) + 0xa0u) + 0x7c8u, t32);
                            t33 = rd32(esi);
                            wr32(rd32(t33 + 0xa0u) + 0x7d8u, 0x20202020u);
                            g->ebx = ebx;
                            g->esp = sp0 - 0x24u;
                            cow_thiscall(g, COW_IMG(0x100d5430u), rd32(rd32(esi) + 0xa0u), 1, 0u);
                            wr32(sp0 - 0x28u, 0u);
                            wr8(rd32(rd32(esi) + 0xa0u) + 0x8b4u, 1u);
                            g->eax = rd32(rd32(rd32(esi) + 0xa0u));
                            g->edx = rd32(esi);
                            t34 = rd32(rd32(rd32(esi) + 0xa0u));
                            t35 = rd32(esi);
                            t36 = cow_thiscall(g, rd32(t34 + 0x150u), rd32(t35 + 0xa0u), 1, 0u);
                            t37 = g->edx;
                            eax = t36;
                            edx = t37;
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_24 = rd32(sp0 - 0x24u);
                        }
                    }
                }
            }
        }
    }
    COW_AT(100ae6f1)
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        esi = esi + 4u;
        goto L_100ae410;
    }
    COW_AT(100ae700)
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        ebx = loc_24;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        ebx = loc_24;
    COW_AT(100ae717)
        if (rd32(ecx + 0x138u) >> 0x1fu != 0u)
        {
            edx = rd32(ecx + 0x138u) >> 0x1fu;
        }
        else
        {
            edx = rd32(ecx + 0x138u) >> 0x1fu;
    COW_AT(100ae729)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t38 = cow_thiscall(g, COW_IMG(0x1008f2a0u), ecx, 0);
            t39 = g->ecx;
            t40 = g->edx;
            if ((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 1u)
            {
                eax = (t38 & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
                edx = (t40 & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
                goto L_100ae74c;
            }
            eax = (t38 & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
            ecx = t39;
            edx = (t40 & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
    COW_AT(100ae73f)
            if (rd8(COW_IMG(0x10485ff4u)) == 0u)
            {
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                goto L_100ae7dc;
            }
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485ff4u));
L_100ae74c: ;
    COW_AT(100ae74c)
            g->eax = eax;
            g->edx = edx;
            t41 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            g->esp = sp0 - 0x20u;
            t42 = cow_thiscall(g, COW_IMG(0x100929a0u), t41, 0);
            t43 = g->ecx;
            t44 = g->edx;
            g->ecx = t43;
            g->edx = t44;
            t45 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            t46 = g->ecx;
            t47 = g->edx;
            if (t45 == 0u)
            {
                ecx = t46;
                edx = t47;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                ecx = t46;
    COW_AT(100ae768)
                if (rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xa0u) == 0u)
                {
                    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
                else
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    COW_AT(100ae77e)
                    wr32(sp0 - 0x10u, rd32(COW_IMG(0x1035cfd0u)));
                    wr32(sp0 - 0xcu, rd32(COW_IMG(0x1035cfd4u)));
                    wr32(sp0 - 8u, rd32(COW_IMG(0x1035cfd8u)));
                    wr32(sp0 - 0x24u, eax + 4u);
                    wr32(sp0 - 4u, rd32(COW_IMG(0x1035cfdcu)));
                    g->eax = eax + 4u;
                    g->edx = rd32(COW_IMG(0x1035cfdcu));
                    t48 = rd32(COW_IMG(0x1035cfdcu));
                    g->esp = sp0 - 0x24u;
                    t49 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t50 = g->edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, COW_IMG(0x1001e780u), t49, 1, rd32(sp0 - 0x24u));
                    t51 = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xa0u);
                    wr32(sp0 - 0x24u, t51);
                    wr32(sp0 - 0x28u, sp0 - 0x10u);
                    g->eax = t51;
                    g->edx = sp0 - 0x10u;
                    g->esp = sp0 - 0x28u;
                    t52 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                    t53 = g->edx;
                    g->ebx = ebx;
                    g->edx = t53;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, COW_IMG(0x10021680u), t52, 2, sp0 - 0x10u, rd32(sp0 - 0x24u));
                    t54 = g->ecx;
                    t55 = g->edx;
                    ecx = t54;
                    edx = t55;
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
            }
        }
    }
L_100ae7dc: ;
    COW_AT(100ae7dc)
    t56 = rd32(COW_IMG(0x10489904u));
    wr8(COW_IMG(0x10485ff4u), 0u);
    wr32(sp0 - 0x24u, t56);
    g->eax = t56;
    g->esp = sp0 - 0x20u;
    t57 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t56);
    t58 = g->ecx;
    t59 = g->edx;
    g->ecx = t58;
    g->edx = t59;
    t60 = cow_stdcall(g, COW_IMG(0x100ae350u), 0);
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 == 2u)
    {
        eax = t60;
        ecx = t61;
        edx = t62;
    }
    else
    {
        eax = t60;
        edx = t62;
    COW_AT(100ae7fb)
        wr32(sp0 - 0x24u, rd32(COW_IMG(0x10489908u)));
        g->eax = eax;
        t63 = rd32(COW_IMG(0x10489908u));
        g->esp = sp0 - 0x20u;
        t64 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t63, edx, 1, 1, t63);
        t65 = g->ecx;
        t66 = g->edx;
        eax = t64;
        ecx = t65;
        edx = t66;
    }
    COW_AT(100ae80a)
    wr32(sp0 - 0x24u, 0u);
    wr32(COW_IMG(0x10489904u), 0u);
    wr32(COW_IMG(0x10489908u), 0u);
    wr32(COW_IMG(0x104898fcu), 0u);
    wr8(COW_IMG(0x104804c2u), 0u);
    wr8(COW_IMG(0x104808f0u), 0u);
    wr8(COW_IMG(0x10487e48u), 0u);
    wr16(COW_IMG(0x1047fb40u), 0u);
    wr16(COW_IMG(0x104804c4u), 0u);
    wr16(COW_IMG(0x104808fcu), 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t67 = cow_call_regs(g, COW_IMG(0x10123e60u), eax, g->ecx, g->edx, 1, 1, 0u);
    t68 = g->ecx;
    t69 = g->edx;
    if (rd8(COW_IMG(0x10488100u)) == 0u)
    {
        eax = (t67 & 0xffffff00u) | rd8(COW_IMG(0x10488100u));
        ecx = t68;
        edx = t69;
    }
    else
    {
        eax = (t67 & 0xffffff00u) | rd8(COW_IMG(0x10488100u));
        ecx = t68;
        edx = t69;
    COW_AT(100ae858)
        wr8(COW_IMG(0x10482f18u), 0u);
        wr16(COW_IMG(0x1047fb40u), 0u);
        wr16(COW_IMG(0x104804c4u), 0u);
        wr16(COW_IMG(0x104808fcu), 0u);
        wr8(COW_IMG(0x10485a70u), 0u);
    }
    COW_AT(100ae87b)
    wr8(COW_IMG(0x104807f5u), 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t70 = cow_stdcall(g, COW_IMG(0x100ba080u), 0);
    t71 = g->ecx;
    t72 = g->edx;
    g->ecx = t71;
    g->edx = t72;
    t73 = cow_stdcall(g, COW_IMG(0x1009f3f0u), 0);
    t74 = g->ecx;
    t75 = g->edx;
    if (rd16(COW_IMG(0x104896e6u)) == 0u)
    {
        eax = t73;
        ecx = t74;
        edx = t75;
    }
    else
    {
        eax = t73;
        edx = t75;
    COW_AT(100ae895)
        wr32(sp0 - 0x24u, 1u);
        g->edx = edx;
        t76 = rd32(COW_IMG(0x10663888u));
        g->esp = sp0 - 0x20u;
        t77 = cow_call_regs(g, COW_IMG(0x101fa420u), eax, t76, g->edx, 0, 1, 1u);
        t78 = g->ecx;
        t79 = g->edx;
        eax = t77;
        ecx = t78;
        edx = t79;
    }
    COW_AT(100ae8a2)
    t80 = rd8(COW_IMG(0x104804c3u));
    wr8(COW_IMG(0x104882b4u), 8u);
    wr16(COW_IMG(0x104896e6u), 0u);
    wr16(COW_IMG(0x104897f6u), 0u);
    if ((uint8_t)t80 != 0u)
    {
        eax = (eax & 0xffffff00u) | t80;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t80;
    COW_AT(100ae8c0)
        wr32(sp0 - 0x24u, 0x1eu);
        wr32(sp0 - 0x28u, 0x3f800000u);
        wr8(COW_IMG(0x104804c3u), 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t81 = cow_cdecl(g, COW_IMG(0x10035de0u), 2, 0x3f800000u, 0x1eu);
        t82 = g->ecx;
        t83 = g->edx;
        wr32(sp0 - 0x2cu, 0x1eu);
        wr32(sp0 - 0x30u, 0x3f800000u);
        g->esp = sp0 - 0x28u;
        t84 = cow_cdecl(g, COW_IMG(0x10035d40u), 2, 0x3f800000u, 0x1eu);
        eax = t84;
    }
    COW_AT(100ae8e2)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    g->edx = rd32(COW_IMG(0x104e2150u));
    t85 = rd32(COW_IMG(0x104e2150u));
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10136870u), eax, rd32(t85 + 0x30u), g->edx, 0, 3, 0u, 0u, 0u);
    t86 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    g->edx = t86;
    t87 = rd32(COW_IMG(0x104e2154u));
    t88 = cow_call_regs(g, COW_IMG(0x10136870u), t87, rd32(t87 + 0x30u), g->edx, 0, 3, 0u, 0u, 0u);
    t89 = g->edx;
    wr32(sp0 - 0x24u, 1u);
    t90 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    wr32(sp0 - 0x28u, t90);
    g->edx = t89;
    t91 = rd32(COW_IMG(0x10578204u));
    t92 = cow_call_regs(g, COW_IMG(0x1015e790u), t88, COW_IMG(0x10621838u), g->edx, 0, 2, t90, 1u);
    t93 = g->edx;
    g->edx = t93;
    t94 = cow_thiscall(g, COW_IMG(0x1013bf40u), t91, 0);
    t95 = g->edx;
    g->edx = t95;
    t96 = cow_thiscall(g, COW_IMG(0x1022a6d0u), rd32(COW_IMG(0x106671d4u)), 0);
    t97 = g->edx;
    g->edx = t97;
    t98 = rd32(COW_IMG(0x10663aacu));
    t99 = cow_call_regs(g, COW_IMG(0x101fcfb0u), t96, t98, g->edx, 1, 0);
    t100 = g->ecx;
    t101 = g->edx;
    g->ebx = ebx;
    g->ecx = t100;
    g->edx = t101;
    t102 = cow_call_regs(g, COW_IMG(0x100955d0u), t99, g->ecx, g->edx, 1, 0);
    t103 = g->ecx;
    t104 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    cow_thiscall_cdecl(g, COW_IMG(0x100fc320u), t103, 1, 0u);
    wr8(COW_IMG(0x10489900u), 0u);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    return;
L_100ae4bf: ;
    COW_AT(100ae4bf)
    if (ecx != 0x1000000u) goto L_100ae531;
    COW_AT(100ae4c7)
    t14 = rd32(eax + 0x120u);
    if ((rd32(eax + 0x128u) >> 0xeu | t14 >> 0x15u | t14 >> 0x14u) & 1u) goto L_100ae52f;
    edx = t14 >> 0x14u;
    COW_AT(100ae4e9)
    if (rd8(eax + 0xeeu) == 3u) goto L_100ae52f;
    eax = (eax & 0xffffff00u) | rd8(eax + 0xeeu);
    COW_AT(100ae4f3)
    if ((uint8_t)eax == 4u) goto L_100ae52f;
    COW_AT(100ae4f7)
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wrf32(sp0 - 0x2cu, (float)(double)(float)cow_bits2f(loc_8));
    wrf32(sp0 - 0x30u, (float)(double)(float)x0);
    wrf32(sp0 - 0x34u, (float)(double)(float)cow_bits2f(loc_10));
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x24u;
    t15 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, cow_f2bits((double)(float)cow_bits2f(loc_10)), cow_f2bits((double)(float)x0), cow_f2bits((double)(float)cow_bits2f(loc_8)), sp0 - 0x14u);
    if ((uint8_t)t15 != 1u) goto L_100ae529;
    COW_AT(100ae523)
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_8 = rd32(sp0 - 8u);
    loc_10 = rd32(sp0 - 0x10u);
    x0 = (double)rdf32(sp0 - 0x14u);
    goto L_100ae531;
L_100ae529: ;
    COW_AT(100ae529)
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_8 = rd32(sp0 - 8u);
    loc_10 = rd32(sp0 - 0x10u);
    x0 = (double)rdf32(sp0 - 0xcu);
    goto L_100ae531;
L_100ae52f: ;
    COW_AT(100ae52f)
    goto L_100ae531;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ae3f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ae410u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100ae41cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae435u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae452u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae468u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae48au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae4b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ae4bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae4c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100ae4e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100ae4f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100ae4f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100ae523u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x100ae529u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae52fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100ae531u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae554u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae568u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae571u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae583u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae629u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae63cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae67cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae687u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae68cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae691u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae6f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae700u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae717u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae729u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae73fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae74cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae768u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae77eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae7dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae7fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae80au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae858u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae87bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae895u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae8a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae8c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ae8e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae3f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100ae3f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
