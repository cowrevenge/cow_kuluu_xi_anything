/* f_0x10240e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10240e90(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d3;
    double d30;
    double d34;
    double d38;
    double d4;
    double d42;
    double d70;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_11c;
    uint32_t loc_120;
    double loc_130_f;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t29;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
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
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 332u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10240ed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebp = rd32(sp0 - 0x110u); g->ebp = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_10240ed5;
    case 0x10240edcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebp = rd32(sp0 - 0x110u); g->ebp = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_10240edc;
    case 0x10240fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_10240fc0;
    case 0x10240fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_10240fd4;
    case 0x10241000u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_130_f = rdf32(sp0 - 0x130u); goto E_10241000;
    case 0x1024105cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_130_f = rdf32(sp0 - 0x130u); goto E_1024105c;
    case 0x102410b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102410b6;
    case 0x102410beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_102410be;
    case 0x102410c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_102410c6;
    case 0x102410dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_102410df;
    case 0x102410e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_102410e4;
    case 0x102410fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_102410fd;
    case 0x10241103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_10241103;
    case 0x10241117u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_10241117;
    case 0x10241129u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); goto E_10241129;
    case 0x10241131u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_10241131;
    default: break;
    }
#endif

    COW_AT(10240e90)
    wr32(sp0 - 0x10cu, in_ebx);
    wr32(sp0 - 0x110u, in_ebp);
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, in_edi);
    wr32(sp0 - 0x11cu, COW_IMG(0x1036c19cu));
    g->edx = in_edx;
    g->esp = sp0 - 0x118u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t2 = g->edx;
    d3 = (double)rdf32(self + 0x14u);
    d4 = (double)rdf32(COW_IMG(0x1032961cu));
    wr16(sp0 - 0x108u, 0u);
    wr16(sp0 - 0x106u, 0u);
    wr16(sp0 - 0x104u, 0u);
    wr16(sp0 - 0x102u, 0u);
    if ((cow_fsw(g, d3, d4, 0u) & 0x4100u) != 0u)
    {
        edx = t2;
        edi = t1;
    }
    else
    {
        edx = t2;
        edi = t1;
    COW_AT(10240ed5)
        wr32(self + 0x14u, 0x3f800000u);
    }
    COW_AT(10240edc)
    wr32(sp0 - 0x11cu, sp0 - 0x108u);
    g->esp = sp0 - 0x118u;
    t5 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x108u, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x108u);
    wr32(sp0 - 0x11cu, 0x80808080u);
    wr32(sp0 - 0x120u, self + 0x24u);
    t6 = (((uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x44u) + (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u))) - 0x10u;
    wr32(sp0 - 0x124u, t6);
    t7 = (((uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x42u) + (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu)) >> 1u))) + 0x70u;
    wr32(sp0 - 0x128u, t7);
    g->eax = t7;
    g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
    t8 = rd32(COW_IMG(0x106218b8u));
    t9 = rd32(COW_IMG(0x106218b4u));
    t10 = rd32(rd32(edi) + 0x134u);
    g->esp = sp0 - 0x104u;
    t11 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t7, t6, self + 0x24u, 0x80808080u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x108u));
    t12 = g->edx;
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 1u);
    t13 = (t11 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x48u) - rd16(rd32(self + 8u) + 0x44u));
    wr32(sp0 - 0x128u, t13);
    t14 = (t12 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x46u) - rd16(rd32(self + 8u) + 0x42u));
    wr32(sp0 - 0x12cu, t14);
    t15 = ((edi & 0xffff0000u) | rd16(rd32(self + 8u) + 0x44u)) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x130u, t15);
    t16 = ((in_ebx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x42u)) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x134u, t16);
    g->eax = t16;
    g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
    t17 = rd32(self + 8u);
    t18 = rd32(COW_IMG(0x106218b8u));
    t19 = rd32(COW_IMG(0x106218b4u));
    t20 = rd16(rd32(self + 8u) + 0x42u);
    g->esp = sp0 - 0x118u;
    t21 = cow_thiscall(g, COW_IMG(0x1011a5a0u), t17, 7, t16, t15, t14, t13, 1u, 0u, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    d24 = (double)rdf32(self + 0x14u);
    if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) != 0u)
    {
        ecx = t22;
        edx = t23;
        ebx = (in_ebx & 0xffff0000u) | t20;
    }
    else
    {
        eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        ecx = t22;
        edx = t23;
        ebx = (in_ebx & 0xffff0000u) | t20;
        ebp = t10;
    COW_AT(10240fc0)
        d25 = (double)rdf32(self + 0x14u);
        if (d25 < (double)rdf32(COW_IMG(0x1033cb1cu)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x1033cb1cu)), 0u);
    COW_AT(10240fd4)
            d26 = (double)rdf32(self + 0x14u);
            wr32(sp0 - 0x11cu, 0u);
            wr32(sp0 - 0x120u, 0u);
            wr32(sp0 - 0x124u, 1u);
            d27 = (double)rdf32(self + 0x14u);
            wr32(sp0 - 0x128u, 0x80f06060u);
            wr32(sp0 - 0x12cu, 0x3f800000u);
            wr32(sp0 - 0x130u, ecx);
            d28 = (double)(float)fr(g, d27 + d27);
            wrf32(sp0 - 0x130u, (float)d28);
            if (!(d26 < (double)rdf32(COW_IMG(0x10329a08u))))
            {
                edi = rd32(self + 8u);
                loc_130_f = d28;
    COW_AT(1024105c)
                t37 = (uint32_t)(int16_t)rd16(edi + 0x44u) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u);
                d38 = fr(g, (double)rdf32(self + 0x14u) - (double)rdf32(COW_IMG(0x10329a08u)));
                wr32(sp0 - 0x134u, t37);
                t39 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
                g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
                t40 = rd32(COW_IMG(0x106218b8u));
                t41 = rd32(COW_IMG(0x106218b4u));
                d42 = fr(g, d38 * (double)rdf32(COW_IMG(0x1033cb18u)));
                fpush(g, d42);
                g->esp = sp0 - 0x134u;
                t43 = cow_call_regs(g, COW_IMG(0x10311c6cu), t39, g->ecx, g->edx, 1, 0);
                t44 = g->edx;
                eax = t43;
                edx = t44;
                ebx = (uint32_t)((int32_t)t39 >> 1u) + (uint32_t)(int16_t)rd16(edi + 0x42u) - t43;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
                edi = rd32(self + 8u);
                loc_130_f = d28;
    COW_AT(10241000)
                t29 = (uint32_t)(int16_t)rd16(edi + 0x44u) + (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u);
                d30 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) - (double)rdf32(self + 0x14u));
                wr32(sp0 - 0x134u, t29);
                t31 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
                g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
                t32 = rd32(COW_IMG(0x106218b8u));
                t33 = rd32(COW_IMG(0x106218b4u));
                d34 = fr(g, d30 * (double)rdf32(COW_IMG(0x1032ae60u)));
                fpush(g, d34);
                g->esp = sp0 - 0x134u;
                t35 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31, g->ecx, g->edx, 1, 0);
                t36 = g->edx;
                eax = (uint32_t)(int16_t)rd16(edi + 0x42u);
                edx = t36;
                ebx = (uint32_t)((int32_t)t31 >> 1u) + (uint32_t)(int16_t)rd16(edi + 0x42u) - t35;
            }
    COW_AT(102410b6)
            wr32(sp0 - 0x138u, ebx);
            g->edx = edx;
            g->esp = sp0 - 0x118u;
            cow_thiscall(g, COW_IMG(0x1011fc80u), ebp, 8, ebx, rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu));
            t45 = g->ecx;
            t46 = g->edx;
            ecx = t45;
            edx = t46;
        }
    }
    COW_AT(102410be)
    if (rd32(self + 0x18u) != 0xfffffffeu)
    {
        eax = rd32(self + 0x18u);
    COW_AT(102410df)
        if (eax != 0xffffffffu)
        {
    COW_AT(102410fd)
            wr32(sp0 - 0x11cu, eax);
            if ((int32_t)eax > 1)
            {
                loc_11c = eax;
    COW_AT(10241117)
                wr32(sp0 - 0x120u, 0x5eu);
                wr32(sp0 - 0x124u, 8u);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x11cu;
                t56 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x5eu);
                t57 = g->ecx;
                wr32(sp0 - 0x120u, t56);
                wr32(sp0 - 0x124u, sp0 - 0x100u);
                eax = t56;
                ecx = t57;
                edx = sp0 - 0x100u;
                loc_120 = t56;
            }
            else
            {
                loc_11c = eax;
    COW_AT(10241103)
                wr32(sp0 - 0x120u, 0x5du);
                wr32(sp0 - 0x124u, 8u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x11cu;
                t54 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x5du);
                t55 = g->edx;
                wr32(sp0 - 0x120u, t54);
                wr32(sp0 - 0x124u, sp0 - 0x100u);
                eax = t54;
                ecx = sp0 - 0x100u;
                edx = t55;
                loc_120 = t54;
            }
    COW_AT(10241129)
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp0 - 0x110u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, loc_120, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
            t58 = g->ecx;
            ecx = t58;
        }
        else
        {
    COW_AT(102410e4)
            wr32(sp0 - 0x11cu, 0x5cu);
            wr32(sp0 - 0x120u, 8u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x118u;
            t50 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x5cu);
            t51 = g->ecx;
            t52 = g->edx;
            wr32(sp0 - 0x124u, t50);
            wr32(sp0 - 0x128u, sp0 - 0x100u);
            g->ebx = ebx;
            g->ecx = t51;
            g->esp = sp0 - 0x114u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t50, 8u, 0x5cu, rd32(sp0 - 0x118u));
            t53 = g->ecx;
            ecx = t53;
        }
    }
    else
    {
        eax = rd32(self + 0x18u);
    COW_AT(102410c6)
        wr32(sp0 - 0x11cu, 0x5bu);
        wr32(sp0 - 0x120u, 8u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x118u;
        t47 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x5bu);
        t48 = g->ecx;
        wr32(sp0 - 0x124u, t47);
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        g->ebx = ebx;
        g->ecx = t48;
        g->esp = sp0 - 0x114u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t47, 8u, 0x5bu, rd32(sp0 - 0x118u));
        t49 = g->ecx;
        ecx = t49;
    }
    COW_AT(10241131)
    wr32(sp0 - 0x11cu, 0x80808080u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    t59 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - 0x1c0u) >> 0x1fu)) >> 1u) + 0x164u;
    wr32(sp0 - 0x128u, t59);
    t60 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu)) >> 1u) + 0x1aau;
    wr32(sp0 - 0x12cu, t60);
    g->eax = t60;
    g->ecx = (ecx & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    g->edx = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x200u) >> 0x1fu);
    t61 = rd16(COW_IMG(0x106218bau));
    t62 = rd16(COW_IMG(0x106218b6u));
    t63 = rd32(COW_IMG(0x106218b8u));
    t64 = rd32(COW_IMG(0x106218b4u));
    g->esp = sp0 - 0x100u;
    t65 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t60, t59, sp0 - 0x100u, 0u, 0x80808080u, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
    t66 = g->ecx;
    t67 = g->edx;
    g->ecx = t66;
    g->edx = t67;
    t68 = rd16(sp0 - 0x106u);
    t69 = rd16(sp0 - 0x108u);
    d70 = fr(g, (double)rdf32(self + 0x14u) * (double)rdf32(COW_IMG(0x1032a3c8u)));
    fpush(g, d70);
    g->esp = sp0 - 0x12cu;
    t71 = cow_call_regs(g, COW_IMG(0x10311c6cu), t65, g->ecx, g->edx, 1, 0);
    t72 = g->ecx;
    t73 = g->edx;
    wr32(sp0 - 0x130u, t71);
    wr32(sp0 - 0x134u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x138u, sp0 - 0x100u);
    g->ebx = (uint32_t)(int16_t)t68 + 2u;
    g->ecx = t72;
    g->edx = t73;
    g->esp = sp0 - 0x124u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10352ff0u), t71, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t74 = g->ecx;
    t75 = g->edx;
    wr32(sp0 - 0x13cu, 0x80808080u);
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr8(sp0 + ~ecx - 0x101u, 0x25u);
    wr8(sp0 + ~ecx - 0x100u, (uint8_t)eax);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    t76 = (uint32_t)(int16_t)t68 + 2u;
    wr32(sp0 - 0x144u, t76);
    t77 = (uint32_t)(int16_t)t69 + 0x110u;
    wr32(sp0 - 0x148u, t77);
    g->eax = eax;
    g->edx = t75;
    t78 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t77, t76, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t79 = g->edx;
    g->ebx = rd32(sp0 - 0x10cu);
    g->esi = rd32(sp0 - 0x114u);
    g->edi = rd32(sp0 - 0x118u);
    g->ebp = rd32(sp0 - 0x110u);
    g->edx = t79;
    return t78;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10240e90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10240ed5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebp = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x10cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10240edcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebp = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x10cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10240fc0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x10240fd4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x10241000u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_130_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_130_f = rdf32(sp0 - 0x130u);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x12cu, 0x3f800000u);
        wr32(sp0 - 0x128u, 0x80f06060u);
        wr32(sp0 - 0x124u, 1u);
        wr32(sp0 - 0x120u, 0u);
        wr32(sp0 - 0x11cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024105cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_130_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_130_f = rdf32(sp0 - 0x130u);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x12cu, 0x3f800000u);
        wr32(sp0 - 0x128u, 0x80f06060u);
        wr32(sp0 - 0x124u, 1u);
        wr32(sp0 - 0x120u, 0u);
        wr32(sp0 - 0x11cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102410b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x102410beu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x102410c6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x102410dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x102410e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x102410fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x10241103u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x10241117u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x10241129u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10241131u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10240e90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10240e90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
