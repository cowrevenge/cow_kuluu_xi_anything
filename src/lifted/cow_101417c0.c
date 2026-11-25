/* f_0x101417c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101417c0(Guest* g)
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
    uint32_t t2;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101417cbu: self = g->ecx; in_edx = g->edx; goto E_101417cb;
    case 0x101417d2u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101417d2;
    case 0x101417dcu: eax = g->eax; edx = g->edx; goto E_101417dc;
    case 0x101417dfu: self = g->ecx; edx = g->edx; goto E_101417df;
    case 0x101417e9u: eax = g->eax; edx = g->edx; goto E_101417e9;
    case 0x101417ecu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101417ec;
    case 0x101417f6u: eax = g->eax; edx = g->edx; goto E_101417f6;
    case 0x101417f9u: self = g->ecx; edx = g->edx; goto E_101417f9;
    case 0x10141803u: eax = g->eax; edx = g->edx; goto E_10141803;
    case 0x10141806u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_10141806;
    case 0x10141810u: eax = g->eax; edx = g->edx; goto E_10141810;
    case 0x10141813u: self = g->ecx; edx = g->edx; goto E_10141813;
    case 0x1014181du: eax = g->eax; edx = g->edx; goto E_1014181d;
    case 0x10141820u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_10141820;
    case 0x1014182au: eax = g->eax; edx = g->edx; goto E_1014182a;
    default: break;
    }
#endif

    COW_AT(101417c0)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1014182a;
    }
    COW_AT(101417cb)
    t1 = rd32(COW_IMG(0x10141830u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101417d2u: goto L_101417d2;
    case 0x101417dfu: goto L_101417df;
    case 0x101417ecu: goto L_101417ec;
    case 0x101417f9u: goto L_101417f9;
    case 0x10141806u: goto L_10141806;
    case 0x10141813u: goto L_10141813;
    case 0x10141820u: goto L_10141820;
    case 0x1014182au: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_1014182a;
    default: rt_fatal(g, COW_IMG(0x101417cbu), "switch");
    }
    return 0;
L_101417d2: ;
    COW_AT(101417d2)
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x101413f0u), self, 1, arg2);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(101417dc)
    g->edx = edx;
    return eax;
L_101417df: ;
    COW_AT(101417df)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = arg2;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x10141400u), self, 1, arg2);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(101417e9)
    g->edx = edx;
    return eax;
L_101417ec: ;
    COW_AT(101417ec)
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10141430u), arg2, self, in_edx, 0, 1, arg2);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(101417f6)
    g->edx = edx;
    return eax;
L_101417f9: ;
    COW_AT(101417f9)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->esp = sp0;
    t8 = cow_fastcall(g, COW_IMG(0x10141470u), self, arg2, 1, arg2);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10141803)
    g->edx = edx;
    return eax;
L_10141806: ;
    COW_AT(10141806)
    g->eax = arg2;
    g->esp = sp0;
    t6 = cow_fastcall(g, COW_IMG(0x10141700u), self, in_edx, 1, arg2);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10141810)
    g->edx = edx;
    return eax;
L_10141813: ;
    COW_AT(10141813)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = arg2;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x10141730u), self, 1, arg2);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(1014181d)
    g->edx = edx;
    return eax;
L_10141820: ;
    COW_AT(10141820)
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x101417b0u), 1, arg2);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1014182a: ;
    COW_AT(1014182a)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101417c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101417cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101417d2u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101417dcu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101417dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101417e9u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101417ecu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101417f6u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101417f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10141803u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10141806u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10141810u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10141813u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014181du:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10141820u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014182au:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101417c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101417c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
