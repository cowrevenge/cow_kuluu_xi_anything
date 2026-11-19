/* f_0x10297ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10297ce0(Guest* g)
{
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10297cedu: self = g->ecx; in_edx = g->edx; goto E_10297ced;
    case 0x10297cf0u: self = g->ecx; in_edx = g->edx; goto E_10297cf0;
    case 0x10297cf7u: self = g->ecx; in_edx = g->edx; goto E_10297cf7;
    case 0x10297d29u: self = g->ecx; in_edx = g->edx; goto E_10297d29;
    case 0x10297e01u: self = g->ecx; in_edx = g->edx; goto E_10297e01;
    case 0x10297eb8u: ecx = g->ecx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10297eb8;
    case 0x10297ed8u: ecx = g->ecx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10297ed8;
    default: break;
    }
#endif

    COW_AT(10297ce0)
    if (arg1 == 0u) goto L_10297e01;
    COW_AT(10297ced)
    if (arg1 == 1u) goto L_10297d29;
    COW_AT(10297cf0)
    if (arg1 != 2u) goto L_10297ed8;
    COW_AT(10297cf7)
    g->eax = arg1 - 2u;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, self, in_edx, 1, 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102824e0u), 4, 0u, 0u, 0u, 0u);
    t4 = g->edx;
    t5 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0;
    cow_thiscall(g, rd32(t5 + 0xc8u), t5, 3, rd32(COW_IMG(0x1066941cu)), 0x34u, 0u);
    t6 = g->ecx;
    ecx = t6;
    loc_4 = 2u;
    loc_8 = 9u;
L_10297eb8: ;
    COW_AT(10297eb8)
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t49 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t49 + 0xc8u), ecx, 1, rd32(COW_IMG(0x1066941cu)));
    t50 = g->edx;
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(rd32(COW_IMG(0x1066941cu))), 5, rd32(COW_IMG(0x1066941cu)), 0x16u, 2u, loc_8, loc_4);
L_10297ed8: ;
    COW_AT(10297ed8)
    return;
L_10297d29: ;
    COW_AT(10297d29)
    g->eax = arg1 - 1u;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, self, in_edx, 1, 1, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102824e0u), 4, 0xffu, 0xffu, 0xffu, 0xffu);
    t10 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t11 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0;
    cow_thiscall(g, rd32(t11 + 0xc8u), t10, 3, rd32(COW_IMG(0x1066941cu)), 9u, 1u);
    t12 = g->edx;
    t13 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t13 + 0xc8u), t13, 3, rd32(COW_IMG(0x1066941cu)), 0x34u, 1u);
    t14 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t15 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t15 + 0xc8u), t14, 3, rd32(COW_IMG(0x1066941cu)), 0x38u, 8u);
    t16 = g->edx;
    t17 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t17 + 0xc8u), t17, 3, rd32(COW_IMG(0x1066941cu)), 0x36u, 1u);
    t18 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t19 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t19 + 0xc8u), t18, 3, rd32(COW_IMG(0x1066941cu)), 0x35u, 1u);
    t20 = g->edx;
    t21 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t21 + 0xc8u), t21, 3, rd32(COW_IMG(0x1066941cu)), 0x39u, 1u);
    t22 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t23 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t23 + 0xc8u), t22, 3, rd32(COW_IMG(0x1066941cu)), 0x3au, 0xffffffffu);
    t24 = g->edx;
    t25 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t25 + 0xc8u), t25, 3, rd32(COW_IMG(0x1066941cu)), 0x3bu, 0xffffffffu);
    t26 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t27 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t27 + 0xc8u), t26, 3, rd32(COW_IMG(0x1066941cu)), 0x37u, 8u);
    t28 = g->edx;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), 0x16u, 3u);
    return;
L_10297e01: ;
    COW_AT(10297e01)
    g->eax = arg1;
    g->esp = sp0;
    t29 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, self, in_edx, 1, 1, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102824e0u), 4, 0xffu, 0xffu, 0xffu, 0xffu);
    t32 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t33 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0;
    cow_thiscall(g, rd32(t33 + 0xc8u), t32, 3, rd32(COW_IMG(0x1066941cu)), 9u, 1u);
    t34 = g->edx;
    t35 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t35 + 0xc8u), t35, 3, rd32(COW_IMG(0x1066941cu)), 0x34u, 1u);
    t36 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t37 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t37 + 0xc8u), t36, 3, rd32(COW_IMG(0x1066941cu)), 0x38u, 8u);
    t38 = g->edx;
    t39 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t39 + 0xc8u), t39, 3, rd32(COW_IMG(0x1066941cu)), 0x36u, 1u);
    t40 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t41 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t41 + 0xc8u), t40, 3, rd32(COW_IMG(0x1066941cu)), 0x35u, 1u);
    t42 = g->edx;
    t43 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t43 + 0xc8u), t43, 3, rd32(COW_IMG(0x1066941cu)), 0x39u, 1u);
    t44 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t45 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t45 + 0xc8u), t44, 3, rd32(COW_IMG(0x1066941cu)), 0x3au, 0xffffffffu);
    t46 = g->edx;
    t47 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t47 + 0xc8u), t47, 3, rd32(COW_IMG(0x1066941cu)), 0x3bu, 0xffffffffu);
    t48 = g->ecx;
    ecx = t48;
    loc_4 = 7u;
    loc_8 = 0x37u;
    goto L_10297eb8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10297ce0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10297cedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10297cf0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10297cf7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x10297d29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10297e01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10297eb8u:
    {
        uint32_t ecx;
        uint32_t loc_4;
        uint32_t loc_8;
        ecx = g->ecx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10297ed8u:
    {
        uint32_t ecx;
        uint32_t loc_4;
        uint32_t loc_8;
        ecx = g->ecx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10297ce0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10297ce0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
