/* f_0x102b2030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b2030(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    int64_t q14;
    int64_t q19;
    int64_t q28;
    int64_t q33;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b20d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x40u); goto E_102b20d7;
    case 0x102b20dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_2c = rd32(sp0 - 0x2cu); goto E_102b20da;
    case 0x102b2148u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102b2148;
    case 0x102b214du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102b214d;
    case 0x102b2162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102b2162;
    case 0x102b217cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102b217c;
    case 0x102b218cu: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102b218c;
    case 0x102b219du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102b219d;
    case 0x102b21c0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102b21c0;
    case 0x102b2216u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102b2216;
    case 0x102b221bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102b221b;
    case 0x102b2230u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102b2230;
    case 0x102b224au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102b224a;
    case 0x102b225au: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102b225a;
    case 0x102b226bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102b226b;
    case 0x102b228eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102b228e;
    case 0x102b22e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102b22e9;
    case 0x102b22eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102b22ee;
    case 0x102b22f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102b22f0;
    case 0x102b2301u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102b2301;
    case 0x102b230du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102b230d;
    case 0x102b231au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102b231a;
    case 0x102b232fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102b232f;
    case 0x102b2332u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_2c = rd32(sp0 - 0x2cu); goto E_102b2332;
    default: break;
    }
#endif

    COW_AT(102b2030)
    wr32(sp0 - 8u, rd32(COW_IMG(0x103bfb98u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x103bfb9cu)));
    t1 = rd32(COW_IMG(0x103bfb94u));
    t2 = rd32(COW_IMG(0x103bfb98u));
    t3 = rd16(COW_IMG(0x103bfb88u));
    t4 = rd32(COW_IMG(0x103bfbc0u));
    wr16(sp0 - 0x20u, (uint16_t)t3);
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 0x1cu, t4);
    t5 = rd32(COW_IMG(0x103bfb84u));
    t6 = rd32(COW_IMG(0x103bfbb8u));
    wr8(sp0 - 0x16u, rd8(COW_IMG(0x103bfbc6u)));
    wr32(sp0 - 0x24u, t5);
    wr32(sp0 - 0x14u, t6);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, sp0 - 0x38u);
    wr16(sp0 - 0x18u, rd16(COW_IMG(0x103bfbc4u)));
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, COW_IMG(0x103bfbb0u));
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x103bfbbcu)));
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, sp0 - 0xcu, 1, 3, arg2, COW_IMG(0x103bfbb0u), sp0 - 0xcu);
    t7 = g->edx;
    t8 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x54u, t8);
    wr32(sp0 - 0x58u, arg1);
    g->ecx = arg1;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1029a350u), 3, arg1, t8, arg2);
    t9 = g->ecx;
    wr32(sp0 - 0x2cu, 0u);
    if ((int32_t)rd32(sp0 - 0x38u) <= 0)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_40 = in_esi;
    }
    else
    {
        ecx = t9;
    COW_AT(102b20d7)
        wr32(sp0 - 0x44u, in_ebx);
        wr32(sp0 - 0x48u, in_ebp);
        wr32(sp0 - 0x4cu, in_edi);
        loc_40 = in_esi;
        loc_44 = in_ebx;
        loc_48 = in_ebp;
        loc_4c = in_edi;
        loc_2c = 0u;
L_102b20da: ;
    COW_AT(102b20da)
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        wr32(sp0 - 0x58u, COW_IMG(0x1036ff70u));
        wr32(sp0 - 0x5cu, arg2);
        g->eax = sp0 - 0x24u;
        g->esp = sp0 - 0x50u;
        t10 = cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, sp0 - 0x28u, 1, 3, arg2, COW_IMG(0x1036ff70u), sp0 - 0x24u);
        wr32(sp0 - 0x60u, sp0 + 8u);
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x68u, COW_IMG(0x1036ff70u));
        wr32(sp0 - 0x6cu, arg2);
        g->esp = sp0 - 0x60u;
        cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, sp0 - 0x1cu, 1, 3, arg2, COW_IMG(0x1036ff70u), sp0 - 0x1cu);
        t11 = g->edx;
        wr32(sp0 - 0x70u, 0x2efu);
        wr32(sp0 - 0x74u, COW_IMG(0x103bf904u));
        wr32(sp0 - 0x78u, arg2 * 4u);
        wr32(sp0 - 0x7cu, 1u);
        g->eax = arg2;
        g->edx = t11;
        g->esp = sp0 - 0x58u;
        t12 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, arg2 * 4u, COW_IMG(0x103bf904u), 0x2efu, arg2, COW_IMG(0x1036ff70u), sp0 - 0x1cu, sp0 + 8u, arg2);
        t13 = g->edx;
        q14 = (int64_t)cow_muls(0x51eb851fu, arg2);
        t15 = (uint32_t)((int32_t)cow_qhi(q14) >> 5u);
        wr32(sp0 - 0x34u, t12);
        if ((int32_t)(t15 + (t15 >> 0x1fu)) <= 0)
        {
            ebp = 0u;
            loc_34 = t12;
            goto L_102b217c;
        }
        eax = t15 >> 0x1fu;
        edx = t15 + (t15 >> 0x1fu);
        ebp = 0u;
        edi = t12;
        loc_34 = t12;
L_102b2148: ;
    COW_AT(102b2148)
        ecx = arg2;
        ebx = 0x64u;
L_102b214d: ;
    COW_AT(102b214d)
        wr32(sp0 - 0x50u, edi);
        wr32(sp0 - 0x54u, COW_IMG(0x103ba458u));
        wr32(sp0 - 0x58u, arg2);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x4cu;
        t16 = cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, edx, 1, 3, arg2, COW_IMG(0x103ba458u), edi);
        t17 = g->ecx;
        t18 = g->edx;
        if (ebx != 1u)
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            ebx = ebx - 1u;
            edi = edi + 4u;
            loc_34 = rd32(sp0 - 0x34u);
            goto L_102b214d;
        }
        edx = t18;
        edi = edi + 4u;
    COW_AT(102b2162)
        q19 = (int64_t)cow_muls(0x51eb851fu, arg2);
        t20 = (uint32_t)((int32_t)cow_qhi(q19) >> 5u);
        if ((int32_t)(ebp + 1u) < (int32_t)(t20 + (t20 >> 0x1fu)))
        {
            eax = t20 >> 0x1fu;
            edx = t20 + (t20 >> 0x1fu);
            ebp = ebp + 1u;
            loc_34 = rd32(sp0 - 0x34u);
            goto L_102b2148;
        }
        ebp = ebp + 1u;
        loc_34 = rd32(sp0 - 0x34u);
L_102b217c: ;
    COW_AT(102b217c)
        t21 = cow_divs(g, arg2, 0x64u);
        t22 = cow_mods(g, arg2, 0x64u);
        if ((int32_t)t22 > 0)
        {
            edx = t22;
    COW_AT(102b218c)
            eax = loc_34;
            ebx = 0u;
            edi = ebp * 0x190u + loc_34;
L_102b219d: ;
    COW_AT(102b219d)
            wr32(sp0 - 0x50u, edi);
            wr32(sp0 - 0x54u, COW_IMG(0x103ba458u));
            wr32(sp0 - 0x58u, arg2);
            g->esp = sp0 - 0x4cu;
            cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, edx, 1, 3, arg2, COW_IMG(0x103ba458u), edi);
            t23 = cow_divs(g, arg2, 0x64u);
            t24 = cow_mods(g, arg2, 0x64u);
            if ((int32_t)(ebx + 1u) < (int32_t)t24)
            {
                eax = t23;
                edx = t24;
                ebx = ebx + 1u;
                edi = edi + 4u;
                loc_34 = rd32(sp0 - 0x34u);
                goto L_102b219d;
            }
            loc_34 = rd32(sp0 - 0x34u);
        }
    COW_AT(102b21c0)
        wr32(sp0 - 0x50u, sp0 + 8u);
        wr32(sp0 - 0x54u, sp0 - 0x14u);
        wr32(sp0 - 0x58u, COW_IMG(0x1036ff70u));
        wr32(sp0 - 0x5cu, arg2);
        g->eax = sp0 - 0x14u;
        g->esp = sp0 - 0x50u;
        t25 = cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, sp0 + 8u, 1, 3, arg2, COW_IMG(0x1036ff70u), sp0 - 0x14u);
        wr32(sp0 - 0x60u, 0x2fbu);
        wr32(sp0 - 0x64u, COW_IMG(0x103bf904u));
        wr32(sp0 - 0x68u, arg2 * 4u);
        wr32(sp0 - 0x6cu, 1u);
        g->edx = arg2 * 4u;
        g->esp = sp0 - 0x48u;
        t26 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, arg2 * 4u, COW_IMG(0x103bf904u), 0x2fbu, arg2, COW_IMG(0x1036ff70u), sp0 - 0x14u, sp0 + 8u, rd32(sp0 - 0x4cu));
        t27 = g->edx;
        q28 = (int64_t)cow_muls(0x51eb851fu, arg2);
        t29 = (uint32_t)((int32_t)cow_qhi(q28) >> 5u);
        wr32(sp0 - 0x30u, t26);
        if ((int32_t)(t29 + (t29 >> 0x1fu)) <= 0)
        {
            ebp = 0u;
            loc_30 = t26;
            goto L_102b224a;
        }
        eax = t29 >> 0x1fu;
        edx = t29 + (t29 >> 0x1fu);
        ebp = 0u;
        edi = t26;
        loc_30 = t26;
L_102b2216: ;
    COW_AT(102b2216)
        ecx = arg2;
        ebx = 0x64u;
L_102b221b: ;
    COW_AT(102b221b)
        wr32(sp0 - 0x50u, edi);
        wr32(sp0 - 0x54u, COW_IMG(0x103bf9bcu));
        wr32(sp0 - 0x58u, arg2);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x4cu;
        t30 = cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, edx, 1, 3, arg2, COW_IMG(0x103bf9bcu), edi);
        t31 = g->ecx;
        t32 = g->edx;
        if (ebx != 1u)
        {
            eax = t30;
            ecx = t31;
            edx = t32;
            ebx = ebx - 1u;
            edi = edi + 4u;
            loc_30 = rd32(sp0 - 0x30u);
            goto L_102b221b;
        }
        edx = t32;
        edi = edi + 4u;
    COW_AT(102b2230)
        q33 = (int64_t)cow_muls(0x51eb851fu, arg2);
        t34 = (uint32_t)((int32_t)cow_qhi(q33) >> 5u);
        if ((int32_t)(ebp + 1u) < (int32_t)(t34 + (t34 >> 0x1fu)))
        {
            eax = t34 >> 0x1fu;
            edx = t34 + (t34 >> 0x1fu);
            ebp = ebp + 1u;
            loc_30 = rd32(sp0 - 0x30u);
            goto L_102b2216;
        }
        ebp = ebp + 1u;
        loc_30 = rd32(sp0 - 0x30u);
L_102b224a: ;
    COW_AT(102b224a)
        t35 = cow_divs(g, arg2, 0x64u);
        t36 = cow_mods(g, arg2, 0x64u);
        if ((int32_t)t36 <= 0)
        {
            eax = t35;
            edx = t36;
        }
        else
        {
            edx = t36;
    COW_AT(102b225a)
            eax = loc_30;
            ebx = 0u;
            edi = ebp * 0x190u + loc_30;
L_102b226b: ;
    COW_AT(102b226b)
            wr32(sp0 - 0x50u, edi);
            wr32(sp0 - 0x54u, COW_IMG(0x103bf9bcu));
            wr32(sp0 - 0x58u, arg2);
            g->esp = sp0 - 0x4cu;
            cow_call_regs(g, COW_IMG(0x103170c4u), g->eax, g->ecx, edx, 1, 3, arg2, COW_IMG(0x103bf9bcu), edi);
            t37 = cow_divs(g, arg2, 0x64u);
            t38 = cow_mods(g, arg2, 0x64u);
            if ((int32_t)(ebx + 1u) < (int32_t)t38)
            {
                eax = t37;
                edx = t38;
                ebx = ebx + 1u;
                edi = edi + 4u;
                loc_30 = rd32(sp0 - 0x30u);
                goto L_102b226b;
            }
            eax = t37;
            edx = t38;
            loc_30 = rd32(sp0 - 0x30u);
        }
    COW_AT(102b228e)
        g->eax = eax;
        g->esp = sp0 - 0x4cu;
        t39 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
        wr32(sp0 - 0x3cu, t39);
        t40 = rd32(sp0 - 0x34u);
        wr32(t39 + 0x50u, arg2);
        wr32(t39 + 0x30u, t40);
        t41 = rd32(sp0 - 0x30u);
        wr32(t39 + 0x38u, t41);
        wr32(t39 + 0x3cu, 0u);
        t42 = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x50u, t42);
        wr32(sp0 - 0x54u, arg1);
        g->eax = t41;
        g->edx = t42;
        t43 = cow_cdecl(g, COW_IMG(0x1029a440u), 2, arg1, t42);
        t44 = g->edx;
        wr32(rd32(sp0 - 0x3cu) + 0x9cu, t43);
        if (rd32(rd32(sp0 - 0x3cu) + 0x9cu) == 0u)
        {
            ecx = rd32(sp0 - 0x3cu);
            edx = t44;
    COW_AT(102b22ee)
            eax = 0u;
        }
        else
        {
            eax = rd32(rd32(sp0 - 0x3cu) + 0x9cu);
            ecx = rd32(sp0 - 0x3cu);
            edx = t44;
    COW_AT(102b22e9)
            eax = eax + 0x24u;
        }
    COW_AT(102b22f0)
        wr32(ecx + 0x58u, eax);
        if (rd32(rd32(sp0 - 0x3cu) + 0x9cu) == 0u)
        {
            eax = rd32(sp0 - 0x3cu);
            ecx = rd32(rd32(sp0 - 0x3cu) + 0x9cu);
    COW_AT(102b230d)
            wr32(sp0 - 0x50u, sp0 - 0x3cu);
            g->esp = sp0 - 0x44u;
            cow_cdecl(g, COW_IMG(0x102af600u), 3, sp0 - 0x3cu, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
        }
        else
        {
            eax = rd32(sp0 - 0x3cu);
            ecx = rd32(rd32(sp0 - 0x3cu) + 0x9cu);
    COW_AT(102b2301)
            wr32(sp0 - 0x50u, eax);
            wr32(sp0 - 0x54u, arg1);
            g->esp = sp0 - 0x40u;
            cow_call_regs(g, COW_IMG(0x1029a3a0u), eax, g->ecx, g->edx, 1, 5, arg1, eax, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
        }
    COW_AT(102b231a)
        t45 = rd32(sp0 - 0x2cu) + 1u;
        t46 = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x2cu, t45);
        if ((int32_t)(t46 + 1u) < (int32_t)rd32(sp0 - 0x38u))
        {
            ecx = rd32(sp0 - 0x38u);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_2c = t45;
            goto L_102b20da;
        }
    COW_AT(102b232f)
        ebx = rd32(sp0 - 0x44u);
        ebp = rd32(sp0 - 0x48u);
        edi = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(102b2332)
    g->ebx = ebx;
    g->esi = loc_40;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b2030(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b20d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x40u;
        g->esi = arg2;
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        wr32(sp0 - 0x44u, sp0 - 0x38u);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b20dau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2148u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->ecx = arg2;
        g->esi = arg2;
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x60u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b214du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x60u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b2162u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x60u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b217cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->ecx = arg2;
        g->esi = arg2;
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x60u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b218cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->ecx = 0x64u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x60u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b219du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->ecx = 0x64u;
        g->esi = arg2;
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x60u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b21c0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->ecx = 0x64u;
        g->esi = arg2;
        wr32(sp0 - 0x64u, sp0 - 0x1cu);
        wr32(sp0 - 0x60u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102b2216u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        g->ecx = arg2;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b221bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2230u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b224au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        g->ecx = arg2;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b225au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        g->ecx = 0x64u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b226bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        g->ecx = 0x64u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b228eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        g->ecx = 0x64u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b22e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b22eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b22f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b2301u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b230du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b231au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b232fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x102b2332u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2030(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b2030(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
