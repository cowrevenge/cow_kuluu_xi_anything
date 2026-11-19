/* f_0x10013df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10013df0(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10013e00u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e00;
    case 0x10013e07u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e07;
    case 0x10013e4eu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e4e;
    case 0x10013e50u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e50;
    case 0x10013e6au: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e6a;
    case 0x10013e7au: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e7a;
    case 0x10013e85u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e85;
    case 0x10013e9fu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013e9f;
    case 0x10013eafu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013eaf;
    case 0x10013ebau: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013eba;
    case 0x10013ec9u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013ec9;
    case 0x10013ed4u: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013ed4;
    case 0x10013ee4u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013ee4;
    case 0x10013eebu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013eeb;
    case 0x10013eefu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10013eef;
    default: break;
    }
#endif

    COW_AT(10013df0)
    if ((uint32_t)(int16_t)rd16(self + 4u) > 6u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_10013eef;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    COW_AT(10013e00)
    t1 = rd32(COW_IMG(0x10013ef4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10013e07u: goto L_10013e07;
    case 0x10013e50u: goto L_10013e50;
    case 0x10013e6au: goto L_10013e6a;
    case 0x10013e85u: goto L_10013e85;
    case 0x10013e9fu: goto L_10013e9f;
    case 0x10013ebau: goto L_10013eba;
    case 0x10013ed4u: goto L_10013ed4;
    default: rt_fatal(g, COW_IMG(0x10013e00u), "switch");
    }
    return 0;
L_10013e07: ;
    COW_AT(10013e07)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t17 = cow_stdcall(g, COW_IMG(0x10010370u), 0);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x10239480u), t17, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 2u);
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
    t22 = g->edx;
    g->edx = t22;
    t23 = rd32(COW_IMG(0x1045666cu));
    t24 = cow_thiscall(g, COW_IMG(0x10009640u), t23, 4, 3u, 0x80000000u, 0x3f800000u, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_stdcall(g, COW_IMG(0x10093720u), 0);
    t28 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        eax = t27;
        edx = t28;
        goto L_10013ec9;
    }
    eax = t27;
    COW_AT(10013e4e)
    g->esi = in_esi;
    return eax;
L_10013e50: ;
    COW_AT(10013e50)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t14 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 6u, 0u);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t16 & 0xffffff00u;
L_10013e6a: ;
    COW_AT(10013e6a)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t12 = g->edx;
    if (t11 != 6u)
    {
        eax = t11;
        goto L_10013ee4;
    }
    eax = t11;
    edx = t12;
    COW_AT(10013e7a)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t13 & 0xffffff00u;
L_10013e85: ;
    COW_AT(10013e85)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 7u, 0u);
    t9 = g->edx;
    t10 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t10 & 0xffffff00u;
L_10013e9f: ;
    COW_AT(10013e9f)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t6 = g->edx;
    if (t5 != 7u)
    {
        eax = t5;
        goto L_10013ee4;
    }
    eax = t5;
    edx = t6;
    COW_AT(10013eaf)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t7 & 0xffffff00u;
L_10013eba: ;
    COW_AT(10013eba)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 9u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_10013ec9: ;
    COW_AT(10013ec9)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t29 & 0xffffff00u;
L_10013ed4: ;
    COW_AT(10013ed4)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    if (t2 == 9u)
    {
        eax = t2;
        goto L_10013eef;
    }
    eax = t2;
L_10013ee4: ;
    COW_AT(10013ee4)
    if ((int32_t)eax > 200) goto L_10013eef;
    COW_AT(10013eeb)
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_10013eef: ;
    COW_AT(10013eef)
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10013df0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10013e00u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10013e07u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10013e4eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013e50u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013e6au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013e7au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013e85u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013e9fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013eafu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013ebau:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013ec9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013ed4u:
    {
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013ee4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013eebu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10013eefu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10013df0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10013df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
