/* f_0x10154570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10154570(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101545b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_101545b1;
    case 0x101545d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101545d4;
    case 0x101545e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101545e2;
    case 0x101545ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101545eb;
    case 0x101545f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101545f3;
    case 0x101545f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101545f7;
    case 0x10154601u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154601;
    case 0x1015460bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1015460b;
    case 0x1015460fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1015460f;
    case 0x10154614u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154614;
    case 0x1015461cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1015461c;
    case 0x1015462au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1015462a;
    case 0x10154658u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154658;
    case 0x1015469cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1015469c;
    case 0x101546acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_14 = rd32(sp0 - 0x14u); goto E_101546ac;
    case 0x101546adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_14 = rd32(sp0 - 0x14u); goto E_101546ad;
    case 0x101546bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101546ba;
    case 0x101546beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_14 = rd32(sp0 - 0x14u); goto E_101546be;
    case 0x101546c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101546c4;
    case 0x101546ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); goto E_101546cc;
    case 0x101546dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; goto E_101546db;
    case 0x101546dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101546df;
    case 0x10154715u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154715;
    case 0x1015473du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; self = g->ebx - 0x8u; goto E_1015473d;
    case 0x1015473fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; self = g->ebx - 0x8u; goto E_1015473f;
    case 0x1015475fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1015475f;
    case 0x10154763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154763;
    case 0x10154773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154773;
    case 0x10154776u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154776;
    case 0x10154783u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154783;
    case 0x1015478cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1015478c;
    case 0x10154790u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10154790;
    case 0x10154795u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_10154795;
    case 0x101547a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_101547a7;
    case 0x101547b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_101547b5;
    default: break;
    }
#endif

    COW_AT(10154570)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, 0x3fu);
    wr32(sp0 - 0x18u, self);
    wr8(sp0 - 0x1cu, 0u);
    g->esp = sp0 - 0x30u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x3fu);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10257880u), sp0 - 0x10u, 0);
    t4 = g->edx;
    wr32(sp0 - 0x34u, t1);
    g->ebx = self;
    g->edx = t4;
    t5 = rd32(COW_IMG(0x10662dccu));
    t6 = cow_thiscall(g, COW_IMG(0x101c4af0u), t5, 1, t1);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x14u, t6);
    if ((int32_t)t6 < 0)
    {
        eax = t6;
        edx = t8;
        ebx = self;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        esi = t6;
        edi = t1;
        loc_14 = t6;
    COW_AT(101545b1)
        wr32(sp0 - 0x34u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, in_edi, in_esi);
        t10 = g->edx;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, t9);
        wr32(sp0 - 0x40u, edi);
        wr32(sp0 - 0x20u, t9);
        g->ebx = self;
        g->edx = t10;
        t11 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x30u;
        t12 = cow_thiscall(g, COW_IMG(0x101c4740u), t11, 4, edi, t9, esi, 0u);
        t13 = g->ecx;
        t14 = g->edx;
        if ((int32_t)t12 >= 0)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            ebp = t9;
    COW_AT(101545e2)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t17 = cow_stdcall(g, COW_IMG(0x10257850u), 0);
            t18 = g->edx;
            eax = t17;
            ecx = ebp;
            edx = t18;
            esi = t17;
L_101545eb: ;
    COW_AT(101545eb)
            if (rd8(ecx) != rd8(esi))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx);
                edx = (edx & 0xffffff00u) | rd8(ecx);
                cf = rd8(ecx) < rd8(esi);
                goto L_1015460f;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx);
            edx = (edx & 0xffffff00u) | rd8(ecx);
    COW_AT(101545f3)
            if ((uint8_t)eax == 0u) goto L_1015460b;
    COW_AT(101545f7)
            if (rd8(ecx + 1u) != rd8(esi + 1u))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
                edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
                cf = rd8(ecx + 1u) < rd8(esi + 1u);
                goto L_1015460f;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    COW_AT(10154601)
            if ((uint8_t)eax != 0u)
            {
                ecx = ecx + 2u;
                esi = esi + 2u;
                goto L_101545eb;
            }
            ecx = ecx + 2u;
L_1015460b: ;
    COW_AT(1015460b)
            eax = 0u;
L_10154614: ;
    COW_AT(10154614)
            if (eax == 0u)
            {
                eax = rd32(sp0 - 0x20u);
    COW_AT(1015462a)
                esi = eax;
                edi = self + 0x24u;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t21 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x34u, t21);
                wr32(sp0 - 0x38u, eax);
                g->ebx = self;
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t22 = cow_fastcall(g, COW_IMG(0x102579a0u), sp0 - 0x10u, edx, 2, eax, t21);
                t23 = g->edx;
                g->edx = t23;
                t24 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                t25 = g->edx;
                if (t24 == 0u)
                {
                    eax = t24;
                    edx = t25;
                    ebx = self;
                }
                else
                {
                    eax = t24;
                    edx = t25;
    COW_AT(10154658)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    t26 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t27 = g->edx;
                    wr32(self, t26);
                    g->edx = t27;
                    t28 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t29 = g->ecx;
                    t30 = g->edx;
                    wr32(sp0 - 0x34u, t28 * 2u);
                    g->eax = t28 * 2u;
                    g->esp = sp0 - 0x28u;
                    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t29, t30, 1, 3, t28 * 2u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
                    t32 = g->edx;
                    wr32(self + 4u, t31);
                    g->esp = sp0 - 0x30u;
                    t33 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t34 = g->ecx;
                    t35 = t33 * 0xcu + 4u;
                    wr32(sp0 - 0x34u, t35);
                    g->eax = t35;
                    g->esp = sp0 - 0x28u;
                    t36 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t34, t33 * 3u, 1, 3, t35, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
                    t37 = g->edx;
                    if (t36 == 0u)
                    {
                        eax = t36;
                        edx = t37;
    COW_AT(101546c4)
                        wr32(sp0 - 0x20u, 0u);
                        loc_20 = 0u;
                    }
                    else
                    {
                        eax = t36;
                        edx = t37;
                        esi = t33;
    COW_AT(1015469c)
                        wr32(eax, esi);
                        wr32(sp0 - 0x14u, eax + 4u);
                        if ((int32_t)(esi - 1u) < 0)
                        {
                            eax = eax + 4u;
                        }
                        else
                        {
                            esi = esi - 1u;
                            edi = eax + 4u;
                            loc_14 = eax + 4u;
                            eax = eax + 4u;
    COW_AT(101546ac)
                            esi = esi + 1u;
L_101546ad: ;
    COW_AT(101546ad)
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x30u;
                            t38 = cow_thiscall(g, COW_IMG(0x1018d2b0u), edi, 0);
                            t39 = g->edx;
                            if (esi != 1u)
                            {
                                eax = t38;
                                edx = t39;
                                esi = esi - 1u;
                                edi = edi + 0xcu;
                                loc_14 = rd32(sp0 - 0x14u);
                                goto L_101546ad;
                            }
                            edx = t39;
    COW_AT(101546ba)
                            eax = rd32(sp0 - 0x14u);
                        }
    COW_AT(101546be)
                        wr32(sp0 - 0x20u, eax);
                        loc_20 = eax;
                    }
    COW_AT(101546cc)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    t40 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t41 = g->edx;
                    if (t40 == 0u)
                    {
                        eax = t40;
                        edx = t41;
                        ebp = 0u;
                    }
                    else
                    {
                        eax = t40;
                        edx = t41;
    COW_AT(101546db)
                        ebp = 0u;
                        esi = 0u;
                        edi = rd32(sp0 - 0x20u);
L_101546df: ;
    COW_AT(101546df)
                        wr32(sp0 - 0x34u, esi);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x30u;
                        t42 = cow_thiscall(g, COW_IMG(0x10257890u), sp0 - 0x10u, 1, esi);
                        t43 = g->edx;
                        wr32(sp0 - 0x34u, t42);
                        wr32(sp0 - 0x38u, edi);
                        t44 = cow_call_regs(g, COW_IMG(0x101542b0u), g->eax, g->ecx, t43, 0, 2, edi, t42);
                        t45 = g->edx;
                        wr16(esi * 2u + rd32(self + 4u), (uint16_t)t44);
                        g->edx = t45;
                        t46 = cow_thiscall(g, COW_IMG(0x1018d490u), edi, 0);
                        t47 = g->edx;
                        g->edx = t47;
                        t48 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                        t49 = g->edx;
                        if (esi + 1u < t48)
                        {
                            eax = t48;
                            edx = t49;
                            ebp = ebp + t46 + 1u;
                            esi = esi + 1u;
                            edi = edi + 0xcu;
                            goto L_101546df;
                        }
                        eax = t48;
                        edx = t49;
                        ebp = ebp + t46 + 1u;
                    }
    COW_AT(10154715)
                    wr32(sp0 - 0x34u, ebp);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    t50 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t51 = g->edx;
                    wr32(sp0 - 0x38u, t50);
                    g->edx = t51;
                    g->esp = sp0 - 0x30u;
                    t52 = cow_thiscall(g, COW_IMG(0x1022ed30u), self + 8u, 2, t50, rd32(sp0 - 0x34u));
                    t53 = g->edx;
                    g->edx = t53;
                    t54 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                    t55 = g->ecx;
                    t56 = g->edx;
                    if (t54 == 0u)
                    {
                        eax = t54;
                        ecx = t55;
                        edx = t56;
                        ebp = rd32(sp0 - 0x20u);
                    }
                    else
                    {
                        eax = t54;
                        edx = t56;
                        ebp = rd32(sp0 - 0x20u);
    COW_AT(1015473d)
                        esi = 0u;
                        edi = ebp;
L_1015473f: ;
    COW_AT(1015473f)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x30u;
                        t57 = cow_thiscall(g, COW_IMG(0x1018d470u), edi, 0);
                        t58 = g->edx;
                        wr32(sp0 - 0x34u, t57);
                        g->edx = t58;
                        t59 = cow_thiscall(g, COW_IMG(0x1022ed70u), self + 8u, 1, t57);
                        t60 = g->edx;
                        g->edx = t60;
                        t61 = cow_thiscall(g, COW_IMG(0x10257b10u), sp0 - 0x10u, 0);
                        t62 = g->ecx;
                        t63 = g->edx;
                        if (esi + 1u < t61)
                        {
                            eax = t61;
                            edx = t63;
                            esi = esi + 1u;
                            edi = edi + 0xcu;
                            goto L_1015473f;
                        }
                        eax = t61;
                        ecx = t62;
                        edx = t63;
                    }
    COW_AT(1015475f)
                    if (ebp != 0u)
                    {
    COW_AT(10154763)
                        if ((int32_t)(rd32(ebp - 4u) - 1u) < 0)
                        {
                            eax = rd32(ebp - 4u) - 1u;
                            edx = rd32(ebp - 4u) * 3u;
                            ebx = ebp - 4u;
                        }
                        else
                        {
                            eax = rd32(ebp - 4u) - 1u;
                            edx = rd32(ebp - 4u) * 3u;
                            ebx = ebp - 4u;
                            esi = ebp + rd32(ebp - 4u) * 0xcu;
    COW_AT(10154773)
                            edi = eax + 1u;
L_10154776: ;
    COW_AT(10154776)
                            g->eax = eax;
                            g->esp = sp0 - 0x30u;
                            t64 = cow_fastcall(g, COW_IMG(0x1018d250u), esi - 0xcu, edx, 0);
                            t65 = g->ecx;
                            t66 = g->edx;
                            if (edi != 1u)
                            {
                                eax = t64;
                                edx = t66;
                                esi = esi - 0xcu;
                                edi = edi - 1u;
                                goto L_10154776;
                            }
                            eax = t64;
                            ecx = t65;
                            edx = t66;
                        }
    COW_AT(10154783)
                        wr32(sp0 - 0x34u, ebx);
                        g->eax = eax;
                        g->esp = sp0 - 0x30u;
                        t67 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
                        t68 = g->edx;
                        eax = t67;
                        edx = t68;
                    }
    COW_AT(1015478c)
                    ebx = rd32(sp0 - 0x18u);
                }
    COW_AT(10154790)
                wr8(sp0 - 0x1cu, 1u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
            }
            else
            {
                eax = rd32(sp0 - 0x20u);
    COW_AT(1015461c)
                wr32(sp0 - 0x34u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t19 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
                t20 = g->edx;
                eax = t19;
                edx = t20;
                ebx = self;
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
            }
        }
        else
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            ebp = t9;
    COW_AT(101545d4)
            wr32(sp0 - 0x34u, ebp);
            g->eax = eax;
            g->esp = sp0 - 0x30u;
            t15 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
            t16 = g->edx;
            eax = t15;
            edx = t16;
            ebx = self;
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
        }
    }
    COW_AT(10154795)
    t69 = rd8(sp0 - 0x1cu);
    wr32(ebx + 0x88u, 0u);
    if ((uint8_t)t69 == 0u)
    {
        eax = (eax & 0xffffff00u) | t69;
    }
    else
    {
    COW_AT(101547a7)
        wr32(sp0 - 0x34u, 0x40u);
        wr32(sp0 - 0x38u, ebx + 0x24u);
        g->eax = ebx + 0x24u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t70 = cow_thiscall(g, COW_IMG(0x10257bc0u), ebx + 0x64u, 2, ebx + 0x24u, 0x40u);
        t71 = g->edx;
        eax = t70;
        edx = t71;
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
    COW_AT(101547b5)
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10257860u), sp0 - 0x10u, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return (uint8_t)rd32(sp0 - 0x1cu);
L_1015460f: ;
    COW_AT(1015460f)
    eax = -cf + 1u - cf;
    goto L_10154614;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10154570(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101545b1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x101545d4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101545e2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101545ebu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101545f3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101545f7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154601u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1015460bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1015460fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154614u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1015461cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1015462au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154658u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015469cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546acu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546adu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546bau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546beu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546c4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546ccu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546dbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101546dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154715u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1015473du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        self = g->ebx - 0x8u;
        g->esp = sp0 - 0x30u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015473fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        self = g->ebx - 0x8u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1015475fu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154763u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154773u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154776u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154783u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1015478cu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154790u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10154795u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101547a7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101547b5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10154570(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10154570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
