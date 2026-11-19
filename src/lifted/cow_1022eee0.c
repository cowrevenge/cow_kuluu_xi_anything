/* f_0x1022eee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1022eee0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t7;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022ef17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1022ef17;
    case 0x1022ef3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef3a;
    case 0x1022ef45u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef45;
    case 0x1022ef4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef4e;
    case 0x1022ef59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef59;
    case 0x1022ef5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef5d;
    case 0x1022ef69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef69;
    case 0x1022ef73u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef73;
    case 0x1022ef77u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef77;
    case 0x1022ef7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef7c;
    case 0x1022ef80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef80;
    case 0x1022ef8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022ef8b;
    case 0x1022efbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022efbb;
    case 0x1022efcau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022efca;
    case 0x1022eff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022eff4;
    case 0x1022f030u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022f030;
    case 0x1022f065u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022f065;
    case 0x1022f0c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1022f0c8;
    case 0x1022f0cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); goto E_1022f0cb;
    default: break;
    }
#endif

    COW_AT(1022eee0)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(self, arg1);
    wr8(sp0 - 0x1cu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x10257880u), sp0 - 0x10u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x30u, arg1);
    g->ebx = self;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x10662dccu));
    t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), t3, 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, t4);
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        edx = t6;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        edi = t4;
        loc_18 = t4;
    COW_AT(1022ef17)
        wr32(sp0 - 0x30u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi, in_edi, in_esi);
        t8 = g->edx;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, edi);
        wr32(sp0 - 0x38u, t7);
        wr32(sp0 - 0x3cu, arg1);
        wr32(sp0 - 0x14u, t7);
        g->ebx = self;
        g->edx = t8;
        t9 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x2cu;
        t10 = cow_thiscall(g, COW_IMG(0x101c4740u), t9, 4, arg1, t7, edi, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        if ((int32_t)t10 >= 0)
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            esi = t7;
    COW_AT(1022ef45)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t15 = cow_stdcall(g, COW_IMG(0x10257850u), 0);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
            ebp = t15;
            edi = esi;
L_1022ef4e: ;
    COW_AT(1022ef4e)
            if (rd8(edi) != rd8(ebp))
            {
                eax = (eax & 0xffffff00u) | rd8(edi);
                ecx = (ecx & 0xffffff00u) | rd8(edi);
                edx = (edx & 0xffffff00u) | rd8(ebp);
                cf = rd8(edi) < rd8(ebp);
                goto L_1022ef77;
            }
            eax = (eax & 0xffffff00u) | rd8(edi);
            ecx = (ecx & 0xffffff00u) | rd8(edi);
            edx = (edx & 0xffffff00u) | rd8(ebp);
    COW_AT(1022ef59)
            if ((uint8_t)eax == 0u) goto L_1022ef73;
    COW_AT(1022ef5d)
            if (rd8(edi + 1u) != rd8(ebp + 1u))
            {
                eax = (eax & 0xffffff00u) | rd8(edi + 1u);
                ecx = (ecx & 0xffffff00u) | rd8(ebp + 1u);
                edx = (edx & 0xffffff00u) | rd8(edi + 1u);
                cf = rd8(edi + 1u) < rd8(ebp + 1u);
                goto L_1022ef77;
            }
            eax = (eax & 0xffffff00u) | rd8(edi + 1u);
            ecx = (ecx & 0xffffff00u) | rd8(ebp + 1u);
            edx = (edx & 0xffffff00u) | rd8(edi + 1u);
    COW_AT(1022ef69)
            if ((uint8_t)eax != 0u)
            {
                ebp = ebp + 2u;
                edi = edi + 2u;
                goto L_1022ef4e;
            }
L_1022ef73: ;
    COW_AT(1022ef73)
            eax = 0u;
L_1022ef7c: ;
    COW_AT(1022ef7c)
            if (eax == 0u)
            {
    COW_AT(1022ef8b)
                t20 = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x30u, t20);
                edi = self + 0x28u;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t21 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x34u, t21);
                g->ebx = self;
                g->eax = t20;
                g->esp = sp0 - 0x2cu;
                t22 = cow_fastcall(g, COW_IMG(0x102579a0u), sp0 - 0x10u, edx, 2, t21, t20);
                t23 = g->edx;
                g->edx = t23;
                t24 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                t25 = g->edx;
                if (t24 == 0u)
                {
                    eax = t24;
                    edx = t25;
                }
                else
                {
                    eax = t24;
                    edx = t25;
    COW_AT(1022efbb)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t26 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t27 = g->edx;
                    if (t26 == 0u)
                    {
                        eax = t26;
                        edx = t27;
                        ebp = 0u;
                        goto L_1022eff4;
                    }
                    eax = t26;
                    edx = t27;
                    ebp = 0u;
                    esi = 0u;
L_1022efca: ;
    COW_AT(1022efca)
                    wr32(sp0 - 0x30u, 1u);
                    wr32(sp0 - 0x34u, esi);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t28 = cow_thiscall(g, COW_IMG(0x102578d0u), sp0 - 0x10u, 2, esi, 1u);
                    t29 = g->ecx;
                    t30 = g->edx;
                    edi = t28;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0u);
                    af = 0u;
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    g->eax = eax;
                    g->edx = t30;
                    t31 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t32 = g->edx;
                    if (esi + 1u < t31)
                    {
                        eax = t31;
                        edx = t32;
                        ebp = ebp + ~ecx;
                        esi = esi + 1u;
                        goto L_1022efca;
                    }
                    eax = t31;
                    edx = t32;
                    ebp = ebp + ~ecx;
L_1022eff4: ;
    COW_AT(1022eff4)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t33 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t34 = g->ecx;
                    t35 = g->edx;
                    wr32(sp0 - 0x30u, t33 << 2u);
                    g->eax = t33 << 2u;
                    g->esp = sp0 - 0x24u;
                    t36 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t34, t35, 1, 3, t33 << 2u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                    t37 = g->edx;
                    wr32(self + 8u, t36);
                    wr32(sp0 - 0x30u, ebp);
                    g->edx = t37;
                    g->esp = sp0 - 0x30u;
                    t38 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t39 = g->edx;
                    wr32(sp0 - 0x34u, t38);
                    g->edx = t39;
                    g->esp = sp0 - 0x2cu;
                    t40 = cow_thiscall(g, COW_IMG(0x1022ed30u), self + 0xcu, 2, t38, rd32(sp0 - 0x30u));
                    t41 = g->edx;
                    g->edx = t41;
                    t42 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t43 = g->edx;
                    if (t42 == 0u)
                    {
                        eax = t42;
                        edx = t43;
                        goto L_1022f065;
                    }
                    eax = t42;
                    edx = t43;
                    esi = 0u;
L_1022f030: ;
    COW_AT(1022f030)
                    wr32(sp0 - 0x30u, 0u);
                    wr32(sp0 - 0x34u, esi);
                    g->eax = eax;
                    g->esp = sp0 - 0x2cu;
                    t44 = cow_thiscall(g, COW_IMG(0x10257940u), sp0 - 0x10u, 2, esi, 0u);
                    wr32(sp0 - 0x30u, 1u);
                    wr32(sp0 - 0x34u, esi);
                    t45 = rd32(self + 8u);
                    wr16(esi * 2u + t45, (uint16_t)t44);
                    g->edx = t45;
                    t46 = cow_thiscall(g, COW_IMG(0x102578d0u), sp0 - 0x10u, 2, esi, 1u);
                    t47 = g->edx;
                    wr32(sp0 - 0x30u, t46);
                    g->edx = t47;
                    t48 = cow_thiscall(g, COW_IMG(0x1022ed70u), self + 0xcu, 1, t46);
                    t49 = g->edx;
                    g->edx = t49;
                    t50 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t51 = g->edx;
                    if (esi + 1u < t50)
                    {
                        eax = t50;
                        edx = t51;
                        esi = esi + 1u;
                        goto L_1022f030;
                    }
                    eax = t50;
                    edx = t51;
                }
L_1022f065: ;
    COW_AT(1022f065)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t52 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                t53 = g->edx;
                wr32(sp0 - 0x30u, 1u);
                wr32(self + 4u, t52);
                g->edx = t53;
                cow_thiscall(g, COW_IMG(0x101c59b0u), self + 0x78u, 1, 1u);
                t54 = g->edx;
                wr32(sp0 - 0x30u, arg1);
                g->edx = t54;
                cow_thiscall(g, COW_IMG(0x101c5a30u), self + 0x78u, 1, arg1);
                t55 = g->edx;
                wr32(sp0 - 0x30u, 0x40u);
                wr32(sp0 - 0x34u, self + 0x28u);
                wr32(self + 0x84u, 0xffffffffu);
                wr8(sp0 - 0x1cu, 1u);
                g->eax = self + 0x28u;
                g->edx = t55;
                t56 = cow_thiscall(g, COW_IMG(0x10257bc0u), self + 0x68u, 2, self + 0x28u, 0x40u);
                t57 = g->edx;
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, sp0 + 4u);
                g->edx = t57;
                t58 = cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x68u, 2, sp0 + 4u, 0u);
                t59 = g->ecx;
                t60 = g->edx;
                wr32(sp0 - 0x30u, t58);
                wr32(self + 0x8cu, t58);
                g->esp = sp0 - 0x24u;
                t61 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t59, t60, 1, 3, t58, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                t62 = g->edx;
                wr32(self + 0x90u, t61);
                eax = t61;
                edx = t62;
            }
            else
            {
    COW_AT(1022ef80)
                wr32(sp0 - 0x30u, esi);
                g->eax = eax;
                g->esp = sp0 - 0x2cu;
                t18 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
                t19 = g->edx;
                eax = t18;
                edx = t19;
            }
        }
        else
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            esi = t7;
    COW_AT(1022ef3a)
            wr32(sp0 - 0x30u, esi);
            g->eax = eax;
            g->esp = sp0 - 0x2cu;
            t13 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
            t14 = g->edx;
            eax = t13;
            edx = t14;
        }
    COW_AT(1022f0c8)
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
    }
    COW_AT(1022f0cb)
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10257860u), sp0 - 0x10u, 0);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return (uint8_t)rd32(sp0 - 0x1cu);
L_1022ef77: ;
    COW_AT(1022ef77)
    eax = -cf + 1u - cf;
    goto L_1022ef7c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022eee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022ef17u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022ef3au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef45u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef4eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef59u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef69u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef73u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef77u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef7cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef80u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022ef8bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022efbbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022efcau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022eff4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022f030u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1022f065u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1022f0c8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1022f0cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022eee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022eee0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
