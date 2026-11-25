/* f_0x10105fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_10105fe0(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1988u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10106013u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x7a0u); in_esi = rd32(sp0 - 0x79cu); in_ebp = rd32(sp0 - 0x798u); in_ebx = rd32(sp0 - 0x794u); g->ebp = rd32(sp0 - 0x798u); g->ebx = rd32(sp0 - 0x794u); g->edi = rd32(sp0 - 0x7a0u); g->esi = rd32(sp0 - 0x79cu); goto E_10106013;
    case 0x10106025u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10106025;
    case 0x10106035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10106035;
    case 0x1010604eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010604e;
    case 0x1010605cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010605c;
    case 0x10106065u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10106065;
    case 0x10106077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10106077;
    case 0x1010609du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010609d;
    case 0x101060a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101060a8;
    case 0x101060c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101060c1;
    case 0x101060d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101060d2;
    case 0x101060deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101060de;
    case 0x101060f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101060f0;
    case 0x10106137u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10106137;
    case 0x10106153u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10106153;
    default: break;
    }
#endif

    COW_AT(10105fe0)
    wr32(sp0 - 0x794u, in_ebx);
    wr32(sp0 - 0x798u, in_ebp);
    wr32(sp0 - 0x79cu, in_esi);
    wr32(sp0 - 0x7a0u, in_edi);
    wr32(sp0 - 0x7a4u, arg6);
    wr32(sp0 - 0x7a8u, arg5);
    wr32(sp0 - 0x7acu, arg4);
    wr32(sp0 - 0x7b0u, arg3);
    wr32(sp0 - 0x7b4u, arg1);
    wr32(sp0 - 0x7b8u, sp0 - 0x790u);
    g->edx = sp0 - 0x790u;
    g->esp = sp0 - 0x79cu;
    cow_thiscall_cdecl(g, COW_IMG(0x10104f00u), arg1, 7, sp0 - 0x790u, arg1, arg3, arg4, arg5, arg6, in_edi);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(10106013)
    wr32(sp0 - 0x7bcu, arg2);
    wr32(sp0 - 0x7c0u, sp0 - 0x790u);
    g->eax = sp0 - 0x790u;
    g->edx = edx;
    g->esp = sp0 - 0x7b8u;
    t3 = cow_cdecl(g, COW_IMG(0x101041e0u), 2, sp0 - 0x790u, arg2);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(10106025)
    if ((rd8(sp0 - 0x742u) & 4u) == 0u)
    {
        ebx = eax;
        ebp = arg2 + eax;
    }
    else
    {
        ebx = eax;
        ebp = arg2 + eax;
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x742u);
    COW_AT(10106035)
        wr32(sp0 - 0x7a4u, 0xc8u);
        wr32(sp0 - 0x7a8u, sp0 - 0x724u);
        wr32(sp0 - 0x7acu, arg8);
        g->eax = eax;
        g->edx = arg8;
        g->esp = sp0 - 0x7acu;
        t5 = cow_thiscall(g, arg9, sp0 - 0x724u, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    COW_AT(1010604e)
        wr16(sp0 - 0x728u, (uint16_t)eax);
        if ((uint16_t)eax > 0xc8u)
        {
    COW_AT(1010605c)
            wr16(sp0 - 0x728u, 0xc8u);
            eax = (eax & 0xffff0000u) | 0xc8u;
        }
    COW_AT(10106065)
        wr16(ebp, (uint16_t)eax);
        t7 = rd16(sp0 - 0x728u);
        if ((uint16_t)t7 == 0u)
        {
            ebx = ebx + 2u;
            ebp = ebp + 2u;
        }
        else
        {
            ebx = ebx + 2u;
            ebp = ebp + 2u;
    COW_AT(10106077)
            t8 = (uint32_t)(uint16_t)rd32(sp0 - 0x728u) << 2u;
            esi = sp0 - 0x724u;
            edi = ebp;
            ecx = t8 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t8 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = t8;
            ebx = ebx + t8;
            ebp = ebp + t8;
        }
    }
    COW_AT(1010609d)
    t9 = rd8(sp0 - 0x742u);
    if ((t9 & 8u) == 0u) goto L_10106153;
    COW_AT(101060a8)
    wr32(sp0 - 0x7a4u, 0x40u);
    wr32(sp0 - 0x7a8u, sp0 - 0x400u);
    wr32(sp0 - 0x7acu, arg8);
    g->eax = sp0 - 0x400u;
    g->esp = sp0 - 0x7acu;
    t10 = cow_thiscall(g, arg10, arg8, 0);
    eax = t10;
    COW_AT(101060c1)
    wr16(sp0 - 0x404u, (uint16_t)eax);
    if ((uint16_t)eax > 0x40u)
    {
    COW_AT(101060d2)
        wr16(sp0 - 0x404u, 0x40u);
        eax = (eax & 0xffff0000u) | 0x40u;
    }
    COW_AT(101060de)
    wr16(ebp, (uint16_t)eax);
    t11 = rd16(sp0 - 0x404u);
    if ((uint16_t)t11 == 0u)
    {
        ebx = ebx + 2u;
        goto L_10106137;
    }
    ebx = ebx + 2u;
    COW_AT(101060f0)
    t12 = (uint32_t)(uint16_t)rd32(sp0 - 0x404u) << 4u;
    esi = sp0 - 0x400u;
    edi = ebp + 2u;
    ecx = t12 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t12 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t13 = rd32(sp0 - 0x7a0u);
    wr16(arg7, rd16(sp0 - 0x742u));
    g->ebx = rd32(sp0 - 0x794u);
    g->esi = rd32(sp0 - 0x79cu);
    g->edi = t13;
    g->ebp = rd32(sp0 - 0x798u);
    return ebx + t12;
L_10106137: ;
    COW_AT(10106137)
    t14 = rd32(sp0 - 0x79cu);
    t15 = rd32(sp0 - 0x7a0u);
    wr16(arg7, rd16(sp0 - 0x742u));
    g->ebx = rd32(sp0 - 0x794u);
    g->esi = t14;
    g->edi = t15;
    g->ebp = rd32(sp0 - 0x798u);
    return ebx;
L_10106153: ;
    COW_AT(10106153)
    t16 = rd32(sp0 - 0x798u);
    t17 = rd32(sp0 - 0x79cu);
    t18 = rd32(sp0 - 0x7a0u);
    wr16(arg7, rd16(sp0 - 0x742u));
    g->ebx = rd32(sp0 - 0x794u);
    g->esi = t17;
    g->edi = t18;
    g->ebp = t16;
    return ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10105fe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10106013u:
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
        in_edi = rd32(sp0 - 0x7a0u);
        in_esi = rd32(sp0 - 0x79cu);
        in_ebp = rd32(sp0 - 0x798u);
        in_ebx = rd32(sp0 - 0x794u);
        g->esp = sp0 - 0x7b8u;
        wr32(sp0 - 0x7b8u, sp0 - 0x790u);
        (void)sp0;
        return 1;
    }
    case 0x10106025u:
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
        g->esp = sp0 - 0x7c0u;
        g->esi = arg2;
        wr32(sp0 - 0x7c0u, sp0 - 0x790u);
        wr32(sp0 - 0x7b8u, sp0 - 0x790u);
        (void)sp0;
        return 1;
    }
    case 0x10106035u:
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
        g->esp = sp0 - 0x7a0u;
        wr32(sp0 - 0x7c0u, sp0 - 0x790u);
        wr32(sp0 - 0x7b8u, sp0 - 0x790u);
        (void)sp0;
        return 1;
    }
    case 0x1010604eu:
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
        g->esp = sp0 - 0x7acu;
        wr32(sp0 - 0x7c0u, sp0 - 0x790u);
        wr32(sp0 - 0x7b8u, sp0 - 0x790u);
        wr32(sp0 - 0x7a8u, sp0 - 0x724u);
        (void)sp0;
        return 1;
    }
    case 0x1010605cu:
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
        g->esp = sp0 - 0x7a0u;
        wr32(sp0 - 0x7c0u, sp0 - 0x790u);
        wr32(sp0 - 0x7b8u, sp0 - 0x790u);
        wr32(sp0 - 0x7a8u, sp0 - 0x724u);
        (void)sp0;
        return 1;
    }
    case 0x10106065u:
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
        g->esp = sp0 - 0x7a0u;
        wr32(sp0 - 0x7c0u, sp0 - 0x790u);
        wr32(sp0 - 0x7b8u, sp0 - 0x790u);
        wr32(sp0 - 0x7a8u, sp0 - 0x724u);
        (void)sp0;
        return 1;
    }
    case 0x10106077u:
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
        g->esp = sp0 - 0x7a0u;
        (void)sp0;
        return 1;
    }
    case 0x1010609du:
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
        g->esp = sp0 - 0x7a0u;
        (void)sp0;
        return 1;
    }
    case 0x101060a8u:
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
        g->esp = sp0 - 0x7a0u;
        (void)sp0;
        return 1;
    }
    case 0x101060c1u:
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
        g->esp = sp0 - 0x7acu;
        wr32(sp0 - 0x7a8u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x101060d2u:
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
        g->esp = sp0 - 0x7a0u;
        wr32(sp0 - 0x7a8u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x101060deu:
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
        g->esp = sp0 - 0x7a0u;
        wr32(sp0 - 0x7a8u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x101060f0u:
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
        g->esp = sp0 - 0x7a0u;
        (void)sp0;
        return 1;
    }
    case 0x10106137u:
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
        g->esp = sp0 - 0x7a0u;
        (void)sp0;
        return 1;
    }
    case 0x10106153u:
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
        g->esp = sp0 - 0x7a0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10105fe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10105fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
