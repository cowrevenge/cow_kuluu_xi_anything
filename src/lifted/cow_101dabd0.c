/* f_0x101dabd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101dabd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dabefu: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101dabef;
    case 0x101dabf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dabf6;
    case 0x101dac27u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101dac27;
    case 0x101dac42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dac42;
    case 0x101dac4bu: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101dac4b;
    case 0x101dac66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dac66;
    case 0x101dac6fu: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101dac6f;
    case 0x101dac8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dac8a;
    case 0x101dac93u: eax = g->eax; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101dac93;
    case 0x101dac9cu: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dac9c;
    case 0x101daca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101daca6;
    case 0x101dacccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101daccc;
    case 0x101dacddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dacdd;
    case 0x101dacf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dacf7;
    case 0x101dad01u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dad01;
    case 0x101dad22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dad22;
    case 0x101dad2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dad2c;
    case 0x101dad41u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101dad41;
    default: break;
    }
#endif

    COW_AT(101dabd0)
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = rd32(COW_IMG(0x10663428u)) + 0x7ecu;
        edx = rd32(COW_IMG(0x10663428u));
        goto L_101dad41;
    }
    eax = rd32(COW_IMG(0x10663428u)) + 0x7ecu;
    edx = rd32(COW_IMG(0x10663428u));
    COW_AT(101dabef)
    t1 = rd32(COW_IMG(0x101dad74u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101dabf6u: goto L_101dabf6;
    case 0x101dac27u: goto L_101dac27;
    case 0x101dac4bu: goto L_101dac4b;
    case 0x101dac6fu: goto L_101dac6f;
    case 0x101dac93u: goto L_101dac93;
    case 0x101dacddu: goto L_101dacdd;
    default: rt_fatal(g, COW_IMG(0x101dabefu), "switch");
    }
    return 0;
L_101dabf6: ;
    COW_AT(101dabf6)
    t24 = rd16(edx + 0x8c8u);
    g->eax = t24;
    g->esp = sp0 - 8u;
    t25 = cow_stdcall(g, COW_IMG(0x101d7660u), 1, t24);
    t26 = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
    g->edx = rd32(COW_IMG(0x10663428u));
    t27 = rd32(COW_IMG(0x10663428u));
    t28 = cow_stdcall(g, COW_IMG(0x101da6a0u), 1, t26);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_101dad41: ;
    COW_AT(101dad41)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_call_regs(g, COW_IMG(0x101d8140u), eax, rd32(COW_IMG(0x10663428u)), g->edx, 0, 2, 0u, 0u);
    t31 = g->edx;
    g->edx = t31;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee50u));
    t32 = g->edx;
    t33 = rd32(self + 8u);
    g->edx = t32;
    t34 = cow_call_regs(g, COW_IMG(0x1015e790u), t33, COW_IMG(0x10621838u), g->edx, 0, 2, t33, 1u);
    t35 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t35;
    return t34;
L_101dac27: ;
    COW_AT(101dac27)
    g->esi = in_esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x10104170u), 3, eax, 7u, 0xffffffffu);
    t19 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_101dad41;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    COW_AT(101dac42)
    loc_c = 0u;
    loc_10 = 7u;
L_101dad2c: ;
    COW_AT(101dad2c)
    t20 = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
    g->eax = t20;
    g->edx = rd32(COW_IMG(0x10663428u));
    t21 = rd32(COW_IMG(0x10663428u));
    g->esp = sp0 - 8u;
    t22 = cow_thiscall(g, COW_IMG(0x101d76f0u), ecx, 3, t20, loc_10, loc_c);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    goto L_101dad41;
L_101dac4b: ;
    COW_AT(101dac4b)
    g->esi = in_esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_cdecl(g, COW_IMG(0x10104170u), 3, eax, 8u, 0xffffffffu);
    t17 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_101dad41;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    COW_AT(101dac66)
    loc_c = 0u;
    loc_10 = 8u;
    goto L_101dad2c;
L_101dac6f: ;
    COW_AT(101dac6f)
    g->esi = in_esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10104170u), 3, eax, 2u, 0xffffffffu);
    t15 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_101dad41;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    COW_AT(101dac8a)
    loc_c = 0u;
    loc_10 = 2u;
    goto L_101dad2c;
L_101dac93: ;
    COW_AT(101dac93)
    if (rd8(COW_IMG(0x10485824u)) & 1u) goto L_101daca6;
    COW_AT(101dac9c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10037c50u), (uint32_t)(int16_t)arg1 - 1u, 0);
    t9 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_101daca6: ;
    COW_AT(101daca6)
    t10 = (uint8_t)rd32(COW_IMG(0x10485640u));
    g->esi = in_esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x101040e0u), 5, eax, 4u, t10, 0u, 0u);
    t12 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_101dad41;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    COW_AT(101daccc)
    t13 = (uint8_t)rd32(COW_IMG(0x10485640u));
    loc_c = t13;
    loc_10 = 4u;
    goto L_101dad2c;
L_101dacdd: ;
    COW_AT(101dacdd)
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u) != 0u)
    {
        edx = rd32(COW_IMG(0x104dfd98u));
        esi = rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u);
        goto L_101dad01;
    }
    ecx = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u);
    edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(101dacf7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t3 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t3;
    return t2;
L_101dad01: ;
    COW_AT(101dad01)
    t4 = (uint32_t)(int8_t)rd8(esi + 0xefu);
    g->esi = esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x101040e0u), 5, eax, 3u, t4, 0u, 0u);
    t6 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_101dad41;
    }
    ecx = rd32(COW_IMG(0x10663448u));
    COW_AT(101dad22)
    t7 = (uint32_t)(int8_t)rd8(esi + 0xefu);
    loc_c = t7;
    loc_10 = 3u;
    goto L_101dad2c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dabd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dabefu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101dabf6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dac27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101dac42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dac4bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101dac66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dac6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101dac8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dac93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101dac9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101daca6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101dacccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dacddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dacf7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dad01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dad22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dad2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101dad41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dabd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dabd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
