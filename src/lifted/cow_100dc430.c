/* f_0x100dc430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100dc430(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100dc451u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc451;
    case 0x100dc456u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc456;
    case 0x100dc45eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc45e;
    case 0x100dc474u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc474;
    case 0x100dc47cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc47c;
    case 0x100dc481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc481;
    case 0x100dc485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc485;
    case 0x100dc48fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc48f;
    case 0x100dc4a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100dc4a5;
    case 0x100dc50eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100dc50e;
    case 0x100dc531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100dc531;
    case 0x100dc55fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100dc55f;
    case 0x100dc603u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100dc603;
    case 0x100dc619u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100dc619;
    case 0x100dc61eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100dc61e;
    case 0x100dc62eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100dc62e;
    case 0x100dc637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_100dc637;
    default: break;
    }
#endif

    COW_AT(100dc430)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    t1 = rd8(rd32(COW_IMG(0x104ae8acu)) + 0x1afc4u);
    wr32(sp0 - 0x18u, in_edi);
    if ((int32_t)(t1 + 1u & 0x80000003u) >= 0)
    {
        eax = t1 + 1u & 0x80000003u;
        edx = rd32(COW_IMG(0x104ae8acu));
        esi = t1;
    }
    else
    {
        eax = t1 + 1u & 0x80000003u;
        edx = rd32(COW_IMG(0x104ae8acu));
        esi = t1;
    COW_AT(100dc451)
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(100dc456)
    if (esi == eax)
    {
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100dc637;
    }
    ebx = in_ebx;
L_100dc45e: ;
    COW_AT(100dc45e)
    if (rd8(eax * 0x6bf0u + edx + 4u) == 0u) goto L_100dc48f;
    ebx = (ebx & 0xffffff00u) | rd8(eax * 0x6bf0u + edx + 4u);
    COW_AT(100dc474)
    if ((int32_t)(eax + 1u & 0x80000003u) >= 0)
    {
        eax = eax + 1u & 0x80000003u;
    }
    else
    {
        eax = eax + 1u & 0x80000003u;
    COW_AT(100dc47c)
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(100dc481)
    if (esi != eax) goto L_100dc45e;
    COW_AT(100dc485)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_100dc48f: ;
    COW_AT(100dc48f)
    if (eax * 0x6bf0u + edx == 0u)
    {
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100dc637;
    }
    esi = eax * 0x6bf0u + edx;
    COW_AT(100dc4a5)
    wr32(sp0 - 0x1cu, 0x11u);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 2u);
    edi = esi;
    eax = 0u;
    ecx = 0x1afcu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(esi + 4u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032948cu)), 3, 2u, 2u, 0x11u);   /* ws2_32.dll!socket */
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(esi, t2);
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x10311245u), 1, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x1cu, t5);
    g->ecx = t6;
    g->edx = t7;
    t8 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t5);   /* ws2_32.dll!htons */
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    t11 = rd32(sp0 + 4u);
    wr16(t11, (uint16_t)t8);
    g->ecx = t9;
    g->edx = t10;
    t12 = cow_stdcall(g, rd32(COW_IMG(0x10329474u)), 1, 0u);   /* ws2_32.dll!htonl */
    t13 = g->ecx;
    t14 = g->edx;
    wr32(esi + 0x6be4u, t12);
    wr32(sp0 - 0x1cu, 0x10u);
    t15 = rd32(esi);
    wr16(esi + 0x6be0u, 2u);
    wr32(sp0 - 0x20u, esi + 0x6be0u);
    wr32(sp0 - 0x24u, t15);
    t16 = rd16(t11);
    wr16(esi + 0x6be2u, (uint16_t)t16);
    g->eax = t15;
    g->ecx = t13;
    g->edx = (t14 & 0xffff0000u) | t16;
    t17 = cow_stdcall(g, rd32(COW_IMG(0x10329454u)), 3, t15, esi + 0x6be0u, 0x10u);   /* ws2_32.dll!bind */
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 >= 0)
    {
        eax = t17;
        goto L_100dc55f;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    ebx = esi + 0x6be0u;
    ebp = 0u;
    edi = t11;
L_100dc50e: ;
    COW_AT(100dc50e)
    t20 = (ecx & 0xffff0000u) | rd16(edi);
    wr32(sp0 - 0x1cu, t20);
    g->eax = eax;
    g->ecx = t20;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_stdcall(g, rd32(COW_IMG(0x10329458u)), 1, t20);   /* ws2_32.dll!ntohs */
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x1cu, t21 + 0x100u);
    g->eax = t21 + 0x100u;
    g->ecx = t22;
    g->edx = t23;
    t24 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t21 + 0x100u);   /* ws2_32.dll!htons */
    t25 = g->ecx;
    t26 = g->edx;
    wr16(edi, (uint16_t)t24);
    if ((int32_t)(ebp + 1u) >= 100)
    {
        eax = t24;
        ecx = t25;
        goto L_100dc62e;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    ebp = ebp + 1u;
    COW_AT(100dc531)
    wr32(sp0 - 0x1cu, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t27 = cow_stdcall(g, rd32(COW_IMG(0x10329474u)), 1, 0u);   /* ws2_32.dll!htonl */
    t28 = g->ecx;
    t29 = g->edx;
    wr32(esi + 0x6be4u, t27);
    t30 = rd32(esi);
    wr16(ebx, 2u);
    wr32(sp0 - 0x1cu, 0x10u);
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, t30);
    t31 = rd16(edi);
    wr16(esi + 0x6be2u, (uint16_t)t31);
    g->eax = t30;
    g->ecx = t28;
    g->edx = (t29 & 0xffff0000u) | t31;
    t32 = cow_stdcall(g, rd32(COW_IMG(0x10329454u)), 3, t30, ebx, 0x10u);   /* ws2_32.dll!bind */
    t33 = g->ecx;
    t34 = g->edx;
    if ((int32_t)t32 < 0)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        ebp = ebp + 1u;
        goto L_100dc50e;
    }
    eax = t32;
