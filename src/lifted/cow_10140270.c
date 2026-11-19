/* f_0x10140270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10140270(Guest* g)
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10140288u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10140288;
    case 0x10140291u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10140291;
    case 0x1014029au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014029a;
    case 0x101402a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101402a3;
    case 0x101402b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101402b2;
    case 0x101402d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101402d5;
    case 0x101402dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101402db;
    case 0x101402eau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101402ea;
    case 0x1014030du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014030d;
    case 0x10140311u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10140311;
    case 0x1014031au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014031a;
    case 0x10140326u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10140326;
    case 0x1014032fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014032f;
    case 0x10140339u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10140339;
    case 0x10140342u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10140342;
    case 0x10140352u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10140352;
    case 0x1014035eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014035e;
    default: break;
    }
#endif

    COW_AT(10140270)
    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
        goto L_1014035e;
    }
    COW_AT(1014027f)
    g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0c50u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101402db;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10140288)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t6;
        goto L_101402db;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10140291)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t9;
        goto L_101402a3;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(1014029a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101402db;
    }
    eax = t10;
    edx = t11;
L_101402a3: ;
    COW_AT(101402a3)
    g->eax = eax;
    g->edx = edx;
    t12 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10118bc0u), t12, 1, 0xcu);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 5u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    else
    {
        eax = t13;
        edx = t15;
    COW_AT(101402b2)
        g->eax = eax;
        g->edx = edx;
        t16 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, COW_IMG(0x10118b60u), t16, 2, 5u, 0xcu);
        t18 = g->ecx;
        t19 = g->edx;
        g->edx = t19;
        t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2au);
        t21 = g->edx;
        g->edx = t21;
        t22 = rd32(self + 8u);
        t23 = cow_thiscall(g, COW_IMG(0x1011adb0u), t22, 2, 0xcu, t20);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    }
    COW_AT(101402d5)
    wr8(self + 0x25u, 0u);
L_10140311: ;
    COW_AT(10140311)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t40 = cow_call_regs(g, COW_IMG(0x10201f00u), eax, ecx, g->edx, 1, 0);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 == 0u)
    {
        eax = t40;
        ecx = t41;
        edx = t42;
    }
    else
    {
        eax = t40;
        edx = t42;
    COW_AT(1014031a)
        g->eax = eax;
        g->edx = edx;
        t43 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t44 = cow_thiscall(g, COW_IMG(0x10118b60u), t43, 2, 5u, 6u);
        t45 = g->ecx;
        t46 = g->edx;
        eax = t44;
        ecx = t45;
        edx = t46;
    }
    COW_AT(10140326)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t47 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t48 = g->edx;
    if ((uint8_t)t47 != 0u)
    {
        eax = t47;
        edx = t48;
        goto L_1014035e;
    }
    eax = t47;
    edx = t48;
    COW_AT(1014032f)
    if (rd32(COW_IMG(0x106634acu)) == 0u) goto L_10140352;
    ecx = rd32(COW_IMG(0x106634acu));
    COW_AT(10140339)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t49 = cow_thiscall(g, COW_IMG(0x101e15c0u), ecx, 0);
    t50 = g->edx;
    if ((uint8_t)t49 == 0u)
    {
        eax = t49;
        edx = t50;
        goto L_10140352;
    }
    eax = t49;
    edx = t50;
    COW_AT(10140342)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t51 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xau);
    t52 = g->edx;
    g->esi = in_esi;
    g->edx = t52;
    return t51;
L_101402db: ;
    COW_AT(101402db)
    g->eax = eax;
    g->edx = edx;
    t26 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, COW_IMG(0x10118bc0u), t26, 1, 0xcu);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 5u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    else
    {
        eax = t27;
        edx = t29;
    COW_AT(101402ea)
        g->eax = eax;
        g->edx = edx;
        t30 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t31 = cow_thiscall(g, COW_IMG(0x10118b60u), t30, 2, 0xbu, 0xcu);
        t32 = g->ecx;
        t33 = g->edx;
        g->edx = t33;
        t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x29u);
        t35 = g->edx;
        g->edx = t35;
        t36 = rd32(self + 8u);
        t37 = cow_thiscall(g, COW_IMG(0x1011adb0u), t36, 2, 0xcu, t34);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    }
    COW_AT(1014030d)
    wr8(self + 0x25u, 1u);
    goto L_10140311;
L_10140352: ;
    COW_AT(10140352)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t53 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0xau);
    t54 = g->edx;
    eax = t53;
    edx = t54;
L_1014035e: ;
    COW_AT(1014035e)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10140270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10140288u:
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
    case 0x10140291u:
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
    case 0x1014029au:
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
    case 0x101402a3u:
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
    case 0x101402b2u:
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
    case 0x101402d5u:
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
    case 0x101402dbu:
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
    case 0x101402eau:
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
    case 0x1014030du:
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
    case 0x10140311u:
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
    case 0x1014031au:
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
    case 0x10140326u:
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
    case 0x1014032fu:
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
    case 0x10140339u:
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
    case 0x10140342u:
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
    case 0x10140352u:
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
    case 0x1014035eu:
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
/* blocks no state can start at, and why (the gittable lists their sites):
     1014027f: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10140270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10140270(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
