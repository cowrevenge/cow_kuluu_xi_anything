/* f_0x1000aab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1000aab0(Guest* g)
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
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000aab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000aab8;
    case 0x1000aac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000aac8;
    case 0x1000aad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000aad8;
    case 0x1000aaeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000aaea;
    case 0x1000aafcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000aafc;
    case 0x1000ab0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab0e;
    case 0x1000ab20u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab20;
    case 0x1000ab32u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab32;
    case 0x1000ab44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab44;
    case 0x1000ab56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab56;
    case 0x1000ab68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab68;
    case 0x1000ab7au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab7a;
    case 0x1000ab8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab8c;
    case 0x1000ab9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000ab9d;
    case 0x1000abadu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000abad;
    case 0x1000abbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000abbd;
    case 0x1000abcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1000abcd;
    default: break;
    }
#endif

    COW_AT(1000aab0)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10009920u), in_eax, self, g->edx, 1, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(1000aab8)
    t2 = rd32(self + 0xcu);
    t3 = rd32(t2);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t3 + 0xc8u), t3, 3, t2, 0xeu, 0u);
    t4 = g->ecx;
    ecx = t4;
    COW_AT(1000aac8)
    t5 = rd32(self + 0xcu);
    g->edx = rd32(t5);
    t6 = rd32(t5);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t6 + 0xc8u), ecx, 3, t5, 9u, 1u);
    t7 = g->edx;
    edx = t7;
    COW_AT(1000aad8)
    t8 = rd32(self + 0xcu);
    t9 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t9 + 0xfcu), t9, 4, t8, 0u, 0xbu, 0u);
    t10 = g->ecx;
    ecx = t10;
    COW_AT(1000aaea)
    t11 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t12 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t12 + 0xfcu), ecx, 4, t11, 0u, 0xdu, 3u);
    t13 = g->edx;
    edx = t13;
    COW_AT(1000aafc)
    t14 = rd32(self + 0xcu);
    t15 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t15 + 0xfcu), t15, 4, t14, 0u, 0xeu, 3u);
    t16 = g->ecx;
    ecx = t16;
    COW_AT(1000ab0e)
    t17 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t18 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t18 + 0xfcu), ecx, 4, t17, 0u, 0x10u, 2u);
    t19 = g->edx;
    edx = t19;
    COW_AT(1000ab20)
    t20 = rd32(self + 0xcu);
    t21 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t21 + 0xfcu), t21, 4, t20, 0u, 0x11u, 2u);
    t22 = g->ecx;
    ecx = t22;
    COW_AT(1000ab32)
    t23 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t24 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t24 + 0xfcu), ecx, 4, t23, 0u, 1u, 2u);
    t25 = g->edx;
    edx = t25;
    COW_AT(1000ab44)
    t26 = rd32(self + 0xcu);
    t27 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t27 + 0xfcu), t27, 4, t26, 0u, 2u, 2u);
    t28 = g->ecx;
    ecx = t28;
    COW_AT(1000ab56)
    t29 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t30 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t30 + 0xfcu), ecx, 4, t29, 0u, 4u, 1u);
    t31 = g->edx;
    edx = t31;
    COW_AT(1000ab68)
    t32 = rd32(self + 0xcu);
    t33 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t33 + 0xfcu), t33, 4, t32, 1u, 4u, 1u);
    t34 = g->ecx;
    ecx = t34;
    COW_AT(1000ab7a)
    t35 = rd32(self + 0xcu);
    g->edx = rd32(rd32(self + 0xcu));
    t36 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t36 + 0xfcu), ecx, 4, t35, 1u, 1u, 1u);
    t37 = g->edx;
    edx = t37;
    COW_AT(1000ab8c)
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1000a3b0u), self, 2, arg1, arg2);
    t38 = g->ecx;
    ecx = t38;
    COW_AT(1000ab9d)
    t39 = rd32(self + 0xcu);
    g->edx = rd32(t39);
    t40 = rd32(t39);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t40 + 0xc8u), ecx, 3, t39, 0xeu, 1u);
    t41 = g->edx;
    edx = t41;
    COW_AT(1000abad)
    t42 = rd32(self + 0xcu);
    g->eax = t42;
    t43 = rd32(t42);
    g->esp = sp0 - 4u;
    t44 = cow_thiscall(g, rd32(t43 + 0xc8u), t43, 3, t42, 9u, 2u);
    t45 = g->ecx;
    eax = t44;
    ecx = t45;
    COW_AT(1000abbd)
    t46 = rd32(self + 0xcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t46) + 0xc8u), ecx, 3, t46, 0x1bu, 0u);
    COW_AT(1000abcd)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000aab0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000aab8u:
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
    case 0x1000aac8u:
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
    case 0x1000aad8u:
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
    case 0x1000aaeau:
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
    case 0x1000aafcu:
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
    case 0x1000ab0eu:
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
    case 0x1000ab20u:
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
    case 0x1000ab32u:
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
    case 0x1000ab44u:
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
    case 0x1000ab56u:
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
    case 0x1000ab68u:
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
    case 0x1000ab7au:
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
    case 0x1000ab8cu:
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
    case 0x1000ab9du:
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
    case 0x1000abadu:
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
    case 0x1000abbdu:
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
    case 0x1000abcdu:
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
void cow_adapter_1000aab0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1000aab0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
