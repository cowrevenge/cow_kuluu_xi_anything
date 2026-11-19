/* f_0x1009e700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1009e700(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1009e71fu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e71f;
    case 0x1009e734u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e734;
    case 0x1009e747u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e747;
    case 0x1009e752u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e752;
    case 0x1009e765u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e765;
    case 0x1009e769u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e769;
    case 0x1009e77cu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e77c;
    case 0x1009e791u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e791;
    case 0x1009e7a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7a9;
    case 0x1009e7aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7ae;
    case 0x1009e7b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7b7;
    case 0x1009e7c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7c5;
    case 0x1009e7ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7dd;
    case 0x1009e7e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7e2;
    case 0x1009e7ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7eb;
    case 0x1009e7edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e7ed;
    case 0x1009e800u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e800;
    case 0x1009e813u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e813;
    case 0x1009e821u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e821;
    case 0x1009e839u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e839;
    case 0x1009e83eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e83e;
    case 0x1009e847u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e847;
    case 0x1009e855u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e855;
    case 0x1009e86du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e86d;
    case 0x1009e872u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e872;
    case 0x1009e87bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e87b;
    case 0x1009e88cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e88c;
    case 0x1009e89fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e89f;
    case 0x1009e8b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1009e8b2;
    default: break;
    }
#endif

    COW_AT(1009e700)
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) == 0u)
    {
        edx = in_edx;
        goto L_1009e8b2;
    }
    COW_AT(1009e71f)
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) != 0u) goto L_1009e747;
    COW_AT(1009e734)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = arg3;
    return rd8(COW_IMG(0x10359b30u) + arg3);
L_1009e747: ;
    COW_AT(1009e747)
    if ((uint16_t)arg2 != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        goto L_1009e765;
    }
    COW_AT(1009e752)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return rd8(COW_IMG(0x10358730u) + arg3);
L_1009e765: ;
    COW_AT(1009e765)
    if ((uint16_t)arg1 != eax) goto L_1009e77c;
    COW_AT(1009e769)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = arg3;
    return rd8(COW_IMG(0x10358330u) + arg3);
L_1009e77c: ;
    COW_AT(1009e77c)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t2, 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t1;
        goto L_1009e7b7;
    }
    eax = t4;
    esi = t1;
L_1009e791: ;
    COW_AT(1009e791)
    t7 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x74u);
    if (rd32(esi + 0x78u) == rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x78u))
    {
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x78u);
        edx = rd32(esi + 0x78u);
        goto L_1009e7ae;
    }
    ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x78u);
    edx = rd32(esi + 0x78u);
    COW_AT(1009e7a9)
    if (rd32(eax + 0x14u) == ecx) goto L_1009e7ed;
L_1009e7ae: ;
    COW_AT(1009e7ae)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        goto L_1009e791;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
L_1009e7b7: ;
    COW_AT(1009e7b7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_1009e813;
    }
    eax = t11;
L_1009e7c5: ;
    COW_AT(1009e7c5)
    t14 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x74u);
    if (rd32(esi + 0x78u) == rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x78u))
    {
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x78u);
        edx = rd32(esi + 0x78u);
        goto L_1009e7e2;
    }
    ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x78u);
    edx = rd32(esi + 0x78u);
    COW_AT(1009e7dd)
    if (rd32(eax + 0x14u) == ecx) goto L_1009e800;
L_1009e7e2: ;
    COW_AT(1009e7e2)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        goto L_1009e7c5;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(1009e7eb)
L_1009e813: ;
    COW_AT(1009e813)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 5u);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_1009e847;
    }
    eax = t18;
L_1009e821: ;
    COW_AT(1009e821)
    t21 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x74u);
    if (rd32(esi + 0x78u) == rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x78u))
    {
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x78u);
        edx = rd32(esi + 0x78u);
        goto L_1009e83e;
    }
    ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x78u);
    edx = rd32(esi + 0x78u);
    COW_AT(1009e839)
    if (rd32(eax + 0x14u) == ecx) goto L_1009e88c;
L_1009e83e: ;
    COW_AT(1009e83e)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 != 0u)
    {
        eax = t22;
        goto L_1009e821;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
L_1009e847: ;
    COW_AT(1009e847)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 5u);
    t26 = g->edx;
    if (t25 == 0u)
    {
        edx = t26;
        goto L_1009e8b2;
    }
    eax = t25;
L_1009e855: ;
    COW_AT(1009e855)
    t27 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x74u);
    if (rd32(esi + 0x78u) == rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x78u))
    {
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x78u);
        edx = rd32(esi + 0x78u);
        goto L_1009e872;
    }
    ecx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg2 * 4u) + 0x78u);
    edx = rd32(esi + 0x78u);
    COW_AT(1009e86d)
    if (rd32(eax + 0x14u) == ecx) goto L_1009e89f;
L_1009e872: ;
    COW_AT(1009e872)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t28 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t29 = g->edx;
    if (t28 != 0u)
    {
        eax = t28;
        goto L_1009e855;
    }
    eax = t28;
    edx = t29;
    COW_AT(1009e87b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | rd8(COW_IMG(0x10359b30u) + arg3);
L_1009e7ed: ;
    COW_AT(1009e7ed)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return rd8(COW_IMG(0x10358b30u) + arg3);
L_1009e800: ;
    COW_AT(1009e800)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = arg3;
    return rd8(COW_IMG(0x10358f30u) + arg3);
L_1009e88c: ;
    COW_AT(1009e88c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return rd8(COW_IMG(0x10359330u) + arg3);
L_1009e89f: ;
    COW_AT(1009e89f)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = arg3;
    return rd8(COW_IMG(0x10359730u) + arg3);
L_1009e8b2: ;
    COW_AT(1009e8b2)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return rd8(COW_IMG(0x10359b30u) + arg3);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1009e700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1009e71fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e734u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e747u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e752u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e765u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e769u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e77cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e791u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e7edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e800u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e813u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e821u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e839u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e83eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        g->edi = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009e847u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1009e855u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1009e86du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1009e872u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1009e87bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e88cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e89fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009e8b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1009e700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1009e700(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
