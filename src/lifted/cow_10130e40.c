/* f_0x10130e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10130e40(Guest* g)
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10130e4eu: self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130e4e;
    case 0x10130e51u: self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130e51;
    case 0x10130e5au: self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130e5a;
    case 0x10130e65u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130e65;
    case 0x10130e74u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130e74;
    case 0x10130eb5u: ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130eb5;
    case 0x10130ec1u: ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130ec1;
    case 0x10130ec9u: ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10130ec9;
    case 0x10130ef8u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10130ef8;
    case 0x10130f09u: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130f09;
    case 0x10130f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130f39;
    case 0x10130f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130f3e;
    case 0x10130f54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10130f54;
    case 0x10130f57u: ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130f57;
    case 0x10130f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130f81;
    default: break;
    }
#endif

    COW_AT(10130e40)
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10130ef8;
    COW_AT(10130e4e)
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10130eb5;
    COW_AT(10130e51)
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_10130f54;
    }
    COW_AT(10130e5a)
    if (rd8(self + 4u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 8u & 0xffffff00u) | rd8(self + 4u);
        edx = in_edx;
        goto L_10130f54;
    }
    COW_AT(10130e65)
    if (rd32(rd32(COW_IMG(0x105781b8u)) + 0x1cu) != 1u)
    {
        eax = rd32(COW_IMG(0x105781b8u));
        edx = in_edx;
        goto L_10130f54;
    }
    eax = rd32(COW_IMG(0x105781b8u));
    COW_AT(10130e74)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e34u)), 4, 0xffffu, 2u, 0x12u, 0u);
    wr32(rd32(COW_IMG(0x105781b8u)) + 0x1cu, 2u);
    t1 = rd32(rd32(COW_IMG(0x105781b8u)) + 8u);
    g->eax = t1;
    t2 = rd32(COW_IMG(0x105781b8u));
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t2, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
L_10130eb5: ;
    COW_AT(10130eb5)
    if (rd32(rd32(COW_IMG(0x105781b8u)) + 0x1cu) != 1u) goto L_10130ec9;
    ecx = rd32(COW_IMG(0x105781b8u));
    COW_AT(10130ec1)
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10134760u), ecx, 0);
    t9 = g->edx;
    g->esi = in_esi;
    g->edx = t9;
    return t8;
L_10130ec9: ;
    COW_AT(10130ec9)
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e34u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t11 = rd32(rd32(COW_IMG(0x105781b8u)) + 8u);
    t12 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t11, 0u);
    t13 = g->edx;
    g->esi = in_esi;
    g->edx = t13;
    return t12;
L_10130ef8: ;
    COW_AT(10130ef8)
    if (rd32(rd32(COW_IMG(0x105781b8u)) + 0x1cu) != 1u)
    {
        edx = rd32(COW_IMG(0x105781b8u));
        goto L_10130f57;
    }
    edx = rd32(COW_IMG(0x105781b8u));
    COW_AT(10130f09)
    wr8(self + 4u, 1u);
    t14 = rd8(arg4 + 2u);
    wr32(self + 0x10u, arg4);
    wr8(self + 5u, (uint8_t)t14);
    g->eax = t14;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, rd16(arg4));
    t16 = g->edx;
    g->edx = t16;
    t17 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x101316a0u), t17, 3, arg4, t15, 2u);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
L_10130f39: ;
    COW_AT(10130f39)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t27 = g->edx;
    edx = t27;
L_10130f3e: ;
    COW_AT(10130f3e)
    t28 = rd32(rd32(COW_IMG(0x105781b8u)) + 8u);
    g->eax = rd32(COW_IMG(0x105781b8u));
    t29 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 4u;
    t30 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t28, 0u);
    t31 = g->edx;
    eax = t30;
    edx = t31;
L_10130f54: ;
    COW_AT(10130f54)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_10130f57: ;
    COW_AT(10130f57)
    g->eax = 1u;
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e34u)), 4, 0xffffu, 2u, 0x12u, 0u);
    g->edx = arg4;
    t22 = rd32(COW_IMG(0x105781b8u));
    t23 = cow_thiscall(g, COW_IMG(0x10133410u), t22, 1, arg4);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 != 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_10130f39;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(10130f81)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t26 = g->edx;
    edx = t26;
    goto L_10130f3e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10130e40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10130e4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x10130e51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x10130e5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10130e65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10130e74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10130eb5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x10130ec1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x10130ec9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x10130ef8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10130f09u:
    {
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10130f39u:
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
    case 0x10130f3eu:
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
    case 0x10130f54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10130f57u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10130f81u:
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
void cow_adapter_10130e40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10130e40(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
