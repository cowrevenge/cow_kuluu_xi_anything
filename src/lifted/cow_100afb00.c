/* f_0x100afb00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_100afb00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100afb14u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb14;
    case 0x100afb23u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb23;
    case 0x100afb3bu: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb3b;
    case 0x100afb44u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb44;
    case 0x100afb4du: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb4d;
    case 0x100afb56u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb56;
    case 0x100afb5fu: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb5f;
    case 0x100afb68u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb68;
    case 0x100afb7eu: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb7e;
    case 0x100afb83u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb83;
    case 0x100afb88u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb88;
    case 0x100afb8bu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb8b;
    case 0x100afb91u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb91;
    case 0x100afb98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb98;
    case 0x100afb9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afb9e;
    case 0x100afbb4u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afbb4;
    case 0x100afbbfu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afbbf;
    case 0x100afbd1u: ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afbd1;
    case 0x100afbd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afbd8;
    case 0x100afbdfu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afbdf;
    case 0x100afbefu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afbef;
    case 0x100afbf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100afbf5;
    default: break;
    }
#endif

    COW_AT(100afb00)
    if (arg1 - 0x7fffffc0u > 0x39u)
    {
        edx = in_edx;
        goto L_100afbb4;
    }
    COW_AT(100afb14)
    t1 = rd32(COW_IMG(0x100afc08u) + rd8(COW_IMG(0x100afc34u) + arg1 - 0x7fffffc0u) * 4u);
    edx = rd8(COW_IMG(0x100afc34u) + arg1 - 0x7fffffc0u);
    switch (t1 - RD)
    {
    case 0x100afb23u: goto L_100afb23;
    case 0x100afb3bu: goto L_100afb3b;
    case 0x100afb44u: goto L_100afb44;
    case 0x100afb4du: goto L_100afb4d;
    case 0x100afb56u: goto L_100afb56;
    case 0x100afb5fu: goto L_100afb5f;
    case 0x100afb68u: goto L_100afb68;
    case 0x100afb7eu: goto L_100afb7e;
    case 0x100afb83u: goto L_100afb83;
    case 0x100afb88u: goto L_100afb88;
    case 0x100afbb4u: goto L_100afbb4;
    default: rt_fatal(g, COW_IMG(0x100afb1cu), "switch");
    }
    return 0;
L_100afb23: ;
    COW_AT(100afb23)
    g->eax = arg1;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = rd32(t16 + 4u);
    wr32(arg2, t19);
    g->eax = t19;
    t20 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    eax = t20;
L_100afbd8: ;
    COW_AT(100afbd8)
    wr16(arg3, (uint16_t)eax);
L_100afbdf: ;
    COW_AT(100afbdf)
    if (rd32(COW_IMG(0x10480af0u) + rd16(arg3) * 4u) != 0u)
    {
        eax = rd16(arg3);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(arg3) * 4u);
        goto L_100afbf5;
    }
    eax = rd16(arg3);
    COW_AT(100afbef)
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_100afb3b: ;
    COW_AT(100afb3b)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), self, 1, 1u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_100afb91: ;
    COW_AT(100afb91)
    if (eax != 0u) goto L_100afb9e;
    COW_AT(100afb98)
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_100afb44: ;
    COW_AT(100afb44)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), self, 1, 2u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_100afb91;
L_100afb4d: ;
    COW_AT(100afb4d)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), self, 1, 3u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    goto L_100afb91;
L_100afb56: ;
    COW_AT(100afb56)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), self, 1, 4u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    goto L_100afb91;
L_100afb5f: ;
    COW_AT(100afb5f)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), self, 1, 5u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    goto L_100afb91;
L_100afb68: ;
    COW_AT(100afb68)
    t4 = rd32(self + 8u);
    wr32(arg2, t4);
    wr16(arg3, rd16(self + 2u));
    goto L_100afbdf;
L_100afb7e: ;
    COW_AT(100afb7e)
    eax = arg1 + 0x40u;
L_100afb8b: ;
    COW_AT(100afb8b)
    g->esi = arg1 - 0x7fffffc0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100e8df0u), 1, eax);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    goto L_100afb91;
L_100afb83: ;
    COW_AT(100afb83)
    eax = arg1 + 0x44u;
    goto L_100afb8b;
L_100afb88: ;
    COW_AT(100afb88)
    eax = arg1 + 0x48u;
    goto L_100afb8b;
L_100afb9e: ;
    COW_AT(100afb9e)
    t15 = rd32(eax + 0x14u);
    wr32(arg2, t15);
    wr16(arg3, rd16(eax + 0x18u));
    goto L_100afbdf;
L_100afbb4: ;
    COW_AT(100afbb4)
    if ((arg1 & 0xff000000u) != 0u) goto L_100afbd1;
    COW_AT(100afbbf)
    t21 = rd32(self + 8u);
    wr32(arg2, t21);
    wr16(arg3, rd16(self + 2u));
    goto L_100afbdf;
L_100afbd1: ;
    COW_AT(100afbd1)
    wr32(arg2, arg1);
    eax = arg1 & 0x3ffu;
    goto L_100afbd8;
L_100afbf5: ;
    COW_AT(100afbf5)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t22 = cow_thiscall(g, COW_IMG(0x1008b380u), ecx, 1, rd32(arg2));
    g->esi = in_esi;
    return (t22 & 0xffffff00u) | t22 != 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100afb00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100afb14u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = arg1 - 0x7fffffc0u;
        (void)sp0;
        return 1;
    }
    case 0x100afb23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100afb3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100afb44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100afb4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100afb56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100afb5fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100afb68u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100afb7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = arg1 - 0x7fffffc0u;
        (void)sp0;
        return 1;
    }
    case 0x100afb83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = arg1 - 0x7fffffc0u;
        (void)sp0;
        return 1;
    }
    case 0x100afb88u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = arg1 - 0x7fffffc0u;
        (void)sp0;
        return 1;
    }
    case 0x100afb8bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1 - 0x7fffffc0u;
        (void)sp0;
        return 1;
    }
    case 0x100afb91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afb98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100afb9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100afbb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100afbbfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100afbd1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100afbd8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100afbdfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100afbefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100afbf5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100afb00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100afb00(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
