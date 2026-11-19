/* f_0x101fe290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101fe290(Guest* g)
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fe2a2u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe2a2;
    case 0x101fe2a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe2a9;
    case 0x101fe2ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe2cc;
    case 0x101fe2f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe2f1;
    case 0x101fe2fau: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe2fa;
    case 0x101fe31fu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe31f;
    case 0x101fe32au: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe32a;
    case 0x101fe339u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe339;
    case 0x101fe348u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe348;
    case 0x101fe357u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe357;
    case 0x101fe366u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe366;
    case 0x101fe389u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe389;
    default: break;
    }
#endif

    COW_AT(101fe290)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101fe389;
    }
    COW_AT(101fe2a2)
    t1 = rd32(COW_IMG(0x101fe390u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101fe2a9u: goto L_101fe2a9;
    case 0x101fe2fau: goto L_101fe2fa;
    case 0x101fe31fu: goto L_101fe31f;
    case 0x101fe32au: goto L_101fe32a;
    case 0x101fe339u: goto L_101fe339;
    case 0x101fe348u: goto L_101fe348;
    case 0x101fe357u: goto L_101fe357;
    case 0x101fe366u: goto L_101fe366;
    case 0x101fe389u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_101fe389;
    default: rt_fatal(g, COW_IMG(0x101fe2a2u), "switch");
    }
    return 0;
L_101fe2a9: ;
    COW_AT(101fe2a9)
    t25 = (uint32_t)(int8_t)rd8(self + 0x36u);
    t26 = rd32(self + 0x38u);
    t27 = (uint32_t)(int8_t)rd8(self + 0x35u);
    t28 = (uint32_t)(int8_t)rd8(self + 0x34u);
    t29 = (t26 & 0xffff0000u) | rd16(self + 0x32u);
    g->eax = t28;
    g->edx = t27;
    g->esp = sp0 - 4u;
    t30 = cow_thiscall(g, COW_IMG(0x101fda30u), self, 5, t29, t28, t27, t26, t25);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        goto L_101fe2f1;
    }
    COW_AT(101fe2cc)
    t33 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = t33;
    t34 = rd32(COW_IMG(0x1066369cu));
    g->esp = sp0 - 4u;
    t35 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t34, 2, t33, 0u);
    t36 = g->ecx;
    t37 = g->edx;
    wr16(self + 0x32u, 0u);
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x10037b90u), t36, 0);
    t39 = g->edx;
    g->esi = in_esi;
    g->edx = t39;
    return t38;
L_101fe2f1: ;
    COW_AT(101fe2f1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t40 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t41 = g->edx;
    g->esi = in_esi;
    g->edx = t41;
    return t40;
L_101fe2fa: ;
    COW_AT(101fe2fa)
    t19 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->esp = sp0 - 4u;
    t20 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t19, 2, t19, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    wr16(self + 0x32u, 0u);
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10037bf0u), t21, 0);
    t24 = g->edx;
    g->esi = in_esi;
    g->edx = t24;
    return t23;
L_101fe31f: ;
    COW_AT(101fe31f)
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x101fdbf0u), (uint32_t)(int16_t)arg1 - 1u, self, in_edx, 1, 0);
    t18 = g->edx;
    g->esi = in_esi;
    g->edx = t18;
    return t17;
L_101fe32a: ;
    COW_AT(101fe32a)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x101fdb40u), self, 2, 0xffffffffu, 0u);
    t16 = g->edx;
    g->esi = in_esi;
    g->edx = t16;
    return t15;
L_101fe339: ;
    COW_AT(101fe339)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x101fdb40u), self, 2, 1u, 0u);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return t13;
L_101fe348: ;
    COW_AT(101fe348)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x101fdb40u), self, 2, 0u, 0xffffffffu);
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return t11;
L_101fe357: ;
    COW_AT(101fe357)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x101fdb40u), self, 2, 0u, 1u);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_101fe366: ;
    COW_AT(101fe366)
    t2 = cow_divs(g, (uint32_t)(int16_t)arg2 - 1u, 5u);
    t3 = cow_mods(g, (uint32_t)(int16_t)arg2 - 1u, 5u);
    t4 = t2 - (uint32_t)(int8_t)rd8(self + 0x35u);
    t5 = t3 - (uint32_t)(int8_t)rd8(self + 0x34u);
    g->eax = (uint32_t)(int8_t)rd8(self + 0x34u);
    g->edx = t5;
    t6 = rd8(self + 0x34u);
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x101fdb40u), self, 2, t5, t4);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_101fe389: ;
    COW_AT(101fe389)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fe290(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fe2a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101fe2a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fe2ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fe2f1u:
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
    case 0x101fe2fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101fe31fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101fe32au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101fe339u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101fe348u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101fe357u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101fe366u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fe389u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe290(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fe290(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