L_100dc55f: ;
    COW_AT(100dc55f)
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, 0x1002u);
    wr32(sp0 - 0x28u, 0xffffu);
    wr32(sp0 - 0x2cu, rd32(esi));
    t35 = rd32(esi);
    t36 = rd32(COW_IMG(0x1032945cu));
    wr32(sp0 + 4u, 0x1c138u);
    wr32(sp0 - 8u, 4u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, t36, sp0 + 4u, 5, t35, 0xffffu, 0x1002u, sp0 + 4u, 4u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, 0x1002u);
    wr32(sp0 - 0x28u, 0xffffu);
    wr32(sp0 - 0x2cu, rd32(esi));
    g->edx = rd32(esi);
    t37 = rd32(esi);
    t38 = rd32(COW_IMG(0x10329460u));
    cow_stdcall(g, t38, 5, t37, 0xffffu, 0x1002u, sp0 - 4u, sp0 - 8u);   /* ws2_32.dll!getsockopt */
    t39 = g->edx;
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, 0x1001u);
    wr32(sp0 - 0x28u, 0xffffu);
    wr32(sp0 - 0x2cu, rd32(esi));
    t40 = rd32(esi);
    wr32(sp0 + 4u, 0x186a0u);
    wr32(sp0 - 8u, 4u);
    cow_thiscall(g, t36, t40, 5, t40, 0xffffu, 0x1001u, sp0 + 4u, 4u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, 0x1001u);
    wr32(sp0 - 0x28u, 0xffffu);
    wr32(sp0 - 0x2cu, rd32(esi));
    t41 = rd32(esi);
    cow_thiscall(g, t38, t41, 5, t41, 0xffffu, 0x1001u, sp0 - 4u, sp0 - 8u);
    t42 = g->ecx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, 0x8004667eu);
    wr32(sp0 - 0x24u, rd32(esi));
    t43 = rd32(esi);
    wr32(sp0 + 4u, 1u);
    g->eax = t43;
    g->ecx = t42;
    t44 = cow_stdcall(g, rd32(COW_IMG(0x10329464u)), 3, t43, 0x8004667eu, sp0 + 4u);   /* ws2_32.dll!ioctlsocket */
    t45 = g->ecx;
    if (t44 != 0u)
    {
        eax = t44;
        ecx = t45;
        goto L_100dc62e;
    }
    COW_AT(100dc603)
    if ((int32_t)(rd8(rd32(COW_IMG(0x104ae8acu)) + 0x1afc4u) + 1u & 0x80000003u) >= 0)
    {
        eax = rd32(COW_IMG(0x104ae8acu));
        ecx = rd8(rd32(COW_IMG(0x104ae8acu)) + 0x1afc4u) + 1u & 0x80000003u;
    }
    else
    {
        eax = rd32(COW_IMG(0x104ae8acu));
        ecx = rd8(rd32(COW_IMG(0x104ae8acu)) + 0x1afc4u) + 1u & 0x80000003u;
    COW_AT(100dc619)
        ecx = (ecx - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(100dc61e)
    wr8(eax + 0x1afc4u, (uint8_t)ecx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return esi;
L_100dc62e: ;
    COW_AT(100dc62e)
    wr32(sp0 - 0x1cu, rd32(esi));
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329484u)), 1, rd32(esi));   /* ws2_32.dll!closesocket */
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_100dc637: ;
    COW_AT(100dc637)
    g->ebx = loc_c;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = loc_10;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100dc430(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100dc451u:
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
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0xcu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100dc456u:
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
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0xcu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100dc45eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc474u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc47cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc481u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc485u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc48fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc4a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc50eu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc531u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc55fu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc603u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100dc619u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100dc61eu:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100dc62eu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100dc637u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc430(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100dc430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
