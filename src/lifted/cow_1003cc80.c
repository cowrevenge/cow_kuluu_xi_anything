/* f_0x1003cc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1003cc80(Guest* g)
{
    double d13;
    double d38;
    double d39;
    double d50;
    double d52;
    double d56;
    double d57;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003cd11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cd11;
    case 0x1003cd28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cd28;
    case 0x1003cd51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cd51;
    case 0x1003cd58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cd58;
    case 0x1003cd71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cd71;
    case 0x1003cda3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cda3;
    case 0x1003cdc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cdc8;
    case 0x1003cdeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003cdea;
    case 0x1003ce50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ce50;
    case 0x1003ce68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ce68;
    case 0x1003ce6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ce6f;
    case 0x1003cf46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003cf46;
    case 0x1003cf58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003cf58;
    case 0x1003cfb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1003cfb1;
    case 0x1003cfc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1003cfc3;
    case 0x1003cfd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1003cfd5;
    case 0x1003cfe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1003cfe3;
    default: break;
    }
#endif

    COW_AT(1003cc80)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    g->esp = sp0 - 0x30u;
    t1 = cow_call_regs(g, COW_IMG(0x10074740u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t3 = g->edx;
    wr32(self, COW_IMG(0x1032ab60u));
    wr32(self + 0x34u, COW_IMG(0x1032ab44u));
    wr32(sp0 - 0x34u, arg1 + 0x30u);
    g->eax = arg1 + 0x30u;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1003c740u), self + 0x34u, 1, arg1 + 0x30u);
    t5 = g->edx;
    wr32(sp0 - 0x34u, arg3);
    t6 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg3);
    wr32(sp0 - 0x34u, arg4);
    g->edx = arg4;
    cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, arg4);
    t7 = g->edx;
    t8 = rd32(sp0 + 8u);
    wr32(self + 0x74u, arg1);
    wr32(self + 0x78u, t8);
    wr32(self + 0x7cu, t8);
    g->edx = t7;
    t9 = cow_call_regs(g, COW_IMG(0x10071e90u), t8, arg1, g->edx, 1, 0);
    t10 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, self + 0x80u);
    t11 = rd32(self + 0x74u);
    wr32(self + 0xc4u, 0u);
    cow_thiscall(g, COW_IMG(0x1003be10u), t11 + 0x30u, 3, self + 0x80u, 0u, 0u);
    t12 = g->ecx;
    d13 = cow_take_float(g);
    if (rd32(rd32(self + 0x74u) + 0x70u) >> 0x14u & 1u)
    {
        eax = rd32(rd32(self + 0x74u) + 0x70u) >> 0x14u;
        ecx = t12;
        edx = rd32(self + 0x74u);
    COW_AT(1003cd11)
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t14 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        cow_cdecl(g, COW_IMG(0x10021280u), 2, sp0 - 0x20u, sp0 - 0x10u);
    }
    COW_AT(1003cd28)
    t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t16 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t15);
    t17 = rd32(rd32(self + 0x74u) + 0x70u);
    if (t17 >> 0x14u & 1u)
    {
        eax = t17;
        ebx = t16;
        goto L_1003cd58;
    }
    eax = t17;
    ebx = t16;
    COW_AT(1003cd51)
    if (!(eax >> 0x13u & 1u)) goto L_1003cd71;
    eax = eax >> 0x13u;
L_1003cd58: ;
    COW_AT(1003cd58)
    esi = self + 0x80u;
    edi = ebx;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x34u, ebx);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x18u), rd32(COW_IMG(0x1047cf7cu)), 1, ebx);
L_1003cd71: ;
    COW_AT(1003cd71)
    t18 = rd32(self + 0x74u);
    wr32(self + 0xc0u, 0u);
    t19 = rd32(t18 + 0x70u);
    if ((int32_t)((uint8_t)t19 + (t19 >> 0x13u & 1u) + (t19 >> 0x14u & 1u)) > 2)
    {
        eax = (uint8_t)t19;
        edx = (uint8_t)t19 + (t19 >> 0x13u & 1u) + (t19 >> 0x14u & 1u);
    COW_AT(1003cfd5)
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t58 = cow_thiscall(g, COW_IMG(0x10055780u), arg1 + 0x70u, 0);
        wr32(self + 0xc0u, t58);
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
    }
    else
    {
        ecx = t18;
    COW_AT(1003cda3)
        t20 = rd32(ecx + 0x70u);
        if ((uint8_t)t20 + (t20 >> 0x13u & 1u) + (t20 >> 0x14u & 1u) != 2u)
        {
            loc_24 = in_ebx;
            loc_28 = in_ebp;
            loc_2c = in_esi;
            loc_30 = in_edi;
        }
        else
        {
            eax = (uint8_t)t20;
            ecx = (uint8_t)t20 + (t20 >> 0x13u & 1u) + (t20 >> 0x14u & 1u);
            edx = t20 >> 0x13u & 1u;
    COW_AT(1003cdc8)
            wr32(sp0 - 0x34u, 4u);
            wr32(sp0 - 0x38u, 0x60u);
            g->esp = sp0 - 0x30u;
            t21 = cow_call_regs(g, COW_IMG(0x10028640u), eax, ecx, edx, 1, 2, 0x60u, 4u);
            t22 = g->edx;
            wr32(self + 0xc4u, t21);
            if (!(rd32(rd32(self + 0x74u) + 0x70u) >> 0x13u & 1u))
            {
                esi = 0u;
            }
            else
            {
                eax = rd32(self + 0x74u);
                ecx = rd32(rd32(self + 0x74u) + 0x70u) >> 0x13u;
                edx = t22;
    COW_AT(1003cdea)
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t23 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                wr32(sp0 - 0x34u, t23 + 0x8cu);
                wr32(sp0 - 0x38u, ebx);
                t24 = rd32(self + 0xc4u);
                wr32(sp0 - 0x3cu, t24);
                g->eax = t23 + 0x8cu;
                g->edx = t24;
                t25 = rd32(COW_IMG(0x1047cf7cu));
                t26 = cow_thiscall(g, rd32(rd32(t25) + 0x4cu), t25, 3, t24, ebx, t23 + 0x8cu);
                t27 = g->ecx;
                t28 = g->edx;
                t29 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                wr32(sp0 - 0x34u, t29 + 0x98u);
                wr32(sp0 - 0x38u, ebx);
                t30 = rd32(self + 0xc4u) + 0x10u;
                wr32(sp0 - 0x3cu, t30);
                g->eax = t29 + 0x98u;
                g->edx = t30;
                t31 = rd32(COW_IMG(0x1047cf7cu));
                t32 = cow_thiscall(g, rd32(rd32(t31) + 0x4cu), t31, 3, t30, ebx, t29 + 0x98u);
                t33 = g->ecx;
                t34 = g->edx;
                g->ecx = t33;
                t35 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                t36 = g->ecx;
                t37 = rd32(self + 0xc4u);
                d38 = (double)rdf32(t35 + 0xa4u);
                wrf32(t37 + 0x20u, (float)d38);
                cow_stdcall(g, COW_IMG(0x100152d0u), 0);
                d39 = cow_take_float(g);
                wrf32(rd32(self + 0xc4u) + 0x24u, (float)d39);
                esi = 3u;
            }
    COW_AT(1003ce50)
            t40 = rd32(self + 0x74u);
            wr32(sp0 + 8u, 0u);
            if ((int32_t)(uint8_t)rd32(t40 + 0x70u) > 0)
            {
                edx = t40;
    COW_AT(1003ce68)
                eax = esi << 4u;
                ecx = 0u;
L_1003ce6f: ;
    COW_AT(1003ce6f)
                t41 = rd32(ecx + edx + 0x80u);
                wr32(eax + rd32(self + 0xc4u), t41);
                t42 = rd32(ecx + rd32(self + 0x74u) + 0x84u);
                wr32(eax + rd32(self + 0xc4u) + 4u, t42);
                t43 = rd32(ecx + rd32(self + 0x74u) + 0x88u);
                wr32(eax + rd32(self + 0xc4u) + 8u, t43);
                t44 = rd32(ecx + rd32(self + 0x74u) + 0x8cu);
                wr32(eax + rd32(self + 0xc4u) + 0xcu, t44);
                t45 = rd32(ecx + rd32(self + 0x74u) + 0x90u);
                wr32(eax + rd32(self + 0xc4u) + 0x10u, t45);
                t46 = rd32(ecx + rd32(self + 0x74u) + 0x94u);
                wr32(eax + rd32(self + 0xc4u) + 0x14u, t46);
                t47 = rd32(ecx + rd32(self + 0x74u) + 0x98u);
                wr32(eax + rd32(self + 0xc4u) + 0x18u, t47);
                t48 = rd32(ecx + rd32(self + 0x74u) + 0x9cu);
                wr32(eax + rd32(self + 0xc4u) + 0x1cu, t48);
                t49 = rd32(sp0 + 8u);
                d50 = (double)rdf32(ecx + rd32(self + 0x74u) + 0x9cu);
                wrf32(eax + rd32(self + 0xc4u) + 0x20u, (float)d50);
                t51 = rd32(self + 0x74u);
                wr32(sp0 + 8u, t49 + 1u);
                d52 = (double)rdf32(ecx + t51 + 0x8cu);
                wrf32(eax + rd32(self + 0xc4u) + 0x24u, (float)d52);
                if ((int32_t)rd32(sp0 + 8u) < (int32_t)(uint8_t)rd32(rd32(self + 0x74u) + 0x70u))
                {
                    eax = eax + 0x30u;
                    ecx = ecx + 0x30u;
                    edx = rd32(self + 0x74u);
                    esi = esi + 3u;
                    goto L_1003ce6f;
                }
                esi = esi + 3u;
            }
    COW_AT(1003cf46)
            if (!(rd32(rd32(self + 0x74u) + 0x70u) >> 0x14u & 1u))
            {
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
            }
            else
            {
    COW_AT(1003cf58)
                wr32(sp0 - 0x34u, sp0 - 0x20u);
                wr32(sp0 - 0x38u, ebx);
                t53 = esi * 0x10u + rd32(self + 0xc4u);
                wr32(sp0 - 0x3cu, t53);
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x4cu), rd32(COW_IMG(0x1047cf7cu)), 3, t53, ebx, sp0 - 0x20u);
                wr32(sp0 - 0x34u, sp0 - 0x10u);
                wr32(sp0 - 0x38u, ebx);
                t54 = esi * 0x10u + rd32(self + 0xc4u) + 0x10u;
                wr32(sp0 - 0x3cu, t54);
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x4cu), rd32(COW_IMG(0x1047cf7cu)), 3, t54, ebx, sp0 - 0x10u);
                t55 = rd32(self + 0xc4u);
                wr32(esi * 0x10u + t55 + 0x20u, 0u);
                if (rd8(COW_IMG(0x10487f80u)) == 0u)
                {
                    esi = esi * 0x10u + 0x20u;
    COW_AT(1003cfc3)
                    d57 = (double)rdf32(COW_IMG(0x1032a3dcu));
                    wrf32(esi + rd32(self + 0xc4u) + 4u, (float)d57);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_30 = rd32(sp0 - 0x30u);
                }
                else
                {
                    esi = esi * 0x10u + 0x20u;
    COW_AT(1003cfb1)
                    d56 = (double)rdf32(COW_IMG(0x1032ab40u));
                    wrf32(esi + rd32(self + 0xc4u) + 4u, (float)d56);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_30 = rd32(sp0 - 0x30u);
                }
            }
        }
    }
    COW_AT(1003cfe3)
    t59 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t60 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t60 + 0xa90u, t59);
    wr32(t59 * 4u + t60 + 0xa10u, ebx);
    g->ebx = loc_24;
    g->esi = loc_2c;
    g->edi = loc_30;
    g->ebp = loc_28;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003cc80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003cd11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
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
        in_ebx = g->ebx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->esi = self + 0x80u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1003cd28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        self = g->ebp;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->esi = self + 0x80u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003cd51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        self = g->ebp;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->esi = self + 0x80u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003cd58u:
    {
        uint32_t eax;
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->esi = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1003cd71u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003cda3u:
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
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003cdc8u:
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
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003cdeau:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ce50u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ce68u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ce6fu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003cf46u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003cf58u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003cfb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = sp0 - 0x10u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003cfc3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = sp0 - 0x10u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003cfd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003cfe3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003cc80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003cc80(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
