/* f_0x10287d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10287d80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_208;
    uint32_t loc_21c;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 572u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10287d8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebp = rd32(sp0 - 0x210u); g->ebp = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10287d8f;
    case 0x10287d98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287d98;
    case 0x10287d9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287d9c;
    case 0x10287da6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287da6;
    case 0x10287db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287db6;
    case 0x10287dc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287dc8;
    case 0x10287dd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287dd2;
    case 0x10287ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287ddc;
    case 0x10287decu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10287dec;
    case 0x10287df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10287df1;
    case 0x10287df9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287df9;
    case 0x10287e03u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287e03;
    case 0x10287e13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287e13;
    case 0x10287e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287e23;
    case 0x10287e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287e28;
    case 0x10287e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287e37;
    case 0x10287e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287e3a;
    case 0x10287e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287e4a;
    case 0x10287e59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287e59;
    case 0x10287e64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287e64;
    case 0x10287e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287e73;
    case 0x10287e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10287e83;
    case 0x10287e89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_208 = rd32(sp0 - 0x208u); goto E_10287e89;
    case 0x10287ea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287ea4;
    case 0x10287ebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10287ebb;
    case 0x10287ecfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_208 = rd32(sp0 - 0x208u); goto E_10287ecf;
    case 0x10287edfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10287edf;
    case 0x10287eedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10287eed;
    case 0x10287ef4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287ef4;
    case 0x10287ef7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287ef7;
    case 0x10287efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); loc_208 = rd32(sp0 - 0x208u); goto E_10287efb;
    case 0x10287f16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287f16;
    case 0x10287f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287f2d;
    case 0x10287f41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_208 = rd32(sp0 - 0x208u); goto E_10287f41;
    case 0x10287f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287f55;
    case 0x10287f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287f63;
    case 0x10287f6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287f6a;
    case 0x10287f6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_21c = rd32(sp0 - 0x21cu); goto E_10287f6d;
    case 0x10287f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287f73;
    case 0x10287f79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287f79;
    case 0x10287f7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287f7e;
    case 0x10287f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287f8c;
    case 0x10287f95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287f95;
    case 0x10287f9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287f9c;
    case 0x10287fb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10287fb3;
    default: break;
    }
#endif

    COW_AT(10287d80)
    wr32(sp0 - 0x20cu, in_ebx);
    wr32(sp0 - 0x210u, in_ebp);
    wr32(sp0 - 0x214u, in_esi);
    wr32(sp0 - 0x218u, in_edi);
    g->esp = sp0 - 0x218u;
    t1 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10287d8f)
    wr32(sp0 - 0x204u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    t4 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10287d98)
    if (eax == 0u) goto L_10287db6;
    COW_AT(10287d9c)
    wr32(sp0 - 0x21cu, COW_IMG(0x103b8a0cu));
    g->esp = sp0 - 0x214u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8a0cu), rd32(sp0 - 0x218u));
    COW_AT(10287da6)
    g->ebx = rd32(sp0 - 0x20cu);
    g->esi = rd32(sp0 - 0x214u);
    g->edi = rd32(sp0 - 0x218u);
    g->ebp = rd32(sp0 - 0x210u);
    return 0u;
L_10287db6: ;
    COW_AT(10287db6)
    wr32(sp0 - 0x21cu, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x220u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), ecx, 2, arg1, COW_IMG(0x1036bf68u));
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10287dc8)
    wr32(sp0 - 0x21cu, arg1);
    if (eax != 0u)
    {
        ebp = eax;
        goto L_10287dec;
    }
    COW_AT(10287dd2)
    wr32(sp0 - 0x220u, COW_IMG(0x103b89d4u));
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b89d4u), arg1);
    COW_AT(10287ddc)
    g->ebx = rd32(sp0 - 0x20cu);
    g->esi = rd32(sp0 - 0x214u);
    g->edi = rd32(sp0 - 0x218u);
    g->ebp = rd32(sp0 - 0x210u);
    return 0u;
L_10287dec: ;
    COW_AT(10287dec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1f8u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x1028a380u), ecx, 9, arg1, rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu));
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10287df1)
    wr32(sp0 - 0x220u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x1028a2b0u), ecx, 1, arg1);
    t14 = g->ecx;
    t15 = g->edx;
    ecx = t14;
    edx = t15;
    esi = eax;
    eax = t13;
    COW_AT(10287df9)
    wr32(sp0 - 0x21cu, eax);
    if (esi == 0u)
    {
        edi = eax;
        loc_21c = eax;
    COW_AT(10287e28)
        wr32(sp0 - 0x220u, COW_IMG(0x103b7e98u));
        wr32(sp0 - 0x224u, sp0 - 0x200u);
        g->eax = eax;
        g->ecx = sp0 - 0x200u;
        g->edx = edx;
        g->esp = sp0 - 0x210u;
        t22 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x103b7e98u), loc_21c, rd32(sp0 - 0x218u), rd32(sp0 - 0x214u));
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    COW_AT(10287e37)
    }
    else
    {
        edi = eax;
        loc_21c = eax;
    COW_AT(10287e03)
        wr32(sp0 - 0x220u, esi);
        wr32(sp0 - 0x224u, COW_IMG(0x103b7eccu));
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        g->eax = sp0 - 0x200u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x214u;
        t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x103b7eccu), esi, loc_21c, rd32(sp0 - 0x218u));
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(10287e13)
        wr32(sp0 - 0x22cu, 0xb46u);
        wr32(sp0 - 0x230u, COW_IMG(0x103b7ea0u));
        wr32(sp0 - 0x234u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x228u;
        t19 = cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b7ea0u), 0xb46u);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(10287e23)
    }
    COW_AT(10287e3a)
    wr32(sp0 - 0x21cu, 0xb4cu);
    wr32(sp0 - 0x220u, COW_IMG(0x103b7ea0u));
    wr32(sp0 - 0x224u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x218u;
    t25 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103b7ea0u), 0xb4cu);
    t26 = g->ecx;
    eax = t25;
    ecx = t26;
    COW_AT(10287e4a)
    wr32(sp0 - 0x228u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x22cu, sp0 - 0x200u);
    g->eax = eax;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x224u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), ecx, 2, sp0 - 0x200u, COW_IMG(0x1036bf68u));
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(10287e59)
    if (eax != 0u)
    {
        ebx = eax;
        goto L_10287e83;
    }
    ebx = eax;
    COW_AT(10287e64)
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    wr32(sp0 - 0x220u, COW_IMG(0x103b89a0u));
    g->ebx = ebx;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b89a0u), sp0 - 0x200u);
    COW_AT(10287e73)
    g->ebx = rd32(sp0 - 0x20cu);
    g->esi = rd32(sp0 - 0x214u);
    g->edi = rd32(sp0 - 0x218u);
    g->ebp = rd32(sp0 - 0x210u);
    return 0u;
L_10287e83: ;
    COW_AT(10287e83)
    wr32(sp0 - 0x208u, 0u);
    edi = 0u;
    loc_208 = 0u;
L_10287e89: ;
    COW_AT(10287e89)
    wr32(sp0 - 0x21cu, 0xb5cu);
    wr32(sp0 - 0x220u, COW_IMG(0x103b7ea0u));
    wr32(sp0 - 0x224u, loc_208 + 0x800u);
    wr32(sp0 - 0x228u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x204u;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), loc_208 + 0x800u, 9, edi, loc_208 + 0x800u, COW_IMG(0x103b7ea0u), 0xb5cu, rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), loc_208);
    t31 = g->ecx;
    eax = t30;
    ecx = t31;
    COW_AT(10287ea4)
    wr32(sp0 - 0x22cu, ebp);
    wr32(sp0 - 0x230u, 0x800u);
    wr32(sp0 - 0x234u, 1u);
    t32 = eax + rd32(sp0 - 0x208u);
    wr32(sp0 - 0x238u, t32);
    g->eax = t32;
    g->esp = sp0 - 0x220u;
    t33 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, rd32(sp0 - 0x208u), 1, 6, t32, 1u, 0x800u, ebp, rd32(sp0 - 0x228u), rd32(sp0 - 0x224u));
    edi = eax;
    eax = t33;
    COW_AT(10287ebb)
    t34 = eax + rd32(sp0 - 0x208u);
    wr32(sp0 - 0x208u, t34);
    if (eax == 0x800u)
    {
        edx = t34;
        loc_208 = t34;
        goto L_10287e89;
    }
    edx = t34;
    loc_208 = t34;
    COW_AT(10287ecf)
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x224u, 0u);
    wr32(sp0 - 0x228u, sp0 - 0x208u);
    wr32(sp0 - 0x22cu, 0u);
    wr32(sp0 - 0x230u, 1u);
    g->ecx = sp0 - 0x208u;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x10275c80u), 6, 1u, 0u, sp0 - 0x208u, 0u, 0u, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    ecx = t35;
    edx = t36;
    COW_AT(10287edf)
    if ((int32_t)rd32(sp0 - 0x208u) <= 262144)
    {
        eax = rd32(sp0 - 0x208u);
    }
    else
    {
        eax = rd32(sp0 - 0x208u);
    COW_AT(10287eed)
        wr32(sp0 - 0x21cu, 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x218u;
        t37 = cow_cdecl(g, COW_IMG(0x10275c50u), 1, 1u);
        t38 = g->ecx;
        eax = t37;
        ecx = t38;
    COW_AT(10287ef4)
    }
    COW_AT(10287ef7)
    wr32(sp0 - 0x208u, 0u);
    esi = 0u;
    loc_208 = 0u;
L_10287efb: ;
    COW_AT(10287efb)
    wr32(sp0 - 0x21cu, 0xb72u);
    wr32(sp0 - 0x220u, COW_IMG(0x103b7ea0u));
    wr32(sp0 - 0x224u, loc_208 + 0x800u);
    wr32(sp0 - 0x228u, esi);
    g->eax = eax;
    g->edx = loc_208 + 0x800u;
    g->esp = sp0 - 0x204u;
    t39 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), ecx, 9, esi, loc_208 + 0x800u, COW_IMG(0x103b7ea0u), 0xb72u, rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), loc_208);
    t40 = g->edx;
    eax = t39;
    edx = t40;
    COW_AT(10287f16)
    wr32(sp0 - 0x22cu, ebx);
    wr32(sp0 - 0x230u, 0x800u);
    wr32(sp0 - 0x234u, 1u);
    t41 = eax + rd32(sp0 - 0x208u);
    wr32(sp0 - 0x238u, t41);
    g->eax = rd32(sp0 - 0x208u);
    g->ecx = t41;
    t42 = rd32(sp0 - 0x208u);
    g->esp = sp0 - 0x220u;
    t43 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, t41, 1u, 0x800u, ebx, rd32(sp0 - 0x228u), rd32(sp0 - 0x224u));
    t44 = g->ecx;
    ecx = t44;
    esi = eax;
    eax = t43;
    COW_AT(10287f2d)
    t45 = eax + rd32(sp0 - 0x208u);
    wr32(sp0 - 0x208u, t45);
    if (eax == 0x800u)
    {
        loc_208 = t45;
        goto L_10287efb;
    }
    loc_208 = t45;
    COW_AT(10287f41)
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x224u, 0u);
    wr32(sp0 - 0x228u, sp0 - 0x208u);
    wr32(sp0 - 0x22cu, 0u);
    wr32(sp0 - 0x230u, 1u);
    g->ecx = ecx;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x10275c80u), 6, 1u, 0u, sp0 - 0x208u, 0u, 0u, 0u);
    t46 = g->ecx;
    t47 = g->edx;
    ecx = t46;
    edx = t47;
    COW_AT(10287f55)
    if ((int32_t)rd32(sp0 - 0x208u) <= 262144)
    {
        eax = rd32(sp0 - 0x208u);
    }
    else
    {
        eax = rd32(sp0 - 0x208u);
    COW_AT(10287f63)
        wr32(sp0 - 0x21cu, 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x218u;
        t48 = cow_cdecl(g, COW_IMG(0x10275c50u), 1, 0u);
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    COW_AT(10287f6a)
    }
    COW_AT(10287f6d)
    wr32(sp0 - 0x21cu, ebp);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x210u;
    t51 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebp, rd32(sp0 - 0x218u), rd32(sp0 - 0x214u));
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(10287f73)
    wr32(sp0 - 0x220u, ebx);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x214u;
    t54 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u));
    t55 = g->ecx;
    t56 = g->edx;
    eax = t54;
    ecx = t55;
    edx = t56;
    COW_AT(10287f79)
    g->eax = eax;
    g->esp = sp0 - 0x220u;
    t57 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(10287f7e)
    t60 = eax - rd32(sp0 - 0x204u);
    wr32(COW_IMG(0x109a274cu), t60);
    g->eax = t60;
    g->esp = sp0 - 0x220u;
    t61 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
    t62 = g->ecx;
    t63 = g->edx;
    eax = t61;
    ecx = t62;
    edx = t63;
    COW_AT(10287f8c)
    wr32(sp0 - 0x224u, esi);
    wr32(sp0 - 0x228u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t64 = cow_cdecl(g, COW_IMG(0x10287fd0u), 3, edi, esi, rd32(sp0 - 0x220u));
    t65 = g->ecx;
    t66 = g->edx;
    ecx = t65;
    edx = t66;
    ebx = eax;
    eax = t64;
    COW_AT(10287f95)
    g->eax = eax;
    g->esp = sp0 - 0x228u;
    t67 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
    t68 = g->ecx;
    t69 = g->edx;
    ecx = t68;
    edx = t69;
    edi = eax;
    eax = t67;
    COW_AT(10287f9c)
    wr32(sp0 - 0x22cu, 0xb87u);
    wr32(sp0 - 0x230u, COW_IMG(0x103b7ea0u));
    wr32(sp0 - 0x234u, esi);
    wr32(COW_IMG(0x109a2784u), eax - ebx);
    g->esp = sp0 - 0x228u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b7ea0u), 0xb87u);
    COW_AT(10287fb3)
    g->ebx = rd32(sp0 - 0x20cu);
    g->esi = rd32(sp0 - 0x214u);
    g->edi = rd32(sp0 - 0x218u);
    g->ebp = rd32(sp0 - 0x210u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10287d80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10287d8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebp = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x20cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10287d98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x10287d9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x10287da6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x10287db6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x10287dc8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x220u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10287dd2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x21cu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x10287ddcu:
    {
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
        g->esp = sp0 - 0x220u;
        (void)sp0;
        return 1;
    }
    case 0x10287decu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x21cu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x10287df1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10287df9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x220u;
        (void)sp0;
        return 1;
    }
    case 0x10287e03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x10287e13u:
    {
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
        g->esp = sp0 - 0x228u;
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10287e23u:
    {
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
        g->esp = sp0 - 0x234u;
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10287e28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x10287e37u:
    {
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
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x224u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10287e3au:
    {
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
        g->esp = sp0 - 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x10287e4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x10287e59u:
    {
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
        g->esp = sp0 - 0x22cu;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10287e64u:
    {
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
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10287e73u:
    {
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
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x21cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10287e83u:
    {
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
        g->esp = sp0 - 0x218u;
        g->esi = 0u;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10287e89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x218u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10287ea4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x228u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10287ebbu:
    {
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
        g->esp = sp0 - 0x238u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10287ecfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x218u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10287edfu:
    {
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
        g->esp = sp0 - 0x230u;
        g->esi = 0u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287eedu:
    {
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
        g->esp = sp0 - 0x218u;
        g->esi = 0u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287ef4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x21cu;
        g->esi = 0u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287ef7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x218u;
        g->esi = 0u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287efbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_208;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x10287f16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x10287f2du:
    {
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
        g->esp = sp0 - 0x238u;
        (void)sp0;
        return 1;
    }
    case 0x10287f41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_208;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x10287f55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x230u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_21c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_21c = rd32(sp0 - 0x21cu);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f73u:
    {
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
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f79u:
    {
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
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f7eu:
    {
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
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f8cu:
    {
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
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10287f95u:
    {
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
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x10287f9cu:
    {
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
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x10287fb3u:
    {
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
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10287d80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10287d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
