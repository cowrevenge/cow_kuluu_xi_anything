/* f_0x10014030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10014030(Guest* g)
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
    case 0x10014040u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10014040;
    case 0x10014047u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10014047;
    case 0x1001408eu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1001408e;
    case 0x10014090u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10014090;
    case 0x100140aau: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140aa;
    case 0x100140bau: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140ba;
    case 0x100140c5u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140c5;
    case 0x100140d4u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140d4;
    case 0x100140dfu: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140df;
    case 0x100140efu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140ef;
    case 0x100140f6u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140f6;
    case 0x100140fau: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100140fa;
    default: break;
    }
#endif

    COW_AT(10014030)
    if ((uint32_t)(int16_t)rd16(self + 4u) > 6u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_100140fa;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    COW_AT(10014040)
    t1 = rd32(COW_IMG(0x10014100u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10014047u: goto L_10014047;
    case 0x10014090u: goto L_10014090;
    case 0x100140aau: goto L_100140aa;
    case 0x100140c5u: goto L_100140c5;
    case 0x100140d4u: edx = in_edx; goto L_100140d4;
    case 0x100140dfu: goto L_100140df;
    default: rt_fatal(g, COW_IMG(0x10014040u), "switch");
    }
    return 0;
L_10014047: ;
    COW_AT(10014047)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_stdcall(g, COW_IMG(0x10010370u), 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x10239480u), t11, rd32(COW_IMG(0x10668fd8u)), g->edx, 0, 1, 2u);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
    t16 = g->edx;
    g->edx = t16;
    t17 = rd32(COW_IMG(0x1045666cu));
    t18 = cow_thiscall(g, COW_IMG(0x10009640u), t17, 4, 3u, 0x80000000u, 0x3f800000u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_stdcall(g, COW_IMG(0x10093720u), 0);
    t22 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        edx = t22;
        goto L_100140d4;
    }
    eax = t21;
    COW_AT(1001408e)
    g->esi = in_esi;
    return eax;
L_10014090: ;
    COW_AT(10014090)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 8u, 0u);
    t9 = g->edx;
    t10 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t10 & 0xffffff00u;
L_100140aa: ;
    COW_AT(100140aa)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t6 = g->edx;
    if (t5 != 8u)
    {
        eax = t5;
        goto L_100140ef;
    }
    eax = t5;
    edx = t6;
    COW_AT(100140ba)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t7 & 0xffffff00u;
L_100140c5: ;
    COW_AT(100140c5)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x100db170u), rd32(COW_IMG(0x103601bcu)), in_edx, 2, 9u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_100140d4: ;
    COW_AT(100140d4)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = in_esi;
    return t23 & 0xffffff00u;
L_100140df: ;
    COW_AT(100140df)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    if (t2 == 9u)
    {
        eax = t2;
        goto L_100140fa;
    }
    eax = t2;
L_100140ef: ;
    COW_AT(100140ef)
    if ((int32_t)eax > 200) goto L_100140fa;
    COW_AT(100140f6)
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_100140fa: ;
    COW_AT(100140fa)
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10014030(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10014040u:
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
    case 0x10014047u:
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
    case 0x1001408eu:
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
    case 0x10014090u:
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
    case 0x100140aau:
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
    case 0x100140bau:
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
    case 0x100140c5u:
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
    case 0x100140d4u:
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
    case 0x100140dfu:
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
    case 0x100140efu:
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
    case 0x100140f6u:
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
    case 0x100140fau:
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
void cow_adapter_10014030(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10014030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
