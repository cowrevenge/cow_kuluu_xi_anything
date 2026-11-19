/* f_0x10297ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10297ee0(Guest* g)
{
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10297efau: ecx = g->ecx; edx = g->edx; goto E_10297efa;
    case 0x10297f0au: ecx = g->ecx; edx = g->edx; goto E_10297f0a;
    case 0x10297f1cu: ecx = g->ecx; edx = g->edx; goto E_10297f1c;
    case 0x10297f2eu: ecx = g->ecx; edx = g->edx; goto E_10297f2e;
    case 0x10297f40u: ecx = g->ecx; edx = g->edx; goto E_10297f40;
    case 0x10297f52u: ecx = g->ecx; edx = g->edx; goto E_10297f52;
    case 0x10297f64u: ecx = g->ecx; edx = g->edx; goto E_10297f64;
    case 0x10297f76u: ecx = g->ecx; edx = g->edx; goto E_10297f76;
    case 0x10297f88u: ecx = g->ecx; edx = g->edx; goto E_10297f88;
    case 0x10297f89u: ecx = g->ecx; in_edx = g->edx; goto E_10297f89;
    case 0x10297f8eu: ecx = g->ecx; edx = g->edx; goto E_10297f8e;
    case 0x10297fa3u: ecx = g->ecx; edx = g->edx; goto E_10297fa3;
    default: break;
    }
#endif

    COW_AT(10297ee0)
    t1 = rd32(COW_IMG(0x1099d200u));
    wr32(t1 + 0x124u, arg1);
    if (arg1 == 0u)
    {
        ecx = t1;
        goto L_10297f89;
    }
    ecx = t1;
    COW_AT(10297efa)
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t2 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t2 + 0xc8u), ecx, 2, rd32(COW_IMG(0x1066941cu)), 0x34u);
    t3 = g->edx;
    edx = t3;
    COW_AT(10297f0a)
    t4 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t4 + 0xc8u), t4, 3, rd32(COW_IMG(0x1066941cu)), 0x38u, 5u);
    t5 = g->ecx;
    ecx = t5;
    COW_AT(10297f1c)
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t6 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t6 + 0xc8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0x36u, 1u);
    t7 = g->edx;
    edx = t7;
    COW_AT(10297f2e)
    t8 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t8 + 0xc8u), t8, 3, rd32(COW_IMG(0x1066941cu)), 0x35u, 1u);
    t9 = g->ecx;
    ecx = t9;
    COW_AT(10297f40)
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t10 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t10 + 0xc8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0x39u, 1u);
    t11 = g->edx;
    edx = t11;
    COW_AT(10297f52)
    t12 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t12 + 0xc8u), t12, 3, rd32(COW_IMG(0x1066941cu)), 0x3au, 0xffffffffu);
    t13 = g->ecx;
    ecx = t13;
    COW_AT(10297f64)
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t14 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t14 + 0xc8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0x3bu, 0xffffffffu);
    t15 = g->edx;
    edx = t15;
    COW_AT(10297f76)
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), 0x37u, 1u, 1u);
    COW_AT(10297f88)
    return;
L_10297f89: ;
    COW_AT(10297f89)
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10282490u), ecx, in_edx, 0);
    t16 = g->ecx;
    ecx = t16;
    COW_AT(10297f8e)
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0x34u, 0u);
    COW_AT(10297fa3)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10297ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10297efau:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f0au:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f1cu:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f2eu:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f40u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f52u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f64u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f76u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10297f88u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10297f89u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10297f8eu:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10297fa3u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
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
void cow_adapter_10297ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10297ee0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
