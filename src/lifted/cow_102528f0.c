/* f_0x102528f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102528f0(Guest* g)
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
    uint32_t t4;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102528f9u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102528f9;
    case 0x102528feu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102528fe;
    case 0x10252910u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252910;
    case 0x1025291bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1025291b;
    case 0x10252926u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252926;
    case 0x10252969u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252969;
    case 0x102529bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102529bd;
    case 0x102529ebu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102529eb;
    default: break;
    }
#endif

    COW_AT(102528f0)
    if (arg1 == 0u) goto L_10252910;
    COW_AT(102528f9)
    if ((rd8(arg1) & 4u) == 0u) goto L_10252910;
    COW_AT(102528fe)
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0xffffffffu;
L_10252910: ;
    COW_AT(10252910)
    if (rd32(arg1 + 0x18u) == 0u)
    {
        eax = rd32(arg1 + 0x18u);
        goto L_102529eb;
    }
    COW_AT(1025291b)
    if (rd32(arg1 + 0x1cu) == 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        goto L_102529eb;
    }
    eax = rd32(arg1 + 0x1cu);
    COW_AT(10252926)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t3 = g->edx;
    wr32(arg1 + 0x14u, t2);
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x101c4d30u), rd32(COW_IMG(0x10662dccu)), 0);
    t4 = g->edx;
    t5 = rd32(arg1 + 0x1cu);
    t6 = rd32(arg1 + 0x18u);
    g->eax = t5;
    g->edx = t4;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x10287fd0u), 3, t6, t5, in_esi);
    t8 = g->edx;
    wr32(arg1 + 0x20u, t7);
    g->edx = t8;
    t9 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x101c4d40u), t9, 0);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = cow_fastcall(g, COW_IMG(0x102750b0u), t11, t12, 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = t13 - rd32(arg1 + 0x14u);
    wr32(arg1 + 0x14u, t16);
    if (rd32(arg1 + 0x20u) != 0u)
    {
        ecx = t14;
        edx = t15;
        goto L_102529bd;
    }
    ecx = t14;
    COW_AT(10252969)
    t17 = rd32(arg1 + 0x1cu);
    t18 = rd32(arg1 + 0x18u);
    g->eax = t18;
    g->edx = t17;
    g->esp = sp0 - 8u;
    t19 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10389bfcu), t18);
    t20 = g->edx;
    t21 = rd32(arg1 + 0x18u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, 0u);
    g->ecx = t21;
    g->esp = sp0 - 0x10u;
    t22 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t21, COW_IMG(0x10389a74u), 0x152u);
    t23 = g->ecx;
    t24 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x18u, t22);
    g->esp = sp0 - 0x1cu;
    t25 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t24, COW_IMG(0x10389a74u), 0x153u);
    wr32(arg1 + 0x1cu, t25);
    g->esi = in_esi;
    return 0xffffffffu;
L_102529bd: ;
    COW_AT(102529bd)
    t26 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x18u, 0u);
    g->eax = t26;
    g->esp = sp0 - 4u;
    t27 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t26, COW_IMG(0x10389a74u), 0x159u);
    t28 = rd32(arg1);
    wr32(arg1 + 0x1cu, t27);
    t29 = (t28 & 0xfffffffdu) | 4u;
    wr32(arg1, t29);
    g->esi = in_esi;
    return 0u;
L_102529eb: ;
    COW_AT(102529eb)
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t30 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t31 = g->ecx;
    t32 = rd32(arg1 + 0x18u);
    g->ecx = t31;
    g->edx = t32;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    t35 = rd32(arg1 + 0x1cu);
    g->eax = t35;
    g->esp = sp0 - 0x18u;
    t36 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102528f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102528f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102528feu:
    {
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10252910u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1025291bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252926u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252969u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102529bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102529ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102528f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102528f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
