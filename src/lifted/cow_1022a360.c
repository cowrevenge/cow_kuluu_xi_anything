/* f_0x1022a360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022a360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t5;
    uint32_t t6;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022a398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1022a398;
    case 0x1022a39fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1022a39f;
    case 0x1022a3a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1022a3a1;
    case 0x1022a410u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1022a410;
    case 0x1022a428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1022a428;
    case 0x1022a434u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1022a434;
    case 0x1022a439u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1022a439;
    case 0x1022a442u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1022a442;
    case 0x1022a44eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1022a44e;
    case 0x1022a45cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a45c;
    case 0x1022a460u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a460;
    case 0x1022a465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a465;
    case 0x1022a46du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a46d;
    case 0x1022a46fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a46f;
    case 0x1022a479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a479;
    case 0x1022a4aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a4aa;
    case 0x1022a4aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a4ae;
    case 0x1022a4bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022a4bc;
    case 0x1022a4c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1022a4c4;
    case 0x1022a4d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1022a4d1;
    case 0x1022a4dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1022a4db;
    case 0x1022a4e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1022a4e7;
    default: break;
    }
#endif

    COW_AT(1022a360)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    g->esp = sp0 - 0x38u;
    t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101549e0u), t1, 0);
    t4 = g->edx;
    wr32(sp0 - 0x1cu, t3);
    cow_fastcall(g, COW_IMG(0x10229740u), self, t4, 0);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = t3 * 8u + 4u;
    wr32(sp0 - 0x3cu, t7);
    g->eax = t7;
    g->esp = sp0 - 0x30u;
    t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t5, t6, 1, 3, t7, in_edi, in_esi);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        ebx = t3;
    COW_AT(1022a39f)
        eax = 0u;
    }
    else
    {
        eax = t8;
        edx = t9;
        ebx = t3;
    COW_AT(1022a398)
        wr32(eax, ebx);
        eax = eax + 4u;
    }
    COW_AT(1022a3a1)
    wr32(sp0 - 0x3cu, 8u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, ebx);
    wr32(sp0 - 0x48u, 0u);
    wr32(self + 0x78u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t10 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, ebx, 0u, 8u);
    t11 = g->edx;
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    t12 = rd32(self + 8u);
    wr32(self + 0x1cu, COW_IMG(0x1022af40u));
    wr32(self + 0x58u, 1u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->ebx = ebx;
    g->edi = 0u;
    cow_thiscall(g, COW_IMG(0x10118900u), t12, 4, sp0 - 0xcu, 1u, 1u, 1u);
    t13 = (uint32_t)(int16_t)(rd32(sp0 - 6u) - rd32(sp0 - 0xau));
    wr32(sp0 - 0x10u, t13);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x24u, 0u);
    if ((int32_t)ebx <= 0)
    {
        eax = t13;
        edx = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
        edi = 0u;
        loc_18 = 0u;
        goto L_1022a4d1;
    }
    eax = t13;
    ecx = rd32(sp0 - 0xau);
    edx = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
    ebp = 0u;
    edi = 0u;
    loc_10 = t13;
    loc_28 = 0u;
    loc_20 = 0u;
    loc_18 = 0u;
    loc_24 = 0u;
L_1022a410: ;
    COW_AT(1022a410)
    wr32(sp0 - 0x3cu, ebp);
    g->esp = sp0 - 0x38u;
    t14 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 1, ebp);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x10154550u), t14, 1, rd32(sp0 - 0x3cu));
    t17 = g->ecx;
    wr32(sp0 - 0x14u, t16);
    if (rd8(t16) != 0x2du)
    {
        ecx = (t17 & 0xffffff00u) | rd8(t16);
        loc_14 = t16;
    COW_AT(1022a442)
        if (rd32(sp0 - 0x28u) != arg1)
        {
            eax = arg1;
            edx = rd32(sp0 - 0x28u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
            edx = rd32(sp0 - 0x28u);
    COW_AT(1022a44e)
            wr32(sp0 - 0x3cu, ebp);
            g->eax = arg1;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t19 = cow_thiscall_cdecl(g, COW_IMG(0x1022af80u), ecx, 1, ebp);
            t20 = g->ecx;
            t21 = g->edx;
            if (t19 != 1u)
            {
                eax = t19;
                ecx = t20;
                edx = t21;
                loc_18 = rd32(sp0 - 0x18u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                eax = t19;
                edx = t21;
    COW_AT(1022a45c)
                if ((int32_t)edi < 0) goto L_1022a46d;
    COW_AT(1022a460)
                if ((int32_t)edi >= (int32_t)rd32(self + 0x44u)) goto L_1022a46d;
    COW_AT(1022a465)
                eax = rd32(self + 0x20u);
                ebp = edi * 8u + rd32(self + 0x20u);
L_1022a46f: ;
    COW_AT(1022a46f)
                if (ebp == 0u)
                {
                    ecx = rd32(self + 0x78u);
                    loc_20 = rd32(sp0 - 0x20u);
                }
                else
                {
                    ebx = edi * 8u + rd32(self + 0x78u);
    COW_AT(1022a479)
                    t22 = rd32(sp0 - 0x24u);
                    wr32(sp0 - 0x3cu, t22);
                    g->eax = eax;
                    g->edx = t22;
                    g->esp = sp0 - 0x38u;
                    t23 = cow_thiscall(g, COW_IMG(0x102295a0u), ebx, 1, t22);
                    t24 = g->ecx;
                    t25 = g->edx;
                    g->edx = t25;
                    t26 = cow_thiscall(g, COW_IMG(0x102295c0u), t24, 0);
                    t27 = g->ecx;
                    t28 = g->edx;
                    t29 = rd32(sp0 - 0x14u);
                    wr32(sp0 - 0x3cu, t29);
                    wr32(sp0 - 0x40u, 0u);
                    wr32(sp0 - 0x44u, 0x12u);
                    wr32(sp0 - 0x48u, t26);
                    g->edx = t28;
                    cow_cdecl(g, COW_IMG(0x10233380u), 4, t26, 0x12u, 0u, t29);
                    t30 = g->edx;
                    if ((int16_t)rd16(t26 + 2u) >= (int32_t)rd32(sp0 - 0x10u))
                    {
                        ecx = (uint32_t)(int16_t)rd16(t26 + 2u);
                        edx = t30;
                    }
                    else
                    {
                        eax = rd32(sp0 - 0x10u);
                        ecx = (uint32_t)(int16_t)rd16(t26 + 2u);
                        edx = t30;
                        edi = t26;
    COW_AT(1022a4aa)
                        wr16(edi + 2u, (uint16_t)eax);
                    }
    COW_AT(1022a4ae)
                    t31 = rd32(sp0 - 0x20u);
                    wr32(ebp, ebx);
                    wr32(sp0 - 0x20u, t31 + 1u);
                    eax = t31 + 1u;
                    edi = t31 + 1u;
                    loc_20 = t31 + 1u;
                }
    COW_AT(1022a4bc)
                ebx = rd32(sp0 - 0x1cu);
                ebp = rd32(sp0 - 0x24u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    }
    else
    {
        eax = t16;
    COW_AT(1022a428)
        if (rd32(sp0 - 0x28u) != arg1)
        {
            ecx = rd32(sp0 - 0x28u);
            loc_18 = rd32(sp0 - 0x18u);
        }
        else
        {
            ecx = rd32(sp0 - 0x28u);
    COW_AT(1022a434)
            wr32(sp0 - 0x18u, eax + 1u);
            loc_18 = eax + 1u;
            eax = eax + 1u;
        }
    COW_AT(1022a439)
        t18 = rd32(sp0 - 0x28u) + 1u;
        wr32(sp0 - 0x28u, t18);
        edx = arg1;
        loc_28 = t18;
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(1022a4c4)
    wr32(sp0 - 0x24u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)ebx)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_24 = ebp + 1u;
        ebp = ebp + 1u;
        goto L_1022a410;
    }
L_1022a4d1: ;
    COW_AT(1022a4d1)
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
    COW_AT(1022a4db)
        wr32(sp0 - 0x3cu, 2u);
        wr32(sp0 - 0x40u, loc_18);
        g->edx = loc_18;
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, loc_18, 2u);
        t32 = g->edx;
        edx = t32;
    }
    COW_AT(1022a4e7)
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 2u);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    g->ebx = ebx;
    g->edi = edi;
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x38u;
    t33 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0xcu, 2u, 1u, 1u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 1u);
    t34 = (uint32_t)(int16_t)rd16(sp0 - 0xau);
    wr32(self + 0x84u, t34);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    g->ebx = ebx;
    g->edi = edi;
    t35 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0xcu, 1u, 1u, 1u);
    t36 = rd16(sp0 - 6u);
    wr16(sp0 - 0xau, (uint16_t)(rd16(sp0 - 0xau) - 1u));
    t37 = rd32(self + 0x84u);
    wr16(sp0 - 6u, (uint16_t)((uint16_t)t36 - 1u));
    t38 = t37 - (uint32_t)(int16_t)((uint16_t)t36 - 1u);
    t39 = rd32(sp0 - 8u);
    wr32(self + 0x84u, t38);
    t40 = rd32(sp0 - 0xcu);
    wr32(self + 0x7cu, t40);
    wr32(sp0 - 0x3cu, sp0 - 0xcu);
    t41 = rd32(self + 8u);
    wr32(self + 0x80u, t39);
    t42 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t41, g->edx, 0, 1, sp0 - 0xcu);
    t43 = g->ecx;
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, edi);
    t44 = rd32(sp0 - 0xau);
    wr16(self + 0x82u, (uint16_t)(t44 + ((t43 & 0xffff0000u) | (uint16_t)(rd16(sp0 - 6u) - rd16(self + 0x7eu)))));
    cow_fastcall(g, COW_IMG(0x10221a80u), self, t44, 2, edi, 1u);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return;
L_1022a46d: ;
    COW_AT(1022a46d)
    ebp = 0u;
    goto L_1022a46f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022a360(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022a398u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022a39fu:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022a3a1u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022a410u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a428u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a434u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022a439u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022a442u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a44eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022a45cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a460u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a465u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a46du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a46fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a479u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a4aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a4aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a4bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a4c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a4d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a4dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022a4e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a360(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022a360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
