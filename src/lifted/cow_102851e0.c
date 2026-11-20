/* f_0x102851e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102851e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102851fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_102851fa;
    case 0x10285208u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10285208;
    case 0x10285215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; goto E_10285215;
    case 0x1028521du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1028521d;
    case 0x10285224u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285224;
    case 0x10285238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285238;
    case 0x10285247u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285247;
    case 0x1028525au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028525a;
    case 0x1028526au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028526a;
    case 0x1028527cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028527c;
    case 0x10285295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285295;
    case 0x102852a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102852a7;
    case 0x102852b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102852b8;
    case 0x102852d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102852d3;
    case 0x102852e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102852e1;
    case 0x102852efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102852ef;
    case 0x102852f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102852f9;
    default: break;
    }
#endif

    COW_AT(102851e0)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_edi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, t2);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, sp0 + 8u);
    g->eax = t2;
    g->ecx = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 8u, 4u, 1u, t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    ebx = t1;
    COW_AT(102851fa)
    if (rd32(sp0 + 8u) == 4u)
    {
        edi = eax;
        eax = rd32(sp0 + 8u);
        goto L_1028521d;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(10285208)
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7b08u));
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7b08u), eax);
    COW_AT(10285215)
    g->ebx = rd32(sp0 - 4u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 8u);
    g->ebp = in_ebp;
    return 0u;
L_1028521d: ;
    COW_AT(1028521d)
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t6 = cow_stdcall(g, COW_IMG(0x10293fa0u), 0);
    t7 = g->ecx;
    eax = t6;
    ecx = t7;
    COW_AT(10285224)
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, edi + 0x50u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, eax + 0x20u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = eax + 0x20u;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, eax + 0x20u, 4u, 1u, edi + 0x50u, ebx);
    t9 = g->ecx;
    t10 = g->edx;
    ecx = t9;
    edx = t10;
    esi = eax;
    eax = t8;
    COW_AT(10285238)
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, eax);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, esi + 0x1cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, esi + 0x1cu, 4u, 1u, eax, ebx, rd32(sp0 - 0x24u), 4u, 1u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    edi = esi + 0x1cu;
    COW_AT(10285247)
    wr32(sp0 - 0x3cu, 0x31u);
    wr32(sp0 - 0x40u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x44u, 4u);
    wr32(sp0 - 0x48u, rd32(edi));
    g->eax = rd32(edi);
    g->edx = edx;
    t14 = rd32(edi);
    g->esp = sp0 - 0x34u;
    t15 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t14, 4u, COW_IMG(0x103b7ad8u), 0x31u, rd32(sp0 - 0x38u));
    t16 = g->edx;
    edx = t16;
    ebp = eax;
    eax = t15;
    COW_AT(1028525a)
    wr32(sp0 - 0x4cu, ebx);
    wr32(sp0 - 0x50u, ebp);
    wr32(sp0 - 0x54u, rd32(edi));
    wr32(sp0 - 0x58u, 4u);
    wr32(sp0 - 0x5cu, eax);
    t17 = rd32(edi);
    wr32(esi + 0x34u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t18 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, eax, 4u, t17, ebp, ebx, rd32(sp0 - 0x48u), 4u, COW_IMG(0x103b7ad8u), 0x31u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(1028526a)
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, esi + 0x24u);
    g->eax = eax;
    g->ecx = esi + 0x24u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, esi + 0x24u, 4u, 1u, eax, ebx);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1028527c)
    wr32(sp0 - 0x28u, 0x39u);
    wr32(sp0 - 0x2cu, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x30u, 4u);
    t23 = rd32(edi) * rd32(esi + 0x24u);
    wr32(sp0 - 0x34u, t23);
    wr32(sp0 + 4u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    t24 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t23, 4u, COW_IMG(0x103b7ad8u), 0x39u, rd32(sp0 - 0x24u));
    t25 = g->ecx;
    eax = t24;
    ecx = t25;
    ebp = t23;
    COW_AT(10285295)
    wr32(sp0 - 0x38u, ebx);
    t26 = rd32(sp0 + 4u);
    wr32(sp0 - 0x3cu, t26);
    wr32(sp0 - 0x40u, ebp);
    wr32(sp0 - 0x44u, 4u);
    wr32(sp0 - 0x48u, eax);
    wr32(esi + 0x2cu, eax);
    g->ecx = ecx;
    g->edx = t26;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1028a110u), 13, eax, 4u, ebp, t26, ebx, rd32(sp0 - 0x34u), 4u, COW_IMG(0x103b7ad8u), 0x39u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t27 = g->ecx;
    t28 = g->edx;
    ecx = t27;
    edx = t28;
    COW_AT(102852a7)
    wr32(sp0 - 0x4cu, 0x3eu);
    wr32(sp0 - 0x50u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x54u, 4u);
    wr32(sp0 - 0x58u, rd32(edi));
    g->eax = rd32(edi);
    g->edx = edx;
    t29 = rd32(edi);
    g->esp = sp0 - 0x44u;
    t30 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t29, 4u, COW_IMG(0x103b7ad8u), 0x3eu, rd32(sp0 - 0x48u));
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(102852b8)
    t32 = rd32(edi);
    wr32(esi + 0x30u, eax);
    wr8(esi + 0x3cu, 0u);
    wr32(sp0 - 0x14u, 0x40u);
    wr32(sp0 - 0x18u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, t32);
    g->eax = eax;
    g->ecx = t32;
    g->esp = sp0 - 0xcu;
    t33 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t32, 1u, COW_IMG(0x103b7ad8u), 0x40u, rd32(sp0 - 0x10u));
    t34 = g->ecx;
    eax = t33;
    ecx = t34;
    COW_AT(102852d3)
    wr32(esi + 0x38u, eax);
    if ((int32_t)rd32(edi) <= 0) goto L_102852f9;
    eax = rd32(edi);
    ebx = 0u;
L_102852e1: ;
    COW_AT(102852e1)
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, esi);
    t35 = rd32(esi + 0x38u);
    wr8(ebx + t35, 0u);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10294500u), 2, esi, ebx);
    t36 = g->ecx;
    ecx = t36;
    COW_AT(102852ef)
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(edi))
    {
        eax = rd32(edi);
        ebx = ebx + 1u;
        goto L_102852e1;
    }
L_102852f9: ;
    COW_AT(102852f9)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 8u);
    g->ebp = rd32(sp0 - 0xcu);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102851e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102851fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285208u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285215u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028521du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285224u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285238u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x20u, 4u);
        wr32(sp0 - 0x1cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10285247u:
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
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x34u, 4u);
        wr32(sp0 - 0x30u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1028525au:
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
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x44u, 4u);
        wr32(sp0 - 0x40u, COW_IMG(0x103b7ad8u));
        wr32(sp0 - 0x3cu, 0x31u);
        (void)sp0;
        return 1;
    }
    case 0x1028526au:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1028527cu:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x20u, 4u);
        wr32(sp0 - 0x1cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10285295u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x30u, 4u);
        wr32(sp0 - 0x2cu, COW_IMG(0x103b7ad8u));
        wr32(sp0 - 0x28u, 0x39u);
        (void)sp0;
        return 1;
    }
    case 0x102852a7u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x102852b8u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x102852d3u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102852e1u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102852efu:
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
    case 0x102852f9u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102851e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102851e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
