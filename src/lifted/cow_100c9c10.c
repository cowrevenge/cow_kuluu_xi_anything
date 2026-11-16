/* f_0x100c9c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c9c10(Guest* g)
{
    double d111;
    double d112;
    double d113;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d119;
    double d12;
    double d120;
    double d121;
    double d132;
    double d146;
    double d16;
    double d20;
    double d29;
    double d30;
    double d44;
    double d56;
    double d57;
    double d58;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d76;
    double d77;
    double d78;
    double d79;
    double d8;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d93;
    double d94;
    double d95;
    double d96;
    double d97;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_1c_f;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    double loc_50_f;
    int64_t q47;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
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
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
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
    uint32_t t87;
    uint32_t t9;
    uint32_t t98;
    uint32_t t99;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 156u);

    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr8(sp0 - 0x51u, 0u);
    eax = in_eax;
    edx = in_edx;
    esi = self + 0x770u;
    edi = 0u;
L_100c9c25: ;
    if (rd32(esi) == 0u)
    {
        ecx = rd32(esi);
        goto L_100c9c40;
    }
    ecx = rd32(esi);
    t1 = rd32(ecx);
    wr8(sp0 - 0x51u, 1u);
    g->eax = t1;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1e4u), ecx, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_100ca306;
    eax = t2;
    ecx = t3;
    edx = t4;
L_100c9c40: ;
    if ((int32_t)(edi + 1u) < 8)
    {
        esi = esi + 4u;
        edi = edi + 1u;
        goto L_100c9c25;
    }
    if (rd8(sp0 - 0x51u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x51u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t5 = cow_stdcall(g, COW_IMG(0x100877b0u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        d8 = cow_take_float(g);
        wrf32(sp0 - 0x50u, (float)(double)(float)d8);
        if (!(d8 <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            ecx = t6;
            edx = t7;
            loc_50_f = (double)(float)d8;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t9 = cow_stdcall(g, COW_IMG(0x100877f0u), 0);
            t10 = g->ecx;
            t11 = g->edx;
            d12 = cow_take_float(g);
            wrf32(sp0 - 0x4cu, (float)(double)(float)d12);
            g->ecx = t10;
            g->edx = t11;
            t13 = cow_stdcall(g, COW_IMG(0x10087770u), 0);
            t14 = g->ecx;
            t15 = g->edx;
            d16 = cow_take_float(g);
            wrf32(sp0 - 0x2cu, (float)(double)(float)d16);
            wr32(sp0 - 0x28u, 0u);
            g->ecx = t14;
            g->edx = t15;
            t17 = cow_stdcall(g, COW_IMG(0x10087790u), 0);
            t18 = g->ecx;
            t19 = g->edx;
            d20 = cow_take_float(g);
            wrf32(sp0 - 0x24u, (float)(double)(float)d20);
            t21 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            wr32(sp0 - 0x64u, t21 + 0x44u);
            g->eax = t21 + 0x44u;
            g->edx = rd32(self);
            t22 = rd32(self);
            t23 = cow_thiscall_cdecl(g, rd32(t22 + 0x1bcu), self, 1, t21 + 0x44u);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(sp0 - 0x68u, t23);
            wr32(sp0 - 0x6cu, sp0 - 0x38u);
            g->eax = sp0 - 0x38u;
            t26 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x38u, t23, rd32(sp0 - 0x64u));
            wr32(sp0 - 0x70u, sp0 - 0x38u);
            wr32(sp0 - 0x74u, sp0 - 0x38u);
            wr32(sp0 - 0x34u, 0u);
            g->ecx = sp0 - 0x38u;
            g->edx = sp0 - 0x38u;
            g->esp = sp0 - 0x6cu;
            cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x38u, sp0 - 0x38u);
            t27 = g->ecx;
            t28 = g->edx;
            d29 = cow_take_float(g);
            wr32(sp0 - 0x78u, sp0 - 0x38u);
            d30 = (double)(float)fr(g, d29 + (double)rdf32(sp0 - 0x4cu));
            wrf32(sp0 - 0x3cu, (float)d30);
            g->esp = sp0 - 0x74u;
            t31 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x38u, g->ecx, g->edx, 1, 1, sp0 - 0x38u);
            t32 = rd32(sp0 - 0x3cu);
            wr32(sp0 - 0x7cu, t32);
            wr32(sp0 - 0x80u, sp0 - 0x38u);
            g->ecx = t32;
            g->edx = sp0 - 0x38u;
            g->esp = sp0 - 0x78u;
            t33 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x38u, t32);
            t34 = g->ecx;
            t35 = g->edx;
            g->ecx = t34;
            g->edx = t35;
            g->esp = sp0 - 0x80u;
            t36 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            t37 = g->ecx;
            t38 = g->edx;
            wr32(sp0 - 0x84u, t36 + 0x44u);
            wr32(sp0 - 0x88u, sp0 - 0x38u);
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x38u, t36 + 0x44u);
            wr32(sp0 - 0x8cu, sp0 - 0x2cu);
            wr32(sp0 - 0x90u, sp0 - 0x38u);
            wr32(sp0 - 0x94u, sp0 - 0x38u);
            g->eax = sp0 - 0x38u;
            g->edx = sp0 - 0x38u;
            g->esp = sp0 - 0x88u;
            t39 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x38u, sp0 - 0x38u, sp0 - 0x2cu);
            t40 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x98u, sp0 - 0x38u);
            g->ecx = sp0 - 0x38u;
            g->edx = t40;
            g->esp = sp0 - 0x94u;
            t41 = cow_call_regs(g, COW_IMG(0x100274b0u), t39, g->ecx, g->edx, 1, 1, sp0 - 0x38u);
            t42 = g->ecx;
            t43 = g->edx;
            g->edx = t43;
            d44 = fr(g, fr(g, atan2((double)rdf32(sp0 - 0x38u), (double)rdf32(sp0 - 0x30u))) * (double)rdf32(COW_IMG(0x10331378u)));
            fpush(g, d44);
            g->esp = sp0 - 0x60u;
            t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), t41, g->ecx, g->edx, 1, 0);
            t46 = g->edx;
            q47 = (int64_t)cow_muls(0x88888889u, t45);
            t48 = (uint32_t)((int32_t)(t45 + cow_qhi(q47)) >> 3u);
            wr32(sp0 - 0x64u, sp0 - 0x2cu);
            wr32(sp0 - 0x44u, 0u);
            g->eax = -(t48 * 3u) - (t48 >> 0x1fu) * 3u - 0xcu;
            g->edx = rd32(self);
            t49 = rd32(self);
            t50 = cow_thiscall_cdecl(g, rd32(t49 + 0x1bcu), self, 1, sp0 - 0x2cu);
            t51 = g->ecx;
            t52 = g->edx;
            wr32(sp0 - 0x68u, t50);
            wr32(sp0 - 0x6cu, sp0 - 0x38u);
            g->eax = sp0 - 0x38u;
            g->edx = t52;
            t53 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x38u, t50, sp0 - 0x2cu);
            t54 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x70u, sp0 - 0x38u);
            g->esp = sp0 - 0x6cu;
            t55 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x38u);
            d56 = cow_take_float(g);
            d57 = fr(g, (double)rdf32(sp0 - 0x50u) - d56);
            if (!(d57 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t55 & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                esi = -(t48 * 0xfu) - (t48 >> 0x1fu) * 0xfu - 0x3cu;
                x0 = d57;
            }
            else
            {
                eax = (t55 & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                esi = -(t48 * 0xfu) - (t48 >> 0x1fu) * 0xfu - 0x3cu;
                x0 = d57;
                x0 = -x0;
            }
            d58 = (double)rdf32(sp0 - 0x4cu);
            if (!(x0 < d58))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d58, 0u);
                loc_44 = 0u;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d58, 0u);
                wr32(sp0 - 0x44u, 1u);
                loc_44 = 1u;
            }
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0x3f800000u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x14u, 0x3f800000u);
            g->eax = eax;
            g->esp = sp0 - 0x60u;
            t59 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
            wr32(sp0 - 0x4cu, esi);
            t60 = rd32(t59 + 4u);
            wr32(sp0 - 0xcu, t60);
            wr32(sp0 - 0x40u, self + 0x770u);
            wr32(sp0 - 0x3cu, 8u);
            wr32(sp0 - 0x64u, in_ebx);
            eax = self + 0x770u;
            loc_4c = esi;
            loc_40 = self + 0x770u;
            loc_3c = 8u;
L_100c9e23: ;
            if (rd32(eax) != 0u)
            {
                ebx = rd32(eax);
                d61 = (double)(float)fr(g, (double)(int32_t)loc_4c * (double)rdf32(COW_IMG(0x1032a840u)));
                wrf32(sp0 - 0x1cu, (float)d61);
                d62 = fr(g, (double)(int32_t)loc_4c * (double)rdf32(COW_IMG(0x1032a840u)));
                if ((cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    loc_1c_f = d61;
                }
                else
                {
                    eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    loc_1c_f = d61;
                    d63 = (double)(float)fr(g, loc_1c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x1cu, (float)d63);
                    loc_1c_f = d63;
                }
                if (!(loc_1c_f < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d64 = (double)(float)fr(g, loc_1c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x1cu, (float)d64);
                    loc_1c_f = d64;
                }
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                wr32(sp0 - 0x6cu, ebx + 0x34u);
                d65 = (double)(float)fr(g, fr(g, fr(g, sin(loc_1c_f)) * (double)rdf32(sp0 - 0x50u)) + (double)rdf32(sp0 - 0x2cu));
                wrf32(sp0 - 0x10u, (float)d65);
                d66 = (double)(float)fr(g, fr(g, fr(g, cos(loc_1c_f)) * (double)rdf32(sp0 - 0x50u)) + (double)rdf32(sp0 - 0x24u));
                wrf32(sp0 - 8u, (float)d66);
                g->edx = ebx + 0x34u;
                g->esp = sp0 - 0x64u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x34u, sp0 - 0x10u);
                t67 = g->edx;
                wr32(sp0 - 0x70u, sp0 - 0x10u);
                wr32(sp0 - 0x74u, ebx + 0xc4u);
                g->eax = sp0 - 0x10u;
                g->esp = sp0 - 0x6cu;
                t68 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0xc4u, sp0 - 0x10u);
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                g->edx = sp0 - 0x10u;
                g->esp = sp0 - 0x64u;
                cow_thiscall(g, COW_IMG(0x100a57c0u), ebx, 1, sp0 - 0x10u);
                t69 = g->edx;
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                wr32(sp0 - 0x6cu, ebx + 0x5c4u);
                g->ecx = ebx + 0x5c4u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5c4u, sp0 - 0x10u);
                t70 = g->ecx;
                wr32(sp0 - 0x70u, sp0 - 0x10u);
                wr32(sp0 - 0x74u, ebx + 0x5fcu);
                g->eax = ebx + 0x5fcu;
                g->esp = sp0 - 0x6cu;
                t71 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5fcu, sp0 - 0x10u);
                wr32(sp0 - 0x78u, sp0 - 0x10u);
                wr32(sp0 - 0x7cu, ebx + 0x9d8u);
                wr32(ebx + 0x608u, 0x3f800000u);
                g->ecx = sp0 - 0x10u;
                g->edx = ebx + 0x9d8u;
                g->esp = sp0 - 0x74u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x9d8u, sp0 - 0x10u);
                t72 = g->ecx;
                t73 = g->edx;
                wr32(ebx + 0x9e4u, 0x3f800000u);
                wr32(sp0 - 0x80u, sp0 - 0x20u);
                wr32(sp0 - 0x84u, ebx + 0x44u);
                g->eax = sp0 - 0x20u;
                g->edx = t73;
                g->esp = sp0 - 0x7cu;
                t74 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x44u, sp0 - 0x20u);
                t75 = g->edx;
                d76 = (double)rdf32(ebx + 0x44u);
                if ((cow_fsw(g, d76, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d76, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    edx = t75;
                    esi = ebx + 0x44u;
                }
                else
                {
                    eax = cow_fsw(g, d76, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    edx = t75;
                    esi = ebx + 0x44u;
                    d77 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d77);
                }
                if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d78 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d78);
                }
                d79 = (double)rdf32(ebx + 0x48u);
                if ((cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d80 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d80);
                }
                d81 = (double)rdf32(ebx + 0x48u);
                if (!(d81 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d82 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d82);
                }
                d83 = (double)rdf32(ebx + 0x4cu);
                if ((cow_fsw(g, d83, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d83, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d83, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d84 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d84);
                }
                d85 = (double)rdf32(ebx + 0x4cu);
                if (!(d85 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d85, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d85, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d86 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d86);
                }
                wr32(sp0 - 0x68u, sp0 - 0x20u);
                wr32(sp0 - 0x6cu, esi);
                g->eax = eax;
                g->esp = sp0 - 0x64u;
                t87 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi, sp0 - 0x20u);
                if ((cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d88 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d88);
                }
                if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d89 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d89);
                }
                d90 = (double)rdf32(ebx + 0x48u);
                if ((cow_fsw(g, d90, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d90, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d90, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d91 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d91);
                }
                d92 = (double)rdf32(ebx + 0x48u);
                if (!(d92 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d92, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d92, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d93 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d93);
                }
                d94 = (double)rdf32(ebx + 0x4cu);
                if ((cow_fsw(g, d94, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d94, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d94, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d95 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d95);
                }
                d96 = (double)rdf32(ebx + 0x4cu);
                if (d96 < (double)rdf32(COW_IMG(0x10329d28u)))
                {
                    d97 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d97);
                }
                t98 = rd32(sp0 - 0x20u);
                wr32(ebx + 0xe4u, t98);
                t99 = rd32(sp0 - 0x1cu);
                wr32(ebx + 0xe8u, t99);
                t100 = rd32(sp0 - 0x18u);
                wr32(ebx + 0xecu, t100);
                t101 = rd32(sp0 - 0x14u);
                wr32(ebx + 0xf0u, t101);
                t102 = rd32(sp0 - 0x20u);
                wr32(ebx + 0xe4u, t102);
                t103 = rd32(sp0 - 0x1cu);
                wr32(ebx + 0xe8u, t103);
                t104 = rd32(sp0 - 0x18u);
                wr32(ebx + 0xecu, t104);
                t105 = rd32(sp0 - 0x14u);
                t106 = rd32(ebx);
                wr32(ebx + 0xf0u, t105);
                g->eax = t105;
                g->edx = t106;
                g->esp = sp0 - 0x64u;
                t107 = cow_thiscall(g, rd32(t106 + 0x318u), ebx, 0);
                t108 = g->ecx;
                t109 = g->edx;
                if (t107 != 0u)
                {
                    eax = t107;
                }
                else
                {
                    ecx = t108;
                    edx = t109;
                    wr32(sp0 - 0x68u, sp0 - 0x20u);
                    wr32(sp0 - 0x6cu, ebx + 0x61cu);
                    g->eax = sp0 - 0x20u;
                    g->esp = sp0 - 0x64u;
                    t110 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x61cu, sp0 - 0x20u);
                    d111 = (double)rdf32(ebx + 0x61cu);
                    if ((cow_fsw(g, d111, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d111, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        esi = ebx + 0x61cu;
                    }
                    else
                    {
                        eax = cow_fsw(g, d111, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        esi = ebx + 0x61cu;
                        d112 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(esi, (float)d112);
                    }
                    if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        d113 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(esi, (float)d113);
                    }
                    d114 = (double)rdf32(ebx + 0x620u);
                    if ((cow_fsw(g, d114, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d114, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d114, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        d115 = fr(g, (double)rdf32(ebx + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x620u, (float)d115);
                    }
                    d116 = (double)rdf32(ebx + 0x620u);
                    if (!(d116 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        d117 = fr(g, (double)rdf32(ebx + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x620u, (float)d117);
                    }
                    d118 = (double)rdf32(ebx + 0x624u);
                    if ((cow_fsw(g, d118, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d118, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d118, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        d119 = fr(g, (double)rdf32(ebx + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x624u, (float)d119);
                    }
                    d120 = (double)rdf32(ebx + 0x624u);
                    if (!(d120 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        d121 = fr(g, (double)rdf32(ebx + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x624u, (float)d121);
                    }
                }
                g->eax = eax;
                g->edx = rd32(self);
                t122 = rd32(self);
                t123 = rd32(ebx);
                g->esp = sp0 - 0x64u;
                t124 = cow_thiscall(g, rd32(t122 + 0x218u), self, 0);
                t125 = g->edx;
                wr32(sp0 - 0x68u, t124);
                g->edx = t125;
                cow_thiscall(g, rd32(t123 + 0x214u), ebx, 1, t124);
                t126 = g->edx;
                g->eax = rd32(self);
                g->edx = t126;
                t127 = rd32(self);
                t128 = rd32(ebx);
                t129 = cow_thiscall(g, rd32(t127 + 0x220u), self, 0);
                t130 = g->ecx;
                t131 = g->edx;
                d132 = cow_take_float(g);
                wr32(sp0 - 0x68u, t130);
                wrf32(sp0 - 0x68u, (float)(double)(float)d132);
                t133 = cow_thiscall(g, rd32(t128 + 0x21cu), ebx, 1, cow_f2bits((double)(float)d132));
                g->edx = rd32(self);
                t134 = rd32(self);
                t135 = rd32(ebx);
                t136 = cow_thiscall(g, rd32(t134 + 0x188u), self, 0);
                t137 = g->edx;
                wr32(sp0 - 0x68u, t136);
                cow_thiscall(g, rd32(t135 + 0x184u), ebx, 1, t136);
                wr32(sp0 - 0x48u, 5u);
                eax = ebx + 0x388u;
                edx = self - ebx;
                loc_48 = 5u;
L_100ca215: ;
                esi = eax + edx;
                edi = eax;
                ecx = 0x1au;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x48u, loc_48 - 1u);
                if (loc_48 != 1u)
                {
                    eax = eax + 0x68u;
                    loc_48 = loc_48 - 1u;
                    goto L_100ca215;
                }
                ecx = loc_48 - 1u;
                t138 = rd32(self + 0x590u);
                wr32(ebx + 0x590u, t138);
                t139 = (ecx & 0xffffff00u) | rd8(self + 0x17cu);
                wr32(sp0 - 0x68u, t139);
                g->esp = sp0 - 0x64u;
                t140 = cow_call_regs(g, COW_IMG(0x100aaee0u), t138, ebx, g->edx, 0, 1, t139);
                g->edx = rd32(self);
                t141 = rd32(self);
                t142 = rd32(ebx);
                t143 = cow_thiscall(g, rd32(t141 + 0x204u), self, 0);
                t144 = g->ecx;
                t145 = g->edx;
                d146 = cow_take_float(g);
                wr32(sp0 - 0x68u, t144);
                wrf32(sp0 - 0x68u, (float)(double)(float)d146);
                g->edx = t145;
                cow_thiscall(g, rd32(t142 + 0x208u), ebx, 1, cow_f2bits((double)(float)d146));
                t147 = g->edx;
                g->eax = rd32(self);
                g->edx = t147;
                t148 = rd32(self);
                t149 = cow_thiscall(g, rd32(t148 + 0x198u), self, 0);
                t150 = g->edx;
                wr8(ebx + 0x5e0u, (uint8_t)t149);
                if (rd32(sp0 - 0x44u) != 0u)
                {
                    eax = rd32(sp0 - 0x44u);
                    edx = t150;
                    goto L_100ca294;
                }
                eax = rd32(sp0 - 0x44u);
                edx = t150;
                if ((rd8(ebx + 0x8acu) & 4u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
                    goto L_100ca2b2;
                }
                eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
                wr8(ebx + 0x8acu, eax & 0xfbu);
                eax = (eax & 0xffffff00u) | (eax & 0xfbu);
                ecx = 2u;
L_100ca2b4: ;
                if (ecx == 1u)
                {
                    wr32(sp0 - 0x68u, 0u);
                    wr32(sp0 - 0x6cu, ebx);
                    wr32(sp0 - 0x70u, 0x6e6f6665u);
                    g->esp = sp0 - 0x64u;
                    cow_thiscall(g, rd32(rd32(ebx) + 0x298u), ebx, 3, 0x6e6f6665u, ebx, 0u);
                }
                else
                {
                    ecx = ecx - 1u;
                    if (ecx == 1u)
                    {
                        wr32(sp0 - 0x68u, 0u);
                        wr32(sp0 - 0x6cu, ebx);
                        wr32(sp0 - 0x70u, 0x666f6665u);
                        g->esp = sp0 - 0x64u;
                        cow_thiscall(g, rd32(rd32(ebx) + 0x298u), ebx, 3, 0x666f6665u, ebx, 0u);
                    }
                }
            }
            wr32(sp0 - 0x40u, loc_40 + 4u);
            wr32(sp0 - 0x4cu, loc_4c + 0xfu);
            wr32(sp0 - 0x3cu, loc_3c - 1u);
            if (loc_3c != 1u)
            {
                eax = loc_40 + 4u;
                loc_4c = loc_4c + 0xfu;
                loc_40 = loc_40 + 4u;
                loc_3c = loc_3c - 1u;
                goto L_100c9e23;
            }
        }
    }
L_100ca306: ;
    return;
L_100ca294: ;
    if (eax != 1u) goto L_100ca2b2;
    if ((rd8(ebx + 0x8acu) & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
        goto L_100ca2b2;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
    wr8(ebx + 0x8acu, (uint8_t)(eax | 4u));
    eax = (eax & 0xffffff00u) | (uint8_t)(eax | 4u);
    ecx = 1u;
    goto L_100ca2b4;
L_100ca2b2: ;
    ecx = 0u;
    goto L_100ca2b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c9c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c9c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
