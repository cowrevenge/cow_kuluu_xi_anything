/* f_0x100ce480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_100ce480(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ce4aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ce4aa;
    case 0x100ce4b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ce4b9;
    case 0x100ce4cau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce4ca;
    case 0x100ce4d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce4d2;
    case 0x100ce4d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce4d6;
    case 0x100ce4d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce4d8;
    case 0x100ce4dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce4db;
    case 0x100ce4dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce4df;
    case 0x100ce4e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce4e3;
    case 0x100ce4e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce4e5;
    case 0x100ce502u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce502;
    case 0x100ce50eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce50e;
    case 0x100ce517u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce517;
    case 0x100ce524u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce524;
    case 0x100ce52bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100ce52b;
    case 0x100ce53eu: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce53e;
    case 0x100ce542u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100ce542;
    case 0x100ce555u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce555;
    case 0x100ce564u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce564;
    case 0x100ce56cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce56c;
    case 0x100ce570u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce570;
    case 0x100ce572u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce572;
    case 0x100ce576u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce576;
    case 0x100ce58du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ce58d;
    case 0x100ce598u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ce598;
    case 0x100ce5a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ce5a4;
    case 0x100ce5b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100ce5b9;
    case 0x100ce5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce5be;
    case 0x100ce5c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ce5c3;
    case 0x100ce5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce5e0;
    case 0x100ce5f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce5f1;
    case 0x100ce5f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce5f9;
    case 0x100ce5fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce5fd;
    case 0x100ce5ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce5ff;
    case 0x100ce602u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce602;
    case 0x100ce606u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce606;
    case 0x100ce60au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce60a;
    case 0x100ce60cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce60c;
    case 0x100ce625u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce625;
    case 0x100ce631u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce631;
    case 0x100ce63au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce63a;
    case 0x100ce647u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce647;
    case 0x100ce64eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100ce64e;
    case 0x100ce661u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce661;
    case 0x100ce665u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100ce665;
    case 0x100ce678u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce678;
    case 0x100ce683u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce683;
    case 0x100ce687u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce687;
    case 0x100ce69au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce69a;
    case 0x100ce6b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce6b7;
    case 0x100ce6c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6c8;
    case 0x100ce6d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6d0;
    case 0x100ce6d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6d4;
    case 0x100ce6d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6d6;
    case 0x100ce6d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6d9;
    case 0x100ce6ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6dd;
    case 0x100ce6e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6e1;
    case 0x100ce6e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce6e3;
    case 0x100ce700u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce700;
    case 0x100ce70cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce70c;
    case 0x100ce715u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce715;
    case 0x100ce726u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce726;
    case 0x100ce731u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce731;
    case 0x100ce733u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce733;
    case 0x100ce737u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100ce737;
    case 0x100ce74au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce74a;
    case 0x100ce755u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce755;
    case 0x100ce759u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce759;
    case 0x100ce76cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce76c;
    default: break;
    }
#endif

    COW_AT(100ce480)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x20u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x1002c7c0u), rd32(self + 0x7e4u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
        loc_20 = 0u;
        goto L_100ce598;
    }
    edx = t2;
    esi = t1;
    loc_28 = in_ebx;
    loc_2c = in_ebp;
    loc_30 = in_esi;
    loc_34 = in_edi;
    loc_20 = 0u;
L_100ce4aa: ;
    COW_AT(100ce4aa)
    t3 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x24u, t3);
    if (rd32(esi + 0x1cu) == 0u) goto L_100ce58d;
    eax = t3;
    loc_24 = t3;
    COW_AT(100ce4b9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce58d;
    }
    COW_AT(100ce4ca)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100ce4d6)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(100ce4d2)
        eax = rd32(eax);
    }
    COW_AT(100ce4d8)
    edi = rd32(eax + 0x14u);
    loc_24 = rd32(sp0 - 0x24u);
L_100ce4db: ;
    COW_AT(100ce4db)
    if (edi == 0u)
    {
    COW_AT(100ce4e3)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce4df)
        eax = rd32(edi);
    }
    COW_AT(100ce4e5)
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, eax);
    g->edx = arg3;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg2, arg3, arg4);
    t6 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        edx = t6;
        goto L_100ce555;
    }
    eax = rd32(sp0 - 8u);
L_100ce502: ;
    COW_AT(100ce502)
    if (rd32(sp0 - 0x20u) != arg5) goto L_100ce53e;
    COW_AT(100ce50e)
    if (arg2 != 7u) goto L_100ce64e;
    COW_AT(100ce517)
    if (rd32(eax + 0x20u) != rd32(self + 0x7c4u)) goto L_100ce52b;
    edx = rd32(eax + 0x20u);
    COW_AT(100ce524)
    if ((uint8_t)arg6 != 1u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce542;
    }
L_100ce52b: ;
    COW_AT(100ce52b)
    t33 = rd32(eax + 0x14u);
    t34 = rd32(sp0 - 0x2cu);
    t35 = rd32(sp0 - 0x30u);
    t36 = rd32(sp0 - 0x34u);
    wr32(arg1, t33);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t35;
    g->edi = t36;
    g->ebp = t34;
    return arg1;
L_100ce53e: ;
    COW_AT(100ce53e)
    t7 = rd32(sp0 - 0x20u) + 1u;
    wr32(sp0 - 0x20u, t7);
    edx = arg5;
    loc_20 = t7;
L_100ce542: ;
    COW_AT(100ce542)
    wr32(sp0 - 0x38u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t8 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce502;
    }
    edx = t8;
L_100ce555: ;
    COW_AT(100ce555)
    g->eax = rd32(sp0 - 0x24u);
    g->edx = edx;
    t9 = rd32(sp0 - 0x24u);
    g->esp = sp0 - 0x34u;
    t10 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(t9), 0);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce58d;
    }
    eax = t10;
    edx = t11;
    COW_AT(100ce564)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100ce570)
        ecx = 0u;
    }
    else
    {
        ecx = rd32(sp0 - 0x24u);
    COW_AT(100ce56c)
        ecx = rd32(ecx);
    }
    COW_AT(100ce572)
    if (eax == ecx)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce58d;
    }
    COW_AT(100ce576)
    t12 = rd32(eax + 0x14u);
    wr32(sp0 - 0x24u, t12);
    t13 = rd32(COW_IMG(0x1047d130u)) - 1u;
    wr32(COW_IMG(0x1047d130u), t13);
    loc_24 = t12;
    goto L_100ce4db;
L_100ce58d: ;
    COW_AT(100ce58d)
    if (rd32(esi + 8u) != 0u)
    {
        esi = rd32(esi + 8u);
        goto L_100ce4aa;
    }
L_100ce598: ;
    COW_AT(100ce598)
    if (arg3 != 0x74696e69u)
    {
        edi = arg3;
    }
    else
    {
    COW_AT(100ce5a4)
        wr32(sp0 - 0x38u, sp0 + 8u);
        g->eax = rd32(self);
        t14 = rd32(self);
        g->esp = sp0 - 0x34u;
        t15 = cow_thiscall(g, rd32(t14 + 0x1dcu), self, 1, sp0 + 8u);
        if (rd32(t15) == 0u)
        {
            edi = arg3;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
            eax = rd32(t15);
    COW_AT(100ce5b9)
            if (rd32(eax) == 0u)
            {
                edi = arg3;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
    COW_AT(100ce5be)
                edi = 0x30696e69u;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_20 = rd32(sp0 - 0x20u);
            }
        }
    }
    COW_AT(100ce5c3)
    wr32(sp0 - 0x38u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->edx = rd32(self);
    t16 = rd32(self);
    g->esp = sp0 - 0x34u;
    t17 = cow_thiscall(g, rd32(t16 + 0x400u), self, 1, sp0 + 8u);
    t18 = g->edx;
    wr32(sp0 - 0x24u, rd32(t17));
    if (rd32(t17) == 0u) goto L_100ce69a;
    eax = rd32(t17);
    edx = t18;
    loc_24 = rd32(t17);
    COW_AT(100ce5e0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u) goto L_100ce69a;
    edx = t20;
    COW_AT(100ce5f1)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100ce5fd)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(100ce5f9)
        eax = rd32(eax);
    }
    COW_AT(100ce5ff)
    esi = rd32(eax + 0x14u);
L_100ce602: ;
    COW_AT(100ce602)
    if (esi == 0u)
    {
    COW_AT(100ce60a)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce606)
        eax = rd32(esi);
    }
    COW_AT(100ce60c)
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg2, edi, arg4);
    t21 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t21;
        goto L_100ce678;
    }
    eax = rd32(sp0 - 8u);
L_100ce625: ;
    COW_AT(100ce625)
    if (rd32(sp0 - 0x20u) != arg5)
    {
        edx = rd32(sp0 - 0x20u);
        goto L_100ce661;
    }
    COW_AT(100ce631)
    if (arg2 != 7u) goto L_100ce52b;
    COW_AT(100ce63a)
    if (rd32(eax + 0x20u) != rd32(self + 0x7c4u)) goto L_100ce64e;
    edx = rd32(self + 0x7c4u);
    COW_AT(100ce647)
    if ((uint8_t)arg6 != 1u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce665;
    }
L_100ce64e: ;
    COW_AT(100ce64e)
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
L_100ce661: ;
    COW_AT(100ce661)
    t22 = rd32(sp0 - 0x20u) + 1u;
    wr32(sp0 - 0x20u, t22);
    loc_20 = t22;
L_100ce665: ;
    COW_AT(100ce665)
    wr32(sp0 - 0x38u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t23 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce625;
    }
    eax = rd32(sp0 - 8u);
    edx = t23;
L_100ce678: ;
    COW_AT(100ce678)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t24 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t25 = g->edx;
    if (t24 == 0u) goto L_100ce69a;
    eax = t24;
    edx = t25;
    COW_AT(100ce683)
    if (eax == rd32(esi)) goto L_100ce69a;
    COW_AT(100ce687)
    t26 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t27 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t26);
    esi = t27;
    goto L_100ce602;
L_100ce69a: ;
    COW_AT(100ce69a)
    wr32(sp0 - 0x38u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->edx = rd32(self);
    t28 = rd32(self);
    g->esp = sp0 - 0x34u;
    t29 = cow_thiscall(g, rd32(t28 + 0x1dcu), self, 1, sp0 + 8u);
    t30 = g->edx;
    wr32(sp0 - 0x24u, rd32(t29));
    if (rd32(t29) == 0u) goto L_100ce76c;
    eax = rd32(t29);
    edx = t30;
    loc_24 = rd32(t29);
    COW_AT(100ce6b7)
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t31 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    if ((uint8_t)t31 == 0u) goto L_100ce76c;
    COW_AT(100ce6c8)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100ce6d4)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(100ce6d0)
        eax = rd32(eax);
    }
    COW_AT(100ce6d6)
    esi = rd32(eax + 0x14u);
L_100ce6d9: ;
    COW_AT(100ce6d9)
    if (esi == 0u)
    {
    COW_AT(100ce6e1)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce6dd)
        eax = rd32(esi);
    }
    COW_AT(100ce6e3)
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, eax);
    g->edx = arg3;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg2, arg3, arg4);
    t32 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t32;
        goto L_100ce74a;
    }
    eax = rd32(sp0 - 8u);
L_100ce700: ;
    COW_AT(100ce700)
    if (rd32(sp0 - 0x20u) != arg5) goto L_100ce733;
    COW_AT(100ce70c)
    if (arg2 != 7u) goto L_100ce64e;
    COW_AT(100ce715)
    if (rd32(eax + 0x20u) != rd32(self + 0x7c4u)) goto L_100ce52b;
    edx = rd32(eax + 0x20u);
    COW_AT(100ce726)
    if ((uint8_t)arg6 == 1u) goto L_100ce52b;
    COW_AT(100ce731)
    loc_20 = rd32(sp0 - 0x20u);
L_100ce737: ;
    COW_AT(100ce737)
    wr32(sp0 - 0x38u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t42 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100ce700;
    }
    eax = rd32(sp0 - 8u);
    edx = t42;
L_100ce74a: ;
    COW_AT(100ce74a)
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t43 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    if (t43 == 0u) goto L_100ce76c;
    eax = t43;
    COW_AT(100ce755)
    if (eax == rd32(esi)) goto L_100ce76c;
    COW_AT(100ce759)
    t44 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t45 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t44);
    esi = t45;
    goto L_100ce6d9;
L_100ce733: ;
    COW_AT(100ce733)
    t41 = rd32(sp0 - 0x20u) + 1u;
    wr32(sp0 - 0x20u, t41);
    edx = arg5;
    loc_20 = t41;
    goto L_100ce737;
L_100ce76c: ;
    COW_AT(100ce76c)
    t46 = rd32(sp0 - 0x2cu);
    t47 = rd32(sp0 - 0x30u);
    t48 = rd32(sp0 - 0x34u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t47;
    g->edi = t48;
    g->ebp = t46;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ce480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ce4aau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
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
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
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
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4cau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4d2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4d6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4dbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4dfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4e3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce4e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce502u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce50eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce517u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce524u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce52bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100ce53eu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->edx = arg5;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce542u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce555u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce564u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce56cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce570u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce572u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce576u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce58du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
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
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce598u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
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
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce5a4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce5b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->ebp = arg2;
        g->edi = arg3;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce5beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce5c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
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
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce5e0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce5f1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce5f9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce5fdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce5ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce602u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce606u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce60au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce60cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce625u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce631u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce63au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce647u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce64eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100ce661u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce665u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce678u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce683u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce687u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce69au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce6b7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce6c8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce6d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce6d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce6d6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100ce6d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce6ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce6e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce6e3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce700u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce70cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce715u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce726u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce731u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce733u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->edx = arg5;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce737u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce74au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce755u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce759u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ce76cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ce480(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
