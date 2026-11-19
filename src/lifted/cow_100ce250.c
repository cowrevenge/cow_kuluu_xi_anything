/* f_0x100ce250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ce250(Guest* g)
{
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
    uint32_t loc_34;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ce265u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100ce265;
    case 0x100ce27au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100ce27a;
    case 0x100ce27fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce27f;
    case 0x100ce284u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100ce284;
    case 0x100ce2a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce2a1;
    case 0x100ce2aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2ae;
    case 0x100ce2b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2b6;
    case 0x100ce2bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2ba;
    case 0x100ce2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2bc;
    case 0x100ce2bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2bf;
    case 0x100ce2c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2c3;
    case 0x100ce2c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2c7;
    case 0x100ce2c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2c9;
    case 0x100ce2dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2df;
    case 0x100ce2eau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2ea;
    case 0x100ce2eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2ee;
    case 0x100ce2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce2fe;
    case 0x100ce305u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce305;
    case 0x100ce317u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce317;
    case 0x100ce330u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce330;
    case 0x100ce33du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce33d;
    case 0x100ce345u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce345;
    case 0x100ce349u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce349;
    case 0x100ce34bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce34b;
    case 0x100ce34eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce34e;
    case 0x100ce352u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce352;
    case 0x100ce356u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce356;
    case 0x100ce358u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce358;
    case 0x100ce372u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce372;
    case 0x100ce37du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce37d;
    case 0x100ce381u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce381;
    case 0x100ce391u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce391;
    case 0x100ce398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce398;
    case 0x100ce3aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3aa;
    case 0x100ce3b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3b8;
    case 0x100ce3bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3bf;
    case 0x100ce3c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3c5;
    case 0x100ce3c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3c9;
    case 0x100ce3cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3cd;
    case 0x100ce3cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3cf;
    case 0x100ce3dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce3da;
    case 0x100ce3e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce3e7;
    case 0x100ce3efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce3ef;
    case 0x100ce3f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce3f3;
    case 0x100ce3f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce3f5;
    case 0x100ce3f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce3f8;
    case 0x100ce3fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce3fc;
    case 0x100ce400u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce400;
    case 0x100ce402u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce402;
    case 0x100ce41cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce41c;
    case 0x100ce427u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce427;
    case 0x100ce42bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce42b;
    case 0x100ce43bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce43b;
    case 0x100ce446u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce446;
    case 0x100ce45au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce45a;
    default: break;
    }
#endif

    COW_AT(100ce250)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    if (arg2 != 0x74696e69u)
    {
        edi = arg2;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
    else
    {
    COW_AT(100ce265)
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        g->eax = rd32(self);
        t1 = rd32(self);
        g->esp = sp0 - 0x34u;
        t2 = cow_thiscall(g, rd32(t1 + 0x1dcu), self, 1, sp0 - 0x20u);
        if (rd32(t2) == 0u)
        {
            edi = arg2;
            loc_28 = in_ebx;
            loc_2c = in_ebp;
            loc_30 = in_esi;
            loc_34 = in_edi;
        }
        else
        {
            eax = rd32(t2);
    COW_AT(100ce27a)
            if (rd32(eax) == 0u)
            {
                edi = arg2;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
            }
            else
            {
    COW_AT(100ce27f)
                edi = 0x30696e69u;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
            }
        }
    }
    COW_AT(100ce284)
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall(g, rd32(t3 + 0x400u), self, 1, sp0 - 0x20u);
    t5 = g->edx;
    wr32(sp0 - 0x24u, rd32(t4));
    if (rd32(t4) == 0u) goto L_100ce317;
    eax = rd32(t4);
    edx = t5;
    loc_24 = rd32(t4);
    COW_AT(100ce2a1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t6 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 1u) goto L_100ce317;
    edx = t7;
    COW_AT(100ce2ae)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100ce2ba)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(100ce2b6)
        eax = rd32(eax);
    }
    COW_AT(100ce2bc)
    esi = rd32(eax + 0x14u);
L_100ce2bf: ;
    COW_AT(100ce2bf)
    if (esi == 0u)
    {
    COW_AT(100ce2c7)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce2c3)
        eax = rd32(esi);
    }
    COW_AT(100ce2c9)
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, 0x2bu);
    wr32(sp0 - 0x44u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100ce470u), sp0 - 0x1cu, 4, eax, 0x2bu, edi, arg3);
    t8 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce2fe;
    }
    eax = rd32(sp0 - 8u);
    edx = t8;
    COW_AT(100ce2df)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t9 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t10 = g->edx;
    if (t9 == 0u) goto L_100ce317;
    eax = t9;
    edx = t10;
    COW_AT(100ce2ea)
    if (eax == rd32(esi)) goto L_100ce317;
    COW_AT(100ce2ee)
    t11 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t12 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t11);
    esi = t12;
    goto L_100ce2bf;
L_100ce2fe: ;
    COW_AT(100ce2fe)
    if (rd32(eax + 0x14u) == 0u) goto L_100ce317;
    eax = rd32(eax + 0x14u);
    COW_AT(100ce305)
    t13 = rd32(sp0 - 0x2cu);
    t14 = rd32(sp0 - 0x30u);
    t15 = rd32(sp0 - 0x34u);
    wr32(arg1, eax);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t14;
    g->edi = t15;
    g->ebp = t13;
    return arg1;
L_100ce317: ;
    COW_AT(100ce317)
    wr32(sp0 - 0x38u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = rd32(self);
    t16 = rd32(self);
    g->esp = sp0 - 0x34u;
    t17 = cow_thiscall(g, rd32(t16 + 0x1dcu), self, 1, sp0 + 0xcu);
    t18 = g->edx;
    wr32(sp0 - 0x24u, rd32(t17));
    if (rd32(t17) == 0u)
    {
        edx = t18;
        goto L_100ce3aa;
    }
    eax = rd32(t17);
    edx = t18;
    loc_24 = rd32(t17);
    COW_AT(100ce330)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t20 = g->edx;
    if ((uint8_t)t19 != 1u)
    {
        edx = t20;
        goto L_100ce3aa;
    }
    edx = t20;
    COW_AT(100ce33d)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100ce349)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(100ce345)
        eax = rd32(eax);
    }
    COW_AT(100ce34b)
    esi = rd32(eax + 0x14u);
L_100ce34e: ;
    COW_AT(100ce34e)
    if (esi == 0u)
    {
    COW_AT(100ce356)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce352)
        eax = rd32(esi);
    }
    COW_AT(100ce358)
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, arg2);
    wr32(sp0 - 0x40u, 0x2bu);
    wr32(sp0 - 0x44u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x2bu, arg2, arg3);
    t21 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t21;
        goto L_100ce391;
    }
    eax = rd32(sp0 - 8u);
    edx = t21;
    COW_AT(100ce372)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t22 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t23 = g->edx;
    if (t22 == 0u)
    {
        edx = t23;
        goto L_100ce3aa;
    }
    eax = t22;
    edx = t23;
    COW_AT(100ce37d)
    if (eax == rd32(esi)) goto L_100ce3aa;
    COW_AT(100ce381)
    t24 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t25 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t24);
    esi = t25;
    goto L_100ce34e;
L_100ce391: ;
    COW_AT(100ce391)
    if (rd32(eax + 0x14u) == 0u) goto L_100ce3aa;
    eax = rd32(eax + 0x14u);
    COW_AT(100ce398)
    t26 = rd32(sp0 - 0x2cu);
    t27 = rd32(sp0 - 0x30u);
    t28 = rd32(sp0 - 0x34u);
    wr32(arg1, eax);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t27;
    g->edi = t28;
    g->ebp = t26;
    return arg1;
L_100ce3aa: ;
    COW_AT(100ce3aa)
    if (rd32(self + 0x7e4u) == 0u) goto L_100ce446;
    ebx = rd32(self + 0x7e4u);
L_100ce3b8: ;
    COW_AT(100ce3b8)
    if (rd32(ebx + 0x1cu) == 0u) goto L_100ce43b;
    eax = rd32(ebx + 0x1cu);
    COW_AT(100ce3bf)
    if (rd32(eax) == 0u) goto L_100ce43b;
    ecx = rd32(eax);
    COW_AT(100ce3c5)
    if (eax == 0u)
    {
    COW_AT(100ce3cd)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce3c9)
        eax = ecx;
    }
    COW_AT(100ce3cf)
    t29 = rd32(eax + 0x14u);
    wr32(sp0 - 0x24u, t29);
    if (rd32(eax + 0x14u) == 0u) goto L_100ce43b;
    eax = t29;
    loc_24 = t29;
    COW_AT(100ce3da)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t30 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t31 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        edx = t31;
        goto L_100ce43b;
    }
    COW_AT(100ce3e7)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100ce3f3)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(100ce3ef)
        eax = rd32(eax);
    }
    COW_AT(100ce3f5)
    esi = rd32(eax + 0x14u);
L_100ce3f8: ;
    COW_AT(100ce3f8)
    if (esi == 0u)
    {
    COW_AT(100ce400)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce3fc)
        eax = rd32(esi);
    }
    COW_AT(100ce402)
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, arg2);
    wr32(sp0 - 0x40u, 0x2bu);
    wr32(sp0 - 0x44u, eax);
    g->edx = arg2;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x2bu, arg2, arg3);
    t32 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce45a;
    }
    eax = rd32(sp0 - 8u);
    edx = t32;
    COW_AT(100ce41c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t33 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t34 = g->edx;
    if (t33 == 0u)
    {
        edx = t34;
        goto L_100ce43b;
    }
    eax = t33;
    edx = t34;
    COW_AT(100ce427)
    if (eax == rd32(esi)) goto L_100ce43b;
    COW_AT(100ce42b)
    t35 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t36 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t35);
    esi = t36;
    goto L_100ce3f8;
L_100ce43b: ;
    COW_AT(100ce43b)
    if (rd32(ebx + 4u) != 0u)
    {
        ebx = rd32(ebx + 4u);
        goto L_100ce3b8;
    }
L_100ce446: ;
    COW_AT(100ce446)
    t41 = rd32(sp0 - 0x2cu);
    t42 = rd32(sp0 - 0x30u);
    t43 = rd32(sp0 - 0x34u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t42;
    g->edi = t43;
    g->ebp = t41;
    return arg1;
L_100ce45a: ;
    COW_AT(100ce45a)
    t37 = rd32(eax + 0x14u);
    t38 = rd32(sp0 - 0x2cu);
    t39 = rd32(sp0 - 0x30u);
    t40 = rd32(sp0 - 0x34u);
    wr32(arg1, t37);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t39;
    g->edi = t40;
    g->ebp = t38;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ce250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ce265u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce27au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce27fu:
    {
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce284u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100ce2a1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce2aeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce2b6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce2bau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce2bcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce2bfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce2c3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce2c7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce2c9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce2dfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce2eau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce2eeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce2feu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce305u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100ce317u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce330u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce33du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce345u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce349u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce34bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce34eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce352u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce356u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce358u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce372u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce37du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce381u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce391u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce398u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100ce3aau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3b8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3bfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3c5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3c9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3cdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3cfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3dau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3e7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3efu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3f3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3f5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3f8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce3fcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce400u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce402u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce41cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce427u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce42bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce43bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce446u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100ce45au:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ce250(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
