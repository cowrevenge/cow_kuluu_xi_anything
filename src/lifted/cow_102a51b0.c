/* f_0x102a51b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a51b0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a51bcu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x54u); goto E_102a51bc;
    case 0x102a51d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; goto E_102a51d0;
    case 0x102a51dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; goto E_102a51da;
    case 0x102a51e4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x54u); goto E_102a51e4;
    case 0x102a51f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; goto E_102a51f3;
    case 0x102a51ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; goto E_102a51ff;
    case 0x102a5213u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; goto E_102a5213;
    case 0x102a521du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; goto E_102a521d;
    case 0x102a5227u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; goto E_102a5227;
    case 0x102a522du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a522d;
    case 0x102a523eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a523e;
    case 0x102a5245u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a5245;
    case 0x102a524bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a524b;
    default: break;
    }
#endif

    COW_AT(102a51b0)
    wr32(sp0 - 0x54u, in_edi);
    if (rd32(sp0 + 4u) != 0u)
    {
        edi = rd32(sp0 + 4u);
        goto L_102a51e4;
    }
    COW_AT(102a51bc)
    wr32(sp0 - 0x58u, 0x28cu);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bdbd4u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bdbd4u));
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a51d0)
    wr32(sp0 - 0x64u, COW_IMG(0x103b4368u));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4368u), COW_IMG(0x103b379cu));
    COW_AT(102a51da)
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x54u);
    return 0u;
L_102a51e4: ;
    COW_AT(102a51e4)
    wr32(sp0 - 0x58u, edi);
    wr32(sp0 - 0x5cu, 1u);
    wr32(sp0 - 0x60u, 4u);
    wr32(sp0 - 0x64u, sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 + 4u, 4u, 1u, edi, in_edi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(102a51f3)
    if ((int32_t)rd32(sp0 + 4u) >= 2)
    {
        eax = rd32(sp0 + 4u);
        goto L_102a5227;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(102a51ff)
    wr32(sp0 - 0x58u, 0x292u);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bdbd4u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bdbd4u));
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(102a5213)
    wr32(sp0 - 0x64u, COW_IMG(0x103bb53cu));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb53cu), COW_IMG(0x103b379cu));
    COW_AT(102a521d)
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x54u);
    return 0u;
L_102a5227: ;
    COW_AT(102a5227)
    wr32(sp0 - 0x58u, in_esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t9 = cow_stdcall(g, COW_IMG(0x102a48c0u), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(102a522d)
    wr32(sp0 - 0x5cu, edi);
    wr32(sp0 - 0x60u, 0x50u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, sp0 - 0x50u);
    g->eax = eax;
    g->ecx = sp0 - 0x50u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t11 = cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, edi, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    esi = eax;
    eax = t11;
    COW_AT(102a523e)
    wr32(sp0 - 0x6cu, edi);
    wr32(sp0 - 0x70u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t14 = cow_cdecl(g, COW_IMG(0x102a53a0u), 7, esi, edi, sp0 - 0x50u, 1u, 0x50u, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(102a5245)
    wr32(sp0 - 0x74u, esi);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102a5450u), 15, esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), sp0 - 0x50u, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    COW_AT(102a524b)
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x54u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a51b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a51bcu:
    {
        uint32_t edi;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102a51d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x102a51dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102a51e4u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102a51f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a51ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a5213u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 + 4u);
        wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x102a521du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102a5227u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a522du:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a523eu:
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
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x68u, sp0 - 0x50u);
        wr32(sp0 - 0x64u, 1u);
        wr32(sp0 - 0x60u, 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102a5245u:
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
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x68u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102a524bu:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x68u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a51b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a51b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
